using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWeaponEquip : MonoBehaviour {

    public GameObject[] weapons;

	// Use this for initialization
	void Start () {
        SetActiveWeapon(0);
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1)) SetActiveWeapon(0);
        if (Input.GetKeyDown(KeyCode.Alpha2)) SetActiveWeapon(1);
    }

    public void SetActiveWeapon(int sel)
    {
        for (int i = 0; i < weapons.Length; i++)
        {
            weapons[i].SetActive(false);
        }
        weapons[sel].SetActive(true);
    }
}
