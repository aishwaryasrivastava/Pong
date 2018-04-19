
using UnityEngine;
using UnityEngine.UI;

public class DumbScript : MonoBehaviour
{
    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player")) GameFinale.Digger = true;
    }
}
