using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;using UnityEngine.SceneManagement;

public class LogoFade : MonoBehaviour
{

    public Image firstLogo;
    public Image secondLogo;

    public Image thirdLogo;//team
    // Next level to load will most likely be main menu.  Explore possibilities of making this modular and having multiple Splash Scenes for better OOP instead of all in one

    IEnumerator Start()
    {
        firstLogo.canvasRenderer.SetAlpha(0.0f);
        secondLogo.canvasRenderer.SetAlpha(0.0f);
        thirdLogo.canvasRenderer.SetAlpha(0.0f);
        // Fade in/out first logo
        FadeIn(firstLogo);
        yield return new WaitForSeconds(2.0f);
        
        // Fade in/out second logo
        FadeIn(secondLogo);
        yield return new WaitForSeconds(2.0f);
        
        // Fade in/out third logo
        FadeIn(thirdLogo);
        yield return new WaitForSeconds(2.0f);

        FadeOut(firstLogo);
        FadeOut(secondLogo);
        FadeOut(thirdLogo);
        yield return new WaitForSeconds(1.0f);

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1); // transition to next scene
    }

    void FadeIn(Image img)
    {
        img.CrossFadeAlpha(1.0f, 1.0f, false);
    }

    void FadeOut(Image img)
    {
        img.CrossFadeAlpha(0.0f, 1.0f, false);
    }
}
