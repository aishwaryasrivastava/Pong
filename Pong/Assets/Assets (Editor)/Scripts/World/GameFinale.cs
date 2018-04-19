using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.PostProcessing;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameFinale : MonoBehaviour
{
    public AudioClip music;
    public GameObject Finale;
    public GameObject[] OldUI;
    public Text FinaleText;
    public bool MovePlayer, MoveCamera;
    public Vector3 PlayerPos, CameraLookHere;
    public int EndingNumber;
    public float Speed;
    public bool LockCamera;             //If enabled, locks player camera once triggered (after being set if applicable)

    private float timer;
    private bool ReadyToContinue;
    private int StringCursor, Cursor;

    private readonly string[][] Endings = 
    {
        new [] //Peaceful ending
        {
            ""
        },
        new [] //Violent ending
        {
            ""
        },
        new [] //Hole ending
        {
            ""
        },
        new [] //Cake ending
        {
            "You have done well to make it this far my child",
            "That look on your face tells me you do not recognize me, but perhaps that is for the best",
            "I have been watching over you here, waiting for you to solve my riddle, and now you have",
            "It's time to go home, Crawfis"
        }
    };


    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (MovePlayer) other.transform.position = PlayerPos;
            if (MoveCamera)
            {
                Camera.main.transform.forward = CameraLookHere - Camera.main.transform.position;               
                Camera.main.GetComponent<PostProcessingBehaviour>().profile.chromaticAberration.enabled = true;
                Camera.main.GetComponent<PostProcessingBehaviour>().profile.grain.enabled = false;
            }
            else Camera.main.GetComponent<PostProcessingBehaviour>().profile.motionBlur.enabled = true;
            if (LockCamera) other.gameObject.GetComponent<PlayerMovementController>().LockCamera();

            Finale.SetActive(true);
            foreach (var u in OldUI) u.SetActive(false);

            PauseManager.Halt();
            foreach (var a in Camera.main.gameObject.GetComponents<AudioSource>())
            {
                //a.volume = 0;
                a.Stop();
            }
            if (music != null) other.gameObject.GetComponent<AudioSource>().PlayOneShot(music);
        }
    }

    void FixedUpdate()
    {
        if (!PauseManager.Halted || ReadyToContinue) return;
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

    private void ResetPP()
    {
        var tmp = Camera.main.GetComponent<PostProcessingBehaviour>().profile;
        tmp.ambientOcclusion.enabled = true;
        tmp.antialiasing.enabled = true;
        tmp.vignette.enabled = true;
        tmp.grain.enabled = true;
        tmp.chromaticAberration.enabled = false;
        tmp.motionBlur.enabled = true;
    }

    void Update()
    {
        if (!PauseManager.Halted) return;
        if (Input.GetKeyDown(KeyCode.Return))
        {
            if (ReadyToContinue)
            {
                StringCursor++;
                Cursor = 0;
                ReadyToContinue = false;
                if (StringCursor >= Endings[EndingNumber - 1].Length)
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

    IEnumerator LoadAsyncScene()
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Assets (Scenes)/Credits");
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

    }
}
