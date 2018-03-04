using System.Linq;
using UnityEngine;

public class GuardScript4 : MonoBehaviour {

	public GameObject player;
    public PlayerMovementController soundOutput;

	public float attackDistance;
    public float speed;
	public float walkingSpeed;

	private bool Remember;
    private int playerTimer;

    private const int MemoryDelay = 600;

    public Transform[] Checks;
    public int CurrentCheckpoint;

	private Vector3 initialPos;
	private Quaternion initialRot;
    private Vector3 GoHere;

	GuardAnimHandler anim;

	void Start ()
    {
		anim = GetComponent<GuardAnimHandler> ();
        var rot = transform.rotation;
        var pos = transform.position;
        initialRot = new Quaternion(rot.x, rot.y, rot.z, rot.w);
        initialPos = new Vector3(pos.x, pos.y, pos.z);
        playerTimer = 1000;
        UpdateCheckpoint();
    }

    public void PlayerIsGood()
    {
        Remember = false;
        CurrentCheckpoint = GetNearestPoint();
        UpdateCheckpoint();
        anim.ToWalking();
    }

    private void UpdateCheckpoint()
    {
        GoHere = Checks[CurrentCheckpoint].position;
        GoHere.y = transform.position.y;
        transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, 5f, 100);
    }

	// Update is called once per frame
	void FixedUpdate ()
	{
	    if (PauseManager.Paused) return;
        if (Remember)
        {
            //chasing player
            GoHere = player.transform.position;
            GoHere.y = transform.position.y;
            transform.forward = Vector3.RotateTowards(transform.forward, GoHere - transform.position, 0.1f, 10);
            transform.Translate(new Vector3(0, 0, speed), Space.Self);

            if ((transform.position - GoHere).magnitude < attackDistance)
            {
                Beat();
                anim.ToAttacking();
            }           

            playerTimer--;
            if (playerTimer == 0 || GoHere.z < 17)
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

	void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {          
            //make sure player isn't behind a wall
            var dist = (other.transform.position - transform.position);
            var something = Physics.RaycastAll(new Ray(transform.position, dist), dist.magnitude);
            if (!something.Any(g => g.transform.CompareTag("Wall") || g.transform.CompareTag("Door")))
            {
                playerTimer = MemoryDelay;
                if (!Remember) anim.ToRunning();
                Remember = true;
            }
        }
        if (Remember) return;
        if (other.transform.CompareTag("Checkpoint"))
        {
            if ((GoHere - transform.position).magnitude > 1) return;
            CurrentCheckpoint = (CurrentCheckpoint + 1) % Checks.Length;
            UpdateCheckpoint();
        }
    }

	private int GetNearestPoint()
	{
	    int bestChoice = -1;
	    float dist = 10000;
	    for (var i = 0; i < Checks.Length; i++)
	    {
	        var distance = Checks[i].transform.position - transform.position;
	        if (distance.magnitude < dist)
	        {
	            dist = distance.magnitude;
	            bestChoice = i;
	        }
        }
	    return bestChoice;
	}

	private void Beat()
	{
		Camera.main.GetComponent<CameraShaker>().hit();
        //Hurt();
	}

	private void Hurt()
	{
		var tmp = player.GetComponent<PlayerMovementController>();
        tmp.dmg++;
	    if (tmp.dmg >= 5) player.GetComponent<PlayerInteractionController>().Die();
	}

    public void Reset()
    {
        transform.position = initialPos;
        transform.rotation = initialRot;
        Remember = false;
        GoHere = transform.position;
    }
}