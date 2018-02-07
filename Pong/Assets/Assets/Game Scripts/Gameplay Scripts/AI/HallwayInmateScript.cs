using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HallwayInmateScript : MonoBehaviour
{

    private Animator InmateAnimator;
    public float speed;
    public enum level { one, two, three };
    public level myLevel;
    private enum facing { left, right, front, back };
    private facing myDirection;

    public enum orientation { cw, ccw };
    public orientation myOrientation;
    private int lastTurn = 21;




    // Use this for initialization
    void Start()
    {
        InmateAnimator = GetComponent<Animator>();
        myDirection = (myOrientation == orientation.cw) ? facing.left : facing.right;

        Vector3 myPosition = transform.position;
        switch (myLevel)
        {
            case level.one:
                myPosition.y = 0.2f;
                break;
            case level.two:
                myPosition.y = 3.4f;
                break;
            case level.three:
                myPosition.y = 6.6f;
                break;
        }
        myPosition.x = Random.Range(49, 73);
        transform.position = myPosition;
    }

    float distanceIn2D(Transform A, Transform B)
    {
        Vector2 posA = new Vector2(A.position.x, A.position.z);
        Vector2 posB = new Vector2(B.position.x, B.position.z);
        return Vector2.Distance(posA, posB);
    }
    bool turnApproaching(Transform me, string turnType)
    {
        Transform turn1, turn2;
        turn1 = GameObject.FindGameObjectsWithTag(turnType)[0].transform;
        turn2 = GameObject.FindGameObjectsWithTag(turnType)[1].transform;
        float closestTurn = Mathf.Min(distanceIn2D(me, turn1), distanceIn2D(me, turn2));
        return (closestTurn < 1);
    }

    // Update is called once per frame
    void Update()
    {
        lastTurn = lastTurn + 1;
        Vector3 myAngle = transform.eulerAngles;
        Vector3 myPosition = transform.position;
        Vector3 mySpeed = new Vector3();
        facing newDirection = myDirection;
        InmateAnimator.SetBool("Walking", true);


        switch (myDirection)
        {
            case facing.left:
                myAngle = new Vector3(0, -90, 0);
                mySpeed = new Vector3(-speed, 0, 0);
                break;
            case facing.right:
                myAngle = new Vector3(0, 90, 0);
                mySpeed = new Vector3(speed, 0, 0);
                break;
            case facing.front:
                myAngle = new Vector3(0, 0, 0);
                mySpeed = new Vector3(0, 0, speed);
                break;
            case facing.back:
                myAngle = new Vector3(0, 180, 0);
                mySpeed = new Vector3(0, 0, -speed);
                break;
        }



        if (turnApproaching(transform, "Corner") && lastTurn > 20)
        {
            lastTurn = 0;
            bool clockwise = myOrientation == orientation.cw;
            switch (myDirection)
            {
                case facing.right:
                    newDirection = (clockwise) ? facing.back : facing.front;
                    break;
                case facing.left:
                    newDirection = (clockwise) ? facing.front : facing.back;
                    break;
                case facing.front:
                    newDirection = (clockwise) ? facing.right : facing.left;
                    break;
                case facing.back:
                    newDirection = (clockwise) ? facing.left : facing.right;
                    break;
            }
        }

        if (turnApproaching(transform, "DeadEnd") && lastTurn > 20)
        {
            lastTurn = 0;
            bool clockwise = myOrientation == orientation.cw;
            myOrientation = (clockwise) ? orientation.ccw : orientation.cw;
            switch (myDirection)
            {
                case facing.right:
                    newDirection = facing.left;
                    break;
                case facing.left:
                    newDirection = facing.right;
                    break;
                case facing.front:
                    newDirection = facing.back;
                    break;
                case facing.back:
                    newDirection = facing.front;
                    break;
            }


        }

        myDirection = newDirection;
        myPosition = myPosition + mySpeed;
        transform.position = myPosition;
        transform.eulerAngles = myAngle;
    }

}
