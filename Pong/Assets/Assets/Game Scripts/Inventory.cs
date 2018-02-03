using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    // Used in keeping track of overall items
    private List<Item> inventory;
    private int maxInvSize;
    public GameObject onScreenInv;
    public GameObject invBackground;

    // Used in L-scroller
    private Image[] lScroller;
    private int lScrollerSize = 7;
    private int curEquip;

	// Use this for initialization
	void Start () {
		inventory = new List<Item>();
	    maxInvSize = 8;
        curEquip = 0;
	    onScreenInv.SetActive(false);
	    invBackground.SetActive(false);
        
        // Setup L Scroller for future development
        /*lScroller = new Image[7]; //0 = -3, 1 = -2, 2 = -1, 3 = 0, 4 = 1, 5 = 2, 6 = 3
	    for (int i = -3; i < 3; i++)
	    {
	        lScroller[i % lScrollerSize] = ItemImageLookup(ItemAt(i)); // fill lScroller with Images
	    }

	    lScroller[0].GetComponent<RectTransform>().position = new Vector3(-450, 0);
	    lScroller[1].GetComponent<RectTransform>().position = new Vector3(-450, -50);
	    lScroller[2].GetComponent<RectTransform>().position = new Vector3(-450, -100);
        lScroller[3].GetComponent<RectTransform>().position = new Vector3(-450, -150); // middle
	    lScroller[4].GetComponent<RectTransform>().position = new Vector3(-350, -150);
	    lScroller[5].GetComponent<RectTransform>().position = new Vector3(-250, -150);
	    lScroller[6].GetComponent<RectTransform>().position = new Vector3(-150, -150);
        */
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

    void DisplayInventory()
    {
        onScreenInv.SetActive(true);
        invBackground.SetActive(true);
    }

    void UndisplayInventory()
    {
        onScreenInv.SetActive(false);
        invBackground.SetActive(false);
    }

    /* L-Scroll Commands */

    void ScrollLeft()
    {
        // move curEquip to right item
        curEquip = (curEquip + 1) % maxInvSize;
        // move every item image left and delete leftmost
        Destroy(lScroller[0]);
        for (int i = 0; i < lScrollerSize - 1; i++)
        {
            lScroller[i] = lScroller[i + 1];
            if (i < 3) lScroller[i].GetComponent<RectTransform>().position += new Vector3(0, 50);
            else
            {
                lScroller[i].GetComponent<RectTransform>().position += new Vector3(100, 0);
            }
        }
        lScroller[lScrollerSize - 1] = ItemImageLookup(ItemAt(curEquip + lScrollerSize / 2)); // new rightmost
        lScroller[6].GetComponent<RectTransform>().position = new Vector3(-150, -150);

    }

    void ScrollRight()
    {
        // move curEquip to left item
        curEquip = (curEquip - 1) % maxInvSize;
        // move every item image right and delete rightmost
        Destroy(lScroller[lScrollerSize - 1]);
        for (int i = lScrollerSize - 1; i > 0; i--)
        {
            lScroller[i] = lScroller[i - 1];
            if (i < 3) lScroller[i].GetComponent<RectTransform>().position -= new Vector3(0, 50);
            else
            {
                lScroller[i].GetComponent<RectTransform>().position -= new Vector3(100, 0);
            }
        }
        lScroller[0] = ItemImageLookup(ItemAt(curEquip + lScrollerSize / 2)); // new leftmost
        lScroller[0].GetComponent<RectTransform>().position = new Vector3(-450, 0);
    }

    Item ItemAt(int loc)
    {
        return inventory[loc % maxInvSize];
    }

    /* Add and Drop Commands */

    bool AddItem(Item itemToAdd)
    {
        if (inventory.Count > maxInvSize) return false;
        inventory.Add(itemToAdd);
        return true;
    }

    bool DropItem(int loc)
    {
        if (inventory.Count <= 0) return false;
        inventory.RemoveAt(loc);
        return true;
    }

    /* Lookup Item Image for L-Scroller */
    Image ItemImageLookup(Item tempItem)
    {
        return tempItem.uiImage;
    }
}
