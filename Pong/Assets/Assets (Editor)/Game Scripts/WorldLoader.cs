using UnityEngine;

public class WorldLoader : MonoBehaviour
{

    public int CurLevel = 1;

    public void TriggerNextLevel()
    {
        //unload level current
        for (var i = 0; i < transform.childCount; i++)
        {
            var tmp = transform.GetChild(i).Find("Level " + CurLevel);
            if (tmp != null) tmp.gameObject.SetActive(false);
        }
        CurLevel++;
        //load level next
        for (var i = 0; i < transform.childCount; i++)
        {
            var tmp = transform.GetChild(i).Find("Level " + CurLevel);
            if (tmp != null) tmp.gameObject.SetActive(true);
        }
    }
}
