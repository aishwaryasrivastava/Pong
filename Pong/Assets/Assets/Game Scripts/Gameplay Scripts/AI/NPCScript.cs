using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class NPCScript : MonoBehaviour
{
    Animator prisonAnim = new Animator();
    // Keeps track of how long ago NPC changed directions
    private float time;
    private Vector3 myPosition, mySpeed;
    private int myAngle, goalAngle, shortestPath;
    public float speed, movementLength, timeoutLength;
    private bool halt;
    public int AngleStep;

    public AudioSource source;
    void Awake()
    {
        source = GetComponent<AudioSource>();
    }


    // Use this for initialization
    void Start()
    {
        prisonAnim = gameObject.GetComponent<Animator>();
        source.volume = 1f;
        halt = true;
        time = Random.Range(0.5f, timeoutLength);
    }

    void TurnAndHalt()
    {
        time = Random.Range(1f, timeoutLength);
        halt = true;
        prisonAnim.SetBool("Walking", false);
        prisonAnim.CrossFadeInFixedTime("Idle", 0);
        source.Pause();
        goalAngle = (int) Mathf.Repeat(myAngle + Random.Range(90, 270), 360);
        shortestPath = ClockwiseIdeal(goalAngle, myAngle) ? 1 : -1;
    }

    bool ClockwiseIdeal(int goal, int current)
    {
        return Mathf.Repeat(goal - current, 360) < Mathf.Repeat(current - goal, 360);
    }

    // Update is called once per frame
    void Update()
    {
        time -= Time.deltaTime;

        // If it's been a while since NPC turned, then turn them again
        if (halt)
        {
            if (time < 0)
            {
                halt = false;

                prisonAnim.SetBool("Walking", true);
                prisonAnim.CrossFadeInFixedTime("Walk", 0);
                time = Random.Range(1f, movementLength);
                source.Play();
            }
            if (myAngle != goalAngle)
            {
                myAngle = (int)Mathf.Repeat(myAngle + shortestPath * AngleStep, 360);
                transform.eulerAngles = new Vector3(0, myAngle, 0);
                if (Math.Abs(myAngle - goalAngle) < AngleStep)
                {
                    transform.eulerAngles = new Vector3(0, goalAngle, 0);
                    myAngle = goalAngle;
                }
            }
        }
        else
        {
            if (time < 0)
            {
                TurnAndHalt();
            }
            else
            {
                myPosition = transform.position;
                // Calculate walking speed using current angle
                mySpeed.x = speed * Mathf.Sin(Mathf.PI * myAngle / 180);
                mySpeed.z = speed * Mathf.Cos(Mathf.PI * myAngle / 180);
                myPosition = myPosition + (halt ? 0 : 1) * mySpeed;
                transform.position = myPosition;               
            }
        }

    }

    private void OnCollisionEnter(Collision other)
    {
        if (halt) return;
        if (other.collider.CompareTag("Wall"))
        {
            TurnAndHalt();
        }
        else if (other.collider.CompareTag("Door"))
        {
            var tmp = other.collider.gameObject.GetComponent<DoorToggle>();
            if (tmp.Locked) TurnAndHalt();
            else tmp.Toggle(false);
        }

    }
}
