using UnityEngine;

public class GuardScript : MonoBehaviour {

	public Transform player;
	public float attackDistance = 5.0f;
	public float runningDistance = 20.0f;
	public float speed = 0.2f;
	public float walkingSpeed = 0.01f;

	private Vector3 position;
	private Animator anim;
	private Vector3 direction;

	void Start () {
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		if ((Vector3.Distance (player.position, transform.position) < runningDistance) && (Vector3.Distance (player.position, transform.position) > attackDistance)) {
			anim.SetBool ("isRunning", true);
			anim.SetBool ("isAttacking", false);
			anim.SetBool ("isIdle", false);
			anim.SetBool ("switching", false);
			anim.SetBool ("isWalking", false);
			direction = player.position - transform.position;
			direction.y = 0;
			transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation(direction), 0.9f);
			transform.Translate (0, 0, speed);
		} else if (Vector3.Distance (player.position, transform.position) <= attackDistance) {
			anim.SetBool ("isAttacking", true);
			anim.SetBool ("isRunning", false);
			anim.SetBool ("switching", true);
			anim.SetBool ("isIdle", false);
			anim.SetBool ("switching", false);
			anim.SetBool ("isWalking", false);
		}else if (Vector3.Distance (player.position, transform.position) > runningDistance) {
			anim.SetBool ("isRunning", false);
			anim.SetBool ("isAttacking", false);
			anim.SetBool ("isIdle", false);
			anim.SetBool ("switching", false);
			anim.SetBool ("isWalking", true);
			transform.Translate (0, 0, walkingSpeed);
		}
	}

	private void OnCollisionEnter(Collision other){
		direction = transform.forward;
		direction *= -1;
		transform.rotation = Quaternion.LookRotation (direction);
	}
}
