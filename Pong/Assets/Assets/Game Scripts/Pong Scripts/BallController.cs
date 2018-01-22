using UnityEngine;

public class BallController : MonoBehaviour
{
    public float zMin, zMax, Speed;

    private Rigidbody rb;
    private Vector3 direction;
    private int nextDir = 1;

	void Start ()
    {
	    rb = GetComponent<Rigidbody>();
        ResetBall();
    }

    void ResetBall()
    {
        //just debug right now
        direction = new Vector3(2, 3, nextDir*2).normalized; //test velocity
        transform.localPosition = new Vector3(0, 10, 10 - nextDir*10); //center
    }

    void Update()
    {
        var tmp = transform.localPosition;
        if (tmp.z < zMin)
        {
            //player 2 scored
            nextDir = 1;
            ResetBall();
        }          
        else if (tmp.z > zMax)
        {
            //player 1 scored
            nextDir = -1;
            ResetBall();
        }
    }

    void FixedUpdate ()
    {
        rb.velocity = Speed*direction;
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
            //this should probably do something more unique
            direction = new Vector3(direction.x, direction.y, -direction.z);
        }
    }
}
