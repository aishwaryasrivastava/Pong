using UnityEngine;

public class LevelTriggerAccept : MonoBehaviour
{
    public WorldLoader loader;
    public PlayerInteractionController player;
    public Inventory inv;

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            ResetLevel.resettables.Clear();
            inv.SaveState();
            var pos = other.transform.position;
            player.RespawnVector = new Vector3(pos.x, pos.y, pos.z);
            loader.TriggerNextLevel();
        }
    }
}
