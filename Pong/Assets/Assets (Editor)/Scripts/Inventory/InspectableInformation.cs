using UnityEngine;
using UnityEngine.UI;

public class InspectableInformation : MonoBehaviour {

    public enum Type { Keypad, Note, None = -1 }
    public Type type = Type.None;
    public GameObject UIEquivalent; // messy coupling but rushing to push rn

    public string id = "";

    public GameObject Inspectable;

    // This is keypad exclusive code for now, won't get called unless type is keypad but this can be abstracted later

    private int curNum;
    private int counter, curCode, correctCode = 6567; // hardcoded, in the end every keypad will have a door attached to it with the right code.
    public void horMove(int move)
    {
        //Debug.Log("moved " + move);
        var original = UIEquivalent.transform.GetChild(curNum).GetChild(0);
        curNum = (int)Mathf.Repeat(curNum + move, 9); // 9 should be keypad size or some equivalent
        var newOne = UIEquivalent.transform.GetChild(curNum).GetChild(0);
        original.GetComponent<Image>().color = Color.white;
        newOne.GetComponent<Image>().color = Color.red;
    }


    // for thinking straight rip this out later and make one method
    public void vertMove(int move)
    {
        horMove(3 * move);
    }

    public void pressKey()
    {
        Debug.Log("Pressed " + (curNum + 1));
        counter++;
        curCode = (curCode * 10) + curNum + 1;
        updateText(curCode.ToString());
        if (counter == 4) // 4 digit code, can be changed
        {
            if (curCode == correctCode) Debug.Log("You unlocked the door"); // and play right sound
            else
            {
                Debug.Log("Wrong code");
                curCode = 0;
                counter = 0;
                updateText("");
                // play bad sound here
            }
        }
    }

    public void updateText(string input)
    {
        UIEquivalent.transform.GetChild(10).GetChild(1).GetComponent<Text>().text = input;
    }
}
