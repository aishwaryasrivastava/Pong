using UnityEngine;

public class PlayerShootingScript : MonoBehaviour
{
    private float timer;
    private int damage = 30;
    private float fireGap = 0.1f;
    private float yaw = -0.044f;
    private float pitch = 0.044f;
    private float sensitivity = 0.57f;
    private RaycastHit Shot;
    private GameObject flare;
    private Transform gun;
    private float recoil;
    // Use this for initialization
    void Start()
    {
        timer = 0;
        gun = gameObject.transform.Find("AK-47");
        flare = gun.Find("Flare").gameObject;
        flare.SetActive(false);
        recoil = 0;
    }

    // Update is called once per frame
    void Update()
    {
        Fire();
    }

    void Fire()
    {
        if (timer <= 0)
        {
            flare.SetActive(false);
            if (Input.GetMouseButton(0))
            {
                if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out Shot))
                {
                    flare.SetActive(true);
                    Shot.transform.SendMessage("shotAt", damage * transform.TransformDirection(Vector3.forward), SendMessageOptions.DontRequireReceiver);
                }
                timer = fireGap;
                flare.SetActive(true);
                recoil += damage / 10f;
                transform.Rotate(damage / -10f, 0, 0);
                gun.RotateAround(Vector3.zero, Vector3.right, damage / -10f);
            }
        }
        else
        {
            timer -= Time.deltaTime;
            if (timer <= 0.07) { flare.SetActive(false); }
        }
        if (recoil > 0)
        {
            recoil -= Time.deltaTime * 20;
            transform.Rotate(Time.deltaTime * 20, 0, 0);
            gun.RotateAround(Vector3.zero, Vector3.right, Time.deltaTime * 20);
        }
    }
}
