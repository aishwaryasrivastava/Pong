using System;
using System.Runtime.Remoting.Messaging;
using UnityEngine;
using UnityEngine.AI;
using Random = UnityEngine.Random;

public class GuardScript2 : MonoBehaviour
{
    private Guard3AnimHandler prisonerAnim;

    public NavMeshAgent agent;
    public PlayerMovementController player;

    public float timer;

    public bool Static;
    private bool halt;

    public float timeoutLength, soundArea, xLimit;

    public AudioSource source;
    void Awake()
    {
        source = GetComponent<AudioSource>();
        prisonerAnim = GetComponent<Guard3AnimHandler>();
    }

    // Use this for initialization
    void Start()
    {
        //rb = GetComponent<Rigidbody>();
        source.volume = 1f;
        agent = GetComponent<NavMeshAgent>();
        TurnAndHalt();
        timer = timeoutLength;
        halt = true;
        agent.isStopped = true;
        agent.updatePosition = false;
        agent.updateRotation = false;
    }

    private void Halt()
    {
        halt = true;
        agent.isStopped = true;
        //agent.updatePosition = false;
        //agent.updateRotation = false;
        prisonerAnim.ToIdle();
        source.Pause();
    }

    private void Unhalt()
    {
        halt = false;
        agent.isStopped = false;
        agent.updatePosition = true;
        agent.updateRotation = true;
        prisonerAnim.ToWalking();
        source.Play();
    }

    Vector3 GetRandomLocalPoint()
    {
        var x = 0;
        while (x < 100)
        {
            var randDir = Random.insideUnitSphere * 25;
            randDir += transform.position;
            NavMeshHit hit;
            if (NavMesh.SamplePosition(randDir, out hit, 25, 1))
            {
                return new Vector3(hit.position.x, transform.position.y, hit.position.z);
            }
            x++;
        }
        Debug.Log("failure");
        return transform.position;
    }

    public void TurnTowardsMe(Vector3 me)
    {
        agent.SetDestination(GetRandomLocalPoint());
        timer = 1;
        Halt();
        var goal = me - transform.position;
        goal.y = transform.forward.y;
        transform.forward = Vector3.RotateTowards(transform.forward, goal, 5, 100);
        GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
    }

    void TurnAndHalt()
    {
        timer = Random.Range(Random.Range(0, 2) == 0 ? -timeoutLength : timeoutLength / 2, timeoutLength);
        if (timer > 0) Halt();

        agent.SetDestination(GetRandomLocalPoint());
    }

    // Update is called once per frame
    void Update()
    {
        if (PauseManager.Paused) return;
        if (timer > 0)
        {
            timer -= Time.deltaTime;
            if (timer <= 0)
            {
                if (!Static) Unhalt();
            }
        }
        else if (!halt && !agent.pathPending)
        {
            if (agent.remainingDistance <= agent.stoppingDistance)
            {
                if (!agent.hasPath || Math.Abs(agent.velocity.sqrMagnitude) < 0.001f)
                {
                    TurnAndHalt();
                }
            }
        }
    }

    void FixedUpdate()
    {
        if (halt) return;
        if (PauseManager.Paused) return;

        if (source.isPlaying)
        {
            var tmp = (Camera.main.transform.position - transform.position).magnitude;
            source.volume = tmp > soundArea ? 0 : 1- tmp / soundArea;
        }
    }
}
