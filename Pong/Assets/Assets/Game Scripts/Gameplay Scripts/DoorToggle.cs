using UnityEngine;

public class DoorToggle : MonoBehaviour
{
    private bool Open;

    private readonly float[] closed = {5, 0, -90};
    private readonly float[] open = {1, 4, 90};

    public void Toggle()
    {
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
