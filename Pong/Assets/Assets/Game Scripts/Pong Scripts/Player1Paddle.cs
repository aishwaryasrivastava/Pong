using System.Xml;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player1Paddle : MonoBehaviour
{
    public float xMin, xMax, yMin, yMax, PaddleSpeed;
    private const float size = 5.0f;
    private Rigidbody rb;
    private bool poweredUp;
    private float powerUpCounter;
    private float powerUpDuration = 4;
    private GameObject powerUp;
	void Start ()
	{
	    rb = GetComponent<Rigidbody>();
	}
    
    void Update()
    {
        var tmp = transform.localPosition;

        if (tmp.x - size < xMin)
            transform.localPosition = new Vector3(xMin + size, tmp.y, tmp.z);
        else if (tmp.x + size > xMax)
            transform.localPosition = new Vector3(xMax - size, tmp.y, tmp.z);

        tmp = transform.localPosition;

        if (tmp.y - size < yMin)
            transform.localPosition = new Vector3(tmp.x, yMin + size, tmp.z);
        else if (tmp.y + size > yMax)
            transform.localPosition = new Vector3(tmp.x, yMax - size, tmp.z);
        powerUp = GameObject.FindGameObjectWithTag("powerUp");
        if (powerUp != null)
        {
            if ((powerUp.transform.position - transform.position).magnitude < 0.2 && !poweredUp)
            {
                poweredUp = true;
                powerUpCounter = powerUpDuration;
            }
        }
        powerUpCounter -= Time.deltaTime;
        if (powerUpCounter < 0) { poweredUp = false; }
    }

	void FixedUpdate ()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");
        if (poweredUp) { rb.velocity = 3 * PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0); }
        else { rb.velocity = PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0); }

    }
}
