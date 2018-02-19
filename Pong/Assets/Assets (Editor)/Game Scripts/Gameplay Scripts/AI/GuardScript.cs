using UnityEngine;

public class GuardScript : MonoBehaviour {

	public Transform player;
	public float attackDistance = 5.0f;
	public float runningDistance = 8.0f;
	public float speed = 0.4f;
	public float walkingSpeed = 0.01f;
	public bool found;
	GuardAnimHandler anim;
	public BoxCollider vision;
	public GameObject target;
	public GameObject playerMan;
	public int dmg = 0;

	private Vector3 position;
    
	private Vector3 direction;

	bool north;
	bool south;
	bool east;
	bool west;

	void Start () {
		anim = GetComponent<GuardAnimHandler> ();
		north = true;
		south = false;
		east = false;
		west = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (found && (Vector3.Distance (player.position, transform.position) > attackDistance)) {
            anim.ToRunning();
			direction = player.position - transform.position;
			direction.y = 0;
			transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation(direction), 0.5f);
			transform.Translate (0, 0, speed);
		} else if (Vector3.Distance (player.position, transform.position) <= attackDistance) {
            anim.ToAttacking();
		}else if (!found) {
            anim.ToWalking();
			walking ();
		}

		if (dmg == 3) {
			PlayerMovementController script = playerMan.GetComponent<PlayerMovementController> ();
			script.Die ();
			found = false;
		}
	}

	private void OnTriggerEnter(Collider other){
			if (other.CompareTag ("cp1")) {
				if (south) {
					transform.Rotate (0, -90, 0);
					south = false;
					east = true;
				} else if (west) {
					transform.Rotate (0, 90, 0);
					east = false;
					north = true;
				}

			} else if (other.CompareTag ("cp2")) {
				if (north) {
					transform.Rotate (0, 90, 0);
					north = false;
					east = true;
				} else if (west) {
					transform.Rotate (0, -90, 0);
					west = false;
					south = true;
				}
			} else if (other.CompareTag ("cp3")) {
				if (south) {
					transform.Rotate (0, 90, 0);
					south = false;
					west = true;
				} else if (east) {
					transform.Rotate (0, -90, 0);
					east = false;
					north = true;
				}
			} else if (other.CompareTag ("cp4")) {
				if (east) {
					transform.Rotate (0, 90, 0);
					east = false;
					south = true;
				} else if (north) {
					transform.Rotate (0, -90, 0);
					north = false;
					west = true;
				}
			}
	}

	private void beat(){
		CameraShaker script = target.GetComponent<CameraShaker> ();
		script.hit ();
	}

	private void kill(){
		dmg++;
	}

	private void walking(){
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
}