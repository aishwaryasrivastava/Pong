using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShotAt : MonoBehaviour
{
    private int health;
    // Use this for initialization
    void Start()
    {
        health = 100;
    }

    void shotAt(int damage)
    {
        health -= damage;
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
