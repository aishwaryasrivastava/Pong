using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSoundController : MonoBehaviour {
	public AudioClip ShootingSound;
	public AudioSource source;
	// Use this for initialization
	private float lowVol = 0.2f;
	void Start () {
		source = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown(0)) {
			source.PlayOneShot (ShootingSound, lowVol);
		}
	}
}
