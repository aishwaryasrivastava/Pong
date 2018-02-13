using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuardAnimHandler : MonoBehaviour {


    Animator guardAnim;

    // Use this for initialization
    void Start () {

        guardAnim = GetComponent<Animator>();
    }
	
	// Update is called once per frame
	void Update () {

    }

    public void ToWalking()
    {
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", true);
    }

    public void ToIdle()
    {
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", true);
        guardAnim.SetBool("isWalking", false);
    }

    public void ToRunning()
    {
        guardAnim.SetBool("isRunning", true);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
    }

    public void ToAttacking()
    {
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", true);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
    }
}
