using UnityEngine;
using UnityEngine.UI;

public class ScorekeeperScript : MonoBehaviour {

    private int P1Score, P2Score;
    public Text LeftScore, RightScore, Center;
    
    public bool GameOver { private set; get; }
    public Button resetButton;
    public Toggle lightMode;
    public int ScoreToWin;

	// Use this for initialization
	void Start ()
    {
        ResetScore();
	}

    public void P1ScoreOne()
    {
        P1Score++;
        SetCountText();
    }

    public void P2ScoreOne()
    {
        P2Score++;
        SetCountText();
    }

    public void ResetScore()
    {
        //Center.text = "";
        P1Score = 0;
        P2Score = 0;
        SetCountText();
        GameOver = false;
        resetButton.interactable = false;
        lightMode.interactable = true;
    }

    void SetCountText()
    {
        LeftScore.text = "P1: " + P1Score;
        RightScore.text = "P2: " + P2Score;
        if (P1Score >= ScoreToWin)
        {
            Center.text = "P1 is the winner";
            EndGame();
        }
        if (P2Score >= ScoreToWin)
        {
            Center.text = "P2 is the winner";
            EndGame();
        }
    }

    void EndGame()
    {
        GameOver = true;
        resetButton.interactable = true;
        lightMode.interactable = false;
    }
}
