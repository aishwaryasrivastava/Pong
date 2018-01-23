using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScorekeeperScript : MonoBehaviour {

    private int P1Score, P2Score;
    public Text LeftScore, RightScore, Center;
    public bool GameOver { private set; get; }
    public GameObject resetButton;
    public int ScoreToWin;

	// Use this for initialization
	void Start () {
        ResetScore();
	}
	
	// Update is called once per frame
	void Update () {
		
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
        Center.text = "";
        P1Score = 0;
        P2Score = 0;
        SetCountText();
        GameOver = false;
        resetButton.enabled = false;

    }

    void SetCountText()
    {
        LeftScore.text = "P1: " + P1Score.ToString();
        RightScore.text = "P2: " + P2Score.ToString();
        if (P1Score >= ScoreToWin)
        {
            Center.text = "goo djobe p1";
            EndGame();
        }
        if (P2Score >= ScoreToWin)
        {
            Center.text = "youd one it p2";
            EndGame();
        }
    }

    void EndGame()
    {
        GameOver = true;
        resetButton.GetComponent<Button>.enabled = true;

    }

    void DisplayRestartButton()
    {
        //resetButton.SetActive(true);
    }
}
