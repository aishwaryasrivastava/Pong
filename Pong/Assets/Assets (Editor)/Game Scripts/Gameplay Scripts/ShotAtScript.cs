using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    private int curHealth;
    public int health;

    private Rigidbody rb;

    void Start()
    {
        curHealth = health;
        rb = GetComponent<Rigidbody>();
    }

    public void ShotAt(Vector3 damageVector)
    {
        if(rb != null) rb.AddForce(damageVector /5 , ForceMode.Impulse);
        curHealth -= (int)damageVector.magnitude + 1;

        
        if (curHealth < 0)
        {
            gameObject.SetActive(false);
            Destroy(gameObject);
        }

        GetComponent<MeshRenderer>().material.color =
            new Color(1, (float)curHealth / health, (float)curHealth / health); //really only for the test boxes. Probably remove
    }
}
