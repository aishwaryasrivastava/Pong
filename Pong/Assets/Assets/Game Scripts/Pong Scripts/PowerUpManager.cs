using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpManager : MonoBehaviour {
    public GameObject powerUp;
    private GameObject tmp;
    private float freq = 5;
    private float timeCount;
    private float spd = 2;
    private float lifeTime;
    private float maxLife = 1;
	// Use this for initialization
	void Start () {
        tmp = null;
        timeCount = freq;
        lifeTime = 0;
	}
	
	// Update is called once per frame
	void Update () {
        timeCount -= Time.deltaTime;
        if (timeCount < 0)
        {
            tmp = Instantiate(powerUp, GameObject.FindGameObjectWithTag("table").transform);
            timeCount = freq;
            lifeTime = maxLife;
        }
        lifeTime -= Time.deltaTime;
        if (tmp != null) {
            tmp.transform.position -= new Vector3(0, 0, spd * Time.deltaTime);
            if (lifeTime < 0) { Destroy(tmp); }
        }
	}
}
