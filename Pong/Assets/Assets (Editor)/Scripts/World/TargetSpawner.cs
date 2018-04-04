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
		if (timer >= freq)
        {
            timer = 0;
            Instantiate(target, new Vector3(Random.Range(1, -1), Random.Range(1, -1), 0), Quaternion.identity);
        }
	}
}
