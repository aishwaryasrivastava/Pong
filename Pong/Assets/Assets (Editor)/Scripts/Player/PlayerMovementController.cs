using System;
using UnityEngine;
using UnityEngine.UI;

public class PlayerMovementController : MonoBehaviour
{
    public float MovementMult, MouseSensitivity, JumpForce, crouchShift;
    private float forward, rightward;
    private Vector2 currentRotation;
    private Rigidbody rb;
    public Text RepText;

    private bool pauseChange = false;


    public float CurrentSoundOutput;

    public CapsuleCollider head;

    public bool crouched;
    private bool slant;
	private bool onfloor;
    public bool Blocking;


    public PlayerInteractionController interact;
    public CameraRecoiler shootGun;
    public DialogueManager dialog;

	public PlayerSoundControll soundControl;
	
    private bool moving, running, jumping;
    public bool shooting;

    public GameObject PauseMenu;

    void Start ()
    {
        rb = GetComponent<Rigidbody>();
        Cursor.visible = false;
    }

    void SetMovementVector()
    {
        forward = rightward = 0;
        moving = running = jumping = false;
        if (Math.Abs(rb.velocity.y) > 0.001 && !slant)
        {
            jumping = true;
            return;
        }

        if (Input.GetAxis("Vertical") > 0)
        {
            forward += 1;
        }
        
        if (Input.GetAxis("Horizontal") < 0)
        {
            rightward -= 1;
        }
        
        if (Input.GetAxis("Vertical") < 0)
        {
            forward -= 1;
        }

        if (Input.GetAxis("Horizontal") > 0)
        {
            rightward += 1;
        }

        if (Input.GetAxis("Run") > 0 && !crouched)
        {
            forward *= 2;
            rightward *= 2;
            running = true;
        }

        if (Math.Abs(forward) < 0.0001 && Math.Abs(rightward) < 0.0001) return;

        moving = true;
        var tmp = MovementMult*transform.TransformDirection(new Vector3(rightward, 0, forward)).normalized;
        if (running) tmp *= 1.7f;
        rb.velocity = new Vector3(tmp.x, rb.velocity.y, tmp.z);
    }

    void MoveWithMouse()
    {
        currentRotation.x += Input.GetAxis("Mouse X") * MouseSensitivity;
        currentRotation.y -= Input.GetAxis("Mouse Y") * MouseSensitivity;
        currentRotation.x = Mathf.Repeat(currentRotation.x, 360);
        currentRotation.y = Mathf.Clamp(currentRotation.y, -80, 80);
        
        transform.localRotation = Quaternion.Euler(0, currentRotation.x, 0);
        Camera.main.transform.localRotation = Quaternion.Euler(currentRotation.y-shootGun.GetCurrentRecoil(), 0, 0);
    }

    

    void CheckJump()
    {
        if (crouched || slant) return;
        if (Math.Abs(rb.velocity.y) > 0.01) return;

        if (Input.GetAxis("Jump") > 0)
        {
            rb.velocity += JumpForce * Vector3.up;
        }     
    }

    void CheckCrouch()
    {
        if (Math.Abs(rb.velocity.y) > 0.01 && !slant) return;

        if (Input.GetAxis("Crouch") > 0 && !crouched)
        {
            crouched = true;
            var cameraT = Camera.main.transform;
            cameraT.localPosition -= new Vector3(0, crouchShift, 0);
            head.center -= new Vector3(0, crouchShift/2, 0);
            head.height -= crouchShift;
        }
        else if (crouched && Input.GetAxis("Crouch") == 0 && !slant)
        {
            crouched = false;
            var cameraT = Camera.main.transform;
            cameraT.localPosition += new Vector3(0, crouchShift, 0);
            head.center += new Vector3(0, crouchShift / 2, 0);
            head.height += crouchShift;
        }
    }

    void RelaySound()
    {
        if (shooting) CurrentSoundOutput = 15;
        else if (running) CurrentSoundOutput = 5;
        else if (jumping) CurrentSoundOutput = 2;
        else if (moving) CurrentSoundOutput = crouched ? 0 : 2;      
        else CurrentSoundOutput = 0;
    }

    void Update()
    {
        SettingsTriggers();
        
		if (slant && moving)
        {
			var tmp = gameObject.GetComponent<SoundController> ();
			tmp.PlayDrag ();
		} 
		if (slant && !moving)
        {
			gameObject.GetComponent<AudioSource> ().Stop ();

		}

        DebugStuff();
        CheckJump();
        CheckCrouch();      
    }

    private void SettingsTriggers()
    {
        if (Input.GetAxis("Pause") > 0)
        {
            if (!pauseChange)
            {
                pauseChange = true;
                PauseManager.Pause();
                RepText.text = interact.GetPopularity();
                PauseMenu.SetActive(PauseManager.Paused);
            }
        } else
        {
            pauseChange = false;
        }
        if (Input.GetKeyDown(KeyCode.M))
        {
            PauseManager.Mute();
        }
        if (PauseManager.Paused)
        {
            if (Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
            return;
        }
    }

    private void DebugStuff()
    {
        if (Input.GetKeyDown(KeyCode.LeftBracket))
        {
            transform.position = new Vector3(1, 3, -6);
        }
        if (Input.GetKeyDown(KeyCode.RightBracket))
        {
            transform.position = new Vector3(15, 3, -30);
        }
        if (Input.GetKeyDown(KeyCode.Backslash))
        {
            transform.position = new Vector3(4, 3, -36);
        }
    }


	public void SetPosition(Vector3 v) {
		transform.position = v;
	}

    void OnCollisionEnter(Collision c)
    {
        if (c.transform.CompareTag("AngleFloor"))
        {
            slant = true;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Floor Tile"))
        {
            slant = false;
        }
    }

	void FixedUpdate ()
	{
	    if (interact.InventoryActive || interact.inspectingSomething || (dialog != null && dialog.talking) || PauseManager.Paused)
	    {
	        soundControl.UpdateMovementSounds(false, false, false);
            return;
	    }

	    MoveWithMouse();
        SetMovementVector();
		soundControl.UpdateMovementSounds(moving, running, jumping);
        RelaySound();
        
        if(transform.position.y < -10) //fell out of the world
        {
            transform.position = new Vector3(0, 2, 0);
            rb.velocity = Vector3.zero;
        }
	    
	}

    public void EnterConversation(DialogueManager diag)
    {
        dialog = diag;
        //rb.angularVelocity = Vector3.zero;
        rb.constraints = RigidbodyConstraints.FreezeAll;
    }

    public void LeaveConversation()
    {
        dialog = null;
        rb.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;
    }

    public bool AmBusy()
    {
        return dialog != null && dialog.talking;
    }
}

public static class PauseManager
{
    public static bool Paused { get; private set; }
    public static bool Muted { get; private set; }
    private static bool pauseMute;

    public static void Mute()
    {
        if (Paused) return;
        Muted = !Muted;
        AudioListener.volume = Muted ? 0 : 1;
    }

    public static void Pause()
    {
        Paused = !Paused;
        if (!Muted)
        {
            pauseMute = !pauseMute;
            AudioListener.volume = pauseMute ? 0 : 1;
        }
    }
}
