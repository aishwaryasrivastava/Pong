
using UnityEngine;

public class MeleeHitbox : MonoBehaviour {

    // I can't remember why else I needed this class besides GetComponent? 
    // probably for directional knockback, but that's for later
    //henlo I made this useful just like you wanted
    public PlayerMeleeScript pipe;

    void OnTriggerEnter(Collider other)
    {
        if (pipe.inAnimation && other.CompareTag("Destroyable"))
        {
            other.GetComponent<ShotAtScript>().ShotAt(10*pipe.transform.forward);
        }
    } 
}
