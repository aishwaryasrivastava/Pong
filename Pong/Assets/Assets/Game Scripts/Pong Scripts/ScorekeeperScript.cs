using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScorekeeperScript : MonoBehaviour {

    private int P1Score, P2Score;
    public Text LeftScore, RightScore, Center;
    public bool GameOver { private set; get; }

	// Use this for initialization
	void Start () {
        P1Score = 0;
        P2Score = 0;
        Center.text = "";
        GameOver = false;
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

    void SetCountText()
    {
        LeftScore.text = "P1: " + P1Score.ToString();
        RightScore.text = "P2: " + P2Score.ToString();
        if (P1Score >= 5)
        {
            Center.text = "goo djobe p1";
            GameOver = true;
        }
        if (P2Score >= 5)
        {
            Center.text = "youd one it p2";
            GameOver = true;
        }
    }
}
