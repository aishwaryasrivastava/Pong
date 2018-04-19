using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine.SceneManagement;
using UnityEngine;

public class CreditRoll : MonoBehaviour
{

    void Update()
    {
        if (Input.GetAxis("Submit") > 0) StartCoroutine(LoadAsyncScene());
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
