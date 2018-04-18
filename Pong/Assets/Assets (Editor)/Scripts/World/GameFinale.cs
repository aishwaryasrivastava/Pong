using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class GameFinale : MonoBehaviour
{
    public GameObject Finale;
    public GameObject[] OldUI;
    public Text FinaleText;
    public bool MovePlayer, MoveCamera;
    public Vector3 PlayerPos, CameraLookHere;
    public int EndingNumber;
    public float Speed;
    private float cursor;
    private bool ReadyToGo;
    private readonly string[] Endings = 
    {
        "",
        "",
        "",
        "You have done well to make it this far my child.\n" +
        "That look on your face tells me you do not recognize me, but perhaps that is for the best.\n" +
        "I have been watching over you here, waiting for you to solve my riddle, and now you have.\n" +
        "It's time to go home, Crawfis. "
    };


    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (MovePlayer) other.transform.position = PlayerPos;
            if (MoveCamera)
            {
                Camera.main.transform.forward = CameraLookHere - Camera.main.transform.position;
                other.gameObject.GetComponent<PlayerMovementController>().LockCamera();
            }
            Finale.SetActive(true);
            foreach (var u in OldUI)
            {
                u.SetActive(false);
            }
            PauseManager.Halt();
        }
    }

    void FixedUpdate()
    {
        if (!PauseManager.Halted || ReadyToGo) return;
        cursor+=Speed;
        if (cursor >= Endings[EndingNumber-1].Length)
        {
            ReadyToGo = true;
            return;
        }
        FinaleText.text = Endings[EndingNumber-1].Substring(0, (int) cursor);
    }

    void Update()
    {
        if (ReadyToGo && Input.GetKeyDown(KeyCode.Return))
        {
            //load credits probably
            Debug.Log("winner");
        }
    }
}
