using UnityEngine;
using UnityEngine.UI;

public class PlayerShootingScript : MonoBehaviour
{
    private bool reloading;
    private float reloadDuration;
    public int ammoCount;
    private int magazineSize;
    private float timer;
    public float recoil;
    private int damage = 30;
    private float fireGap = 0.1f;
    private float yaw = -0.044f;
    private float pitch = 0.044f;
    private float sensitivity = 0.9f;
    private float MaxRecoilShift = 15;

    public Text ammoMcCount;

    private RaycastHit Shot;
    private GameObject flare;
    public Transform gun;
    private Transform magazine;
    private Vector3 magazinePositionBackup;

    public SoundController sounds;
    public PlayerMovementController movement;

    void Start()
    {
        reloadDuration = 2f;
        reloading = false;
        magazineSize = 30;
        ammoCount = magazineSize;
        timer = 0;
        //gun = transform.GetChild(0);
        magazine = gun.transform.Find("AK_47_Magazine");
        magazinePositionBackup = magazine.localPosition;
        flare = gun.Find("Flare").gameObject;
        flare.SetActive(false);
        recoil = 0;
        ammoMcCount.text = ammoCount + " / " + magazineSize;
    }

    void Update()
    {
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return; //Don't shoot people while in dialogue with them
        if (CanFire() && Input.GetButton("Fire1")) { Fire(); }
        if (Input.GetKeyDown(KeyCode.R) && ammoCount < magazineSize && !reloading)
        {
            reloading = true;
            timer = reloadDuration;
        }
        if (reloading) { Reload(); }
        if (timer > 0) { timer -= Time.deltaTime; }
        if (recoil > 0)
        {
            Recoil(-Time.deltaTime * 20);
            //recoil -= Time.deltaTime * 20;
            //transform.Rotate(Time.deltaTime * 20, 0, 0);
            //gun.Translate(0, 0, Time.deltaTime * 0.2f);
        }
        if (timer <= 0.07) { flare.SetActive(false); }
    }

    private void Recoil(float shift)
    {
        recoil += shift;
        gun.Rotate(-shift, 0, 0);
        gun.Translate(0, 0, -shift/100);
    }

    void Fire()
    {
        flare.SetActive(true);
        if (Physics.Raycast(transform.position, Camera.main.transform.forward, out Shot))
        {
            var h = Shot.transform.GetComponent<ShotAtScript>();
            if(h != null) h.ShotAt(damage*Camera.main.transform.forward); //transform.SendMessage("shotAt", damage * transform.TransformDirection(), SendMessageOptions.DontRequireReceiver);
        }
        ammoCount--;
        ammoMcCount.text = ammoCount + " / " + magazineSize;
        timer = fireGap;
        Recoil(damage/10f);
        //recoil += damage / 10f;
        //transform.Rotate(damage / -10f, 0, 0);
        
        sounds.PlayShoot();
    }



    bool CanFire()
    {
        return timer <= 0 && ammoCount > 0 && !reloading;
    }
    void Reload()
    {
        if (timer > reloadDuration / 2) { magazine.Translate(0, -1f * Time.deltaTime, 0); }
        else if (timer > 0) { magazine.Translate(0, Time.deltaTime, 0); }
        else
        {
            magazine.localPosition = magazinePositionBackup;
            reloading = false;
            ammoCount = magazineSize;
            ammoMcCount.text = ammoCount + " / " + magazineSize;
        }
    }
}
