using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuardScript3 : MonoBehaviour {

	public Transform player;

    public float attackDistance, runningDistance, speed, walkingSpeed, hearingDistance;

	public bool found;
	public bool damaged = false;
	public bool attention = true;

	public BoxCollider vision;

    public GameObject target, playerMan, friend, guard;

    public GameObject cp1, cp2, cp3, cp4;

	public Vector3 initialPos;
	public Quaternion initialRot;

	public Guard4AnimHandler anim;

	private Vector3 position;
	private Vector3 direction;
	private int count;
    private int timeSinceTurned, idleTime, timeToTurn = 0;


    private enum facing { North, South, East, West };
    private facing myDirection;
    public enum orientation { Clockwise, CounterClockwise };
    public orientation myOrientation = orientation.Clockwise;

    private bool comeback, checking, inRoom, died = false;

	public int health = 150;


	void Start () {
		anim = GetComponent<Guard4AnimHandler> ();
        myDirection = (myOrientation == orientation.Clockwise)? facing.North: facing.South;
        timeToTurn = Random.Range(500, 2000);
	}

	// Update is called once per frame
	void FixedUpdate ()
	{
        // Makes the guard turn around and check behind him every once in a while
		if ((checking) && !found)
        {
            anim.ToIdle();
            transformUpdate(0);
            idleTime++;
            if (idleTime > 500)
            {
                idleTime = 0;
                checking = false;
                //turnAround();

            }
        }
		if((!checking) && (!found))
        {

            if (timeSinceTurned < timeToTurn) timeSinceTurned += 1;
            else
            {
                timeSinceTurned = 0;
                timeToTurn = Random.Range(500, 2000);
                checking = true;
                //turnAround();
            }
        }

		if (!died) {
			if (found && (Vector3.Distance (player.position, transform.position) > attackDistance) && !inRoom && !damaged) {
				anim.ToRunning ();
				direction = player.position - transform.position;
				direction.y = 0;
				transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (direction), 0.5f);
				transform.Translate (0, 0, speed);
			} else if ((Vector3.Distance (player.position, transform.position) <= attackDistance) && found) {
				damaged = false;
				anim.ToAttacking ();
			} else if (!found) {
				damaged = false;
                if (!checking)
                {
                    anim.ToWalking();
                    transformUpdate(walkingSpeed);
                }
			} else if (inRoom) {
				inRoom = false;

				GameObject cp = nearestPoint ();

				if (cp.CompareTag ("cp3")) {
                    myDirection = (myOrientation == orientation.Clockwise) ? facing.South : facing.North;
				} else if (cp.CompareTag ("cp1")) {
                    myDirection = (myOrientation == orientation.Clockwise) ? facing.West : facing.East;
				} else if (cp.CompareTag ("cp2")) {
                    myDirection = (myOrientation == orientation.Clockwise) ? facing.North : facing.South;
				} else if (cp.CompareTag ("cp4")) {
                    myDirection = (myOrientation == orientation.Clockwise) ? facing.East : facing.West;
				}
				anim.ToWalking ();
				direction = cp.transform.position - transform.position;
				direction.y = 0;
				transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (direction), 0.5f);
				transform.Translate (0, 0, walkingSpeed);
				comeback = true;
			}
		}


		var tmp = playerMan.GetComponent<PlayerInteractionController> ();
		if (tmp.curHealth < 0)
		{
			health = 5;
			tmp.Die ();
			found = false;
			transform.position = initialPos;
			transform.rotation = initialRot;
			if (guard.CompareTag ("hwG1")) {
                myDirection = facing.North;
			} else if (guard.CompareTag ("hwG2")) {
                myDirection = facing.South;
			}
			var tmp2 = friend.GetComponent<GuardScript3> ();
			if (!tmp2.found) {
				tmp.dmg = 0;
			}
		}

		if (((player.position.x > 6.7) && found) || ((player.position.x < -10.3) && found) || (found && player.transform.position.z < 17.0f)) {
			inRoom = true;
		} 

		if (health < 0) {
			died = true;
			anim.ToDied ();
		}
		var tmp3 = playerMan.GetComponent<PlayerMovementController> ();
		if((tmp3.CurrentSoundOutput > 0) && (Vector3.Distance (player.position, transform.position) < hearingDistance)){
			found = true;
		}

		if (found && attention) {
			attention = false;
			var tmp4 = guard.GetComponent<AISoundController> ();
			tmp4.PlayHey ();
		}
	}

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject == friend)
        {
            //turnAround();
			checking = true;
        }
    }
    private void OnTriggerEnter(Collider other){
		if (((!found) || (comeback)) && !(other.CompareTag("vision")) && !(other.CompareTag("Wall"))) {
			comeback = false;
			found = false;
            bool CWcheck = myOrientation == orientation.Clockwise;
                 if (other.gameObject == cp1) myDirection = (CWcheck) ? facing.North : facing.East;
            else if (other.gameObject == cp2) myDirection = (CWcheck) ? facing.East : facing.South;
            else if (other.gameObject == cp3) myDirection = (CWcheck) ? facing.West : facing.North;
            else if (other.gameObject == cp4) myDirection = (CWcheck) ? facing.South : facing.West;
       	
			}

		}
	
    private void turnAround()
    {
        Debug.Log("turning");
             if (myDirection == facing.North) myDirection = facing.South;
        else if (myDirection == facing.South) myDirection = facing.North;
        else if (myDirection == facing.East) myDirection = facing.West;
        else if (myDirection == facing.West) myDirection = facing.East;
    }

    // This used to be walking, but I made it so that we can use it for idle state also
	private void transformUpdate(float mySpeed)
	{
        position = transform.position;
        if (myDirection == facing.South) {
            transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0));
			position += new Vector3(0, 0, -mySpeed);
        } else if (myDirection == facing.North) {
            transform.rotation = Quaternion.Euler(new Vector3(0, 0, 0));
			position += new Vector3(0, 0, +mySpeed);
        } else if (myDirection == facing.West) {
            transform.rotation = Quaternion.Euler(new Vector3(0, 270, 0));
			position += new Vector3(-mySpeed, 0, 0);
        } else if (myDirection == facing.East) {
            transform.rotation = Quaternion.Euler(new Vector3(0, 90, 0));
			position += new Vector3(+mySpeed, 0, 0);
        }
        transform.position = position;

	}

	private GameObject nearestPoint(){
        GameObject[] array = {cp1, cp2, cp3, cp4 };
		GameObject result = null;
		float min = 10000.0f;
		for (int i = 0; i < array.Length; i++) {
			if (Vector3.Distance (transform.position, array [i].transform.position) < min) {
				min = Vector3.Distance (transform.position, array [i].transform.position);
				result = array [i];
			}
		}
		return result;
	}
	

	private void beat()
	{
		CameraShaker script = target.GetComponent<CameraShaker> ();
		script.hit ();
	}

	private void kill()
	{
		var tmp = playerMan.GetComponent<PlayerInteractionController> ();
		tmp.TakeDamage (1);
		//tmp.dmg++;
	}

	private void clean(){
		gameObject.SetActive (false);
	}

	private void Gethit(){
		damaged = true;
		found = true;
	}

	private void Back(){
		damaged = false;
	}
}
