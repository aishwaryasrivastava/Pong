using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetLevel : MonoBehaviour
{
    public static List<Transform> resettables = new List<Transform>();

    public static void ResetChanges()
    {
        foreach (var r in resettables)
        {
            if (r.CompareTag("Door"))
            {
                r.GetComponent<DoorToggle>().Locked = true;
            }
            else if (r.CompareTag("Item"))
            {
                r.gameObject.SetActive(true);
            }
            else if (r.CompareTag("Destroyable"))
            {
                r.gameObject.GetComponent<ShotAtScript>().ResetSelf();
            }
        }        
        resettables.Clear();
    }
}
