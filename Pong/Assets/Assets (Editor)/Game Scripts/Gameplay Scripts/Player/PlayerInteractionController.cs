using System;
using System.Linq;
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

    private Transform activeItem, activeDoor, activeHuman;

    void CheckForEnt()
    {
        //this is fairly expensive      
        
        var hits = Physics.RaycastAll(new Ray(mainCamera.transform.position, mainCamera.transform.forward), armReach).OrderBy(h => h.distance).ToArray();
        if (hits.Length == 0)
        {
            //not looking at anything at all
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeItem = activeDoor = activeHuman = null;
            UIConfirm.gameObject.SetActive(false);
            return;
        }

        var item = hits[0];
        if (item.transform.Equals(activeItem) ||  item.transform.Equals(activeDoor) || item.transform.Equals(activeHuman))
        {
            //still looking at the same item
            return;
        }
        if (item.transform.CompareTag("Item"))
        {
            activeItem = item.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = inventory.Full() ? new Color(1, 0, 0, 0.8f) : new Color(0, 0.7f, 0, 0.8f);
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeDoor = activeHuman = null;
        }
        else if (item.transform.CompareTag("Door"))
        {
            activeDoor = item.transform;
            UIConfirm.gameObject.SetActive(true);
            var door = activeDoor.GetComponent<DoorToggle>();
            UIConfirm.color = door.Locked && !inventory.HaveItem(door.code) ? new Color(1, 0, 0, 0.8f) : new Color(0, 0.7f, 0, 0.8f);
            if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
            activeItem = activeHuman = null;
        }
        else if (item.transform.CompareTag("Human"))
        {
            activeHuman = item.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = new Color(0, 0.7f, 0, 0.8f);
            activeHuman.GetComponent<DialogueManager>().LookingAt();
            activeItem = activeDoor = null;
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
        if (Input.GetMouseButtonDown(0))
        {
            if (activeItem != null)
            {
                var mtp = inventory.AddItem(new Pickup(activeItem.GetComponent<ItemAttributeInformation>(), GetComponent<ItemIconHolder>()));
                if (mtp)
                {
                    Destroy(activeItem.gameObject);
                    sounds.PlayDing();
                }
            }
            else if (activeDoor != null)
            {
                var tmp = activeDoor.GetComponent<DoorToggle>();
                tmp.Toggle(inventory.HaveItem(tmp.code));
                if (tmp.Locked) sounds.PlayLocked();
            }
            else if (activeHuman != null)
            {
                activeHuman.GetComponent<NPCScript>().TurnTowardsMe(transform.position);
                var dia = activeHuman.GetComponent<DialogueManager>();
                movement.EnterConversation(dia);
                dia.StartDialogue();                
            }
        }
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
