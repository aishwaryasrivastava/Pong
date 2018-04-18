using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    // Used in keeping track of overall items
    private List<Pickup> inventory;
    private int maxInvSize;
    public GameObject onScreenInv;
    public GameObject invBackground;

    private List<Pickup> inventoryRestorePoint;

    public Text itemName;
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
	    inventoryRestorePoint = new List<Pickup>();
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
            if (i == curEquip)
            {
                itemName.text = i < inventory.Count ? inventory[i].ItemId : "None";
            }
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
        UpdateInventoryDisplay();
    }

    public bool AddItem(Pickup itemToAdd)
    {
        if (Full()) return false;
        inventory.Add(itemToAdd);
        //Debug.Log(itemToAdd.Type);
        return true;
    }

    public bool DropSelectedItem()
    {
        if (inventory.Count <= curEquip) return false;
        inventory.RemoveAt(curEquip);
        UpdateInventoryDisplay();
        return true;
    }

    public void LoadState()
    {
        inventory.Clear();
        foreach (var a in inventoryRestorePoint)
        {
            inventory.Add(a);
        }
        UpdateInventoryDisplay();
    }

    public void SaveState()
    {
        foreach (var a in inventory)
        {
            inventoryRestorePoint.Add(a);
        }
    }

    public bool HaveItem(string id)
    {
        return inventory.Any(g => g.ItemId.Equals(id));
    }
    public bool HaveMultiItem(string id, int amount)
    {
        var count = inventory.Count(item => item.ItemId.Equals(id));
        return count >= amount;
    }

    public bool HaveItemAdvanced(params string[] items)
    {
        foreach (var query in items)
        {
            if (char.IsDigit(query[0]))
            {
                if (!HaveMultiItem(query.Substring(1), int.Parse(query[0].ToString()))) return false;
            }
            else
            {
                if (!HaveItem(query)) return false;
            }
        }
        return true;
    }

    public void RemoveThese(params string[] items)
    {
        foreach (var query in items)
        {
            if (char.IsDigit(query[0]))
            {
                for (var i = 0; i < int.Parse(query[0].ToString()); i++) RemoveThis(query.Substring(1));
            }
            else
            {
                RemoveThis(query);
            }
        }
    }

    public void RemoveThis(string id)
    {
        var tmp = inventory.FirstOrDefault(g => g.ItemId.Equals(id));
        if (tmp != null) inventory.Remove(tmp);
    }

    public bool Full()
    {
        return inventory.Count >= maxInvSize;
    }
}