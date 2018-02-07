using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundInmateScript : MonoBehaviour
{
    private Animator InmateAnimator;
    private float myDirection;
    private Vector3 mySpeed;
    private int time = 0;
    private float timeout = 0;

    // Use this for initialization
    void Start()
    {
        InmateAnimator = GetComponent<Animator>();
        InmateAnimator.SetBool("Walking", true);
        myDirection = Random.Range(0, 360);
        timeout = Random.Range(100, 150);


    }

    void turnAway()
    {
        time = 0;
        myDirection = Random.Range(0, 360);
    }

    void turnAround()
    {
        time = 0;
        myDirection = myDirection - 180;
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(time);
        time = time + 1;
        Vector3 myPosition = transform.position;
        mySpeed = new Vector3((float)0.05 * Mathf.Sin(myDirection * Mathf.PI / 180), 0, (float)0.05 * Mathf.Cos(myDirection * Mathf.PI / 180));
        myPosition = myPosition + mySpeed;

        if (time > timeout)
        {
            turnAway();
        }

        if ((myPosition.x < 50 || 70 < myPosition.x || myPosition.z < -5 || 15 < myPosition.z) && (time > timeout/50))
        {
            turnAway();
        }
        transform.position = myPosition;
        transform.eulerAngles = new Vector3(0, myDirection, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        turnAway();
    }
}
