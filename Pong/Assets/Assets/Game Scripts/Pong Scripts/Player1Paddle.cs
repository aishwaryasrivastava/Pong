using System.Xml;
using UnityEngine;

public class Player1Paddle : MonoBehaviour
{
    public float xMin, xMax, yMin, yMax, PaddleSpeed;
    private const float size = 5.0f;
    private Rigidbody rb;

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
    }

	void FixedUpdate ()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        rb.velocity = PaddleSpeed * new Vector3(moveHorizontal, moveVertical, 0);

    }
}
