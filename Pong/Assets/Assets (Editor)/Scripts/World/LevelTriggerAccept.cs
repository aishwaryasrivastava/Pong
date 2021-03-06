﻿using UnityEngine;

public class LevelTriggerAccept : MonoBehaviour
{
    public WorldLoader loader;
    public PlayerInteractionController player;
    public Inventory inv;
    public PlayerWeaponEquip weap;

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            
            inv.SaveState();
            weap.SaveState();
            ResetLevel.ResetChanges();
            var pos = other.transform.position;
            player.RespawnVector = new Vector3(pos.x, pos.y, pos.z);
            loader.TriggerNextLevel();
        }
    }
}
