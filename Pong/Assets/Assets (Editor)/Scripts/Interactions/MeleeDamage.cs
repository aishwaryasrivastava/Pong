using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeDamage : MonoBehaviour {

    public int health;
	public GameObject guard;
    public int InvulnerabilityTime = 20;
    private int counter;
	public GameObject pipe;

	// Use this for initialization
	void Start () {
        health = 5;
        counter = 0;
	}
	
	// Update is called once per frame
	void Update () {
        if (counter > 0) counter--;
	}

    public void TakeDamage()
    {
		if ((guard.CompareTag ("hwG2")) || guard.CompareTag ("hwG1")) {
			var tmp = guard.GetComponent<GuardScript3> ();
			var tmp2 = GetComponent<Guard2AnimHandler>();
			var tmp3 = pipe.GetComponent<PlayerMeleeScript> ();
			if (tmp3.inAnimation) {
				tmp.health -= 50;
				tmp.found = true;
				tmp2.ToDamaged();
			}
		}else{
        	health--;
			var tmp = GetComponent<Guard4AnimHandler>();
			var tmp2 = GetComponent<GuardScript4>();
			tmp2.found ();
			tmp.Damaged();
		    if (health < 1)
		    {
				tmp2.KillMe();
		        //gameObject.SetActive(false);
		    }

		}

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
