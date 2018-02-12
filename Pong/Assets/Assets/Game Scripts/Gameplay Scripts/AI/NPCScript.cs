using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class NPCScript : MonoBehaviour
{
    Animator prisonAnim = new Animator();
    // Keeps track of how long ago NPC changed directions
    private float time;
    private Vector3 myPosition, mySpeed, myGoalHeading;
    public float speed, movementLength, timeoutLength;
    private bool halt;
    public int AngleStep;

    public DialogueManager diag;
    private Rigidbody rb;

    public AudioSource source;
    void Awake()
    {
        source = GetComponent<AudioSource>();
    }


    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        prisonAnim = gameObject.GetComponent<Animator>();
        source.volume = 1f;
        halt = true;
        time = Random.Range(timeoutLength/2, timeoutLength);
        prisonAnim.SetBool("Walking", false);
    }

    Vector3 GetRandomLocalPoint()
    {
        return new Vector3(Random.Range(transform.position.x - 1, transform.position.x + 1), transform.position.y,
            Random.Range(transform.position.z - 1, transform.position.z + 1));
    }

    void TurnAndHalt()
    {
        time = Random.Range(1f, timeoutLength);
        halt = true;
        prisonAnim.SetBool("Walking", false);
        prisonAnim.CrossFadeInFixedTime("Idle2", 0);
        source.Pause();
        myGoalHeading = GetRandomLocalPoint() - transform.position;
    }

    void HaltAndTurn()
    {
        TurnAndHalt();
        var deg = Random.Range(90, 180) * (Random.Range(0, 2) == 0 ? -1 : 1);
        myGoalHeading = Vector3.RotateTowards(transform.forward, -transform.forward, Mathf.Deg2Rad*deg, 100);
    }

    // Update is called once per frame
    void Update()
    {
        rb.angularVelocity = Vector3.zero; //no falling over 
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

                prisonAnim.SetBool("Walking", true);
                prisonAnim.CrossFadeInFixedTime("Walk", 0);
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
        transform.forward = Vector3.RotateTowards(transform.forward, myGoalHeading, Mathf.Deg2Rad * AngleStep, 60);
    }

    private void OnCollisionEnter(Collision other)
    {
        if (halt) return;
        if (other.collider.CompareTag("Wall"))
        {
            HaltAndTurn();
        }
        else if (other.collider.CompareTag("Door"))
        {
            var tmp = other.collider.gameObject.GetComponent<DoorToggle>();
            if (tmp.Locked)
            {
                HaltAndTurn();
            }
            else tmp.Toggle(false);
        }

    }
}
