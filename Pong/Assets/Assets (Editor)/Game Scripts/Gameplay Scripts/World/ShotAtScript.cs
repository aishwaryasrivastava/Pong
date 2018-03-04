using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    private int curHealth;
    public int health;

    private Rigidbody rb;
    private MeshRenderer mr;
    private SkinnedMeshRenderer alt;

    void Start()
    {
        curHealth = health;
        rb = GetComponent<Rigidbody>();
        mr = GetComponent<MeshRenderer>();
        alt = mr == null ? GetComponentInChildren<SkinnedMeshRenderer>() : null;
    }

    public void ResetSelf()
    {
        gameObject.SetActive(true);
        curHealth = health;
        if(mr != null) mr.material.color = Color.white;
        if (alt != null) alt.material.color = Color.blue;
    }

    public void ShotAt(Vector3 damageVector)
    {
        if(rb != null) rb.AddForce(damageVector /5 , ForceMode.Impulse);
        curHealth -= (int)damageVector.magnitude + 1;
        
        if (curHealth < 0)
        {
            gameObject.SetActive(false);
            //Destroy(gameObject);
            ResetLevel.resettables.Add(transform);
        }
        //really only for the test boxes. Probably remove
        if (mr != null) mr.material.color = new Color(1, (float) curHealth / health, (float) curHealth / health);
        if (alt != null) alt.material.color = new Color(1 - (float) curHealth / health, 0, (float) curHealth / health);
    }
}
