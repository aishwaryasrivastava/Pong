using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotAtScript : MonoBehaviour
{
    public int health;
    // Use this for initialization
    void Start() { }

    void shotAt(Vector3 damageVector)
    {
        GetComponent<Rigidbody>().AddForce(damageVector / 10, ForceMode.Impulse);
        health -= (int)damageVector.magnitude + 1;
    }
    // Update is called once per frame
    void Update()
    {
        if (health < 0)
        {
            Destroy(gameObject);
        }
    }
}
