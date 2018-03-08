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
        if (curHealth < 0)
        {
            if (transform.CompareTag("hwG2") || transform.CompareTag("hwG1"))
            {
                var tmp = GetComponent<GuardScript>();
                tmp.health--;
                tmp.found = true;
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
