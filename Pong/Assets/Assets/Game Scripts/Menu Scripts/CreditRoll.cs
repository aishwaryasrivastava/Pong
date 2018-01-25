using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class CreditRoll : MonoBehaviour
{

    public float speed;
    public float duration;

    private float time;

    // Use this for initialization
    void Start()
    {
        time = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 pos = transform.position;
        pos += new Vector3(0, speed, 0);
        transform.position = pos;

        time += Time.deltaTime;
        if (time>duration)
        {
            SceneManager.LoadSceneAsync("Scenes/MainMenu");
        }
    }
}
