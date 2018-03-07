using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeDamage : MonoBehaviour {

    public int health;
    public int InvulnerabilityTime = 20;
    private int counter;

	// Use this for initialization
	void Start () {
        health = 3;
        counter = 0;
	}
	
	// Update is called once per frame
	void Update () {
        if (counter > 0) counter--;
	}

    public void TakeDamage()
    {
        health--;
        if (health < 1) gameObject.SetActive(false);

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<MeleeHitbox>() != null)
        {

            if (counter < 1)
            {
                counter = InvulnerabilityTime;
                TakeDamage();
            }
        }
    }
}
