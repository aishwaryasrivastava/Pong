
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
        gameObject.SetActive(id == PlayerWeaponEquip.AK);
    }

    public void UpdateValue(int top, int bottom)
    {
        gameObject.GetComponent<Text>().text = top + " / " + bottom;
    }
}
