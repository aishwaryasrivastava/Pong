using UnityEngine;
using System;
using System.Collections.Generic;
using System.Xml;

public class DialogueManager : MonoBehaviour
{

    public TextAsset XML;
    private Dialogue dialog;
    private Dialogue currentdialog;
    public List<int> selections;
    public int selIndex;

    public bool talking;
    private bool mouseover;
    private bool madeSelection, changeSelection;


    private string playerObject = "PlayerMan";
    public PlayerMovementController control;
    public PlayerInteractionController interact;
    //public NPCScript owner;
    private Inventory inventory;
    private static GameObject GuiPointer;

    //public GameObject itemToGive; // this will be ripped out and made a part of prisoners to whom a dialogue is attached, fine for now

    public int width = 20;
    public int height = 20;

    private GUIStyle custombutton, extraButton;
    public int fontSize = 15;

    public string name;

    private float displayTime = 0.0f;
    private string display = "";
    GameObject player;

    void Start()
    {
        player = GameObject.Find(playerObject);
        inventory = player.GetComponent<Inventory>();
        selections = new List<int>();
        if (GuiPointer == null)
        {
            GuiPointer = GameObject.Find("Dialogue Indicator");
            GuiPointer.SetActive(false);
        }

        XmlDocument xmlDoc = new XmlDocument(); // xmlDoc is the new xml document.
        xmlDoc.LoadXml(XML.text);
        dialog = CreateTree(xmlDoc.FirstChild);
        Cursor.lockState = CursorLockMode.Locked;

        width = width * Screen.width / 100;
        height = height * Screen.height / 100;
    }

    public void Reset()
    {
        XmlDocument xmlDoc = new XmlDocument(); // xmlDoc is the new xml document.
        xmlDoc.LoadXml(XML.text);
        dialog = CreateTree(xmlDoc.FirstChild);
        Cursor.lockState = CursorLockMode.Locked;

    }

    Dialogue CreateTree(XmlNode xml)
    {
        Dialogue d = new Dialogue();
        XmlAttributeCollection attr = xml.Attributes;
        d.Text = attr["text"].Value;
        d.Option = attr["option"].Value;
        d.Req = attr["require"] != null ? attr["require"].Value : "";
        d.Take = attr["take"] != null ? attr["take"].Value : "";
        d.Rep = attr["rep"] != null ? int.Parse(attr["rep"].Value) : 0;
        d.RepMin = attr["repMin"] != null ? int.Parse(attr["repMin"].Value) : -1000;
        d.RepMax = attr["repMax"] != null ? int.Parse(attr["repMax"].Value) : 1000;
        if (attr["sendX"] != null)
        {
            d.sendToX = int.Parse(attr["sendX"].Value);
            d.sendToY = int.Parse(attr["sendY"].Value);
            d.sendToZ = int.Parse(attr["sendZ"].Value);
        }
        else
        {
            d.sendToX = 0;
            d.sendToY = 0;
            d.sendToZ = 0;
        }

        if (attr["item"] != null)
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
                d.AddChild(CreateTree(xml.ChildNodes[i]));
            }
        }
        return d;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetAxis("Cancel") > 0)
        {
            if (talking) EndDialogue();
        }
        if (talking)
        {
            if (Input.GetAxis("Submit") > 0)
            {
                if (!madeSelection)
                {
                    madeSelection = true;
                    if (currentdialog.Children().Count > 0)
                    {
                        executeChoice(selections[selIndex]);
                    }
                    else
                    {
                        EndDialogue();
                    }
                }

            }
            else
            {
                madeSelection = false;
            }
            float tmp = Input.GetAxis("Vertical");
            if (tmp != 0)
            {
                if (!changeSelection)
                {
                    changeSelection = true;
                    changeSelectionIndex(tmp < 0);
                }

            }
            else
            {
                changeSelection = false;
            }
        }
        if (displayTime > 0)
        {
            displayTime -= Time.deltaTime;
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

    void OnGUI()
    {
        GUI.skin.box.wordWrap = true;
        GUI.skin.button.wordWrap = true;
        if (talking)
        {
            selections = new List<int>();
            //selIndex = 0;
            if (custombutton == null)
            {
                custombutton = new GUIStyle("button") { fontSize = fontSize };
            }
            if (extraButton == null)
            {
                extraButton = new GUIStyle("button")
                {
                    fontSize = fontSize,
                    onHover = new GUIStyleState(),
                    hover = new GUIStyleState()
                };
            }
            GUI.Box(new Rect(20, 50, width, height), name + ": " + currentdialog.Text, extraButton);
            if (currentdialog.Children().Count == 0)
            {
                selections.Add(0);
                if (GUI.Button(new Rect(20, height + 60, width, height), "End", custombutton))
                {
                    EndDialogue();
                }
            }
            int count = 0;

            for (int i = 0; i < currentdialog.Children().Count; i++)
            {
                Dialogue child = currentdialog.Children()[i];
                if (InventoryCheck(child.Req) && ReputationCheck(child.RepMin, child.RepMax))
                {
                    selections.Add(i);
                    if (GUI.Button(new Rect(20, 60 + height * (count + 1), width, height), child.Option, custombutton))
                    {
                        /**
						var tmp = player.GetComponent<SoundController> ();
						tmp.PlayScroll2 ();	
						if (child.GiveItem != null)
						{
							tmp.PlayItem ();
							inventory.AddItem(child.GiveItem);
							setDisplayText ("Item added to inventory");
							child.GiveItem = null;
						}
						if (child.Take.Length > 0)
						{
							inventory.RemoveThis(child.Take);
						}
						interact.Reputation [name] = interact.Reputation [name] + child.Rep;
						if (child.Rep > 0) {
							tmp.PlayReputation ();
							setDisplayText ("Reputation increased");
						}
						if (!(child.sendToX==0 && child.sendToY==0 && child.sendToZ==0)) {
							EndDialogue ();
							control.SetPosition (new Vector3 (child.sendToX, child.sendToY, child.sendToZ));
							break;
						}
						ContinueDialogue(i);
                         */

                        executeChoice(i);
                        break;
                    }
                    count++;
                }
            }
        }

        if (displayTime > 0)
        {
            GUI.Box(new Rect(Screen.width / 2 - width / 2, Screen.height / 2 - height / 2, width, height), display, extraButton);
        }
    }

    private void executeChoice(int i)
    {
        Dialogue child = currentdialog.Children()[i];
        var tmp = player.GetComponent<SoundController>();
        tmp.PlayScroll2();
        if (child.GiveItem != null)
        {
            tmp.PlayItem();
            inventory.AddItem(child.GiveItem);
            setDisplayText("Item added to inventory");
            child.GiveItem = null;
        }
        if (child.Take.Length > 0)
        {
            inventory.RemoveThis(child.Take);
        }
        interact.Reputation[name] = interact.Reputation[name] + child.Rep;
        if (child.Rep > 0)
        {
            tmp.PlayReputation();
            setDisplayText("Reputation increased");
        }
        if (!(child.sendToX == 0 && child.sendToY == 0 && child.sendToZ == 0))
        {
            EndDialogue();
            control.SetPosition(new Vector3(child.sendToX, child.sendToY, child.sendToZ));

        }
        ContinueDialogue(i);
    }

    public void StartDialogue()
    {
        if (talking) return;
        mouseover = false;
        talking = true;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        currentdialog = dialog;
        GuiPointer.SetActive(true);
        MoveIndicator(0);
    }

    void ContinueDialogue(int i)
    {
        selIndex = 0;
        currentdialog = currentdialog.Children()[i];
        MoveIndicator(0);
    }

    void EndDialogue()
    {
        var tmp = player.GetComponent<SoundController>();
        tmp.PlayEnd();
        talking = false;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        control.LeaveConversation();
        GuiPointer.SetActive(false);
    }

    bool InventoryCheck(string id)
    {
        return id.Length == 0 || inventory.HaveItem(id);
    }

    bool ReputationCheck(int r1, int r2)
    {
        return interact.Reputation[name] > r1 && interact.Reputation[name] < r2;
    }

    void setDisplayText(string str)
    {
        display = str;
        displayTime = 1.5f;
    }

    void changeSelectionIndex(bool b)
    {
        if (selections.Count > 0)
        {

            if (b)
            {
                selIndex++;
                if (selIndex == selections.Count)
                {
                    selIndex = 0;
                }
            }
            else
            {
                selIndex--;
                if (selIndex < 0)
                {
                    selIndex = selections.Count - 1;
                }
            }
        }
        if (GuiPointer.activeSelf) MoveIndicator(selIndex);
    }

    private static void MoveIndicator(int i)
    {
        GuiPointer.transform.localPosition = new Vector3(-0.95f * Screen.width / 2, (-.175f + ((i - 3) * -0.15f))  * Screen.height, 0);
    }
}
