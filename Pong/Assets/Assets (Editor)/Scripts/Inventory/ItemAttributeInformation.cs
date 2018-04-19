using UnityEngine;

public class ItemAttributeInformation : MonoBehaviour
{
    public enum Type { None, Axe=-1, Key=1, Keys, Keycode, Cake, Disguise }
    public Type type = Type.None;

    public string id = "";

}


