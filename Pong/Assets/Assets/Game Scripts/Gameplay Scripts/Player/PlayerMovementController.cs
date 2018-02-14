using System;
using UnityEngine;

public class PlayerMovementController : MonoBehaviour
{
    public float MovementMult = 0.5f, MouseSensitivity = 3, JumpForce = 5;
    private float forward, rightward;
    private Vector2 currentRotation;
    private Rigidbody rb;

    public bool inTheRed;

    public PlayerInteractionController interact;
    public DialogueManager dialog;

    public AudioSource source;
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
        forward = rightward=0;
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
            forward *= 2;
            rightward *= 2;
        }
        rb.velocity -= new Vector3(rb.velocity.x, 0, rb.velocity.z);
        if (Math.Abs(rightward) > 0 || Math.Abs(forward) > 0)
        {
            if(!source.isPlaying) source.Play();
        }
        else source.Stop();
    }

    void MoveWithMouse()
    {
        currentRotation.x += Input.GetAxis("Mouse X") * MouseSensitivity;
        currentRotation.y -= Input.GetAxis("Mouse Y") * MouseSensitivity;
        currentRotation.x = Mathf.Repeat(currentRotation.x, 360);
        currentRotation.y = Mathf.Clamp(currentRotation.y, -80, 80);
        
        transform.localRotation = Quaternion.Euler(0, currentRotation.x, 0);
        Camera.main.transform.localRotation = Quaternion.Euler(currentRotation.y, 0, 0);
    }

    void CheckJump()
    {
        if (Math.Abs(rb.velocity.y) > 0.01) return;
        if (Input.GetKeyDown(KeyCode.Space))
        {
            rb.velocity += JumpForce * Vector3.up;
        }
    }

    void Update()
    {
        rb.angularVelocity = Vector3.zero; //no falling over 
        if (Input.GetKeyDown(KeyCode.P))
        {
            PauseManager.Paused = !PauseManager.Paused;
        }
        if (PauseManager.Paused) return;

        CheckJump();
              
    }

	void FixedUpdate ()
	{
	    if (interact.InventoryActive) return;
	    if (dialog != null && dialog.talking) return;
	    if (PauseManager.Paused) return;

        SetMovementVector();
        MoveWithMouse();
        transform.Translate(new Vector3(rightward, 0, forward));    
        if(transform.position.y < -10) transform.position = new Vector3(0, 2, 0);
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

    public void Die()
    {
        transform.position = new Vector3(0, 2, 0);
        interact.inventory.Clear();
    }

    public void EnterConversation(DialogueManager diag)
    {
        dialog = diag;
    }

    public void LeaveConversation()
    {
        dialog = null;
    }
}

public static class PauseManager
{
    public static bool Paused;
}
