﻿using System;
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
    private float playerTimer, seeTimer, visionRepeatTimer = 0.1f;
    public float ViewDistance, ViewAngle, LastPlayerDistance;

    private const float eyeballDelay = 1, MemoryDelay = 10, InvestigateDelay = 2;
    private bool PlayerInRange, Dead;

    public Transform[] Checks;
    public int CurrentCheckpoint;

    private Vector3 initialPos;
    private Quaternion initialRot;
    private int initialPoint;
    private Vector3 Goal;
	private Boolean attention = true;
    //GuardAnimHandler anim;
	Guard4AnimHandler anim;
    private NavMeshAgent agent;

    void Start()
    {
        //anim = GetComponent<GuardAnimHandler>();
		anim = GetComponent<Guard4AnimHandler>();
        agent = GetComponent<NavMeshAgent>();
        var rot = transform.rotation;
        var pos = transform.position;
        initialRot = new Quaternion(rot.x, rot.y, rot.z, rot.w);
        initialPos = new Vector3(pos.x, pos.y, pos.z);
        initialPoint = CurrentCheckpoint;
        playerTimer = 1000;
    }

    public void PlayerIsGood()
    {
        See = Remember = Investigate = false;
        agent.speed = walkingSpeed;
        playerTimer = seeTimer = 0;
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

    public void Halt()
    {
        
        agent.isStopped = true;     
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
            playerTimer = MemoryDelay;
            SetPlayerAsGoal();
        }
    }

    public void TurnTowardsMe(Vector3 me, float rads)
    {
        var goal = me - transform.position;
        goal.y = transform.forward.y;
        transform.forward = Vector3.RotateTowards(transform.forward, goal, rads, 10);
    }

    private bool HitOrTurn()
    {
        var towards = player.transform.position - transform.position;
        towards.y = 0;
        return Vector3.Angle(transform.forward, towards) < 30;
    }

    void Update()
    {
        if (PauseManager.Paused) return;
        if (Dead) return;
        if (agent.isStopped) return;

        if (!agent.pathPending)
        {
            if (agent.remainingDistance <= agent.stoppingDistance)
            {
                if (!agent.hasPath || Math.Abs(agent.velocity.sqrMagnitude) < 0.001f)
                {
                    CurrentCheckpoint = (CurrentCheckpoint + 1) % Checks.Length;
                    UpdateCheckpoint();
                }
            }
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (PauseManager.Paused) return;
        if (Dead) return;

        CheckVision();
        CheckSound();
        PlayerInBounds();

        if (See)
        {
            //chasing player   
            LastPlayerDistance = (transform.position - player.transform.position).magnitude;
            if (LastPlayerDistance < attackDistance)
            {                
                if (HitOrTurn())
                {
                    anim.ToAttacking();
                    Halt();
                }
                else
                {
                    anim.ToIdle();
                    TurnTowardsMe(player.transform.position, 0.1f);
                }
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
            if (!anim.started)
            {
                PlayerIsGood();
            }
        }
		if(See && attention){
			attention = false;
			var tmp = gameObject.GetComponent<AISoundController> ();
			tmp.PlayHey ();
		}
    }

    void PlayerInBounds()
    {
        var pos = player.transform.position;       
        PlayerInRange = pos.x > BottomLeft.x && pos.x < TopRight.x && pos.z > BottomLeft.y && pos.z < TopRight.y;
    }

    void CheckVision()
    {
        visionRepeatTimer -= Time.deltaTime;
        if (visionRepeatTimer < 0)
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
                if (seeTimer <= 0) seeTimer = eyeballDelay;
                seeTimer -= Time.deltaTime;
                if (seeTimer < 0)
                {
                    Remember = true;
                    Investigate = See = false;
                }
            }

            visionRepeatTimer = 0.1f;
        }
    }

    bool CanSeePlayer()
    {
        //make sure player isn't behind a wall and is within view distance and angle
        
        var dist = (player.transform.position - transform.position);
        dist.y = transform.position.y;
        LastPlayerDistance = dist.magnitude;

        if (LastPlayerDistance > ViewDistance) return false;
        if (Vector3.Angle(transform.forward, dist) > ViewAngle && LastPlayerDistance > attackDistance) return false;     

        var something = Physics.RaycastAll(new Ray(transform.position, dist), dist.magnitude);
        return !something.Any(g => g.transform.CompareTag("Wall") || g.transform.CompareTag("Door"));
    }

    void OnTriggerEnter(Collider other)
    {
        return;
        //return;
        if (See || Remember || Dead)
        {
            Debug.Log("ignoring");
            return;
        }
        if (other.transform.CompareTag("Checkpoint"))
        {
            if (!other.transform.Equals(Checks[CurrentCheckpoint])) return;
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
        //tmp.dmg++;
		tmp.TakeDamage(1);
		
    }

    private void clean()
    {
        //gameObject.SetActive(false);
    }

    public void KillMe()
    {
        Dead = true;
        Halt();
        anim.ToDied();
        ResetLevel.Add(transform);
        GetComponent<CapsuleCollider>().enabled = false;
    }

    public void Reset()
    {
        gameObject.SetActive(true);
        GetComponent<CapsuleCollider>().enabled = true;
        transform.position = initialPos;
        transform.rotation = initialRot;
        CurrentCheckpoint = initialPoint;
        See = Remember = Investigate = Dead = false;
        anim.Reset();
        Unhalt();
        UpdateCheckpoint();
        
    }

	public void found(){
		See = true;
	}
}