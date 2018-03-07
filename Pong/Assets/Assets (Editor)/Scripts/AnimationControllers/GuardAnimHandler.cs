using UnityEngine;

public class GuardAnimHandler : MonoBehaviour {


    public Animator guardAnim;

    public bool Idle = true, dead;

    // Use this for initialization
    void Start () {

        guardAnim = GetComponent<Animator>();
    }

    public void Reset()
    {
        dead = false;
        ToIdle();
    }
    public void ToWalking()
    {
        if (dead) return;
        Idle = false;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", true);
		guardAnim.SetBool("isDied", false);
    }

    public void ToIdle()
    {
        if (dead) return;
        Idle = true;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", true);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
    }

    public void ToRunning()
    {
        if (dead) return;
        guardAnim.SetBool("isRunning", true);
        guardAnim.SetBool("isAttacking", false);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
    }

    public void ToAttacking()
    {
        if (dead) return;
        guardAnim.SetBool("isRunning", false);
        guardAnim.SetBool("isAttacking", true);
        guardAnim.SetBool("isIdle", false);
        guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", false);
    }

	public void ToDied()
	{
	    dead = true;
		guardAnim.SetBool("isRunning", false);
		guardAnim.SetBool("isAttacking", false);
		guardAnim.SetBool("isIdle", false);
		guardAnim.SetBool("isWalking", false);
		guardAnim.SetBool("isDied", true);
	}
}
