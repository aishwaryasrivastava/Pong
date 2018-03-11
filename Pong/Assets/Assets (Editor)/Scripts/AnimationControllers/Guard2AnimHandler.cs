using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Guard2AnimHandler : MonoBehaviour {


	public Animator guardAnim;

	// Use this for initialization
	void Start () {

		guardAnim = GetComponent<Animator>();
	}
		
	public void ToWalking()
	{
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isWalking", true);
		guardAnim.SetBool("isDied", false);
	}
		

	public void ToRunning()
	{
		guardAnim.SetBool("isRunning", true);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
	}

	public void ToAttacking()
	{
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", true);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
	}

	public void ToDied(){
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", true);
	}
}
