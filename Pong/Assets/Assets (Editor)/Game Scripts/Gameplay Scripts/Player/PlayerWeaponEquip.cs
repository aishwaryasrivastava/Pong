using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWeaponEquip : MonoBehaviour {

    public GameObject[] weapons;
    int current, next;

	// Use this for initialization
	void Start () {
        current = 1;
        next = 0;
        for (int i = 0; i < weapons.Length; i++)
        {
            weapons[i].SetActive(false);
        }
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
        if (sel != current)
        {
            next = sel;
            weapons[current].GetComponent<WeaponSwitchState>().AttemptSwitch();
        }
        /*
        for (int i = 0; i < weapons.Length; i++)
        {
            weapons[i].SetActive(false);
        }
        weapons[sel].SetActive(true);
        */
    }

    public void ReadyToSwitch()
    {
        weapons[current].SetActive(false);
        current = next;
        weapons[current].SetActive(true);
    }
}
