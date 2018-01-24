using UnityEngine;

public class StateHolder : MonoBehaviour
{
    private GameState defaultNoBounce; 
    private GameState defaultBounce;
    private GameState custom;

    public GameObject Pad1, Pad2, Ball;
    public BallController ballInfo; //for saving custom

    void Start ()
    {
        defaultNoBounce = new GameState(Pad1.transform.localPosition, Pad2.transform.localPosition,
            Ball.transform.localPosition, new Vector3(0, 0, 1), ballInfo.Speed);
        defaultBounce = new GameState(defaultNoBounce.Paddle1Pos, defaultNoBounce.Paddle2Pos, defaultNoBounce.BallPos,
            new Vector3(-1, 1, 1).normalized, defaultNoBounce.speed);
        custom = new GameState(defaultNoBounce.Paddle1Pos, defaultNoBounce.Paddle2Pos, defaultNoBounce.BallPos, Vector3.zero, 0);
    }

	void Update ()
    {
        //check for keypress
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            LoadState(defaultNoBounce);
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            LoadState(defaultBounce);
        }
        if (Input.GetKeyDown(KeyCode.Return)) //save current state
        {
            SaveState();
        }
        if (Input.GetKeyDown(KeyCode.Backspace)) //load custom state
        {
            LoadState(custom);
        }
    }

    void LoadState(GameState state)
    {
        Pad1.transform.localPosition = state.Paddle1Pos;
        Pad2.transform.localPosition = state.Paddle2Pos;
        Ball.transform.localPosition = state.BallPos;
        ballInfo.direction = state.BallDir;
        ballInfo.localSpeed = state.speed;
        Pad2.GetComponent<Rigidbody>().velocity = Vector3.zero;
    }

    void SaveState()
    {
        custom.Update(Pad1.transform.localPosition, Pad2.transform.localPosition,
            Ball.transform.localPosition, ballInfo.direction, ballInfo.localSpeed);
    }
}

public class GameState
{
    public Vector3 Paddle1Pos, Paddle2Pos, BallPos, BallDir;
    public float speed;

    public GameState(Vector3 p1, Vector3 p2, Vector3 b, Vector3 bDir, float spd)
    {
        Paddle1Pos = p1;
        Paddle2Pos = p2;
        BallPos = b;
        BallDir = bDir;
        speed = spd;
    }

    public void Update(Vector3 p1, Vector3 p2, Vector3 b, Vector3 bDir, float spd)
    {
        Paddle1Pos = p1;
        Paddle2Pos = p2;
        BallPos = b;
        BallDir = bDir;
        speed = spd;
    }
}
