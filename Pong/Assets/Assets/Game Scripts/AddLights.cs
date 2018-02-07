using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddLights : MonoBehaviour {

	// Use this for initialization
	void Start () {
        for (int i = 0; i < transform.childCount;i++){
            Transform prisonCell = transform.GetChild(i);
            Transform tubeLight = prisonCell.GetChild(4).GetChild(0).GetChild(0);
            tubeLight.gameObject.AddComponent<Light>();
            Light prisonLight = tubeLight.GetComponent<Light>();
            prisonLight.type = LightType.Point;
            Debug.Log("Light added!");


        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
