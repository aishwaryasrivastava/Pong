﻿using UnityEngine;

public class GuardAnimHandler : MonoBehaviour {


    public Animator guardAnim;

    public bool Idle = true;

    // Use this for initialization
    void Start () {

        guardAnim = GetComponent<Animator>();
    }
	
	// Update is called once per frame
	void Update () {

    }

    public void ToWalking()
    {
        Idle = false;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", true);
		guardAnim.SetBool("isDied", false);
    }

    public void ToIdle()
    {
        Idle = true;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", true);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
    }

    public void ToRunning()
    {
        guardAnim.SetBool("isRunning", true);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
    }

    public void ToAttacking()
    {
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", true);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
    }

	public void ToDied(){
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", true);
	}
}
