using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : MonoBehaviour
{
    private float timer;
    private int damage = 30;
    private float fireGap = 0.1f;
    private RaycastHit Shot;
    // Use this for initialization
    void Start()
    {
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton("Fire1"))
        {
            if (timer <= 0)
            {
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out Shot))
                {
                    Shot.transform.SendMessage("shotAt", damage, SendMessageOptions.DontRequireReceiver);
                }
                GetComponent<Animation>().Play("RecoilAnimation");
                timer = fireGap;
            }
        }
        timer -= Time.deltaTime;
    }
}
