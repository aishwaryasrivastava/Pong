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
    private float playerTimer, visionTimer = 0.25f;
    public float ViewDistance, ViewAngle, LastPlayerDistance;

    private const float MemoryDelay = 10, InvestigateDelay = 2;
    private bool PlayerInRange;

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
        
        agent.isStopped = true;
        agent.updatePosition = false;
        agent.updateRotation = false;
        //TurnTowardsMe(player.transform.position);
        //GetComponent<Rigidbody>().angularVelocity = Vector3.zero;       
    }

    private void Unhalt()
    {
        agent.isStopped = false;
        agent.updatePosition = true;
        agent.updateRotation = true;
    }

    private void CheckSound()
    {
        if (See) return;
        var sound = soundOutput.CurrentSoundOutput;
        if (LastPlayerDistance < sound && PlayerInRange)
        {
            Remember = true;
            anim.ToRunning();
            agent.speed = speed;
            SetPlayerAsGoal();
        }
    }

    public void TurnTowardsMe(Vector3 me)
    {
        var goal = me - transform.position;
        goal.y = transform.forward.y;
        transform.forward = Vector3.RotateTowards(transform.forward, goal, 5, 100);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (PauseManager.Paused) return;
        if (anim.dead) return;

        CheckVision();
        CheckSound();
        PlayerInBounds();

        if (See)
        {
            //chasing player   
            //LastPlayerDistance = (transform.position - player.transform.position).magnitude;
            if ((transform.position - player.transform.position).magnitude < attackDistance)
            {
                anim.ToAttacking();
                if (!agent.isStopped) Halt();
            }
            else
            {
                anim.ToRunning();
                if (agent.isStopped) Unhalt();
                SetPlayerAsGoal();
            }

            if (!PlayerInRange) PlayerIsGood();
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

            playerTimer -= Time.deltaTime;
            if (playerTimer < 0 || !PlayerInRange)
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

    void PlayerInBounds()
    {
        var pos = player.transform.position;       
        PlayerInRange = pos.x > BottomLeft.x && pos.x < TopRight.x && pos.z > BottomLeft.y && pos.z < TopRight.y;
    }

    void CheckVision()
    {
        visionTimer -= Time.deltaTime;
        if (visionTimer < 0)
        {
            var tmp = CanSeePlayer();
            if (!PlayerInRange) tmp = false;

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

            visionTimer = 0.25f;
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
        if (See || Remember || anim.dead) return;
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
            tmp.Die();
        }
    }

    private void clean()
    {
        gameObject.SetActive(false);
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