using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    protected int curHealth;
    public int health;

    private Rigidbody rb;
    private MeshRenderer mr;

    void Start()
    {
        curHealth = health;
        rb = GetComponent<Rigidbody>();
        mr = GetComponent<MeshRenderer>();
        ResetLevel.Add(transform);
    }

    public virtual void ResetSelf()
    {
        gameObject.SetActive(true);
        curHealth = health;
        mr.material.color = Color.white;
    }

    public virtual void ShotAt(Vector3 damageVector)
    {
        //if (curHealth == health) ;
        if (rb != null) rb.AddForce(damageVector / 5, ForceMode.Impulse);
        curHealth -= (int)damageVector.magnitude + 1;
        if (curHealth < 0)
        {
            if (CompareTag("DestroyableAutoReset")) curHealth = health;
            else if (CompareTag("DestroyableDelete"))
            {
                Destroy(gameObject);
                GetComponentInParent<ScorePoker>().Scored();
            }
            else gameObject.SetActive(false);            
        }
        mr.material.color = new Color(1, (float)curHealth / health, (float)curHealth / health);
    }
}
