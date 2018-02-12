using UnityEngine;

public class ItemSpawner : MonoBehaviour
{
    public float x, y, z, xMax, yMax, zMax;
    public float ItemsToGenerate;

	void Start ()
	{
        var item = Resources.Load("Prefabs/Item");
        for (var i = 0; i < ItemsToGenerate; i++)
        {
            var newItem = Instantiate(item, transform) as GameObject;
	        if (newItem != null)
	        {
	            newItem.transform.position = new Vector3(Random.Range(x, xMax), Random.Range(y, yMax),
	                Random.Range(z, zMax));
	        }

	    }

	}

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha0))
        {
            var item = Resources.Load("Prefabs/Item");

            var newItem = Instantiate(item, transform) as GameObject;
            if (newItem != null)
            {
                newItem.transform.position = new Vector3(Random.Range(x, xMax), Random.Range(y, yMax),
                    Random.Range(z, zMax));
            }

        }
    }
}
