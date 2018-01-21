using UnityEngine;

public class BallController : MonoBehaviour
{
    private Rigidbody rb;
    private Vector3 direction;

	void Start ()
    {
	    rb = GetComponent<Rigidbody>();
        direction = new Vector3(0.5f, 0.75f, 0f).normalized;
    }

	void FixedUpdate ()
    {
        //rb.AddForce(direction);
        rb.velocity = direction;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Hwall"))
        {
            direction = new Vector3(direction.x, -direction.y, direction.z);
        }
        else if (other.gameObject.CompareTag("Vwall"))
        {
            direction = new Vector3(-direction.x, direction.y, direction.z);
        }
        else if (other.gameObject.CompareTag("Zwall"))
        {
            //this should probably do something unique
            direction = new Vector3(direction.x, direction.y, -direction.z);
        }
    }
}
