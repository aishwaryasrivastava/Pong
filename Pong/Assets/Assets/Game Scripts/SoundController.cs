using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundController : MonoBehaviour {

	public AudioClip walkingSound;
	public AudioClip inventorySound;
	public AudioSource source;

	private float highVol = 1f;
	private float lowVol = 0.2f;

	private bool input_down;
	private bool input_up;
	void Awake () {
		source = GetComponent<AudioSource>();
	}

	void Start(){
		
	}
	
	// Update is called once per frame
	void Update () {
		input_down = ((Input.GetKeyDown ("w")) || (Input.GetKeyDown ("a")) ||
			(Input.GetKeyDown ("s")) || (Input.GetKeyDown ("d")));

		input_up = ((Input.GetKeyUp ("w")) || (Input.GetKeyUp ("a")) ||
			(Input.GetKeyUp ("s")) || (Input.GetKeyUp ("d")));
		if (input_down) {
			//source.pitch = Random.Range (lowVol, highVol);
			source.Play ();
		}
		if ((input_up) && (source.isPlaying)) {
			source.Pause ();
		}
		if (Input.GetKeyDown ("i")) {
			source.PlayOneShot (inventorySound, lowVol);
		}
	}
}
