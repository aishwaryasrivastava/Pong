using UnityEngine;

public class Interactable : MonoBehaviour
{

    public enum InteractableType
    {
        PickUp, Inspectable, Door, Person, Pipe, Removable, Observable, HandGun, Touchable
    }

    public InteractableType type;
    public string GoodString, BadString;
}
