using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInteractionController : MonoBehaviour
{
    public Image UIConfirm;
    public SoundController sounds;

    public float armReach = 8;
    private const float lookCheckTimer = 0.25f;
    private float timer;

    public PlayerMovementController movement;
    public Camera mainCamera;

    public bool InventoryActive;
    public Inventory inventory;
    public PlayerWeaponEquip Equips;

    private Transform activeItem, activeDoor, activeHuman, activeEquip;

    private List<Transform> resettables = new List<Transform>();

    void CheckForEnt()
    {
        //this is fairly expensive      
        
        RaycastHit hit;
        var something = Physics.Raycast(new Ray(mainCamera.transform.position, mainCamera.transform.forward), out hit);
        if (!something || hit.distance > armReach)
        {
            //not looking at anything in range
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeItem = activeDoor = activeHuman = null;
            UIConfirm.gameObject.SetActive(false);
            return;
        }

        if (hit.transform.Equals(activeItem) || hit.transform.Equals(activeDoor) || hit.transform.Equals(activeHuman))
        {
            //still looking at the same item
            return;
        }
        if (hit.transform.CompareTag("Item"))
        {
            activeItem = hit.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = inventory.Full() ? new Color(1, 0, 0, 0.8f) : new Color(0, 0.7f, 0, 0.8f);
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeDoor = activeHuman = activeEquip = null;
        }
        else if (hit.transform.CompareTag("Door"))
        {
            activeDoor = hit.transform;
            UIConfirm.gameObject.SetActive(true);
            var door = activeDoor.GetComponent<DoorToggle>();
            UIConfirm.color = door.Locked && !inventory.HaveItem(door.code) ? new Color(1, 0, 0, 0.8f) : new Color(0, 0.7f, 0, 0.8f);
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeItem = activeHuman = activeEquip = null;
        }
        else if (hit.transform.CompareTag("Human"))
        {
            activeHuman = hit.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = new Color(0, 0.7f, 0, 0.8f);
            activeHuman.GetComponent<DialogueManager>().LookingAt();
            activeItem = activeDoor = activeEquip = null;
        }
        else if (hit.transform.CompareTag("AK") || hit.transform.CompareTag("Pipe"))
        {
            activeEquip = hit.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = new Color(0, 0.7f, 0, 0.8f);
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeItem = activeDoor = activeHuman = null;
        }
        else
        {
            //not looking at anything interactable
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeItem = activeDoor = activeHuman = null;
            UIConfirm.gameObject.SetActive(false);
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
        if (Input.GetKeyDown(KeyCode.E))
        {
            if (activeItem != null)
            {
                var mtp = inventory.AddItem(new Pickup(activeItem.GetComponent<ItemAttributeInformation>(), GetComponent<ItemIconHolder>()));
                if (mtp)
                {
                    activeItem.gameObject.SetActive(false);
                    resettables.Add(activeItem);
                    sounds.PlayDing();
                }
            }
            else if (activeDoor != null)
            {
                var tmp = activeDoor.GetComponent<DoorToggle>();
                var lockedBefore = tmp.Locked;
                tmp.Toggle(inventory.HaveItem(tmp.code));

                if (tmp.Locked) sounds.PlayLocked();
                else
                {
                    if (tmp.Type == DoorToggle.DoorType.Slide) sounds.PlaySlide();
                    else if (tmp.Type == DoorToggle.DoorType.Swing) sounds.PlaySwing();

                    if (lockedBefore) resettables.Add(activeDoor);
                }
            }
            else if (activeHuman != null)
            {
                activeHuman.GetComponent<NPCScript>().TurnTowardsMe(transform.position);
                var dia = activeHuman.GetComponent<DialogueManager>();
                movement.EnterConversation(dia);
                dia.StartDialogue();                
            }
            else if (activeEquip != null)
            {
                if (activeEquip.CompareTag("AK"))
                {
                    Equips.SetAble(PlayerWeaponEquip.AK);
                }
                else if(activeEquip.CompareTag("Pipe"))
                {
                    Equips.SetAble(PlayerWeaponEquip.Pipe);
                }
                activeEquip.gameObject.SetActive(false);
                resettables.Add(activeEquip);
                activeEquip = null;
            }
        }
    }

    void ResetPlayerChanges()
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
        }
        resettables.Clear();
    }

    public void Die()
    {
        transform.position = new Vector3(0, 3.5f, 0);
        inventory.Clear();
        ResetPlayerChanges();
    }

    void Update()
    {
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return;

        if (Input.GetKeyDown(KeyCode.I))
        {
            InventoryActive = !InventoryActive;
            if(InventoryActive) UIConfirm.gameObject.SetActive(false);
            inventory.Swap(InventoryActive);
            sounds.PlayInventory();
        }
        if (Input.GetKeyDown(KeyCode.L))
        {
            Die();
        }
		var tmp = GetComponent<PlayerMovementController> ();
		if ((Input.GetKeyDown (KeyCode.LeftShift)) && tmp.moving) {
			sounds.Running (true);
			tmp.source.Stop ();
		}
		if (Input.GetKeyUp (KeyCode.LeftShift)) {
			sounds.Running (false);
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

public class Pickup
{
    public string ItemId;
    public Sprite UiImage;
    public ItemAttributeInformation.Type Type;

    public Pickup(ItemAttributeInformation info, ItemIconHolder c)
    {
        ItemId = info.id;
        Type = info.type;
        AssignImage(c);
    }

    public Pickup(string id, ItemAttributeInformation.Type t, ItemIconHolder c)
    {
        ItemId = id;
        Type = t;
        AssignImage(c);
    }

    private void AssignImage(ItemIconHolder container)
    {
        switch (Type)
        {
            case ItemAttributeInformation.Type.Axe:
                UiImage = container.axe;
                break;
            case ItemAttributeInformation.Type.Key:
                UiImage = container.key;
                break;
            case ItemAttributeInformation.Type.Keys:
                UiImage = container.keys;
                break;
            case ItemAttributeInformation.Type.Keycode:
                UiImage = container.keycode;
                break;
            case ItemAttributeInformation.Type.Cake:
                UiImage = container.cake;
                break;
            case ItemAttributeInformation.Type.GunWeapon:
                UiImage = container.none;
                break;
            default:
                UiImage = container.none;
                break;
        }
    }
}
