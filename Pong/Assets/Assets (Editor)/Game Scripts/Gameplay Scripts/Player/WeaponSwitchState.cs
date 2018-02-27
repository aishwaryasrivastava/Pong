using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponSwitchState : MonoBehaviour {

    public bool Able;

    void Start()
    {
        Able = true;
    }

    public void ReadyToSwitch()
    {
        gameObject.GetComponentInParent<PlayerWeaponEquip>().ReadyToSwitch();
    }

    public void AttemptSwitch()
    {
        if (Able)
        {
            ReadyToSwitch();
        }
    }

}
