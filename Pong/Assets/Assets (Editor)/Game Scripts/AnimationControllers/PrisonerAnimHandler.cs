using UnityEngine;

public class PrisonerAnimHandler : MonoBehaviour
{
    private Animator prisonerAnim;

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
        if (prisonerAnim == null) return;
        prisonerAnim.SetBool("Walking", false);
    }
}
