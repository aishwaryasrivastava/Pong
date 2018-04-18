using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.PostProcessing;

public class PlayerInteractionController : MonoBehaviour
{
    public Image UIConfirm;
    public SoundController sounds;
    public Text fps;

    public Vector3 RespawnVector = new Vector3(0, 3.5f, 0);
    public GameObject InterTextBox;
    public Text InterText;

    public float armReach = 8;
    private const float lookCheckTimer = 0.1f;
    private float timer;

    private int ticker;
    private bool showFps;
    private bool cursorChange, invChange, checkChange;
    public int dmg;

    public PlayerMovementController movement;
    public Camera mainCamera;
    public ScorePoker poke;

    public bool InventoryActive, inspectingSomething;
    public Inventory inventory;
    public GameObject uiInspectable; // change to specific class once settle on static vs. interactive inspectable design
    public PlayerWeaponEquip Equips;

    private const int Item = 0, Door = 1, Human = 2, Equip = 3, Inspectable = 4, Touchable = 5;
    private readonly Transform[] active = {null, null, null, null, null, null};

	public Dictionary<string,int> Reputation = new Dictionary<string,int>();
	public SimpleHealthBar healthBar;
    public Text healthText;

	public float curHealth;
	public float maxHealth;
    void Start()
    {
		healthBar.UpdateBar (curHealth, maxHealth);
        healthBar.displayText = SimpleHealthBar.DisplayText.CurrentAndMaxValues;
        fps.gameObject.SetActive(showFps);
		populateReputation ();
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
        InterTextBox.SetActive(false);
        InterText.text = "";
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
        var intermNue = hit.transform.GetComponent<Interactable>();
        if (intermNue == null)
        {
            //not looking at anything interactable
            UIConfirm.gameObject.SetActive(false);
            return;
        }
        var GoingGreen = true;
        switch (intermNue.type)
        {
            case Interactable.InteractableType.Removable:
            case Interactable.InteractableType.PickUp:
                active[Item] = hit.transform;
                if (inventory.Full())
                {
                    UIConfirm.color = new Color(1, 0, 0, 0.8f);
                    GoingGreen = false;
                }
                break;            
            case Interactable.InteractableType.Inspectable:
                active[Inspectable] = hit.transform;
                break;
            case Interactable.InteractableType.Door:
                active[Door] = hit.transform;
                var door = active[Door].GetComponent<DoorToggle>();
                if (door.Locked && !inventory.HaveItem(door.code))
                {
                    UIConfirm.color = new Color(1, 0, 0, 0.8f);
                    GoingGreen = false;
                }
                break;
            case Interactable.InteractableType.Person:
                var tmp = hit.transform.GetComponent<PersonalInfo>();
                if(tmp!=null)sounds.PlayVoice(tmp.serialNum);
                active[Human] = hit.transform;
                active[Human].GetComponent<DialogueManager>().LookingAt();
                break;
            case Interactable.InteractableType.Pipe:
            case Interactable.InteractableType.HandGun:
                active[Equip] = hit.transform;
                break;
            case Interactable.InteractableType.Observable:
                //these are just things that bring up text, not interactable
                UIConfirm.gameObject.SetActive(false);
                break;
            case Interactable.InteractableType.Triggerable:
                // things that do things when hit E on that aren't special
                active[Touchable] = hit.transform;
                if (!active[Touchable].GetComponent<TriggerAction>().CheckRequirement())
                {
                    UIConfirm.color = new Color(1, 0, 0, 0.8f);
                    GoingGreen = false;
                }
                break;
        }
        if (GoingGreen && intermNue.GoodString.Length > 0)
        {
            InterTextBox.SetActive(true);
            InterText.text = intermNue.GoodString;
        }
        else if (!GoingGreen && intermNue.BadString.Length > 0)
        {
            InterTextBox.SetActive(true);
            InterText.text = intermNue.BadString;
        }
    }

    void CheckInventoryControls()
    {
        if (Input.GetAxis("Horizontal") < 0)
        {
            if (!cursorChange)
            {
                cursorChange = true;
                inventory.Scroll(-1);
                sounds.PlayScroll();
            }
        }
        else if (Input.GetAxis("Horizontal") > 0)
        {
            if (!cursorChange)
            {
                cursorChange = true;
                inventory.Scroll(1);
                sounds.PlayScroll();
            }
        }
        else
        {
            cursorChange = false;
        }
        if (Input.GetKeyDown(KeyCode.Delete))
        {
            inventory.DropSelectedItem();
			sounds.PlayDelete ();
        }
    }

    void CheckInteractionControls()
    {
        if (Input.GetAxis("Interact") > 0)
        {

            if (!checkChange)
            {
                checkChange = true;
                if (active[Item] != null)
                {
                    bool mtp;
                    if (active[Item].GetComponent<Interactable>().type == Interactable.InteractableType.Removable) mtp = true;
                    else mtp = inventory.AddItem(new Pickup(active[Item].GetComponent<ItemAttributeInformation>(), GetComponent<ItemIconHolder>()));
                    if (mtp)
                    {
                        active[Item].gameObject.SetActive(false);
                        ResetLevel.Add(active[Item]);
						if (active [Item].CompareTag ("cake")) {
							generateHealth ();
						}else if(active [Item].CompareTag ("airCon")){
							sounds.PlaySlash ();
						}else if(active [Item].CompareTag ("keys")){
							sounds.PlayKeys ();
						}else {
							sounds.PlayDing();
						}
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

                        if (lockedBefore) ResetLevel.Add(active[Door]);
                    }
                }
                else if (active[Human] != null)
                {
					sounds.PlayEnd ();
                    var a = active[Human].GetComponent<NPCScript>();
                    var b = active[Human].GetComponent<GuardScript2>();
                    if (a != null) a.TurnTowardsMe(transform.position);
                    else if (b != null) b.TurnTowardsMe(transform.position);
                    var dia = active[Human].GetComponent<DialogueManager>();
                    movement.EnterConversation(dia);
                    dia.StartDialogue();
                    ResetLevel.Add(active[Human]);
                }
                else if (active[Touchable] != null)
                {
                    var gobj = active[Touchable].gameObject.GetComponent<TriggerAction>();
                    if (gobj.CheckRequirement()) gobj.Activate();
                    active[Touchable] = null;
                }
                else if (active[Equip] != null)
                {
                    var intermNue = active[Equip].transform.GetComponent<Interactable>();
                    switch (intermNue.type)
                    {
                        case Interactable.InteractableType.Pipe:
                            Equips.SetAble(PlayerWeaponEquip.Pipe);
                            sounds.PlayDwang();
                            break;
                        case Interactable.InteractableType.HandGun:
                            Equips.SetAble(PlayerWeaponEquip.HandGun);
                            sounds.PlayEquip();
                            break;
                    }
                    active[Equip].gameObject.SetActive(false);
                    ResetLevel.Add(active[Equip]);
                    active[Equip] = null;
                }
                else if (active[Inspectable] != null)
                {
                    uiInspectable = active[Inspectable].GetComponent<InspectableInformation>().Inspectable;
                    uiInspectable.SetActive(true);
                    inspectingSomething = !inspectingSomething;
                    sounds.PlayInspect();
                }
            }
        }
        else
        {
            checkChange = false;
        }
    }

    public void CheckInspectionControls()
    {
        if (Input.GetAxis("Cancel") > 0) // exit code
        {
            inspectingSomething = !inspectingSomething;
            uiInspectable.SetActive(false); // move these into inspectable
            uiInspectable = null;
            return;
        }
        // clean this up and make the other class do it later or just make this the keypad interaction
        if (active[Inspectable].GetComponent<InspectableInformation>().type == InspectableInformation.Type.Keypad)
        {
            if (Input.GetAxis("Horizontal") < 0)
            {
                if (!cursorChange)
                {
                    cursorChange = true;
                    active[Inspectable].GetComponent<InspectableInformation>().horMove(-1);
                    sounds.PlayPress();
                }
            }
            else if (Input.GetAxis("Horizontal") > 0)
            {
                if (!cursorChange)
                {
                    cursorChange = true;
                    active[Inspectable].GetComponent<InspectableInformation>().horMove(1);
                    sounds.PlayPress();
                }
            }
            else if (Input.GetAxis("Vertical") > 0)
            {
                if (!cursorChange)
                {
                    cursorChange = true;
                    active[Inspectable].GetComponent<InspectableInformation>().vertMove(1);
                    sounds.PlayPress();
                }
            }
            else if (Input.GetAxis("Vertical") < 0)
            {
                if (!cursorChange)
                {
                    cursorChange = true;
                    active[Inspectable].GetComponent<InspectableInformation>().vertMove(-1);
                    sounds.PlayPress();
                }
            }
            else if (Input.GetAxis("Submit") > 0)
            {
                if (!cursorChange)
                {
                    cursorChange = true;
                    active[Inspectable].GetComponent<InspectableInformation>().pressKey();
                    sounds.PlayPress();
                }
            }
            else cursorChange = false;
        }
    }

    void ResetPlayerChanges()
    {
        transform.position = RespawnVector;
        inventory.LoadState();
        ResetLevel.ResetChanges();
        Equips.RestoreFromState();
        for (var i = 0; i < active.Length; i++)
        {
            active[i] = null;
        }
        poke.Reset();
        Reputation.Clear();
        populateReputation();
		curHealth = maxHealth;
		healthBar.UpdateBar (curHealth, maxHealth);
		healthBar.UpdateColor (Color.green);
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
        if (Input.GetKeyDown(KeyCode.F4))
        {
            var tmp = Camera.main.GetComponent<PostProcessingBehaviour>().profile;
            tmp.ambientOcclusion.enabled = !tmp.ambientOcclusion.enabled;
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
        if (PauseManager.Halted) return;
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return;

        
        if (Input.GetKeyDown(KeyCode.I))
        {
            InventoryActive = !InventoryActive;
            if(InventoryActive) UIConfirm.gameObject.SetActive(false);
            inventory.Swap(InventoryActive);
            sounds.PlayInventory();
            GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
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

	void populateReputation() {
		Reputation.Add ("Tom", 0);
		Reputation.Add ("Tony", 0);
	    Reputation.Add("Harry", 0);
	    Reputation.Add("George", 0);
    }

    public string GetPopularity()
    {
        return "Current Reputation\n" + Reputation.Aggregate("", (current, set) => current + (set.Key + ": " + set.Value + "\n"));
    }

    public int GetTotalPopularity()
    {
        return Reputation.Values.Sum();
    }

	public void generateHealth(){
		curHealth += 3;
		sounds.PlayEat ();
		if (curHealth > maxHealth) {
			curHealth = maxHealth;
		}
		healthBar.UpdateBar (curHealth, maxHealth);
	}

	public void TakeDamage(int damage){
        if (!movement.Blocking)
        {
            curHealth -= damage;
            healthBar.UpdateBar(curHealth, maxHealth);
			if (curHealth < 3) {
				healthBar.UpdateColor (Color.red);
			} else {
				healthBar.UpdateColor (Color.green);
			}
        } else
        {

        }


        if (curHealth < 1)
        {
            Die();
        }
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
            case ItemAttributeInformation.Type.Disguise:
                UiImage = container.disguise;
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
