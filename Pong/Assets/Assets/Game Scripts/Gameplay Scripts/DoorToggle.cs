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
        if (Locked && IHaveAKey)
        {
            Locked = false;
            transform.gameObject.SetActive(false);
            return;
        }
        if (Locked) return;
        
        Open = !Open;
        if (Open)
        {
            Door.SetBool("Open Cell",true);
        }
        else
        {
            Door.SetBool("Open Cell",false);
        }
    }
}
