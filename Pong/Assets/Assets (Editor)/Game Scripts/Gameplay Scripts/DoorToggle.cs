using UnityEngine;

public class DoorToggle : MonoBehaviour
{
    public enum DoorType { Swing, Slide }

    public DoorType Type;

    public bool Locked, PermaLock;
    private Animator Door;

    public void Toggle(bool IHaveAKey)
    {
        if (PermaLock) return;
        if (Locked && IHaveAKey) Locked = false;
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
