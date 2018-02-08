using UnityEngine;

public class DoorToggle : MonoBehaviour
{
    private bool Open;
    public bool Locked;

    private readonly float[] closed = {5, 0, -90};
    private readonly float[] open = {1, 4, 90};//this needs to be changed later

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
            transform.localPosition = new Vector3(open[0], transform.localPosition.y, open[1]);
            transform.Rotate(0, open[2], 0);
        }
        else
        {
            transform.localPosition = new Vector3(closed[0], transform.localPosition.y, closed[1]);
            transform.Rotate(0, closed[2], 0);
        }
    }
}
