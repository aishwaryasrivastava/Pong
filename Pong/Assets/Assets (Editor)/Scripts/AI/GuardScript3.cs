using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuardScript3 : MonoBehaviour {

	public Transform player;

	public float attackDistance ;
	public float runningDistance ;
	public float personalDistance ;
	public float speed ;
	public float walkingSpeed;

	public bool found;
	public bool damged = false;

	public BoxCollider vision;

	public GameObject target;
	public GameObject playerMan;
	public GameObject friend;
	public GameObject guard;

	public GameObject cp1;
	public GameObject cp2;
	public GameObject cp3;
	public GameObject cp4;

	public Vector3 initialPos;
	public Quaternion initialRot;

	public Guard2AnimHandler anim;

	private Vector3 position;
	private Vector3 direction;
	private int count;

	public bool north;
	public bool south;
	public bool east;
	public bool west;

	private bool comeback = false;
	private bool inRoom = false;
	private bool died = false;

	public int health = 150;
	void Start () {
		anim = GetComponent<Guard2AnimHandler> ();
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
	}

	// Update is called once per frame
	void FixedUpdate ()
	{
		if (!died) {
			if (found && (Vector3.Distance (player.position, transform.position) > attackDistance) && !inRoom && !damged) {
				anim.ToRunning ();
				direction = player.position - transform.position;
				direction.y = 0;
				transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (direction), 0.5f);
				transform.Translate (0, 0, speed);
			} else if ((Vector3.Distance (player.position, transform.position) <= attackDistance) && found) {
				damged = false;
				anim.ToAttacking ();
			} else if (!found) {
				damged = false;
				anim.ToWalking ();
				walking ();
				var tmp1 = playerMan.GetComponent<PlayerMovementController> ();
				if((tmp1.CurrentSoundOutput != 0) && (Vector3.Distance (player.position, transform.position) < personalDistance)){
					TurnAround ();
				}
			} else if (inRoom) {
				//inRoom = false;
				GameObject cp = nearestPoint ();
				if (cp.CompareTag ("cp3")) {
					north = false;
					south = true;
					east = false;
					west = false;
				} else if (cp.CompareTag ("cp1")) {
					north = false;
					south = false;
					east = false;
					west = true;
				} else if (cp.CompareTag ("cp2")) {
					north = true;
					south = false;
					east = false;
					west = false;
				} else if (cp.CompareTag ("cp4")) {
					north = false;
					south = false;
					east = true;
					west = false;
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
		if (tmp.dmg == 12)
		{
			health = 5;
			tmp.Die ();
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
			var tmp2 = friend.GetComponent<GuardScript3> ();
			if (!tmp2.found) {
				tmp.dmg = 0;
			}
		}

		if (((player.position.x > 6.7) && found) || ((player.position.x < -10.3) && found) || (found && player.transform.position.z < 17.0f)) {
			inRoom = true;
		} else {
			inRoom = false;
		}

		if (health < 0) {
			died = true;
			anim.ToDied ();
		}
	}

	private void OnTriggerEnter(Collider other){
		//Debug.Log (other.tag);
		if (((!found) || (comeback)) && (!other.CompareTag(friend.tag)) && !(other.CompareTag("vision")) && !(other.CompareTag("Wall"))) {
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
		}
	}

	private void walking()
	{
		if (north) {
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
		}
	}

	private GameObject nearestPoint(){
		GameObject[] array = new GameObject[4];
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
		tmp.dmg++;
	}

	private void clean(){
		gameObject.SetActive (false);
	}

	private void Gethit(){
		damged = true;
		found = true;
	}

	private void Back(){
		damged = false;
	}

	private void TurnAround(){
		if (north) {
			transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0));
			north = false;
			south = true;
		}else if(south){
			transform.rotation = Quaternion.Euler(new Vector3(0, 0, 0));
			south = false;
			north = true;
		}else if(east){
			transform.rotation = Quaternion.Euler(new Vector3(0, 270, 0));
			east = false;
			west = true;
		}else if(west){
			transform.rotation = Quaternion.Euler(new Vector3(0, 90, 0));
			west = false;
			east = true;
		}
	}
}
