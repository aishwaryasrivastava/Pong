using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class NPCScript : MonoBehaviour
{
    PrisonerAnimHandler prisonAnim;
    // Keeps track of how long ago NPC changed directions
    private float time;
    private Vector3 myPosition, mySpeed, myGoalHeading;
    public float speed, movementLength, timeoutLength;
    private bool halt;
    public int AngleStep;

    public DialogueManager diag;

    public AudioSource source;
    void Awake()
    {
        source = GetComponent<AudioSource>();
    }


    // Use this for initialization
    void Start()
    {
        prisonAnim = gameObject.GetComponent<PrisonerAnimHandler>();
        source.volume = 1f;
        TurnAndHalt();
    }

    Vector3 GetRandomLocalPoint()
    {
        return new Vector3(Random.Range(transform.position.x - 1, transform.position.x + 1), transform.position.y,
            Random.Range(transform.position.z - 1, transform.position.z + 1));
    }

    void TurnAndHalt()
    { //natural turn
        time = Random.Range(timeoutLength/2, timeoutLength);
        halt = true;
        prisonAnim.ToIdle();
        source.Pause();
        myGoalHeading = GetRandomLocalPoint() - transform.position;
    }

    void HaltAndTurn()
    { //turn backwards
        TurnAndHalt();
        var deg = Random.Range(90, 180) * (Random.Range(0, 2) == 0 ? -1 : 1);
        deg = 90;
        myGoalHeading = Vector3.RotateTowards(transform.forward, -transform.forward, Mathf.Deg2Rad*deg, 100);
        //transform.forward = myGoalHeading;
    }

    public void TurnTowardsMe(Vector3 me)
    {
        var goal = me - transform.position;
        goal.y = transform.forward.y;
        transform.forward = Vector3.RotateTowards(transform.forward, goal, 180, 100);
    }

    // Update is called once per frame
    void Update()
    {
        if (PauseManager.Paused) return;
        if (diag.talking)
        {
            if(!halt)TurnAndHalt();
            return;
        }
        time -= Time.deltaTime;

        // If it's been a while since NPC turned, then turn them again
        if (halt)
        {
            if (time < 0)
            {
                halt = false;

                prisonAnim.ToWalking();

                time = Random.Range(movementLength/2, movementLength);
                source.Play();
            }
            
        }
        else if (time < 0)
        {
            TurnAndHalt();
        }

    }

    void FixedUpdate()
    {
        if (halt) return;
        if (PauseManager.Paused) return;
        if (diag.talking) return;
        transform.position += speed * new Vector3(transform.forward.x, 0, transform.forward.z).normalized;
        if (Math.Abs(myGoalHeading.magnitude) < 0.0001) return;
        transform.forward = Vector3.RotateTowards(transform.forward, myGoalHeading, Mathf.Deg2Rad * AngleStep, 60);
    }

    private void OnCollisionEnter(Collision other)
    {
        if (halt) return;
        if (other.collider.CompareTag("Wall") || other.collider.CompareTag("Door"))
        {
            //Debug.Log("someone hit the wall");
            HaltAndTurn();
        }

    }
}
