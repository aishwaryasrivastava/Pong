using System.Linq;
using UnityEngine;

public class LevelShiftController : MonoBehaviour
{

    public int[] ActiveLevels;

    public void Transfer(int loadingLevel)
    {
        gameObject.SetActive(ActiveLevels.Any(g => g == loadingLevel));
    }
}
