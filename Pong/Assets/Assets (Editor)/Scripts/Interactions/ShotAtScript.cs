using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    protected int curHealth;
    public int health;
    public int resist;

    private Rigidbody rb;
    private MeshRenderer mr;

    void Start()
    {
        curHealth = health;
        rb = GetComponent<Rigidbody>();
        mr = GetComponent<MeshRenderer>();
        
    }

    public virtual void ResetSelf()
    {
        gameObject.SetActive(true);
        curHealth = health;
        if(mr != null) mr.material.color = Color.white;
    }

    public virtual void ShotAt(Vector3 damageVector)
    {
        var damage = (int)damageVector.magnitude + 1 - resist;
        if (damage <= 0) return;

        if (curHealth == health && !CompareTag("DestroyableDelete")) ResetLevel.Add(transform);

        if (rb != null) rb.AddForce(damageVector / 5, ForceMode.Impulse);
        curHealth -= damage;

        if (curHealth < 0)
        {
            if (CompareTag("DestroyableAutoReset")) curHealth = health;
            else if (CompareTag("DestroyableDelete"))
            {
                GetComponentInParent<ScorePoker>().Scored();
                Destroy(gameObject);              
            }
            else gameObject.SetActive(false);            
        }

        if (mr != null) mr.material.color = new Color(1, (float) curHealth / health, (float) curHealth / health);
    }
}
