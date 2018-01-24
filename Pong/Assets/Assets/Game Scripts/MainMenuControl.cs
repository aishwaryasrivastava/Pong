using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuControl : MonoBehaviour
{
    public Scene s;
    void Start()
    {
        //StartCoroutine(LoadAsyncScene());
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
        SceneManager.LoadScene("Scenes/Pong");
    }

    public void Quit()
    {
        // Add desired logic for quit here
        Application.Quit();
    }
}
