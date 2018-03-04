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
            else if (r.CompareTag("Human"))
            {
                r.gameObject.GetComponent<DialogueManager>().Reset();
            }
            else
            {
                r.gameObject.SetActive(true);
                var tmp = r.gameObject.GetComponent<ShotAtScript>();
                if (tmp != null) tmp.ResetSelf();
            }
        }        
        resettables.Clear();
    }
}
