using System.Linq;
using UnityEngine;
using UnityEngine.AI;

public class GuardScript4 : MonoBehaviour
{

    public GameObject player;
    public PlayerMovementController soundOutput;

    public Vector2 BottomLeft, TopRight;

    public float attackDistance;
    public float speed;
    public float walkingSpeed;

    private bool Remember, See, Investigate;
    private int playerTimer, visionTimer = 10;
    private float AttackTimer;
    public float ViewDistance, ViewAngle, LastPlayerDistance;

    private const int MemoryDelay = 600, InvestigateDelay = 120;

    public Transform[] Checks;
    public int CurrentCheckpoint;

    private Vector3 initialPos;
    private Quaternion initialRot;
    private int initialPoint;
    private Vector3 Goal;

    GuardAnimHandler anim;
    private NavMeshAgent agent;

    void Start()
    {
        anim = GetComponent<GuardAnimHandler>();
        agent = GetComponent<NavMeshAgent>();
        var rot = transform.rotation;
        var pos = transform.position;
        initialRot = new Quaternion(rot.x, rot.y, rot.z, rot.w);
        initialPos = new Vector3(pos.x, pos.y, pos.z);
        initialPoint = CurrentCheckpoint;
        playerTimer = 1000;
        //UpdateCheckpoint();
        ResetLevel.resettables.Add(transform);
    }

    public void PlayerIsGood()
    {
        See = Remember = Investigate = false;
        agent.speed = walkingSpeed;
        CurrentCheckpoint = GetNearestPoint(transform.position);
        UpdateCheckpoint();
        anim.ToWalking();
        Unhalt();
    }

    private void UpdateCheckpoint()
    {
        Goal = Checks[CurrentCheckpoint].position;
        Goal.y = transform.position.y;
        agent.destination = Goal;
    }

    private void SetPlayerAsGoal()
    {
        Goal = player.transform.position;
        Goal.y = transform.position.y;
        agent.destination = Goal;
    }

    private void Halt()
    {
        //Goal = transform.position;
        //agent.destination = Goal;
        agent.isStopped = true;
        agent.updatePosition = false;
        agent.updateRotation = false;
    }

    private void Unhalt()
    {
        agent.isStopped = false;
        agent.updatePosition = true;
        agent.updateRotation = true;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (PauseManager.Paused) return;

        CheckVision();

        if (See)
        {
            //chasing player         

            if ((transform.position - Goal).magnitude < attackDistance)
            {
                anim.ToAttacking();
                Halt();
            }
            else
            {
                anim.ToRunning();
                Unhalt();
                SetPlayerAsGoal();
            }

            if (!PlayerInBounds()) PlayerIsGood();
        }
        else if (Remember)
        {
            //chasing last player location
            if (!Investigate)
            {
                if ((transform.position - Goal).magnitude < 1)
                {
                    anim.ToIdle();
                    Halt();
                    Investigate = true;
                    playerTimer = InvestigateDelay;
                }
            }

            playerTimer--;
            if (playerTimer == 0 || !PlayerInBounds())
            {
                PlayerIsGood();
            }
        }
        else
        {
            //patroling
            if (anim.Idle)
            {
                PlayerIsGood();
            }

        }
    }

    bool PlayerInBounds()
    {
        var pos = player.transform.position;       
        return pos.x > BottomLeft.x && pos.x < TopRight.x && pos.z > BottomLeft.y && pos.z < TopRight.y;
    }

    void CheckVision()
    {
        visionTimer--;
        if (visionTimer == 0)
        {
            var tmp = CanSeePlayer();
            if (!PlayerInBounds()) tmp = false;

            if (tmp)
            {
                if (!See && !Remember)
                {
                    agent.speed = speed;
                    anim.ToRunning();
                    SetPlayerAsGoal();
                }
                playerTimer = MemoryDelay;
                See = true;
            }
            else if (See)
            {
                Remember = true;
                Investigate = See = false;
            }

            visionTimer = 10;
        }
    }

    bool CanSeePlayer()
    {
        //make sure player isn't behind a wall and is within view distance and angle
        
        var dist = (player.transform.position - transform.position);
        dist.y = transform.position.y;
        LastPlayerDistance = dist.magnitude;

        if (LastPlayerDistance > ViewDistance) return false;
        if (Vector3.Angle(transform.forward, dist) > ViewAngle) return false;

        var something = Physics.RaycastAll(new Ray(transform.position, dist), dist.magnitude);
        return !something.Any(g => g.transform.CompareTag("Wall") || g.transform.CompareTag("Door"));
    }

    void OnTriggerEnter(Collider other)
    {
        if (See || Remember) return;
        if (other.transform.CompareTag("Checkpoint"))
        {
            if ((Goal - transform.position).magnitude > 1) return;
            CurrentCheckpoint = (CurrentCheckpoint + 1) % Checks.Length;
            UpdateCheckpoint();
        }
    }

    private int GetNearestPoint(Vector3 pos)
    {
        int bestChoice = -1;
        float dist = 10000;
        for (var i = 0; i < Checks.Length; i++)
        {
            var distance = Checks[i].transform.position - pos;
            if (distance.magnitude < dist)
            {
                dist = distance.magnitude;
                bestChoice = i;
            }
        }
        return bestChoice;
    }

    private void beat()
    {
        Camera.main.GetComponent<CameraShaker>().hit();
    }

    private void kill()
    {
        var tmp = player.GetComponent<PlayerInteractionController>();
        tmp.dmg++;
        if (tmp.dmg >= 5)
        {
            //tmp.Die();
        }
    }

    public void Reset()
    {
        transform.position = initialPos;
        transform.rotation = initialRot;
        CurrentCheckpoint = initialPoint;
        See = Remember = Investigate = false;
        UpdateCheckpoint();
        anim.ToWalking();
    }
}