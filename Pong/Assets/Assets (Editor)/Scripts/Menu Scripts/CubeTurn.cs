using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeTurn : MonoBehaviour
{
    public float spd;

    // Update is called once per frame
    void FixedUpdate () {
        transform.Rotate(spd * new Vector3(45, 45, 15) * Time.deltaTime);
    }
}
