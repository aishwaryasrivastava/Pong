using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AISoundController : MonoBehaviour {

	public AudioClip hitSound, died;
	public AudioClip[] ouch = new AudioClip[8];
	public AudioSource source;
	// Use this for initialization
	private float lowVol = 0.2f;
	void Start () {
		source = GetComponent<AudioSource>();
	}
	
	public void PlayBeat()
	{
		source.PlayOneShot(hitSound, lowVol);
	}

	public void PlayOuch(){
		source.PlayOneShot(ouch[Random.Range (0, 8)], lowVol);
	}

	public void PlayDied(){
		source.PlayOneShot(died, lowVol);
	}
}
