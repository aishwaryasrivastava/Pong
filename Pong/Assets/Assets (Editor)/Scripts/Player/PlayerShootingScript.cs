using UnityEngine;
using UnityEngine.UI;

public class PlayerShootingScript : MonoBehaviour
{
    private bool reloading;
    public bool auto = true;
    public float reloadDuration;
    public int ammoCount;
    public int magazineSize;
    private float timer;
    public float recoil;
    public int damage = 30;
    public float fireGap = 0.1f;
    private float MaxRecoilShift = 15;
    private const float flareDuration = 0.03f;

    public ToggleScript ammoMcCount;

    private RaycastHit Shot;
    private GameObject flare;
    public Transform gun;
    private Transform magazine;
    private Vector3 magazinePositionBackup;
    private Transform shell;
    private Vector3 shellPositionBackup;

    public SoundController sounds;
    public PlayerMovementController movement;

    void Start()
    {
        reloadDuration = 2f;
        reloading = false;
        ammoCount = magazineSize;
        timer = 0;
        //gun = transform.GetChild(0);
        gun = transform;
        magazine = gun.transform.Find("Magazine");
        magazinePositionBackup = magazine.localPosition;
        shell = gun.transform.Find("Shell");
        shellPositionBackup = shell.localPosition;
        flare = gun.Find("Flare").gameObject;
        flare.SetActive(false);
        recoil = 0;
        ammoMcCount.UpdateValue(magazineSize, magazineSize);
		sounds = gameObject.GetComponentInParent<SoundController> ();
    }

    void Update()
    {
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return; //Don't shoot people while in dialogue with them
        if (FireWeapon() && CanFire())
        {
            Fire();
            movement.shooting = true;
        } 
        if (Input.GetKeyDown(KeyCode.R) && ammoCount < magazineSize && !reloading && timer <= 0)
        {
            reloading = true;
            timer = reloadDuration;
        }
        if (reloading) { 
			Reload(); 
		}
        if (timer > 0)
        {
            timer -= Time.deltaTime;
            shell.Translate(10 * Time.deltaTime, 5 * Time.deltaTime, 0);
        }
        if (recoil > 0)
        {
            Recoil(-Time.deltaTime * 20);
        }
        if (timer <= fireGap - flareDuration) { flare.SetActive(false); }
    }

    private void Recoil(float shift)
    {
        recoil += shift;
        //gun.Rotate(-shift/2, 0, 0);
        gun.Translate(0, 0, -shift/200);
    }

    void Fire()
    {
        flare.SetActive(true);
        shell.localPosition = shellPositionBackup;
        if (Physics.Raycast(transform.position, Camera.main.transform.forward, out Shot))
        {
            var h = Shot.transform.GetComponent<ShotAtScript>();
            if(h != null) h.ShotAt(damage*Camera.main.transform.forward); //transform.SendMessage("shotAt", damage * transform.TransformDirection(), SendMessageOptions.DontRequireReceiver);
        }
        ammoCount--;
        ammoMcCount.UpdateValue(ammoCount, magazineSize);
        timer = fireGap;
        Recoil(damage/10f);
        
        sounds.PlayShoot();
    }

    bool FireWeapon()
    {
        if (auto) { return Input.GetButton("Fire1"); }
        else { return Input.GetButtonDown("Fire1"); }
    }

    bool CanFire()
    {
        return timer <= 0 && ammoCount > 0 && !reloading;
    }
    void Reload()
    {
        if (timer > reloadDuration / 2) { magazine.Translate(0, -Time.deltaTime / reloadDuration, 0); }
        else if (timer > 0) { magazine.Translate(0, Time.deltaTime / reloadDuration, 0); }
        else
        {
            magazine.localPosition = magazinePositionBackup;
            reloading = false;
            ammoCount = magazineSize;
            ammoMcCount.UpdateValue(ammoCount, magazineSize);
        }
    }
}
