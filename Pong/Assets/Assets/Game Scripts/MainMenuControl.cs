using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuControl : MonoBehaviour {

    public void Play()
    {
        SceneManager.LoadScene(1);
    }

    public void Quit()
    {
        // Add desired logic for quit here
        Application.Quit();
    }
}
