﻿using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Pickup
{
    public int ItemId;
    public Sprite UiImage;
    public ItemAttributeInformation.Type Type;

    public Pickup(ItemAttributeInformation info)
    {
        ItemId = ItemIDchip.CurrentChip++;
        UiImage = info.image;
        Type = info.type;
    }
}

public class PlayerInteractionController : MonoBehaviour
{

    public SoundController sounds;

    public float armReach = 8;
    private const float lookCheckTimer = 0.5f;
    private float timer;

    public PlayerMovementController movement;
    public Camera mainCamera;

    public bool InventoryActive;
    public Inventory inventory;

    private Transform activeItem, activeDoor, activeHuman;

    void CheckForEnt()
    {
        //this is semi expensive
        if (activeItem != null)
        {
            ((Behaviour)activeItem.GetComponent("Halo")).enabled = false;
            activeItem = null;
        }
        if (activeDoor != null)
        {
            ((Behaviour)activeDoor.GetComponent("Halo")).enabled = false;
            activeDoor = null;
        }
        if (activeHuman != null)
        {
            ((Behaviour)activeHuman.GetComponent("Halo")).enabled = false;
            activeHuman = null;
        }

        var hits = Physics.RaycastAll(new Ray(mainCamera.transform.position, mainCamera.transform.forward), armReach).OrderBy(h => h.distance).ToArray();
        if (hits.Length == 0) return;
        var item = hits[0];

        if (item.transform.CompareTag("Item"))
        {
            activeItem = item.transform;
            ((Behaviour) activeItem.GetComponent("Halo")).enabled = true;
        }
        else if (item.transform.CompareTag("Door"))
        {
            activeDoor = item.transform;
            ((Behaviour)activeDoor.GetComponent("Halo")).enabled = true;
        }
        else if (item.transform.CompareTag("Human"))
        {
            activeHuman = item.transform;
            ((Behaviour)activeHuman.GetComponent("Halo")).enabled = true;
        }

    }

    void CheckInventoryControls()
    {
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            inventory.Scroll(-1);
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            inventory.Scroll(1);
        }
        if (Input.GetKeyDown(KeyCode.Delete))
        {
            inventory.DropSelectedItem();
        }
    }

    void CheckInteractionControls()
    {       
        if (Input.GetMouseButtonDown(0))
        {
            if (activeItem != null)
            {
                var mtp = inventory.AddItem(new Pickup(activeItem.GetComponent<ItemAttributeInformation>()));
                if (mtp)
                {
                    Destroy(activeItem.gameObject);
                    sounds.PlayDing();
                }
            }
            else if (activeDoor != null)
            {
                var tmp = activeDoor.GetComponent<DoorToggle>();
                tmp.Toggle(inventory.HaveKeyItem());
                if (tmp.Locked) sounds.PlayLocked();
            }
            else if (activeHuman != null)
            {
                //talk to this person
                //this activates somewhere else 
            }
        }
    }

    void Update()
    {
        if (PauseManager.Paused) return;
        if (Input.GetKeyDown(KeyCode.I))
        {
            InventoryActive = !InventoryActive;
            inventory.Swap(InventoryActive);
            sounds.PlayInventory();
        }
        if (!InventoryActive)
        {
            CheckInteractionControls();
            timer += Time.deltaTime;
            if (timer > lookCheckTimer)
            {
                timer -= lookCheckTimer;
                CheckForEnt();
            }
        }
        else CheckInventoryControls();
    }
}
