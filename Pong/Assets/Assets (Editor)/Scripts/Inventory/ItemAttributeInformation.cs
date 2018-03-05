using UnityEngine;

public class ItemAttributeInformation : MonoBehaviour
{
    public enum Type { Axe, Key, Keys, Keycode, Cake, GunWeapon, None = -1 }
    public Type type = Type.None;

    public string id = "";

}


