using UnityEngine;

public class BallController : MonoBehaviour
{
    public float zMin, zMax, Speed, BounceMult;

    private const float zMove = 1;
    private float localSpeed;
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
        direction = new Vector3(Random.Range(-3, 3), Random.Range(-3, 3), nextDir *2).normalized; //test velocity
        transform.localPosition = new Vector3(0, 10, 10 - nextDir*10); //center
        localSpeed = Speed;
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
        rb.velocity = localSpeed * direction;
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
        else if ((other.gameObject.CompareTag("Zwall") && rb.velocity.z < 0) || //p1
                 (other.gameObject.CompareTag("Zwall2") && rb.velocity.z > 0))  //p2
        {
            var diff = (transform.localPosition - other.transform.localPosition);
            var norm = new Vector2(diff.x, diff.y).normalized;
            direction = new Vector3(norm.x, norm.y, -direction.z);
            localSpeed *= BounceMult;
        }
    }
}
