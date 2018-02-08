using UnityEngine;

public class GroundInmateScript : MonoBehaviour
{
    private Animator InmateAnimator;
    private float myDirection;
    private Vector3 mySpeed;
    private int time = 0;
    private float timeout = 3000;

    public DialogueManager dialog;

    // Use this for initialization
    void Start()
    {
        InmateAnimator = GetComponent<Animator>();
        InmateAnimator.SetBool("Walking", true);
        myDirection = Random.Range(0, 360);
        //timeout = Random.Range(100, 150);

    }

    void TurnAway()
    {
        time = 0;
        myDirection = myDirection - 180 + Random.Range(-90, 90);
    }

    void TurnAround()
    {
        time = 0;
        myDirection = myDirection - 180;
    }

    // Update is called once per frame
    void Update()
    {
        if (PauseManager.Paused) return;
        if (dialog.talking) return;

        time = time + 1;
        Vector3 myPosition = transform.position;
        mySpeed = new Vector3((float)0.05 * Mathf.Sin(myDirection * Mathf.PI / 180), 0, (float)0.05 * Mathf.Cos(myDirection * Mathf.PI / 180));
        myPosition = myPosition + mySpeed;

        if (time > timeout)
        {
            TurnAway();
        }

        transform.position = myPosition;
        transform.eulerAngles = new Vector3(0, myDirection, 0);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Wall"))
            TurnAway();
        else if (collision.collider.CompareTag("Door"))
        {
            var tmp = collision.collider.gameObject.GetComponent<DoorToggle>();
            if (tmp.Locked) TurnAway();
            else tmp.Toggle(false);
        }
    }

}
