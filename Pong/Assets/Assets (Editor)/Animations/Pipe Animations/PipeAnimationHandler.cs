using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PipeAnimationHandler : MonoBehaviour {

    public Animator anim;
    public bool attackLock;
    private Vector3 local;
    private Quaternion local2;

	// Use this for initialization
	void Start ()
	{
	    local = transform.localPosition;
	    local2 = transform.localRotation;
        anim = GetComponent<Animator>();
        attackLock = false;
	}

    // Update is called once per frame
    void Update() {
    }
        public void ToWalking()
        {
            anim.SetBool("isAttacking", false);
            anim.SetBool("isIdle", false);
            anim.SetBool("isWalking", true);
        //anim.SetBool("isEquipping", false);
    }

        public void ToIdle()
        {
            anim.SetBool("isAttacking", false);
            anim.SetBool("isIdle", true);
            anim.SetBool("isWalking", false);
        //anim.SetBool("isEquipping", false);
    }



    public void ToAttacking()
    {
        anim.SetBool("isAttacking", true);
        anim.SetBool("isIdle", false);
        anim.SetBool("isWalking", false);
        //anim.SetBool("isEquipping", false);
    }

    /*
    public void ToEquipping()
    {
        anim.SetBool("isAttacking", false);
        anim.SetBool("isEquipping", true);
        anim.SetBool("isIdle", false);
        anim.SetBool("isWalking", false);
    }
    */

    public void Attack()
    {
        if (!attackLock)
        {
            //attackLock = true;
            ToAttacking();
        }
    }
    

    public void ReleaseAttackLock()
    {
        attackLock = false;
    }
}
