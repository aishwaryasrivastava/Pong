using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Guard4AnimHandler : MonoBehaviour {

	public Animator guardAnim;
	public Animation dmg;

	public bool Idle, dead, started;

	// Use this for initialization
	void Start () {

		guardAnim = GetComponent<Animator>();
	}

	public void Reset()
	{
		dead = false;

		ToIdle();
		guardAnim.CrossFade("Idle", 0);
		started = false;
	}
	public void ToWalking()
	{
		if (dead) return;
		started = true;
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", true);
		guardAnim.SetBool("isDead", false);
		guardAnim.SetBool("isDamaged", false);
	}

	public void ToIdle()
	{
		if (dead) return;
		started = true;
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", true);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDead", false);
		guardAnim.SetBool("isDamaged", false);
	}

	public void ToRunning()
	{
		if (dead) return;
		started = true;
		guardAnim.SetBool("isRunning", true);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDead", false);
		guardAnim.SetBool("isDamaged", false);
	}

	public void ToAttacking()
	{
		if (dead) return;
		started = true;
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", true);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDead", false);
		guardAnim.SetBool("isDamaged", false);
	}

	public void ToDied()
	{
		dead = true;
		started = true;
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDead", true);
		guardAnim.SetBool("isDamaged", false);
	}

	public void Damaged()
	{
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDead", false);
		guardAnim.SetBool("isDamaged", true);
	}
}
