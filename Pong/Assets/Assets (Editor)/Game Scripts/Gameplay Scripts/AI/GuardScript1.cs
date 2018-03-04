using System.Linq;
using UnityEngine;

public class GuardScript1 : MonoBehaviour {

	public GameObject player;

	public float attackDistance;
	//public float runningDistance ;
    public float speed;
	public float walkingSpeed;

	private bool Remember, comeback;
    private int playerTimer;

    private const int MemoryDelay = 600;

    public Transform[] Checks;
    public int CurrentCheckpoint;

	private Vector3 initialPos;
	private Quaternion initialRot;
    private Vector3 GoHere;

	GuardAnimHandler anim;

	void Start ()
    {
		anim = GetComponent<GuardAnimHandler> ();
        var rot = transform.rotation;
        var pos = transform.position;
        initialRot = new Quaternion(rot.x, rot.y, rot.z, rot.w);
        initialPos = new Vector3(pos.x, pos.y, pos.z);
        playerTimer = 1000;
        GoHere = Checks[CurrentCheckpoint].position;
        GoHere.y = transform.position.y;
        comeback = true;
    }

    public void PlayerSpotted(Transform place)
    {
        playerTimer = MemoryDelay;
        if (!Remember) anim.ToRunning();
        Remember = true;
        Remember = false;
        GoHere = place.position;
        GoHere.y = transform.position.y;
    }

    public void PlayerIsGood()
    {
        Remember = false;
        comeback = true;
        GoHere = GetNearestPoint().position;
        GoHere.y = transform.position.y;
        transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, 5f, 100);
    }

	// Update is called once per frame
	void FixedUpdate ()
	{
	    if (PauseManager.Paused) return;
        if (Remember)
        {
            //chasing player
            GoHere = player.transform.position;
            GoHere.y = transform.position.y;
            transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, 0.1f, 10);
            transform.Translate(new Vector3(0, 0, speed), Space.Self);
            if ((transform.position - GoHere).magnitude < attackDistance)
            {
                Beat();
                //anim.ToAttacking();
            }
            if (GoHere.z < 17) PlayerIsGood();
            playerTimer--;
            if (playerTimer == 0)
            {
                Remember = false;
                comeback = true;
                GoHere = GetNearestPoint().position;
                GoHere.y = transform.position.y;
                transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, 5f, 100);
                anim.ToWalking();
            }
        }
        else if (comeback)
        {
            if (anim.Idle) anim.ToWalking();
            //going back to patrol
            transform.Translate(new Vector3(0, 0, walkingSpeed), Space.Self);
            if ((transform.position - GoHere).magnitude < 1f)
            {
                comeback = false;
                CurrentCheckpoint = (CurrentCheckpoint + 1) % Checks.Length;
                GoHere = Checks[CurrentCheckpoint].position;
                GoHere.y = transform.position.y;
            }
        }
        else
        {
            //patroling
            transform.Translate(new Vector3(0, 0, walkingSpeed), Space.Self);          
        }

		/*if (found && (Vector3.Distance (player.position, transform.position) > attackDistance) && (player.transform.position.z > 17.0f) && !inRoom) {
			anim.ToRunning ();
			direction = player.position - transform.position;
			direction.y = 0;
			transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (direction), 0.5f);
			transform.Translate (0, 0, speed);
		} else if ((Vector3.Distance (player.position, transform.position) <= attackDistance) && found) {
			anim.ToAttacking ();
		} else if (!found) {
			anim.ToWalking ();
			walking ();
		} else if( (found && player.transform.position.z < 17.0f) || inRoom){
			GameObject cp = nearestPoint ();
			anim.ToWalking ();
			direction = cp.transform.position - transform.position;
			direction.y = 0;
			transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (direction), 0.5f);
			transform.Translate (0, 0, walkingSpeed);
			comeback = true;
		}


		var tmp = playerMan.GetComponent<PlayerMovementController> ();
		if (tmp.dmg == 5)
        {
				var script = playerMan.GetComponent<PlayerInteractionController> ();
				script.Die ();
				found = false;
				transform.position = initialPos;
				transform.rotation = initialRot;
			if (guard.CompareTag ("hwG1")) {
				north = true;
				south = false;
				east = false;
				west = false;
			} else if (guard.CompareTag ("hwG2")) {
				north = false;
				south = true;
				east = false;
				west = false;
			}
			var tmp2 = friend.GetComponent<GuardScript> ();
			if (!tmp2.found) {
				tmp.dmg = 0;
			}
        }
			
		if (((player.position.x > 6.7) && found) || ((player.position.x < -10.4) && found)) {
			inRoom = true;
		} else {
			inRoom = false;
		}*/
	}

	void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            //make sure player isn't behind a wall
            var dist = (other.transform.position - transform.position);
            var something = Physics.RaycastAll(new Ray(transform.position, dist), dist.magnitude);
            if (!something.Any(g => g.transform.CompareTag("Wall") || g.transform.CompareTag("Door")))
                PlayerSpotted(other.transform);
        }
        if (Remember) return;
        if (other.transform.CompareTag("Checkpoint"))
        {
            if ((other.transform.position - transform.position).magnitude > 1) return;
            transform.Rotate(Vector3.up, 90);
            CurrentCheckpoint = (CurrentCheckpoint + 1) % Checks.Length;
            GoHere = Checks[CurrentCheckpoint].position;
            GoHere.y = transform.position.y;
        }
        
        /*if (((!found) || (comeback)) && (!other.CompareTag(friend.tag)) && !(other.CompareTag("vision")) && !(other.CompareTag("Wall"))) {
			comeback = false;
			found = false;
			if (other.CompareTag ("cp1")) {
				if (west) {
					transform.rotation = Quaternion.Euler(new Vector3(0, 0, 0));
					west = false;
					north = true;
				}

			} else if (other.CompareTag ("cp2")) {
				if (north) {
					transform.rotation = Quaternion.Euler(new Vector3(0, 90, 0));
					north = false;
					east = true;
				}
			} else if (other.CompareTag ("cp3")) {
				if (south) {
					transform.rotation = Quaternion.Euler(new Vector3(0, 270, 0));
					north = false;
					south = false;
					east = false;
					west = true;
				}
			} else if (other.CompareTag ("cp4")) {
				if (east) {
					transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0));
					north = false;
					south = true;
					east = false;
					west = false;
				}
			}
		}*/
    }
		
	private void Walking()
    {
        transform.Translate(new Vector3(0, 0, walkingSpeed), Space.Self);
		/*if (north) {
			position = transform.position;
			position += new Vector3(0, 0, walkingSpeed);
			transform.position = position;
		} else if (south) {
			position = transform.position;
			position += new Vector3(0, 0, -walkingSpeed);
			transform.position = position;
		}else if (east) {
			position = transform.position;
			position += new Vector3(walkingSpeed, 0, 0);
			transform.position = position;
		}else if (west) {
			position = transform.position;
			position += new Vector3(-walkingSpeed, 0, 0);
			transform.position = position;
		}*/
	}

	private Transform GetNearestPoint()
	{
	    Transform bestChoice = null;
	    float dist = 10000;
	    foreach (var point in Checks)
	    {
	        var distance = point.transform.position - transform.position;
	        if (distance.magnitude < dist)
	        {
	            dist = distance.magnitude;
	            bestChoice = point;
	        }
	    }
	    return bestChoice;

	    /*GameObject[] array = new GameObject[4];
        array [0] = cp1;
        array [1] = cp2;
        array [2] = cp3;
        array [3] = cp4;
        GameObject result = null;
        float min = 10000.0f;
        for (int i = 0; i < array.Length; i++) {
            if (Vector3.Distance (transform.position, array [i].transform.position) < min) {
                min = Vector3.Distance (transform.position, array [i].transform.position);
                result = array [i];
            }
        }
        return result;*/
	}

	private void Beat()
	{
		Camera.main.GetComponent<CameraShaker>().hit();
	}

	private void Hurt()
	{
		var tmp = player.GetComponent<PlayerMovementController>();
        tmp.dmg++;
	    if (tmp.dmg >= 5) player.GetComponent<PlayerInteractionController>().Die();
	}

    public void Reset()
    {
        transform.position = initialPos;
        transform.rotation = initialRot;
        Remember = comeback = false;
        GoHere = transform.position;
    }
}