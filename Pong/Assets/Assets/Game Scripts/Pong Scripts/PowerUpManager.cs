using UnityEngine;

public class PowerUpManager : MonoBehaviour
{
    public GameObject powerUp;
    private GameObject tmp;
    public float freq = 8;
    private float timeCount;
    public float spd = 2;

	void Start ()
    {
        tmp = Instantiate(powerUp, transform);
        timeCount = freq;
	}
	
	void Update ()
	{
	    if (Input.GetKeyDown(KeyCode.Alpha0)) timeCount = 0;
        timeCount -= Time.deltaTime;
        if (timeCount < 0)
        {
            tmp.gameObject.SetActive(true);
            tmp.transform.localPosition = new Vector3(Random.Range(-8, 8), Random.Range(2, 18), 10);
            timeCount = freq;
        }
        tmp.transform.position -= new Vector3(0, 0, spd * Time.deltaTime);
	}
}
