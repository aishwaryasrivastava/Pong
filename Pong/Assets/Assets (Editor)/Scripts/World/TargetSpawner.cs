using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetSpawner : MonoBehaviour {

    // Use this for initialization
    public GameObject target;
    private Vector3[] velocities = { Vector3.up, Vector3.down, Vector3.left, Vector3.right };
    private const float freq = 2;
    private float timer;
	void Start () {
        timer = freq;
	}
	
	// Update is called once per frame
	void Update () {
        timer += Time.deltaTime;
		if (timer >= freq)
        {
            timer = 0;
            Instantiate(target, GetComponent<Transform>(), false);
        }
	}
}
