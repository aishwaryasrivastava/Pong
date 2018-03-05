using UnityEngine;

public class PlayerMeleeScript : MonoBehaviour {


    public GameObject Pipe;
    private PipeAnimationHandler animator;
    public PlayerMovementController movement;

    // Use this for initialization
    void Start () {
        animator = Pipe.GetComponent<PipeAnimationHandler>();
	}
	
	// Update is called once per frame
	void Update () {
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return; //Don't shoot people while in dialogue with them

	    if (Input.GetMouseButton(0))
	    {
	        PlayerWeaponEquip.timer = 1.1f;
	        animator.Attack();
	    }

    }
}
