﻿using UnityEngine;
using System.Xml;

public class DialogueManager : MonoBehaviour {

	public TextAsset xml;
	private Dialogue dialog;
	private Dialogue currentdialog;

	public bool talking;
	private bool mouseover;

	private string playerObject = "PlayerMan";
	public PlayerMovementController control;
    private Inventory inventory;

	void Start () {
		GameObject player = GameObject.Find (playerObject);
		inventory = player.GetComponent<Inventory> ();

		XmlDocument xmlDoc = new XmlDocument(); // xmlDoc is the new xml document.
		xmlDoc.LoadXml(xml.text);
		dialog = CreateTree (xmlDoc.FirstChild);
		Cursor.lockState = CursorLockMode.Locked;
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

	void OnMouseEnter() {
		//Debug.Log ("enter");
		if (!talking) {
			mouseover = true;
		}
	}

	void OnMouseExit() {
		//Debug.Log ("exit");
		mouseover = false;
	}

	void OnMouseDown() {
		mouseover = false;
		if (!talking) {
			StartDialogue ();
		}
	}

	void OnGUI() {
		if (mouseover) {
			GUI.Box (new Rect (20, 20, 120, 20), "Click to interact");
		}
		if (talking) {
			GUI.Box (new Rect (20, 20, 200, 40), currentdialog.Text);
			if (currentdialog.Children ().Count == 0) {
				if (GUI.Button (new Rect (20, 60, 200, 40), "End")) {
					EndDialogue ();
				}
			}
			int count = 0;
			for (int i = 0; i < currentdialog.Children().Count; i++) {
				if (InventoryCheck (currentdialog.Children () [i].Req)) {
					if (GUI.Button (new Rect (20, 70 + 40 * count, 200, 40), currentdialog.Children () [i].Option)) {
						ContinueDialogue (i);
						break;
					}
					count++;
				}
			}
		}
	} 

	void StartDialogue() {
		talking = true;
		Cursor.lockState = CursorLockMode.None;
		Cursor.visible = true;
		currentdialog = dialog;
        control.EnterConversation(this);
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
		return true;
	}
}
