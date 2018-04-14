using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatterLife : MonoBehaviour
{

    public GameObject flour;

	// Use this for initialization
	void Start () {
		Debug.Log("Eggs cracked");
        flour.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
