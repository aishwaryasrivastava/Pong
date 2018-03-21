using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Guard3AnimHandler : MonoBehaviour {
	private Animator guard3Anim;

	// Use this for initialization
	void Start ()
	{
		guard3Anim = GetComponent<Animator>();

	}

	// Update is called once per frame
	void Update () {

	}

	public void ToWalking()
	{
		guard3Anim.SetBool("isWalking", true);
		guard3Anim.SetBool("isIdle", false);
	}

	public void ToIdle()
	{
		if (guard3Anim == null) return;
		guard3Anim.SetBool("isWalking", false);
		guard3Anim.SetBool("isIdle", true);
	}
}

