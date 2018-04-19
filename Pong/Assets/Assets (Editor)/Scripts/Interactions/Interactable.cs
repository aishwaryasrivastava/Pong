using UnityEngine;

public class Interactable : MonoBehaviour
{

    public enum InteractableType
    {
        PickUp, Inspectable, Door, Person, Pipe, Removable, Observable, HandGun, Triggerable
    }

    public InteractableType type;
    public string GoodString, BadString;
}
