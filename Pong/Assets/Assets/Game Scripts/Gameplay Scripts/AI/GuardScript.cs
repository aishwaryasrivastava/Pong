using UnityEngine;

public class GuardScript : MonoBehaviour {

	public Transform player;
	public float attackDistance = 5.0f;
	public float runningDistance = 20.0f;
	public float speed = 0.2f;

	private Vector3 position;
	private Animator anim;
	private int time = 0;
	private int limit = 1000;
	private Vector3 direction;

	void Start () {
		anim = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log (Vector3.Distance (player.position, transform.position));
		time = time + 1;
		/*
		if (time > limit) {
			anim.SetBool ("isWalking", false);
			anim.SetBool ("isIdle", true);
		} else {
			position = transform.position;
			position = position + new Vector3(0, 0, 0.05f);
			transform.position = position;
			anim.SetBool ("isWalking", true);
			anim.SetBool ("isIdle", false);
		}
		*/

		if ((Vector3.Distance (player.position, transform.position) < runningDistance) && (Vector3.Distance (player.position, transform.position) > attackDistance)) {
			anim.SetBool ("isRunning", true);
			anim.SetBool ("isAttacking", false);
			anim.SetBool ("isIdle", false);
			anim.SetBool ("switching", false);
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
		} else if (anim.GetBool ("isIdle") == false) {
			anim.SetBool ("isWalking", false);
			anim.SetBool ("isRunning", false);
			anim.SetBool ("isAttacking", false);
			anim.SetBool ("isIdle", true);
			anim.SetBool ("switching", false);
		} else if (Vector3.Distance (player.position, transform.position) > runningDistance) {
			
		}
	}
}
