using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    public int health;
    public void ShotAt(Vector3 damageVector)
    {
        GetComponent<Rigidbody>().AddForce(damageVector / 10, ForceMode.Impulse);
        health -= (int)damageVector.magnitude + 1;
        if (health < 0)
        {
            Destroy(gameObject);
        }
    }
}
