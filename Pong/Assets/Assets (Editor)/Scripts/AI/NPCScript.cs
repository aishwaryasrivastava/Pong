using System;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

public class NPCScript : MonoBehaviour
{
    public float retreatX, retreatZ;

    PrisonerAnimHandler prisonAnim;
    // Keeps track of how long ago NPC changed directions
    private float time;
    private Vector3 myPosition, mySpeed, myGoalHeading;
    public float speed, movementLength, timeoutLength, soundArea;
    private bool halt;
    public int AngleStep;
    public bool Static;

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
        if (Static) return transform.position;
            var randDir = Random.insideUnitSphere * 10;
            randDir += transform.position;
        return new Vector3(randDir.x, transform.position.y, randDir.z);
    }

    void TurnAndHalt()
    { //natural turn
        time = Random.Range(-timeoutLength, timeoutLength);
        halt = true;
        prisonAnim.ToIdle();
        source.Pause();
        myGoalHeading = GetRandomLocalPoint() - transform.position;
    }

    void HaltAndTurn()
    { //turn backwards
        TurnAndHalt();
        var tmp = new Vector3(retreatX, transform.position.y, retreatZ) - transform.position;
        myGoalHeading = Vector3.RotateTowards(transform.forward, new Vector3(tmp.x, transform.forward.y, tmp.z), 5, 100);
        transform.forward = myGoalHeading;
    }

    public void TurnTowardsMe(Vector3 me)
    {
        TurnAndHalt();
        var goal = me - transform.position;
        goal.y = transform.forward.y;
        transform.forward = Vector3.RotateTowards(transform.forward, goal, 5, 100);
        time = 1;
        GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
    }

    // Update is called once per frame
    void Update()
    {
        if (PauseManager.Paused) return;
        if (diag.talking) return;
        if (Static) return;
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
        if (Static) return;

        transform.position += speed * new Vector3(transform.forward.x, 0, transform.forward.z).normalized;
        if (Math.Abs(myGoalHeading.magnitude) < 0.0001) return;
        transform.forward = Vector3.RotateTowards(transform.forward, myGoalHeading, Mathf.Deg2Rad * AngleStep, 60);

        if (source.isPlaying)
        {
            var tmp = (Camera.main.transform.position - transform.position).magnitude;
            source.volume = tmp > soundArea ? 0 : 1- tmp / soundArea;
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if (halt) return;
        if (Static) return;
        if (other.collider.CompareTag("Wall") || other.collider.CompareTag("Door") || other.collider.CompareTag("Destroyable"))
        {
            //Debug.Log("someone hit the wall");
            HaltAndTurn();
        }

    }
}
