using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudManager : MonoBehaviour {

    private Vector3 speed;
    private int cloudCount;
	// Use this for initialization
	void Start () {
        cloudCount = gameObject.transform.childCount;
        speed = new Vector3(0.05f, 0.0f, 0.0f);
	}
	
	// Update is called once per frame
	void Update () {
        for (int i = 0; i < cloudCount; i++){
            GameObject cloud = transform.GetChild(i).gameObject;
            Vector3 pos = cloud.transform.position;
            pos = pos + speed;
            if (pos.x > 150)
            {
                pos.x = -40;
            }
            cloud.transform.position = pos;
        }

	}
}
