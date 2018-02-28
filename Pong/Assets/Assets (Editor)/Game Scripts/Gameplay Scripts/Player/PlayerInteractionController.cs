using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInteractionController : MonoBehaviour
{
    public Image UIConfirm;
    public SoundController sounds;
    public Text fps;

    public float armReach = 8;
    private const float lookCheckTimer = 0.1f;
    private float timer;

    private int ticker;
    private bool showFps = true;

    public PlayerMovementController movement;
    public Camera mainCamera;
    public WorldLoader loader;

    public bool InventoryActive;
    public Inventory inventory;
    public PlayerWeaponEquip Equips;

    private Transform activeItem, activeDoor, activeHuman, activeEquip, activeTransfer;

    void Start()
    {
        fps.gameObject.SetActive(true);
    }

    void ResetThings()
    {
        if (activeHuman != null) activeHuman.GetComponent<DialogueManager>().NoLongerLookingAt();
        activeDoor = activeHuman = activeEquip = activeItem = activeTransfer = null;
        UIConfirm.gameObject.SetActive(true);
        UIConfirm.color = new Color(0, 0.7f, 0, 0.8f);
    }
    void CheckForEnt()
    {
        //this is somewhat expensive      
        
        RaycastHit hit;
        var something = Physics.Raycast(new Ray(mainCamera.transform.position, mainCamera.transform.forward), out hit);
        if (!something || hit.distance > armReach)
        {
            //not looking at anything at all within range
            ResetThings();
            UIConfirm.gameObject.SetActive(false);
            return;
        }

        if (hit.transform.Equals(activeItem) || hit.transform.Equals(activeDoor) || 
            hit.transform.Equals(activeHuman) || hit.transform.Equals(activeEquip) ||
            hit.transform.Equals(activeTransfer))
        {
            //still looking at the same item as before
            return;
        }

        ResetThings();
        if (hit.transform.CompareTag("Item"))
        {
            activeItem = hit.transform;          
            if (inventory.Full()) UIConfirm.color = new Color(1, 0, 0, 0.8f);
        }
        else if (hit.transform.CompareTag("Door"))
        {
            activeDoor = hit.transform;
            var door = activeDoor.GetComponent<DoorToggle>();
            if (door.Locked && !inventory.HaveItem(door.code)) UIConfirm.color = new Color(1, 0, 0, 0.8f);
        }
        else if (hit.transform.CompareTag("Human"))
        {
            activeHuman = hit.transform;
            activeHuman.GetComponent<DialogueManager>().LookingAt();          
        }
        else if (hit.transform.CompareTag("AK") || hit.transform.CompareTag("Pipe"))
        {
            activeEquip = hit.transform;           
        }
        else if (hit.transform.CompareTag("Transfer"))
        {
            activeTransfer = hit.transform;
        }
        else
        {
            //not looking at anything interactable
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
                    ResetLevel.resettables.Add(activeItem);
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

                    if (lockedBefore) ResetLevel.resettables.Add(activeDoor);
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
                ResetLevel.resettables.Add(activeEquip);
                activeEquip = null;
            }
            else if (activeTransfer != null)
            {
                ResetLevel.resettables.Clear(); //there's no going back now
                //inventory.Clear(); //unsure about this
                loader.TriggerNextLevel();
            }
        }
    }

    void ResetPlayerChanges()
    {
        transform.position = new Vector3(0, 3.5f, 0);
        inventory.Clear();
        ResetLevel.ResetChanges();
        Equips.ResetAll();
    }

    public void Die()
    {       
        ResetPlayerChanges();
    }

    private void UpdateFps()
    {
        if (Input.GetKeyDown(KeyCode.F1))
        {
            showFps = !showFps;
            fps.gameObject.SetActive(showFps);
        }
        ticker++;
        if (ticker > 100)
        {
            ticker = 0;
            fps.text = (int)(1 / Time.deltaTime) + " fps";
        }
    }

    void Update()
    {
        UpdateFps();
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
