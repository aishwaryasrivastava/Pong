using UnityEngine;

public class InspectableInformation : MonoBehaviour {

    public enum Type { Keypad, Note, None = -1 }
    public Type type = Type.None;

    public string id = "";

    public GameObject Inspectable;
}
