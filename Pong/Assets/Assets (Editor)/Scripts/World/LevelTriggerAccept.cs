using UnityEngine;

public class LevelTriggerAccept : MonoBehaviour
{
    public WorldLoader loader;

    void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player")) loader.TriggerNextLevel();
    }
}
