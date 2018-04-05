using UnityEngine;
using UnityEngine.UI;

public class GlitchyCrawfis : MonoBehaviour
{
    public GameObject Top;

    private float RemainingTime;

    private bool ImageState;

    void Start()
    {
        RemainingTime = 1f;
    }
	// Update is called once per frame

    void FixedUpdate()
    {
        if (!PauseManager.Paused) return;
        if (RemainingTime > 0)
        {
            RemainingTime -= Time.fixedUnscaledDeltaTime;
        }
        else
        {
            ImageState = !ImageState;
            Top.SetActive(ImageState);
            RemainingTime = ImageState ? Random.Range(0.1f, 0.5f) : Random.Range(0.5f, 2f);
        }
    }
}
