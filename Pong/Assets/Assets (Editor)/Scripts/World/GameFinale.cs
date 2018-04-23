using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.PostProcessing;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameFinale : MonoBehaviour
{
    public static bool Violent, Digger;

    public AudioClip music;
    public GameObject Finale;
    public GameObject[] OldUI;
    public Text FinaleText;
    public bool MovePlayer, MoveCamera, LockCamera, RequireViolent, RequireDigger;
    public Vector3 PlayerPos, CameraLookHere;
    public int EndingNumber;
    public float Speed;      

    private float timer;
    private bool ReadyToContinue, Current;
    private int StringCursor, Cursor;

    private readonly string[][] Endings = 
    {
        new [] //Peaceful ending
        {
            "Having escaped without hurting anyone, you rush back to your home to seek evidence",
            "Upon arriving however, you find your house full of all your friends and family",
            "There's cake and balloons, a whole party, and oddly it's all for you",
            "Turns out the whole ordeal was just a test passed down from Lord Zicong himself",
            "You are now on the Olympic Rendering team, congratulations"
        },
        new [] //Violent ending
        {
            "As you turn the corner of the walk to freedom you encounter a crowd of guards",
            "Turns out attacking guards in prison doesn't go unnoticed after all",
            "Before you can even think of putting up a fight you find yourself knocked out on the ground",
            "When you awake you find yourself in a new max security prison nearby; no getting out of this one",
            "You are now in prison forever, good job"
        },
        new [] //Hole ending
        {
            "Emerging from the dirt, you breathe his first breath of freedom, but the joyous feeling soon fades",
            "Behind can be heard the sound of a tunnel collapsing on top of someone",
            "Dumbstruck at what just happened, you stagger back and collapse at the prison entrance",
            "You awake back in your cell, but now with one less friend to keep you company",
            "You are now both still in prison and also sad, not a great outcome"
        },
        new [] //Cake ending
        {
            "You have done well to make it this far my child",
            "That look on your face tells me you do not recognize me, but perhaps that is for the best",
            "I have been watching over you here, waiting for you to solve my riddle, and now you have",
            "It's time to go home, Crawfis",
            "You are now ascended, congrats on finding the secret ending"
        }
    };

    void OnTriggerEnter(Collider other)
    {
        if (PauseManager.Halted) return;
        if (other.CompareTag("Player"))
        {
            if (RequireDigger && !Digger) return;
            if (RequireViolent && !Violent) return;
            Current = true;

            if (MovePlayer) other.transform.position = PlayerPos;
            if (MoveCamera)
            {
                Camera.main.transform.forward = CameraLookHere - Camera.main.transform.position;               
                Camera.main.GetComponent<PostProcessingBehaviour>().profile.depthOfField.enabled = true;
                Camera.main.GetComponent<PostProcessingBehaviour>().profile.vignette.enabled = true;
            }
            else Camera.main.GetComponent<PostProcessingBehaviour>().profile.motionBlur.enabled = true;
            if (LockCamera) other.gameObject.GetComponent<PlayerMovementController>().LockCamera();

            Finale.SetActive(true);
            foreach (var u in OldUI) u.SetActive(false);

            
            foreach (var a in Camera.main.gameObject.GetComponents<AudioSource>())
            {
                //a.volume = 0;
                a.Stop();
            }
            if (music != null) other.gameObject.GetComponent<AudioSource>().PlayOneShot(music);
            PauseManager.Halt();
        }
    }

    public static void ResetPP()
    {
        var tmp = Camera.main.GetComponent<PostProcessingBehaviour>().profile;
        tmp.ambientOcclusion.enabled = true;
        tmp.antialiasing.enabled = true;
        tmp.vignette.enabled = true;
        tmp.grain.enabled = true;
        tmp.depthOfField.enabled = false;
        tmp.motionBlur.enabled = true;
    }

    void Update()
    {
        if (!PauseManager.Halted || !Current) return;
        if (!ReadyToContinue)
        {
            timer += Time.deltaTime;
            if (timer > Speed)
            {
                timer -= Speed;
                Cursor++;
            }
            if (StringCursor >= Endings[EndingNumber - 1].Length) return;
            if (Cursor > Endings[EndingNumber - 1][StringCursor].Length)
            {
                ReadyToContinue = true;
                return;
            }
            FinaleText.text = Endings[EndingNumber - 1][StringCursor].Substring(0, Cursor);
        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            if (ReadyToContinue)
            {
                StringCursor++;
                Cursor = 0;
                ReadyToContinue = false;
                if (StringCursor == Endings[EndingNumber - 1].Length - 1)
                {
                    FinaleText.color = new Color(155, 0, 0);
                }
                else if (StringCursor >= Endings[EndingNumber - 1].Length)
                {
                    ResetPP();
                    StartCoroutine(LoadAsyncScene());
                }
            }
            else if (Cursor < Endings[EndingNumber - 1][StringCursor].Length)
            {
                ReadyToContinue = true;
                Cursor = Endings[EndingNumber - 1][StringCursor].Length;
                FinaleText.text = Endings[EndingNumber - 1][StringCursor];               
            }
        }
    }

    public static IEnumerator LoadAsyncScene()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Assets (Scenes)/Credits");
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

    }
}
