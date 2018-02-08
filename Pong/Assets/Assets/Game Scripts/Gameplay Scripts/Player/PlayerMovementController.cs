using System;
using UnityEngine;

public class PlayerMovementController : MonoBehaviour
{
    public float MovementMult = 0.5f, MouseSensitivity = 3, JumpForce = 5;
    private float forward, rightward;
    private Vector2 currentRotation;
    private Rigidbody rb;

    public PlayerInteractionController interact;
    public DialogueManager dialog;

    void Start ()
    {
        rb = GetComponent<Rigidbody>();
        Cursor.visible = false;
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

	void FixedUpdate ()
	{
	    if (interact.InventoryActive) return;
	    if (dialog.talking) return;

        SetMovementVector();
        MoveWithMouse();
        transform.Translate(new Vector3(rightward, 0, forward));
        CheckJump();
        rb.angularVelocity = Vector3.zero; //no falling over
    }

}
