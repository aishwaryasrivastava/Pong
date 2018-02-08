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
    public float armReach = 8;

    public PlayerMovementController movement;
    public Camera mainCamera;

    public bool InventoryActive;
    public Inventory inventory;

    private Object tmp;
    private Transform activeItem, activeDoor, activeHuman;


	void Start ()
	{
	    tmp = Resources.Load("temp");
	}

    void CheckForEnt()
    {
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

        var a = Physics.RaycastAll(new Ray(mainCamera.transform.position, mainCamera.transform.forward), armReach);
        foreach (var item in a)
        {
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
                }
            }
            else if (activeDoor != null)
            {
                activeDoor.GetComponent<DoorToggle>().Toggle(inventory.HaveKeyItem());
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
        }
        if (!InventoryActive) CheckInteractionControls();
        else CheckInventoryControls();
    }
    void FixedUpdate()
    {
        if (PauseManager.Paused) return;
        if (!InventoryActive)
        {
            CheckForEnt();
        }
    }
}
