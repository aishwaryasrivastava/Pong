using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInteractionController : MonoBehaviour
{
    public Image UIConfirm;
    public SoundController sounds;
    public Text fps;

    public Vector3 RespawnVector = new Vector3(0, 3.5f, 0);

    public float armReach = 8;
    private const float lookCheckTimer = 0.1f;
    private float timer;

    private int ticker;
    private bool showFps = true;
    public int dmg;

    public PlayerMovementController movement;
    public Camera mainCamera;

    public bool InventoryActive, inspectingSomething;
    public Inventory inventory;
    public GameObject uiInspectable; // change to specific class once settle on static vs. interactive inspectable design
    public PlayerWeaponEquip Equips;

    private const int Item = 0, Door = 1, Human = 2, Equip = 3, Inspectable = 4;
    private readonly Transform[] active = {null, null, null, null, null};

    void Start()
    {
        fps.gameObject.SetActive(true);
    }

    void ResetThings()
    {
        if (active[Human] != null) active[Human].GetComponent<DialogueManager>().NoLongerLookingAt();
        for (var i = 0; i < active.Length; i++)
        {
            active[i] = null;
        }
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

        if (active.Any(g => hit.transform.Equals(g)))
        {
            //still looking at the same item as before
            return;
        }

        ResetThings();
        if (hit.transform.CompareTag("Item"))
        {
            active[Item] = hit.transform;          
            if (inventory.Full()) UIConfirm.color = new Color(1, 0, 0, 0.8f);
        }
        else if (hit.transform.CompareTag("Door"))
        {
            active[Door] = hit.transform;
            var door = active[Door].GetComponent<DoorToggle>();
            if (door.Locked && !inventory.HaveItem(door.code)) UIConfirm.color = new Color(1, 0, 0, 0.8f);
        }
        else if (hit.transform.CompareTag("Human"))
        {
            active[Human] = hit.transform;
            active[Human].GetComponent<DialogueManager>().LookingAt();          
        }
        else if (hit.transform.CompareTag("AK") || hit.transform.CompareTag("Pipe") || hit.transform.CompareTag("HandGun"))
        {
            active[Equip] = hit.transform;           
        }
        else if (hit.transform.CompareTag("Inspectable"))
        {
            active[Inspectable] = hit.transform;
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
			sounds.PlayScroll ();
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            inventory.Scroll(1);
			sounds.PlayScroll ();
        }
        if (Input.GetKeyDown(KeyCode.Delete))
        {
            inventory.DropSelectedItem();
			sounds.PlayDelete ();
        }
    }

    void CheckInteractionControls()
    {      
        if (Input.GetKeyDown(KeyCode.E))
        {
            if (active[Item] != null)
            {
                var mtp = inventory.AddItem(new Pickup(active[Item].GetComponent<ItemAttributeInformation>(), GetComponent<ItemIconHolder>()));
                if (mtp)
                {
                    active[Item].gameObject.SetActive(false);
                    ResetLevel.resettables.Add(active[Item]);
                    sounds.PlayDing();
                }
            }
            else if (active[Door] != null)
            {
                var tmp = active[Door].GetComponent<DoorToggle>();
                var lockedBefore = tmp.Locked;
                tmp.Toggle(inventory.HaveItem(tmp.code));

                if (tmp.Locked) sounds.PlayLocked();
                else
                {
                    if (tmp.Type == DoorToggle.DoorType.Slide) sounds.PlaySlide();
                    else if (tmp.Type == DoorToggle.DoorType.Swing) sounds.PlaySwing();

                    if (lockedBefore) ResetLevel.resettables.Add(active[Door]);
                }
            }
            else if (active[Human] != null)
            {
                active[Human].GetComponent<NPCScript>().TurnTowardsMe(transform.position);
                var dia = active[Human].GetComponent<DialogueManager>();
                movement.EnterConversation(dia);
                dia.StartDialogue(); 
                
            }
            else if (active[Equip] != null)
            {
                if (active[Equip].CompareTag("AK"))
                {
                    Equips.SetAble(PlayerWeaponEquip.AK);
					sounds.PlayEquip ();
                }
                else if(active[Equip].CompareTag("Pipe"))
                {
                    Equips.SetAble(PlayerWeaponEquip.Pipe);
					sounds.PlayDwang ();
                }
                else if (active[Equip].CompareTag("HandGun"))
                {
                    Equips.SetAble(PlayerWeaponEquip.HandGun);
                    sounds.PlayEquip();
                }
                active[Equip].gameObject.SetActive(false);
                ResetLevel.resettables.Add(active[Equip]);
                active[Equip] = null;
            }
            else if (active[Inspectable] != null)
            {
                uiInspectable = active[Inspectable].GetComponent<InspectableInformation>().Inspectable;
                uiInspectable.SetActive(true);
                inspectingSomething = !inspectingSomething;
            }
        }
    }

    public void CheckInspectionControls()
    {
        if (Input.GetKeyDown(KeyCode.E)) // exit code
        {
            inspectingSomething = !inspectingSomething;
            uiInspectable.SetActive(false); // move these into inspectable
            uiInspectable = null;
            return;
        }
        // clean this up and make the other class do it later or just make this the keypad interaction
        if (active[4].GetComponent<InspectableInformation>().type == InspectableInformation.Type.Keypad)
        {
            if (Input.GetKeyDown(KeyCode.LeftArrow))
            {
                active[4].GetComponent<InspectableInformation>().horMove(-1);
            }
            if (Input.GetKeyDown(KeyCode.RightArrow))
            {
                active[4].GetComponent<InspectableInformation>().horMove(1);
            }
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                active[4].GetComponent<InspectableInformation>().vertMove(1);
            }
            if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                active[4].GetComponent<InspectableInformation>().vertMove(-1);
            }
            if (Input.GetKeyDown(KeyCode.K))
            {
                active[4].GetComponent<InspectableInformation>().pressKey();
            }
        }
    }

    void ResetPlayerChanges()
    {
        transform.position = RespawnVector;
        inventory.LoadState();
        ResetLevel.ResetChanges();
        Equips.ResetAll();
        for (var i = 0; i < active.Length; i++)
        {
            active[i] = null;
        }
    }

    public void Die()
    {       
        ResetPlayerChanges();
        dmg = 0;
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

        if (!InventoryActive && !inspectingSomething)
        {
            CheckInteractionControls();
            timer += Time.deltaTime;
            if (timer > lookCheckTimer)
            {
                timer -= lookCheckTimer;
                CheckForEnt();
            }
        }
        else if (InventoryActive) CheckInventoryControls();
        else if (inspectingSomething) CheckInspectionControls();
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

public class Inspectable
{
    // will have a UI element able to toggle in front of player
    // eg, click on keypad code in inventory to look at its code
    // eg, keypad on wall is inspectable and will pull up a keypad ui interface
}
