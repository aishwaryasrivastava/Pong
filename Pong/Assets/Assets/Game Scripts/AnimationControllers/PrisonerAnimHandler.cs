using UnityEngine;

public class PrisonerAnimHandler : MonoBehaviour
{
    private Animator prisonerAnim;

    // Use this for initialization
    void Start ()
    {
        prisonerAnim = GetComponent<Animator>();
        if(prisonerAnim == null) Debug.Log("???");
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
