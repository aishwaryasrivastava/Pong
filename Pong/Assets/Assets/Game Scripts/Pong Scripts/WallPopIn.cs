using UnityEngine;

public class WallPopIn : MonoBehaviour
{
    private const float timeToShow = 1.0f;
    private float timer;
    private MeshRenderer mr;
    private Renderer m;

	void Start ()
	{
	    mr = GetComponent<MeshRenderer>();
	    m = GetComponent<Renderer>();
	    mr.enabled = false;
	}
	
	void Update ()
    {
        if (timer > 0)
        {
            timer -= Time.deltaTime;
            m.material.color = new Color(m.material.color.r, m.material.color.g, m.material.color.b, timer);
            if (timer < 0)
            {
                mr.enabled = false;
            }

        }
	}

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            mr.enabled = true;
            timer = timeToShow;
            m.material.color = new Color(m.material.color.r, m.material.color.g, m.material.color.b, timer);
        }
    }
}
