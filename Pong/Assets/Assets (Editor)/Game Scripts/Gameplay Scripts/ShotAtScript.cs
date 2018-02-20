using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    private int curHealth;
    public int health;

    void Start()
    {
        curHealth = health;
    }

    public void ShotAt(Vector3 damageVector)
    {
        GetComponent<Rigidbody>().AddForce(damageVector / 10, ForceMode.Impulse);
        curHealth -= (int)damageVector.magnitude + 1;
        GetComponent<MeshRenderer>().material.color = new Color(1, (float)curHealth/health, (float)curHealth/health);
        if (curHealth < 0)
        {
            Destroy(gameObject);
        }
    }
}
