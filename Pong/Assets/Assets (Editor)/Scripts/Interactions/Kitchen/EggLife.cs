using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EggLife : MonoBehaviour
{

    public GameObject[] Eggs = new GameObject[2];
    public GameObject batter;
    bool activateBatter;
	
	// Update is called once per frame
	void Update ()
	{
	    activateBatter = (!Eggs[0].activeSelf && !Eggs[1].activeSelf);
	    if (activateBatter) MixingBowlActivate();
	}

    private void MixingBowlActivate()
    {
        batter.SetActive(true);
    }
}
