using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSoundControll : MonoBehaviour {

	public AudioSource source;
	// Use this for initialization
	void Start () {
		source = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.LeftShift)) {
			source.Play ();
		} else {
			source.Stop ();
		}
	}
}
