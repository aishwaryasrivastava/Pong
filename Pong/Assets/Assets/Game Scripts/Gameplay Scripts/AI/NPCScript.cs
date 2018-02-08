using UnityEngine;

public class NPCScript : MonoBehaviour
{
    Animator prisonAnim = new Animator();
    // Keeps track of how long ago NPC changed directions
    int time = 0;
    Vector3 myPosition, mySpeed = new Vector3();
    float myAngle;
    public float speed;
    public int timeout;
    private bool inHall;

    // Use this for initialization
    void Start()
    {
        prisonAnim = gameObject.GetComponent<Animator>();
        prisonAnim.SetBool("Walking", true);
        inHall = false;

    }

    void turn()
    {
        time = 0;
        myAngle = myAngle - Random.Range(180, 270);
    }


    // Update is called once per frame
    void Update()
    {

        Debug.Log(inHall);
        time = time + 1;
        myPosition = transform.position;
        // Calculate walking speed using current angle
        mySpeed.x = speed * Mathf.Sin(Mathf.PI * myAngle / 180);
        mySpeed.z = speed * Mathf.Cos(Mathf.PI * myAngle / 180);


        // If it's been a while since NPC turned, then turn them again
        if(time > timeout)
        {
            turn();
        }

        myPosition = myPosition + mySpeed;
        transform.position = myPosition;
        transform.eulerAngles = new Vector3(0, myAngle, 0);

    }
    private void OnCollisionEnter(Collision other)


    {
        if (other.collider.CompareTag("Wall")){
            turn();
        }

    }
}
