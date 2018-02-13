using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrisonerAnimHandler : MonoBehaviour {


    Animator prisonerAnim;

    // Use this for initialization
    void Start ()
    {
        prisonerAnim = GetComponent<Animator>();
    }
	
	// Update is called once per frame
	void Update () {

    }

    public void ToWalking()
    {
        prisonerAnim.SetBool("Walking", true);
    }

    public void ToIdle()
    {
        prisonerAnim.SetBool("Walking", false);
    }
}
