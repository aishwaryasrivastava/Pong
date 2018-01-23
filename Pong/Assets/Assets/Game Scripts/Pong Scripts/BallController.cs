using UnityEngine;

public class BallController : MonoBehaviour
{
    public float zMin, zMax, Speed, BounceMult;
    private bool darkMode;
    private const float zMove = 1;
    private float localSpeed;
    private Rigidbody rb;
    private Vector3 direction;
    private int nextDir = 1;
    private Light halo;
    // State of the ball
    private bool glowingUp, glowingDown;
    // State of the environment
    private bool environmentDimming, environmentLightingUp;
    public Light MainLight;
    public ScorekeeperScript scorekeeper;

    public void toggleDarkMode(bool newValue){
        darkMode = newValue;
        environmentDimming = darkMode;
        environmentLightingUp = !darkMode;
    }

	void Start ()
    {
	    rb = GetComponent<Rigidbody>();
        ResetBall();
        halo = gameObject.GetComponent<Light>();


    }

    public void RestartGame()
    {
        scorekeeper.ResetScore();
        ResetBall();
    }

    void ResetBall()
    {
        //just debug right now
        direction = new Vector3(Random.Range(-3, 3), Random.Range(-3, 3), nextDir *2).normalized; //test velocity
        transform.localPosition = new Vector3(0, 10, 10 - nextDir*10); //center
        localSpeed = Speed;
        glowingUp = false;
        glowingDown = false;
        environmentDimming = false;
        environmentLightingUp = false;
    }

    void Update()
    {
        // Smooth Dimming/Lighting up when dark mode is toggled
        float intensity = MainLight.intensity;
        if (environmentDimming) {
            if (intensity > 0)
            {
                intensity = intensity - 0.1f;
            }
            else {
                environmentDimming = false;
            }
        }
        if (environmentLightingUp) {
            if (intensity < 1){
                intensity = intensity + 0.1f;
            }
            else {
                environmentLightingUp = false;
            }
        }
        MainLight.intensity = intensity;

        // Moving the ball
        var tmp = transform.localPosition;
        if (tmp.z < zMin)
        {
            //player 2 scored
            scorekeeper.P2ScoreOne();
            nextDir = 1;
            if (!scorekeeper.GameOver)
            {
                ResetBall();
            }
        }
        else if (tmp.z > zMax)
        {
            //player 1 scored
            scorekeeper.P1ScoreOne();
            nextDir = -1;
            if (!scorekeeper.GameOver)
            {
                ResetBall();
            }
        }

        // Glowing the ball in dark mode
        if (darkMode)
        {
            float haloRange = halo.range;
            if (glowingUp)
            {
                if (haloRange < 0.5)
                {
                    haloRange = haloRange + 0.05f;
                }
                else { glowingUp = false; glowingDown = true; }
            }

            if (glowingDown)
            {
                if (haloRange > 0)
                {
                    haloRange = haloRange - 0.05f;
                }
                else { glowingUp = false; glowingDown = false; }
            }
            halo.range = haloRange;
        }
    }

    void FixedUpdate ()
    {
        rb.velocity = localSpeed * direction;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Hwall"))
        {
            direction = new Vector3(direction.x, -direction.y, direction.z);
        }
        else if (other.gameObject.CompareTag("Vwall"))
        {
            direction = new Vector3(-direction.x, direction.y, direction.z);
        }
        else if ((other.gameObject.CompareTag("Zwall") && rb.velocity.z < 0) || //p1
                 (other.gameObject.CompareTag("Zwall2") && rb.velocity.z > 0))  //p2
        {
            var diff = (transform.localPosition - other.transform.localPosition);
            var norm = new Vector2(diff.x, diff.y).normalized;
            direction = new Vector3(norm.x, norm.y, -direction.z);
            localSpeed *= BounceMult;

            // Glowing the ball red/blue when it hits a paddle
            if (darkMode)
            {
                glowingUp = true; glowingDown = false;
                if (other.gameObject.CompareTag("Zwall"))
                {
                    halo.color = Color.red;

                }
                else { halo.color = Color.blue; }
            }
        }

        // Glowing the ball white when it hits the other walls/table top
        if (darkMode&&(other.gameObject.CompareTag("Hwall")||other.gameObject.CompareTag("Vwall"))){
            glowingUp = true; glowingDown = false;
            halo.color = Color.white;
        }
    }


}
