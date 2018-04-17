using System.Linq;
using UnityEngine;

public class CameraRecoiler : MonoBehaviour
{
    public float value;
    public PlayerShootingScript[] Checks;
    public float GetCurrentRecoil()
    {
        var tmp = Checks.FirstOrDefault(g => g.isActiveAndEnabled);
        value = tmp == null ? 0 : tmp.Recoil;
        return value;
    }
}
