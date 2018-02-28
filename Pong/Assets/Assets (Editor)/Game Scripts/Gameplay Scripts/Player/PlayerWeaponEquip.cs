using UnityEngine;
using UnityEngine.UI;

public class PlayerWeaponEquip : MonoBehaviour
{

    public Text ammoCount;
    public GameObject[] weapons;
    private int current, next;
    public const int Pipe = 0, AK = 1;
    public static float timer;

	// Use this for initialization
	void Start ()
    {
        current = 1;
        next = 0;
        foreach (GameObject t in weapons)
        {
            t.SetActive(false);
        }
        SetActiveWeapon(0);
	}
	
	// Update is called once per frame
	void Update ()
	{
	    timer -= Time.deltaTime;
	    if (timer > 0) return;
	    if (Input.GetKeyDown(KeyCode.Alpha0)) SetActiveNone();
        if (Input.GetKeyDown(KeyCode.Alpha1)) SetActiveWeapon(0);
        if (Input.GetKeyDown(KeyCode.Alpha2)) SetActiveWeapon(1);
    }

    public void SetAble(int id)
    {
        weapons[id].GetComponent<WeaponSwitchState>().Gain();
        SetActiveWeapon(id);
    }

    private void SetActiveNone()
    {
        if (current != -1) weapons[current].SetActive(false);
        current = -1;
        ammoCount.GetComponent<ToggleScript>().SwapToHere(current);
    }

    private void SetActiveWeapon(int sel)
    {
        if (weapons[sel].GetComponent<WeaponSwitchState>().Able)
        {
            next = sel;
            ReadyToSwitch();
        }
    }

    public void ResetAll()
    {
        foreach (var a in weapons)
        {
            a.GetComponent<WeaponSwitchState>().Lose();
        }
        Start();
    }

    private void ReadyToSwitch()
    {
        if(current != -1) weapons[current].SetActive(false);
        current = next;
        weapons[current].SetActive(true);
        ammoCount.GetComponent<ToggleScript>().SwapToHere(current);
        timer = 0.6f;
    }
}
