using System;
using UnityEngine;

public class PlayerMovementController : MonoBehaviour
{
    public float MovementMult, MouseSensitivity, JumpForce, crouchShift;
    private float forward, rightward;
    private Vector2 currentRotation;
    private Rigidbody rb;

    public CapsuleCollider head;

    public bool inTheRed;
    public bool crouched;

    public PlayerInteractionController interact;
    public PlayerShootingScript shootGun;
    public DialogueManager dialog;

    public AudioSource source;
	public AudioSource source2;
	public int dmg = 0;
    void Awake()
    {
        source = GetComponent<AudioSource>();
    }

    void Start ()
    {
        rb = GetComponent<Rigidbody>();
        Cursor.visible = false;
        source.volume = 1;
    }

    void SetMovementVector()
    {
        forward = rightward = 0;
        if (Math.Abs(rb.velocity.y) > 0.001) return;

        if (Input.GetKey(KeyCode.W))
        {
            forward += MovementMult;
        }
        if (Input.GetKey(KeyCode.A))
        {
            rightward -= MovementMult;
        }
        if (Input.GetKey(KeyCode.S))
        {
            forward -= MovementMult;
        }
        if (Input.GetKey(KeyCode.D))
        {
            rightward += MovementMult;
        }
        if (Input.GetKey(KeyCode.LeftShift))
        {
            forward *= 1.7f;
            rightward *= 1.7f;
        }

        if (Math.Abs(forward) < 0.0001 && Math.Abs(rightward) < 0.0001) return;

        var tmp = transform.TransformDirection(new Vector3(rightward, 0, forward));      
        rb.velocity = new Vector3(tmp.x, rb.velocity.y, tmp.z);
    }

    void MoveWithMouse()
    {
        currentRotation.x += Input.GetAxis("Mouse X") * MouseSensitivity;
        currentRotation.y -= Input.GetAxis("Mouse Y") * MouseSensitivity;
        currentRotation.x = Mathf.Repeat(currentRotation.x, 360);
        currentRotation.y = Mathf.Clamp(currentRotation.y, -80, 80);
        
        transform.localRotation = Quaternion.Euler(0, currentRotation.x, 0);
        Camera.main.transform.localRotation = Quaternion.Euler(currentRotation.y-shootGun.recoil, 0, 0);
    }

    void CheckJump()
    {
        if (crouched) return;
        if (Math.Abs(rb.velocity.y) > 0.01) return;

        if (Input.GetKeyDown(KeyCode.Space))
        {
            rb.velocity += JumpForce * Vector3.up;
            source.Stop();
        }

        
    }

    void CheckCrouch()
    {
        if (Math.Abs(rb.velocity.y) > 0.01) return;

        if (Input.GetKeyDown(KeyCode.LeftControl) && !crouched)
        {
            crouched = true;
            var cameraT = Camera.main.transform;
            cameraT.localPosition -= new Vector3(0, crouchShift, 0);
            head.center -= new Vector3(0, crouchShift/2, 0);
            head.height -= crouchShift;
        }
        else if (Input.GetKeyUp(KeyCode.LeftControl) && crouched)
        {
            crouched = false;
            var cameraT = Camera.main.transform;
            cameraT.localPosition += new Vector3(0, crouchShift, 0);
            head.center += new Vector3(0, crouchShift / 2, 0);
            head.height += crouchShift;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.P))
        {
            PauseManager.Paused = !PauseManager.Paused;
        }
        if (PauseManager.Paused) return;

        CheckJump();
        CheckCrouch();      
    }

	void FixedUpdate ()
	{
	    if (interact.InventoryActive) return;
	    if (dialog != null && dialog.talking) return;
	    if (PauseManager.Paused) return;

	    MoveWithMouse();
        SetMovementVector();
		if (Math.Abs (rightward) > 0 || Math.Abs (forward) > 0) {
			if (!source2.isPlaying) source.Play();
		} else {
			source.Stop ();
		}
        
        if(transform.position.y < -10) //fell out of the world
        {
            transform.position = new Vector3(0, 2, 0);
            rb.velocity = Vector3.zero;
        }
	    
	}

    void OnCollisionEnter(Collision other)
    {
        if (other.collider.CompareTag("Illegal"))
        {
            inTheRed = true;
        }
        else if (other.collider.CompareTag("Floor Tile"))
        {
            inTheRed = false;
        }
    }

    

    public void EnterConversation(DialogueManager diag)
    {
        dialog = diag;
    }

    public void LeaveConversation()
    {
        dialog = null;
    }

    public bool AmBusy()
    {
        return dialog != null && dialog.talking;
    }
}

public static class PauseManager
{
    public static bool Paused;
}
