using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuControl : MonoBehaviour
{
    public Image load, load2, curtain;

    void Start()
    {
        load.enabled = load2.enabled = false;
    }
    IEnumerator LoadAsyncScene()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Scenes/Pong");
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

    }

    public void Play()
    {
        //SceneManager.LoadScene("Scenes/Pong");
        load.enabled = load2.enabled = curtain.enabled = true;
        StartCoroutine(LoadAsyncScene());
    }

    public void Quit()
    {
        // Add desired logic for quit here
        Application.Quit();
    }
}
