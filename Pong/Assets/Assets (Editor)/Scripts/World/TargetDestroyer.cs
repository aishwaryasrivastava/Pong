using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetDestroyer : MonoBehaviour {
    private const float life = 1;
    private float timer;
    private Vector3 velocity;
	// Use this for initialization
	void Start () {
        timer = 0;
        velocity = new Vector3(0, Random.Range(1f, -1f), Random.Range(1f, -1f));
	}
	
	// Update is called once per frame
	void Update () {
        timer += Time.deltaTime;
        transform.position += velocity * Time.deltaTime;
        if (timer > life) { Destroy(gameObject); }
	}
}
