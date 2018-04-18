using System;
using System.Linq;
using UnityEngine;

public class TriggerAction : MonoBehaviour
{
    public bool Activated { get; private set; }
    private bool finalized;

    private Inventory inventory;
    private PlayerInteractionController interact;
    private PlayerWeaponEquip weapon;
    private ScorePoker score;
    private AudioSource source;
    private SoundController sound;
    public GameObject Player;

    [Header("--Things to Activate--")]
    public GameObject[] EnableMe;       //Objects to enable in scene
    public GameObject[] DisableMe;      //Objects to disable in scene
    public bool MovePlayer;             //Whether activation should teleport the player
    public Vector3 NewPlayerPosition;   //Where to teleport the player if MovePlayer is true
    public int WeaponToGive = -1;       //Which weapon slot to give the player
    public string ItemID;               //ID for item to give to player (also requires type)
    public ItemAttributeInformation.Type ItemType; //Type of item to give to player (also requires ID)

    [Header("--Requirements--")]
    public GameObject[] ObjDisabled;    //Objects in scene that should already be disabled
    public string[] ItemsNeeded;        //Items needed from inventory
    public int RepNeeded;               //Reputation needed
    public int ScoreNeeded;             //Shooting range score needed

    [Header("--Modifiers--")]
    public float Timer;                 //Delay from activation from which to activate
    public bool HideOwnMesh;            //If enabled, hides owner object on trigger, and deactivates object upon activation
    public AudioClip Trigger;           //Plays when object first triggered
    public AudioClip Activation;        //Plays when object activates

    void Start()
    {
        inventory = Player.GetComponent<Inventory>();
        interact = Player.GetComponent<PlayerInteractionController>();
        score = interact.poke;
        weapon = Player.GetComponentInChildren<PlayerWeaponEquip>();
        source = interact.gameObject.GetComponent<AudioSource>();
        sound = interact.GetComponent<SoundController>();
    }

    public bool CheckRequirement()
    {
        if (Activated) return false;
        if (ItemsNeeded.Length> 0 && !inventory.HaveItemAdvanced(ItemsNeeded)) return false;
        if (interact.GetTotalPopularity() < RepNeeded) return false;
        if (score.scoreNum < ScoreNeeded) return false;
        if (ObjDisabled.Any(g => g.activeInHierarchy)) return false;
        if (ItemType != ItemAttributeInformation.Type.None && inventory.Full()) return false;
        return true;
    }

    void FixedUpdate()
    {
        if (finalized) return;
        if (Activated && Timer > 0)
        {
            Timer -= Time.deltaTime;
            if (Timer < 0) Activate();                
        }
    }

    public void Activate()
    {
        if (finalized) return;
        if (!Activated)
        {
            Activated = true;
            if (Trigger != null) source.PlayOneShot(Trigger);
            if (HideOwnMesh) transform.Translate(0, -500, 0); //cheese way to do it but it keeps scripts and subscripts runnning correctly while they should be
        }
        if (Activated && Timer > 0) return;       

        if (ItemsNeeded.Length > 0) inventory.RemoveThese(ItemsNeeded);
        if (MovePlayer) interact.gameObject.transform.position = NewPlayerPosition;

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

        if (WeaponToGive != -1)
        {
            weapon.SetAble(WeaponToGive);
            sound.PlayEquip();
        }

        if (ItemType != ItemAttributeInformation.Type.None)
        {
            inventory.AddItem(new Pickup(ItemID, ItemType, Player.GetComponent<ItemIconHolder>()));
        }
        
        if (HideOwnMesh)
        {
            transform.Translate(0, 500, 0);
            if (Activation != null) source.PlayOneShot(Activation, 0.7f);
            ResetLevel.Add(transform);
            gameObject.SetActive(false);
        }   
        else if (Activation != null) source.PlayOneShot(Activation, 0.7f);

        finalized = true;
    }
}
