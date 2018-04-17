using System;
using UnityEngine;

public class TriggerAction : MonoBehaviour
{
    public Inventory inventory;
    public PlayerInteractionController interact;
    public ScorePoker score;

    public DoorToggle[] UnlockMe;
    public GameObject[] EnableMe;
    public GameObject[] DisableMe;

    public string[] ItemsNeeded;
    public int RepNeeded;
    public int ScoreNeeded;

    public bool CheckRequirement()
    {
        if (!inventory.HaveItemAdvanced(ItemsNeeded)) return false;
        if (interact.GetTotalPopularity() < RepNeeded) return false;
        if (score.scoreNum < ScoreNeeded) return false;
        return true;
    }

    public void Activate()
    {
        foreach (var door in UnlockMe)
        {
            door.Toggle(true);
            ResetLevel.Add(door.gameObject.transform);
        }

        foreach (var obj in DisableMe)
        {
            obj.SetActive(false);
            ResetLevel.Add(obj.transform);
        }

        foreach (var obj in EnableMe)
        {
            obj.SetActive(true);
            ResetLevel.Add(obj.transform);
        }
    }
}
