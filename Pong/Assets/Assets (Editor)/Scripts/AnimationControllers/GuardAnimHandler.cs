using UnityEngine;

public class GuardAnimHandler : MonoBehaviour {


    public Animator guardAnim;

    public bool Idle, dead, started;

    // Use this for initialization
    void Start () {

        guardAnim = GetComponent<Animator>();
    }

    public void Reset()
    {
        dead = false;
        
        ToIdle();
        guardAnim.CrossFade("Idle1", 0);
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
		guardAnim.SetBool("isDied", false);
		guardAnim.SetBool("isDamaged1", false);
    }

    public void ToIdle()
    {
        if (dead) return;
        started = true;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", true);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
		guardAnim.SetBool("isDamaged1", false);
    }

    public void ToRunning()
    {
        if (dead) return;
        started = true;
        guardAnim.SetBool("isRunning", true);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
		guardAnim.SetBool("isDamaged1", false);
    }

    public void ToAttacking()
    {
        if (dead) return;
        started = true;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", true);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
		guardAnim.SetBool("isDamaged1", false);
    }

	public void ToDied()
	{
	    dead = true;
	    started = true;
        guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", true);
		guardAnim.SetBool("isDamaged1", false);
	}

	public void Damaged()
	{
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
		guardAnim.SetBool("isDamaged1", true);
	}
}
