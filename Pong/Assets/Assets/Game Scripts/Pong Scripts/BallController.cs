using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BallController : MonoBehaviour
{
    public Text message;
    public float zMin, zMax, Speed, BounceMult;
    private bool darkMode, paused, waitForPress;
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
        darkMode = !newValue;
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
        Time.timeScale = 1;
    }

    void ResetBall()
    {
        //just debug right now
        direction = new Vector3(Random.Range(-3, 3), Random.Range(-3, 3), nextDir *2).normalized; //test velocity
        transform.localPosition = new Vector3(0, 10, 10 - nextDir*10); //center
        localSpeed = Speed;
        glowingUp = glowingDown = environmentDimming = environmentLightingUp = false;
        waitForPress = true;
        message.text = "Press any key to start";
    }

    private void SmoothDim()
    {
        // Smooth Dimming/Lighting up when dark mode is toggled
        float intensity = MainLight.intensity;
        if (environmentDimming)
        {
            if (intensity > 0) intensity = intensity - 0.1f;
            else
            {
                intensity = 0;
                environmentDimming = false;
            }
        }
        if (environmentLightingUp)
        {
            if (intensity < 1) intensity = intensity + 0.1f;
            else
            {
                intensity = 1;
                environmentLightingUp = false;
            }
        }
        MainLight.intensity = intensity;
    }

    private void BallGlow()
    {
        // Glowing the ball in dark mode
        if (darkMode)
        {
            float haloRange = halo.range;
            if (glowingUp)
            {
                if (haloRange < 0.5) haloRange = haloRange + 0.05f;
                else
                {
                    glowingUp = false;
                    glowingDown = true;
                }
            }

            if (glowingDown)
            {
                if (haloRange > 0) haloRange = haloRange - 0.05f;
                else
                {
                    glowingUp = false;
                    glowingDown = false;
                }
            }
            halo.range = haloRange;
        }
    }

    private void CheckKeys()
    {
        if (waitForPress && Input.anyKeyDown)
        {
            message.text = "";
            waitForPress = false;
        }
        if (Input.GetKeyDown(KeyCode.P) && !scorekeeper.GameOver)
        {
            paused = !paused;
            Time.timeScale = paused ? 0 : 1;
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Time.timeScale = 1;
            SceneManager.LoadScene("Scenes/MainMenu");
        }
    }

    void Update()
    {
        CheckKeys();
        // Moving the ball
        var tmp = transform.localPosition;
        if (tmp.z < zMin)
        {
            //player 2 scored
            ResetBall();
            scorekeeper.P2ScoreOne();
            nextDir = 1;

            if (scorekeeper.GameOver)
            {
                waitForPress = false;
                Time.timeScale = 0;
            }
        }
        else if (tmp.z > zMax)
        {
            //player 1 scored
            ResetBall();
            scorekeeper.P1ScoreOne();
            nextDir = -1;

            if (scorekeeper.GameOver)
            {
                waitForPress = false;
                Time.timeScale = 0;
            }
        }     
    }

    void FixedUpdate ()
    {
        SmoothDim();
        BallGlow();

        rb.velocity = (waitForPress ? 0 : localSpeed) * direction;
    }

    void OnTriggerEnter(Collider other)
    {
        if (darkMode)
        {
            glowingUp = true;
            glowingDown = false;
        }
        bool h = other.gameObject.CompareTag("Hwall"),
            v = other.gameObject.CompareTag("Vwall"),
            z = other.gameObject.CompareTag("Zwall"),
            z2 = other.gameObject.CompareTag("Zwall2");
        if (h || v)
        {
            direction = h
                ? new Vector3(direction.x, -direction.y, direction.z)
                : direction = new Vector3(-direction.x, direction.y, direction.z);

             halo.color = Color.white;
        }
        else if (z && rb.velocity.z < 0 /* P1 */ || z2 && rb.velocity.z > 0 /* P2 */)
        {
            var diff = transform.localPosition - other.transform.localPosition;
            var norm = new Vector2(diff.x, diff.y).normalized;
            direction = new Vector3(norm.x, norm.y, -direction.z);
            localSpeed *= BounceMult;

            halo.color = z ? Color.red : Color.blue;
        }
    }

}
