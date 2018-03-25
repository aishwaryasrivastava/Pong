using UnityEngine;

public class ShotAtScriptHuman: ShotAtScript
{
    void Start()
    {
        curHealth = health;
    }

    public override void ResetSelf()
    {
        
        curHealth = health;
        
        var a = GetComponent<GuardScript4>();
        if (a != null) a.Reset();
        else
        {
            gameObject.SetActive(true);
            var tmp = GetComponent<GuardAnimHandler>();
            if (tmp != null) tmp.Reset();
        }
    }

    public override void ShotAt(Vector3 damageVector)
    {
        curHealth -= (int)damageVector.magnitude + 1;
		if (transform.CompareTag ("Guard")) {
			var tmp = transform.GetComponent<Guard4AnimHandler> ();
			tmp.Damaged ();
		}
        if (curHealth < 0)
        {
            if (transform.CompareTag("hwG2") || transform.CompareTag("hwG1"))
            {
                var tmp = GetComponent<GuardScript3>();
				var tmp2 = GetComponent<Guard2AnimHandler>();
				tmp.health-= (int)damageVector.magnitude + 1;
				tmp2.ToDamaged();
				tmp.found = true;
				tmp.damaged = true;
            }
            else if (transform.CompareTag("Guard"))
            {
                GetComponent<GuardScript4>().KillMe();
            }
            else
            {
                ResetLevel.Add(transform);
                gameObject.SetActive(false);
            }
        }
    }
}
