using UnityEngine;

public class WeaponSwitchState : MonoBehaviour
{
    public bool Able;

    public void Gain()
    {
        Able = true;
    }

    public void Lose()
    {
        Able = false;
    }
}
