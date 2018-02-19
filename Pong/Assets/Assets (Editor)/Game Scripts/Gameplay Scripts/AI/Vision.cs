﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Vision : MonoBehaviour {

	public GameObject guard;
	// Use this for initialization
	private Vector3 position;
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		position = guard.transform.position;
		transform.position = position;
		transform.rotation = guard.transform.rotation;
	}

	void OnTriggerEnter(Collider other){
		if (other.CompareTag ("Player")) {
			GuardScript script = guard.GetComponents<GuardScript> ()[0];
			script.found = true;
		}
	}
}
