using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class LogoFade : MonoBehaviour
{

    public Image schoolLogo;
    public Image teamLogo;
    public Image teamPicture;

    public Image Curtain;

    private const float time = 1.5f;
    private const float ext = 0.5f;

    IEnumerator Start()
    {
        if (Time.realtimeSinceStartup < 10)
        {
            schoolLogo.canvasRenderer.SetAlpha(0.0f);
            teamLogo.canvasRenderer.SetAlpha(0.0f);
            teamPicture.canvasRenderer.SetAlpha(0.0f);

            // Fade in first logo
            FadeIn(schoolLogo, time);
            yield return new WaitForSeconds(time);
            FadeOut(schoolLogo, time);
            yield return new WaitForSeconds(time);

            // Fade in second logo
            FadeIn(teamLogo, time);
            yield return new WaitForSeconds(time + ext);
            FadeOut(teamLogo, time);
            yield return new WaitForSeconds(time);

            // Fade in third logo
            FadeIn(teamPicture, time);
            yield return new WaitForSeconds(time + ext);
            FadeOut(teamPicture, time + ext);            
            FadeOut(Curtain, time + ext);
            yield return new WaitForSeconds(time + ext);
        }
        schoolLogo.enabled = false;
        teamLogo.enabled = false;
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
