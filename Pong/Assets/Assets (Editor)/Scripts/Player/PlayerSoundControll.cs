using UnityEngine;

public class PlayerSoundControll : MonoBehaviour {

	public AudioSource walk, run, crouch;
    private bool lastMove, lastRun, lastNone, lastCrouch;

    void Start()
    {
        walk.volume = 1;
        run.volume = 0.3f;
    }

	public void UpdateMovementSounds(bool moving, bool running, bool offGround, bool crouched)
    {
        //Debug.Log(moving +" "+ running +" "+ offGround + " " + crouched);
        var tmp = offGround || !moving;
		var tmp2 = gameObject.GetComponentInParent<PlayerMovementController> ();
        if (tmp)
        {
            if (lastNone) return;
            if (run.isPlaying) run.Stop();
            if (walk.isPlaying) walk.Stop();
			if (crouch.isPlaying) crouch.Stop ();
        }
        else if (running)
        {
            if (lastRun) return;
            if (walk.isPlaying) walk.Stop();
            if (!run.isPlaying) run.Play();
			if (crouch.isPlaying) crouch.Stop ();
		}else if(crouched){
			if (lastCrouch) return;
			if (!crouch.isPlaying) crouch.Play ();
			if (run.isPlaying) run.Stop();
			if (walk.isPlaying) walk.Stop();
		}
        else
        {
			if (lastMove && !lastRun && !lastCrouch) return;
            if (run.isPlaying) run.Stop();
            if (!walk.isPlaying) walk.Play();
			if (crouch.isPlaying) crouch.Stop ();
			if (tmp2.slant) {
				walk.Stop ();
			}
        }
		//Debug.Log (crouched);

        lastMove = moving;
        lastRun = running;
        lastNone = tmp;
		lastCrouch = crouched;
    }
}
