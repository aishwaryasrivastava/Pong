using UnityEngine;

public class DoorToggle : MonoBehaviour
{
    public enum DoorType { Swing, Slide }

    public DoorType Type;

    public bool Locked;
    public string code = "";
    private Animator Door;

    public void Toggle(bool IHaveTheKey)
    {
        if (Locked && IHaveTheKey) Locked = false;
        if (Locked) return;

        Door = gameObject.GetComponent<Animator>();
        switch (Type)
        {
            case DoorType.Slide:
                Door.Play("gate-toggle");
                break;
            case DoorType.Swing:
                Door.Play("door-open");
                break;
        }

    }
}
