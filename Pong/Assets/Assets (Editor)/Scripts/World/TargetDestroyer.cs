using UnityEngine;

public class TargetDestroyer : MonoBehaviour {
    private float life = 1.5f;
    private float timer;
    private Vector3 velocity;
	// Use this for initialization
	void Start () {
        timer = 0;
	    var tmp = Random.insideUnitCircle.normalized;
	    float velocityMod = 0.25f + GetComponentInParent<ScorePoker>().scoreNum / (Random.Range(0, 2) == 0 ? 10f : -10f);
        velocity = velocityMod*new Vector3(0, tmp.y, tmp.x);
	    life = 0.75f / velocity.magnitude;
	}
	
	// Update is called once per frame
	void Update () {
        timer += Time.deltaTime;
        transform.position += velocity * Time.deltaTime;
        if (timer > life) { Destroy(gameObject); }
	}
}
