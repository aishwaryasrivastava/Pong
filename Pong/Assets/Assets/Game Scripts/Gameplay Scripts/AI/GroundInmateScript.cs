using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundInmateScript : MonoBehaviour
{
    public float xuBound, xlBound, zuBound, zlBound;

    private Animator InmateAnimator;
    private float myDirection;
    private Vector3 mySpeed;
    private int time = 0;
    private float timeout = 3000;

    // Use this for initialization
    void Start()
    {
        InmateAnimator = GetComponent<Animator>();
        InmateAnimator.SetBool("Walk", true);
        myDirection = Random.Range(0, 360);
        //timeout = Random.Range(100, 150);


    }

    void TurnAway()
    {
        time = 0;
        myDirection = Random.Range(0, 360);
    }

    void TurnAround()
    {
        time = 0;
        myDirection = myDirection - 180;
    }

    Vector3 Constraint(Vector3 on)
    {
        return new Vector3(Mathf.Clamp(on.x, xlBound, xuBound), on.y, Mathf.Clamp(on.z, zlBound, zuBound));
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(time);
        time = time + 1;
        Vector3 myPosition = transform.position;
        mySpeed = new Vector3((float)0.05 * Mathf.Sin(myDirection * Mathf.PI / 180), 0, (float)0.05 * Mathf.Cos(myDirection * Mathf.PI / 180));
        myPosition = myPosition + mySpeed;

        if (time > timeout)
        {
            TurnAway();
        }

        if ((myPosition.x < xlBound || xuBound < myPosition.x || myPosition.z < zlBound || zuBound < myPosition.z) && (time > timeout/50))
        {
            TurnAway();
            myPosition = Constraint(myPosition);
        }
        transform.position = myPosition;
        transform.eulerAngles = new Vector3(0, myDirection, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        //turnAround();
    }

}
