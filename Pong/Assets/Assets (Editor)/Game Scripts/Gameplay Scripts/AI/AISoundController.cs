using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AISoundController : MonoBehaviour {

	public AudioClip hitSound;
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
}
