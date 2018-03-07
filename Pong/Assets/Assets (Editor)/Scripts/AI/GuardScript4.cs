using System.Linq;
using UnityEngine;

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
    public float ViewDistance, ViewAngle, RotationSpeed, LastPlayerDistance;

    private const int MemoryDelay = 600, InvestigateDelay = 120;

    public Transform[] Checks;
    public int CurrentCheckpoint;

    private Vector3 initialPos;
    private Quaternion initialRot;
    private int initialPoint;
    private Vector3 GoHere;

    GuardAnimHandler anim;

    void Start()
    {
        anim = GetComponent<GuardAnimHandler>();
        var rot = transform.rotation;
        var pos = transform.position;
        initialRot = new Quaternion(rot.x, rot.y, rot.z, rot.w);
        initialPos = new Vector3(pos.x, pos.y, pos.z);
        initialPoint = CurrentCheckpoint;
        playerTimer = 1000;
        UpdateCheckpoint();
        ResetLevel.resettables.Add(transform);
    }

    public void PlayerIsGood()
    {
        See = Remember = Investigate = false;
        CurrentCheckpoint = GetNearestPoint(transform.position);
        UpdateCheckpoint();
        anim.ToWalking();
    }

    private void UpdateCheckpoint()
    {
        GoHere = Checks[CurrentCheckpoint].position;
        GoHere.y = transform.position.y;
        //transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, 5f, 100);
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (PauseManager.Paused) return;

        CheckVision();
        transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, RotationSpeed, 10);

        if (See)
        {
            //chasing player
            GoHere = player.transform.position;
            GoHere.y = transform.position.y;

            if ((transform.position - GoHere).magnitude < attackDistance)
            {
                anim.ToAttacking();
            }
            else
            {
                transform.Translate(new Vector3(0, 0, speed), Space.Self);
                anim.ToRunning();
            }

            if (!PlayerInBounds()) PlayerIsGood();
        }
        else if (Remember)
        {
            //chasing last player location
            if (!Investigate)
            {
                transform.Translate(new Vector3(0, 0, speed), Space.Self);
                if ((transform.position - GoHere).magnitude < 1)
                {
                    anim.ToIdle();
                    Investigate = true;
                    GoHere = player.transform.position;
                    GoHere.y = transform.position.y;
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
            if (anim.Idle) anim.ToWalking();
            transform.Translate(new Vector3(0, 0, walkingSpeed), Space.Self);
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
                if (!See && !Remember) anim.ToRunning();
                playerTimer = MemoryDelay;
                See = true;
            }
            else if (See)
            {
                Remember = true;
                See = false;
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
            if ((GoHere - transform.position).magnitude > 1) return;
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