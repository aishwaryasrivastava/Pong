using System;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float MovementMult = 0.5f, MouseSensitivity = 3, JumpForce = 5;
    private float forward, rightward;
    private Vector2 currentRotation;
    private Rigidbody rb;

    private bool inInventory;

    public Inventory Inventory;

    void Start ()
    {
        rb = GetComponent<Rigidbody>();
        inInventory = false;
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

    void Update()
    {
        
    }

	void FixedUpdate ()
    {
        // needs cleaned up to proper input controller
        if (Input.GetKeyDown(KeyCode.I))
        {
            inInventory = !inInventory;
            Inventory.Swap(inInventory);
        }
        if (!inInventory)
        {
            SetMovementVector();
            MoveWithMouse();
            var f = transform.forward;
            transform.Translate(new Vector3(rightward, 0, forward));
            CheckJump();
        }
        else
        {
            // main inventory controls here
            // cycling item controls outside of main static inventory will go in previous if block
        }
    }

    void OnTriggerEnter(Collider other)
    {
        
    }
}
