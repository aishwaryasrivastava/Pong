using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    private int curHealth;
    public int health;

    private Rigidbody rb;
    private MeshRenderer mr;

    void Start()
    {
        curHealth = health;
        rb = GetComponent<Rigidbody>();
        mr = GetComponent<MeshRenderer>();
    }

    public void ResetSelf()
    {
        gameObject.SetActive(true);
        curHealth = health;
        var tmp = GetComponent<GuardAnimHandler>();
        if (tmp != null) tmp.Reset();
    }

    public void ShotAt(Vector3 damageVector)
    {
        if(rb != null) rb.AddForce(damageVector /5 , ForceMode.Impulse);
        curHealth -= (int)damageVector.magnitude + 1;
        if (curHealth < 0)
        {
            var tmp = GetComponent<GuardAnimHandler>();
            if (tmp == null) gameObject.SetActive(false);
            else
            {
                tmp.ToDied();
            }
            ResetLevel.resettables.Add(transform);
        }
    }
}
