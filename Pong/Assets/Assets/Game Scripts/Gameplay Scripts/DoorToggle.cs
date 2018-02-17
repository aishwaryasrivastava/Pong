using UnityEngine;

public class DoorToggle : MonoBehaviour
{
    private bool Open;
    public bool Locked;

    private readonly float[] closed = {5, 0, -90};
    private readonly float[] open = {1, 4, 90};//this needs to be changed later
    private Animator Door;

    public void Toggle(bool IHaveAKey)
    {
        Door = gameObject.GetComponent<Animator>();
        if (Locked && IHaveAKey)
        {
            Locked = false;
            Open = true;
            return;
        }
        if (Locked) return;
        
        if (Open)
        {
            Door.Play("gate-toggle");
            Open = false;
            Locked = true;
        }

    }
}
