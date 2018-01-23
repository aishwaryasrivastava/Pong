using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;using UnityEngine.SceneManagement;

public class LogoFade : MonoBehaviour
{

    public Image schoolLogo;
    public Image teamLogo;

    public Image teamPicture;

    public Image teamName;

    public Image Curtain;
    // Next level to load will most likely be main menu.  Explore possibilities of making this modular and having multiple Splash Scenes for better OOP instead of all in one

    IEnumerator Start()
    {
        if (Time.realtimeSinceStartup < 6)
        {
            schoolLogo.canvasRenderer.SetAlpha(0.0f);
            teamLogo.canvasRenderer.SetAlpha(0.0f);
            teamPicture.canvasRenderer.SetAlpha(0.0f);
            teamName.canvasRenderer.SetAlpha(0.0f);

            // Fade in first logo
            FadeIn(schoolLogo, 1.5f);
            yield return new WaitForSeconds(1.5f);

            // Fade in second logo
            FadeIn(teamLogo, 1.5f);
            FadeIn(teamName, 1.5f);
            yield return new WaitForSeconds(1.5f);

            // Fade in third logo
            FadeIn(teamPicture, 1.5f);
            yield return new WaitForSeconds(1.5f);

            //Fade everything out
            FadeOut(schoolLogo, 1.5f);
            FadeOut(teamLogo, 1.5f);
            FadeOut(teamPicture, 1.5f);
            FadeOut(teamName, 1.5f);
            FadeOut(Curtain, 1.5f);
            yield return new WaitForSeconds(1.5f);
        }
        schoolLogo.enabled = false;
        teamLogo.enabled = false;
        teamName.enabled = false;
        teamPicture.enabled = false;
        Curtain.enabled = false;
    }

    void FadeIn(Image img, float time)
    {
        img.CrossFadeAlpha(1.0f, time, false);
    }

    void FadeOut(Image img, float time)
    {
        img.CrossFadeAlpha(0.0f, time, false);
    }
}
