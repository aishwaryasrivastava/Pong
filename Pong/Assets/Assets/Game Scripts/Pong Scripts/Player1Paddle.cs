using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;

public class Player1Paddle : MonoBehaviour
{
    private enum PowerUps { BigPaddle, FastPaddle, LongPaddle, TallPaddle, None }
    private PowerUps type;
    private readonly Random rnd = new Random();
        
    public float xMin, xMax, yMin, yMax, PaddleSpeed;
    public Text Messenger;

    private const float baseSize = 5.0f;
    private float curX, curY;
    private Rigidbody rb;
    private float powerUpCounter;
    public float powerUpDuration = 4;
    private GameObject powerUp;

	void Start ()
	{
	    rb = GetComponent<Rigidbody>();
	    curX = curY = baseSize;
        type = PowerUps.None;
	}
    
    void Update()
    {
        var tmp = transform.localPosition;

        if (tmp.x - curX < xMin)
            transform.localPosition = new Vector3(xMin + curX, tmp.y, tmp.z);
        else if (tmp.x + curX > xMax)
            transform.localPosition = new Vector3(xMax - curX, tmp.y, tmp.z);

        tmp = transform.localPosition;

        if (tmp.y - curY < yMin)
            transform.localPosition = new Vector3(tmp.x, yMin + curY, tmp.z);
        else if (tmp.y + curY > yMax)
            transform.localPosition = new Vector3(tmp.x, yMax - curY, tmp.z);

        if (powerUpCounter > 0)
        {
            powerUpCounter -= Time.deltaTime;
            if (powerUpCounter < 0)
            {
                type = PowerUps.None;
                curY = curX = baseSize;
                transform.localScale = new Vector3(curX, curY, 1);
                if(!Messenger.text.StartsWith("P")) Messenger.text = "";
            }
        }
    }

	void FixedUpdate ()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        var mult = type == PowerUps.FastPaddle ? 2 : 1;
        rb.velocity = mult * PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("powerUp"))
        {
            other.gameObject.SetActive(false);
            powerUpCounter = powerUpDuration;

            switch (rnd.Next(4))
            {
                case 0:
                    type = PowerUps.FastPaddle;
                    Messenger.text = "Fast Paddle";
                    break;
                case 1:
                    type = PowerUps.TallPaddle;
                    curY = 10;
                    transform.localScale = new Vector3(curX, curY, 1);
                    Messenger.text = "Tall Paddle";
                    break;
                case 2:
                    type = PowerUps.LongPaddle;
                    curX = 10;
                    transform.localScale = new Vector3(curX, curY, 1);
                    Messenger.text = "Long Paddle";
                    break;
                case 3:
                    type = PowerUps.BigPaddle;
                    curX = curY = 7.5f;
                    transform.localScale = new Vector3(curX, curY, 1);
                    Messenger.text = "Big Paddle";
                    break;
            }
        }
    }
}
