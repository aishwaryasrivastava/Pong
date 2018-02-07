using UnityEngine;
using UnityEngine.UI;

public class Pickup
{
    public int itemID;
    public Image uiImage;

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
    private Transform lookingAt;


	void Start ()
	{
	    tmp = Resources.Load("temp");
	}

    void CheckForItem()
    {
        if (lookingAt != null)
        {
            ((Behaviour) lookingAt.GetComponent("Halo")).enabled = false;
            lookingAt = null;
        }

        var a = Physics.RaycastAll(new Ray(mainCamera.transform.position, mainCamera.transform.forward), armReach);
        foreach (var item in a)
        {
            if (item.transform.CompareTag("Item"))
            {
                lookingAt = item.transform;
                //highlight somehow
                ((Behaviour) lookingAt.GetComponent("Halo")).enabled = true;
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

    void FixedUpdate()
    {
        if (Input.GetKeyDown(KeyCode.I))
        {
            InventoryActive = !InventoryActive;
            inventory.Swap(InventoryActive);
        }
        if (Input.GetKeyDown(KeyCode.E))
        {
            //if (lookingAt != null)
                //inventory.AddItem(new Pickup(lookingAt.GetComponent<ItemAttributeInformation>()));
            Debug.Log("Trying to pick something up");
        }
        if (InventoryActive)
        {
            CheckInventoryControls();
        }
        else
        {
            CheckForItem();
        }
    }
}
