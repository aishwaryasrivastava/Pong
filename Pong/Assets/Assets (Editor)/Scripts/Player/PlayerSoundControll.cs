using UnityEngine;

public class PlayerSoundControll : MonoBehaviour {

	public AudioSource walk, run;
    private bool lastMove, lastRun, lastNone;

    void Start()
    {
        walk.volume = 1;
        run.volume = 0.3f;
    }

    public void UpdateMovementSounds(bool moving, bool running, bool offGround)
    {
        //Debug.Log(moving +" "+ running +" "+ offGround);
        var tmp = offGround || !moving;
        if (tmp)
        {
            if (lastNone) return;
            if (run.isPlaying) run.Stop();
            if (walk.isPlaying) walk.Stop();
        }
        else if (running)
        {
            if (lastRun) return;
            if (walk.isPlaying) walk.Stop();
            if (!run.isPlaying) run.Play();
        }
        else
        {
            if (lastMove && !lastRun) return;
            if (run.isPlaying) run.Stop();
            if (!walk.isPlaying) walk.Play();
        }
        lastMove = moving;
        lastRun = running;
        lastNone = tmp;
    }
}
