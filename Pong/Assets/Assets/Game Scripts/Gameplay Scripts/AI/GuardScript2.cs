using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class GuardScript2 : MonoBehaviour
{
   // Animator prisonAnim = new Animator();
    private PrisonerAnimHandler prisonerAnim;

    public PlayerMovementController player;
    // Keeps track of how long ago NPC changed directions
    private float time;
    private Vector3 myPosition, mySpeed, myGoalHeading;
    public float speed, movementLength, timeoutLength;
    private bool halt;
    public int AngleStep;

    private Rigidbody rb;

    public AudioSource source;
    void Awake()
    {
        source = GetComponent<AudioSource>();
        prisonerAnim = GetComponent<PrisonerAnimHandler>();
    }


    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        //prisonAnim = gameObject.GetComponent<Animator>();
        source.volume = 1f;
        TurnAndHalt();
        //prisonAnim.SetBool("Walking", false);
    }

    Vector3 GetRandomLocalPoint()
    {
        return new Vector3(Random.Range(transform.position.x - 1, transform.position.x + 1), transform.position.y,
            Random.Range(transform.position.z - 1, transform.position.z + 1));
    }

    void TurnAndHalt()
    {
        time = Random.Range(timeoutLength/2, timeoutLength);
        halt = true;
        //prisonAnim.SetBool("isWalking", false);
        //prisonAnim.CrossFadeInFixedTime("Idle2", 0);
        prisonerAnim.ToIdle();
        source.Pause();
        myGoalHeading = GetRandomLocalPoint() - transform.position;
    }

    void HaltAndTurn()
    {
        TurnAndHalt();
        var deg = Random.Range(90, 180) * (Random.Range(0, 2) == 0 ? -1 : 1);
        myGoalHeading = Vector3.RotateTowards(transform.forward, -transform.forward, Mathf.Deg2Rad * deg, 100);
    }

    // Update is called once per frame
    void Update()
    {
        rb.angularVelocity = Vector3.zero; //no falling over 
        if (PauseManager.Paused) return;
        time -= Time.deltaTime;

        // Player is bad
        if (player.inTheRed)
        {
            if (halt)
            {
                halt = false;

                //prisonAnim.SetBool("isWalking", true);
                //prisonAnim.CrossFadeInFixedTime("Walk", 0);
                prisonerAnim.ToWalking();
                source.Play();
            }
            time = 1;
            myGoalHeading = player.transform.position - transform.position;
        }
        if (halt)
        {
            if (time < 0)
            {
                halt = false;

                //prisonAnim.SetBool("isWalking", true);
                //prisonAnim.CrossFadeInFixedTime("Walk", 0);
                prisonerAnim.ToWalking();
                time = Random.Range(1f, movementLength);
                source.Play();
            }
            
        }
        else if(time < 0)
        {
            TurnAndHalt();
        }
    }

    void FixedUpdate()
    {
        if (halt) return;
        if (PauseManager.Paused) return;
        transform.position += speed * new Vector3(transform.forward.x, 0, transform.forward.z).normalized;
        if (Math.Abs(myGoalHeading.magnitude) < 0.0001) return;
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
        else if (other.collider.CompareTag("Player"))
        {
            if(player.inTheRed) player.Die();
        }

    }
}
