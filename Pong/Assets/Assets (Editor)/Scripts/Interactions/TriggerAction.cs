using System;
using System.Linq;
using UnityEngine;

public class TriggerAction : MonoBehaviour
{
    public bool Activated { get; private set; }
    private bool finalized;

    [Header("--Access--")]
    public Inventory inventory;
    public PlayerInteractionController interact;
    public ScorePoker score;

    [Header("--Things to Activate--")]
    public GameObject[] EnableMe;       //Objects to enable in scene
    public GameObject[] DisableMe;      //Objects to disable in scene
    public bool MovePlayer;             //Whether activation should teleport the player
    public Vector3 NewPlayerPosition;   //Where to teleport the player if MovePlayer is true


    [Header("--Requirements--")]
    public GameObject[] ObjDisabled;    //Objects in scene that should already be disabled
    public string[] ItemsNeeded;        //Items needed from inventory
    public int RepNeeded;               //Reputation needed
    public int ScoreNeeded;             //Shooting range score needed

    [Header("--Modifiers--")]
    public float Timer;                 //Delay from activation from which to activate
    public bool HideOwnMesh;            //If enabled, hides the owners mesh instantly upon intreract, and deactivates object upon activation
    public AudioClip Trigger;           //Plays when object first triggered
    public AudioClip Activation;        //Plays when object activates

    public bool CheckRequirement()
    {
        if (Activated) return false;
        if (ItemsNeeded.Length> 0 && !inventory.HaveItemAdvanced(ItemsNeeded)) return false;
        if (interact.GetTotalPopularity() < RepNeeded) return false;
        if (score.scoreNum < ScoreNeeded) return false;
        if (ObjDisabled.Any(g => g.activeInHierarchy)) return false;
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
            if (Trigger != null) interact.gameObject.GetComponent<AudioSource>().PlayOneShot(Trigger);
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
        
        if (HideOwnMesh)
        {
            transform.Translate(0, 500, 0);
            if (Activation != null) interact.gameObject.GetComponent<AudioSource>().PlayOneShot(Activation, 0.7f);
            gameObject.SetActive(false);
        }   
        else if (Activation != null) interact.gameObject.GetComponent<AudioSource>().PlayOneShot(Activation, 0.7f);
        finalized = true;
    }
}
