using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public static class ItemIDchip
{
    public static int CurrentChip = 1;
}

public class Inventory : MonoBehaviour
{
    // Used in keeping track of overall items
    private List<Pickup> inventory;
    private int maxInvSize;
    public GameObject onScreenInv;
    public GameObject invBackground;

    // Used in L-scroller
    //private Sprite[] lScroller;
    private const int lScrollerSize = 8;
    private int curEquip;

	// Use this for initialization
	void Start () {
		inventory = new List<Pickup>();
	    maxInvSize = 8;
        curEquip = 0;
	    invBackground.SetActive(false);
        Scroll(0);
       
    }

    /* Main Inventory Commands */

    public void Swap(bool active)
    {
        if (active)
        {
            DisplayInventory();
        }
        else
        {
            UndisplayInventory();
        }
    }

    void UpdateInventoryDisplay()
    {
        for (var i = 0; i < lScrollerSize; i++)
        {
            var image = inventory.Count > i ? inventory[i].UiImage : null;
            var slot = onScreenInv.transform.GetChild(i).GetChild(1);          
            slot.GetComponent<Image>().sprite = image;           
        }

    }

    void DisplayInventory()
    {
        invBackground.SetActive(true);
        UpdateInventoryDisplay();
    }

    void UndisplayInventory()
    {
        invBackground.SetActive(false);
    }

    /* Commands */

    public void Scroll(int move)
    {
        var original = onScreenInv.transform.GetChild(curEquip).GetChild(0);
        curEquip = (int) Mathf.Repeat(curEquip + move, lScrollerSize);
        var newOne = onScreenInv.transform.GetChild(curEquip).GetChild(0);
        original.GetComponent<Image>().color = Color.white;
        newOne.GetComponent<Image>().color = Color.red;
    }

    public bool AddItem(Pickup itemToAdd)
    {
        if (inventory.Count >= maxInvSize) return false;
        inventory.Add(itemToAdd);
        return true;
    }

    public bool DropSelectedItem()
    {
        if (inventory.Count <= curEquip) return false;
        inventory.RemoveAt(curEquip);
        UpdateInventoryDisplay();
        return true;
    }

    public void Clear()
    {
        inventory.Clear();
        UpdateInventoryDisplay();
    }

    public bool HaveKeyItem()
    {
        return inventory.Any(g => g.Type == ItemAttributeInformation.Type.Key);
    }
}