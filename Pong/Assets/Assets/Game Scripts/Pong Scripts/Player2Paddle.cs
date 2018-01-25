using System;
using UnityEngine;

public class Player2Paddle : MonoBehaviour
{
    public bool AiActive = true;
    public float xMin, xMax, yMin, yMax, PaddleSpeed, AiSpeedMult;
    public GameObject Ball;

    private const float size = 5.0f;
    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        var tmp = transform.localPosition;

        if (tmp.x - size/2 < xMin)
        {
            transform.localPosition = new Vector3(xMin + size / 2, tmp.y, tmp.z);
            if (AiActive) rb.velocity = new Vector3(0, rb.velocity.y, 0);
        }
        else if (tmp.x + size/2 > xMax)
        {
            transform.localPosition = new Vector3(xMax - size / 2, tmp.y, tmp.z);
            if (AiActive) rb.velocity = new Vector3(0, rb.velocity.y, 0);
        }

        tmp = transform.localPosition;

        if (tmp.y - size / 2 < yMin)
        {
            transform.localPosition = new Vector3(tmp.x, yMin + size / 2, tmp.z);
            if (AiActive) rb.velocity = new Vector3(rb.velocity.x, 0, 0);
        }
        else if (tmp.y + size / 2 > yMax)
        {
            transform.localPosition = new Vector3(tmp.x, yMax - size / 2, tmp.z);
            if (AiActive) rb.velocity = new Vector3(rb.velocity.x, 0, 0);
        }
    }

    void FixedUpdate()
    {
        float moveHorizontal, moveVertical;
        if (AiActive)
        {
            var tmp = Ball.transform.localPosition - transform.localPosition;
            moveHorizontal = AiSpeedMult * Math.Sign(tmp.x);
            moveVertical = AiSpeedMult * Math.Sign(tmp.y);
            rb.AddForce(PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0));
            //rb.velocity = PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0);
        }
        else
        {
            moveHorizontal = Input.GetAxis("Horizontal");
            moveVertical = Input.GetAxis("Vertical");
            rb.velocity = PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0);
        }
    }
}
