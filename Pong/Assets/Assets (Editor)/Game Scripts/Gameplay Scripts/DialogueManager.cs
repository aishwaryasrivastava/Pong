using UnityEngine;
using System;
using System.Xml;

public class DialogueManager : MonoBehaviour {

	public TextAsset xml;
	private Dialogue dialog;
	private Dialogue currentdialog;

	public bool talking;
	private bool mouseover;

	private string playerObject = "PlayerMan";
	public PlayerMovementController control;
    public NPCScript owner;
    private Inventory inventory;

    public GameObject itemToGive; // this will be ripped out and made a part of prisoners to whom a dialogue is attached, fine for now

	public int width = 20;
	public int height = 20;

    private GUIStyle custombutton;
	public int fontSize = 15;

	void Start () {
		GameObject player = GameObject.Find (playerObject);
		inventory = player.GetComponent<Inventory> ();

		XmlDocument xmlDoc = new XmlDocument(); // xmlDoc is the new xml document.
		xmlDoc.LoadXml(xml.text);
		dialog = CreateTree (xmlDoc.FirstChild);
		Cursor.lockState = CursorLockMode.Locked;

		width = width * Screen.width / 100;
		height = height * Screen.height / 100;

		
	}

	Dialogue CreateTree(XmlNode xml) {
		Dialogue d = new Dialogue ();
		XmlAttributeCollection attr = xml.Attributes;
		d.Text = attr ["text"].Value;
		d.Option = attr["option"].Value;
		if (attr ["require"] != null) {
			d.Req = attr ["require"].Value;
		} else {
			d.Req = "none";
		}
		if (attr ["item"] != null) {

			//var item = Resources.Load("Prefabs/Item");
			//var newItem = Instantiate(item, transform) as GameObject;

		    var newItem = itemToGive;

			newItem.SetActive(false);

			ItemAttributeInformation iaInfo = newItem.GetComponent<ItemAttributeInformation>();
			iaInfo.SetType (Int32.Parse(attr ["item"].Value));	//Should be int to line up with ItemAttributeInformation options
																//As of 2/15: 0 is weapon, 1 is key, 2 is cake
			d.GiveItem = new Pickup(iaInfo);
		} else {
			d.GiveItem = null;
		}

		if (xml.HasChildNodes) {
			for (int i = 0; i < xml.ChildNodes.Count; i++) {
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
			GUI.Box (new Rect (20, 20, 120, 20), "Click to interact");
		}
		if (talking)
		{
		    if(custombutton == null) custombutton = new GUIStyle("button") {fontSize = fontSize};

		    GUI.Box (new Rect (20, 20, width, height), currentdialog.Text,custombutton);
			if (currentdialog.Children ().Count == 0) {
				if (GUI.Button (new Rect (20, height + 20, width, height), "End",custombutton)) {
					EndDialogue ();
				}
			}
			int count = 0;
			for (int i = 0; i < currentdialog.Children().Count; i++) {
				if (InventoryCheck (currentdialog.Children () [i].Req)) {
					if (GUI.Button (new Rect (20, 30 + height * (count+1), width, height), currentdialog.Children () [i].Option,custombutton)) {
						if (currentdialog.Children () [i].GiveItem != null) {
							inventory.AddItem (currentdialog.Children () [i].GiveItem);
						}
						ContinueDialogue (i);
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

	void ContinueDialogue(int i) {
		currentdialog = currentdialog.Children () [i];
	}

	void EndDialogue() {
		talking = false;
		Cursor.lockState = CursorLockMode.Locked;
		Cursor.visible = false;
        control.LeaveConversation();
	}

	bool InventoryCheck(string req) {
		switch (req) {
		case "none":
			return true;
		case "key":
			return inventory.HaveKeyItem ();
		case "cake":
			return inventory.HaveCakeItem ();
		}
		return false;
	}
}
