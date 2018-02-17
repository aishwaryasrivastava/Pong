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
        //this is possibly semi expensive

        activeItem = activeDoor = activeHuman = null;
        UIConfirm.gameObject.SetActive(false);

        var hits = Physics.RaycastAll(new Ray(mainCamera.transform.position, mainCamera.transform.forward), armReach).OrderBy(h => h.distance).ToArray();
        if (hits.Length == 0) return;
        var item = hits[0];

        if (item.transform.CompareTag("Item") && !item.transform.Equals(activeItem))
        {
            activeItem = item.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = inventory.Full() ? new Color(1, 0, 0, 0.8f) : new Color(0, 0.7f, 0, 0.8f);
        }
        else if (item.transform.CompareTag("Door") && !item.transform.Equals(activeDoor))
        {
            activeDoor = item.transform;
            UIConfirm.gameObject.SetActive(true);
            var door = activeDoor.GetComponent<DoorToggle>();
            UIConfirm.color = (door.Locked && !inventory.HaveKeyItem()) || door.PermaLock ? new Color(1, 0, 0, 0.8f) : new Color(0, 0.7f, 0, 0.8f);
        }
        else if (item.transform.CompareTag("Human") && !item.transform.Equals(activeHuman))
        {
            activeHuman = item.transform;
            UIConfirm.gameObject.SetActive(true);
            UIConfirm.color = new Color(0, 0.7f, 0, 0.8f);
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
                activeHuman.GetComponent<DialogueManager>().StartDialogue();
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
