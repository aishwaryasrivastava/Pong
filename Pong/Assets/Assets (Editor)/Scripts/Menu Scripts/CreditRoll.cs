using System.Collections;
using System.Collections.Generic;
using System.Threading;
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
    void FixedUpdate()
    {
        transform.position += new Vector3(0, speed, 0);

        time += Time.deltaTime;
        if (time>duration)
        {
            time -= 100;
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
            StartCoroutine(LoadAsyncScene());
            
        }
    }

    IEnumerator LoadAsyncScene()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Assets (Scenes)/MainMenu");
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

    }
}
