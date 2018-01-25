using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DJ : MonoBehaviour {


	public AudioSource source1;
	public AudioSource source2;
	public AudioSource source3;

	void Awake(){
		source1.Play ();
	}
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.X)) {

			if (source1.isPlaying) {

				source1.Stop ();

				source2.Play ();

			} else if(source2.isPlaying){

				source2.Stop ();

				source3.Play ();

			} else if(source3.isPlaying){

				source3.Stop ();

				source1.Play ();

			}
		}
	}
}
