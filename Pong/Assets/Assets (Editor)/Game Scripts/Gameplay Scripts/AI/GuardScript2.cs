using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class GuardScript2 : MonoBehaviour
{
    public float retreatX, retreatZ;

    private PrisonerAnimHandler prisonerAnim;

    public PlayerMovementController player;
    // Keeps track of how long ago NPC changed directions
    private float time;
    private Vector3 myPosition, mySpeed, myGoalHeading;
    public float speed, movementLength, timeoutLength, soundArea;
    private bool halt;
    public int AngleStep;

    public AudioSource source;
    void Awake()
    {
        source = GetComponent<AudioSource>();
        prisonerAnim = GetComponent<PrisonerAnimHandler>();
    }


    // Use this for initialization
    void Start()
    {
        //rb = GetComponent<Rigidbody>();
        source.volume = 1f;
        TurnAndHalt();
    }

    Vector3 GetRandomLocalPoint()
    {
        return new Vector3(Random.Range(transform.position.x - 1, transform.position.x + 1), transform.position.y,
            Random.Range(transform.position.z - 1, transform.position.z + 1));
    }

    void TurnAndHalt()
    {
        time = Random.Range(-timeoutLength, timeoutLength);
        halt = true;
        prisonerAnim.ToIdle();
        source.Pause();
        myGoalHeading = GetRandomLocalPoint() - transform.position;
    }

    void HaltAndTurn()
    {
        TurnAndHalt();
        var tmp = new Vector3(retreatX, transform.position.y, retreatZ) - transform.position;
        myGoalHeading = Vector3.RotateTowards(transform.forward, new Vector3(tmp.x, transform.forward.y, tmp.z), 5, 100);
        transform.forward = myGoalHeading;
    }

    // Update is called once per frame
    void Update()
    {
        if (PauseManager.Paused) return;
        time -= Time.deltaTime;

        // Player is bad
        if (player.inTheRed)
        {
            if (halt)
            {
                halt = false;
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

        if (source.isPlaying)
        {
            var tmp = (Camera.main.transform.position - transform.position).magnitude;
            source.volume = tmp > soundArea ? 0 : 1- tmp / soundArea;
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if (halt) return;
        if (other.collider.CompareTag("Wall") || other.collider.CompareTag("Door"))
        {
            HaltAndTurn();
        }
        else if (other.collider.CompareTag("Player"))
        {
            //if(player.inTheRed) player.Die();
            //for now we don't need to do this
        }

    }
}
