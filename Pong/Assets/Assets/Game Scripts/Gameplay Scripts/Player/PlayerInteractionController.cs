using UnityEngine;
using UnityEngine.UI;

public class Pickup
{
    public int itemID;
    public Sprite uiImage;

    public Pickup(ItemAttributeInformation info)
    {
        itemID = ItemIDchip.CurrentChip++;
        uiImage = info.image;
    }
}

public class PlayerInteractionController : MonoBehaviour
{
    public float armReach = 10;

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
            
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {

        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            
        }
    }

    void CheckInteractionControls()
    {
        
        if (Input.GetKeyDown(KeyCode.E))
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
                //open the door
                Debug.Log("pretend the door opened");
            }
            else if (activeHuman != null)
            {
                //talk to this person
                Debug.Log("pretend they had something interesting to say");
            }
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.I))
        {
            InventoryActive = !InventoryActive;
            inventory.Swap(InventoryActive);
        }
        if(!InventoryActive)
        {
            CheckInteractionControls();
        }
    }
    void FixedUpdate()
    {
        if(!InventoryActive)
        {
            CheckForEnt();
        }
    }
}
