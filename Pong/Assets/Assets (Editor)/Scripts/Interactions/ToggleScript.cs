
using UnityEngine;
using UnityEngine.UI;

public class ToggleScript : MonoBehaviour
{
    void Start()
    {
        gameObject.SetActive(false);
    }

    public void SwapToHere(int id)
    {
        gameObject.SetActive(isWeapon(id));
    }

    public void UpdateValue(int top, int bottom)
    {
        gameObject.GetComponent<Text>().text = top + " / " + bottom;
    }

    private bool isWeapon(int x)
    {
        return x == PlayerWeaponEquip.AK || x == PlayerWeaponEquip.M4 || x == PlayerWeaponEquip.Sniper || x == PlayerWeaponEquip.Pistol;
    }
}
