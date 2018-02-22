using System.Collections;
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
		GuardScript script = guard.GetComponent<GuardScript> ();
		if (other.CompareTag ("Player")) {
			script.found = true;
		} else {
			//script.found = false;
		}
	}
}
