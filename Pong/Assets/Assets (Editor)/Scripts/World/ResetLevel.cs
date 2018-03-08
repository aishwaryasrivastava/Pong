using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetLevel : MonoBehaviour
{
    private static List<Transform> resettables = new List<Transform>();

    public static void Add(Transform t)
    {
        resettables.Add(t);
    }

    public static void Clear() { resettables.Clear();}

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
            else if (r.CompareTag("Guard") || r.CompareTag("hwG2") || r.CompareTag("hwG1"))
            {
                var tmp = r.gameObject.GetComponent<ShotAtScriptHuman>();
                if (tmp != null) tmp.ResetSelf();
                
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