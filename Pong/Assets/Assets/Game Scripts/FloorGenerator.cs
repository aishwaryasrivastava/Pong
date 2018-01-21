using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorGenerator : MonoBehaviour {

    public GameObject[] floorTiles;

	// Use this for initialization
	void Start () {
        for (int i = 0; i < 30; i ++){
            for (int j = 0; j < 30; j++)
            {
                int tile = (int)Random.Range(0, 7);
                GameObject TILE = Instantiate(floorTiles[tile],new Vector3(i*(30/9),0,j*(30/9)),new Quaternion());
                TILE.transform.parent = transform;
            }
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
