using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    private int curHealth;
    public int health;
	public GameObject guard;

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
			var tmp = guard.GetComponent<GuardScript>();
			var tmp2 = GetComponent<GuardAnimHandler> ();
            if (tmp == null) gameObject.SetActive(false);
            else
            {
				if ((guard.CompareTag ("hwG2")) || guard.CompareTag ("hwG1")){
					tmp.health--;
					tmp.found = true;
				} else {
					tmp2.ToDied ();
				}
            }
            ResetLevel.resettables.Add(transform);
        }
    }
}
