using UnityEngine;
using System;
using System.Xml;

public class DialogueManager : MonoBehaviour {

	public TextAsset XML;
	private Dialogue dialog;
	private Dialogue currentdialog;

	public bool talking;
	private bool mouseover;

	private string playerObject = "PlayerMan";
	public PlayerMovementController control;
    public PlayerInteractionController interact;
    public NPCScript owner;
    private Inventory inventory;

    //public GameObject itemToGive; // this will be ripped out and made a part of prisoners to whom a dialogue is attached, fine for now

	public int width = 20;
	public int height = 20;

    private GUIStyle custombutton;
	public int fontSize = 15;

	void Start () {
		GameObject player = GameObject.Find (playerObject);
		inventory = player.GetComponent<Inventory> ();

		XmlDocument xmlDoc = new XmlDocument(); // xmlDoc is the new xml document.
		xmlDoc.LoadXml(XML.text);
		dialog = CreateTree (xmlDoc.FirstChild);
		Cursor.lockState = CursorLockMode.Locked;

		width = width * Screen.width / 100;
		height = height * Screen.height / 100;

		
	}

	Dialogue CreateTree(XmlNode xml) {
		Dialogue d = new Dialogue ();
		XmlAttributeCollection attr = xml.Attributes;
		d.Text = attr["text"].Value;
		d.Option = attr["option"].Value;
		d.Req = attr ["require"] != null ? attr ["require"].Value : "";
	    d.Take = attr["take"] != null ? attr["take"].Value : "";
        
		if (attr ["item"] != null)
		{
                //Should be int to line up with ItemAttributeInformation options. This is for inventory icons mostly
                //this is the name of the item basically (or the identifier for key-door connection)             
		    d.GiveItem = new Pickup(attr["id"].Value, (ItemAttributeInformation.Type)int.Parse(attr["item"].Value), interact.GetComponent<ItemIconHolder>());
        }
        else d.GiveItem = null;		

		if (xml.HasChildNodes)
        {
			for (int i = 0; i < xml.ChildNodes.Count; i++)
            {
				d.AddChild (CreateTree (xml.ChildNodes [i]));
			}
		}
		return d;
	}

	// Update is called once per frame
	void Update () {
		if(Input.GetKey(KeyCode.Escape))
        {
			if (talking) EndDialogue ();
		}
	}

    public void LookingAt()
    {
        if (!talking)
        {
            mouseover = true;
        }
    }

    public void NoLongerLookingAt()
    {
        mouseover = false;
    }

	void OnGUI() {
		if (mouseover) {
			GUI.Box (new Rect (20, 20, 120, 20), "Press E to interact");
		}
		if (talking)
		{
		    if(custombutton == null) custombutton = new GUIStyle("button") {fontSize = fontSize};

		    GUI.Box (new Rect (20, 20, width, height), currentdialog.Text,custombutton);
		    if (currentdialog.Children().Count == 0)
		    {
		        if (GUI.Button(new Rect(20, height + 20, width, height), "End", custombutton))
		        {
		            EndDialogue();
		        }
		    }
		    int count = 0;
		    for (int i = 0; i < currentdialog.Children().Count; i++)
		    {
		        if (InventoryCheck(currentdialog.Children()[i].Req))
		        {
		            if (GUI.Button(new Rect(20, 30 + height * (count + 1), width, height), currentdialog.Children()[i].Option,
		                custombutton))
		            {
		                if (currentdialog.Children()[i].GiveItem != null)
		                {
		                    inventory.AddItem(currentdialog.Children()[i].GiveItem);
		                    currentdialog.Children()[i].GiveItem = null;
		                }
		                if (currentdialog.Children()[i].Take.Length > 0)
		                {
		                    inventory.RemoveThis(currentdialog.Children()[i].Take);
		                }
		                ContinueDialogue(i);
		                break;
		            }
		            count++;
		        }
		    }
		}
	} 

	public void StartDialogue()
	{
	    if (talking) return;
	    mouseover = false;
		talking = true;
		Cursor.lockState = CursorLockMode.None;
		Cursor.visible = true;
		currentdialog = dialog;     
	}

	void ContinueDialogue(int i)
    {
		currentdialog = currentdialog.Children () [i];
	}

	void EndDialogue() {
		talking = false;
		Cursor.lockState = CursorLockMode.Locked;
		Cursor.visible = false;
        control.LeaveConversation();
	}

	bool InventoryCheck(string id)
	{
	    return id.Length == 0 || inventory.HaveItem(id);
	}
}
