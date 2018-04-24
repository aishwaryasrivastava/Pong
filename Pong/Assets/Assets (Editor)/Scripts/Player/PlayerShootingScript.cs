using UnityEngine;
using UnityEngine.UI;

public class PlayerShootingScript : MonoBehaviour
{
    private bool reloading;
    public bool auto = true;
    public float reloadDuration;
    public int ammoCount;
    public int totalAmmo;
    public int magazineSize;
    private float timer;
    public float Recoil { get; private set; }
    public int damage = 30;
    public float fireGap = 0.1f;
    private Vector3 tmp;
    private const float flareDuration = 0.03f;
    public ToggleScript ammoMcCount;
    private RaycastHit Shot;
    private GameObject flare;
    private Transform magazine;
    private Vector3 magazinePositionBackup;
    private Transform shell;
    private Vector3 shellPositionBackup;
    private bool shotFired;

    public SoundController sounds;
    public PlayerMovementController movement;

    void Start()
    {
        reloading = false;
        ammoCount = magazineSize;
        Recoil = 0;
        timer = 0;
        magazine = transform.Find("Magazine");
        magazinePositionBackup = magazine.localPosition;
        shell = transform.Find("Shell");
        shellPositionBackup = shell.localPosition;
        flare = transform.Find("Flare").gameObject;
        flare.SetActive(false);
        ammoMcCount.UpdateValue(ammoCount, totalAmmo);
		sounds = gameObject.GetComponentInParent<SoundController> ();
    }

    void Update()
    {
        movement.shooting = false;
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return; //Don't shoot people while in dialogue with them

        if (FireWeapon() && CanFire())
        {
            Fire();
            movement.shooting = true;
        } 
        if ((Input.GetAxis("Reload") > 0) && ammoCount < magazineSize && !reloading && timer <= 0 && totalAmmo > 0)
        {
            reloading = true;
            timer = reloadDuration;
        }
        if (reloading)
        { 
			Reload(); 
		}
        if (timer > 0)
        {
            timer -= Time.deltaTime;
            shell.Translate(10 * Time.deltaTime, 5 * Time.deltaTime, 0);
        }
        if (Recoil > 0)
        {
            DoRecoil(-Time.deltaTime * 20);
            if (Recoil < 0) { Recoil = 0; }
        }
        if (timer <= fireGap - flareDuration)
        {
            flare.SetActive(false);
        }
    }

    private void DoRecoil(float shift)
    {
        Recoil += shift;
        //gun.Rotate(-shift/2, 0, 0);
        transform.Translate(0, 0, -shift/200);
    }

    void Fire()
    {
        flare.SetActive(true);
        shell.localPosition = shellPositionBackup;
        tmp = RandomizedShot(Camera.main.transform.forward, Recoil).normalized;
        if (Physics.Raycast(Camera.main.transform.position, tmp, out Shot))
        {
            var h = Shot.transform.GetComponent<ShotAtScript>();
            if (h != null)
            {
                h.ShotAt(damage * tmp);
            }
            else
            {
                var f = Shot.transform.GetComponent<ShotAtScriptHuman>();
                if (f != null)
                {
                    f.ShotAt(damage * tmp);
                }
            }
        }
        ammoCount--;
        ammoMcCount.UpdateValue(ammoCount, totalAmmo);
        timer = fireGap;
        DoRecoil(damage/10f);
        if (gameObject.CompareTag ("AK")) {
			sounds.PlayShoot ();
		} else if (gameObject.CompareTag ("Colt")) {
			sounds.PlayM4 ();
		}else if (gameObject.CompareTag ("HandGun")) {
			sounds.PlayHandgun ();
		}else if (gameObject.CompareTag ("Rifle")) {
			sounds.PlaySniper ();
		}
		sounds.PlayShell ();
    }

    bool FireWeapon()
    {
       // return auto ? Input.GetMouseButton(0) : Input.GetMouseButtonDown(0);
       if (auto)
        {
            return Input.GetAxis("Shoot") > 0;
        }
        if (Input.GetAxis("Shoot") > 0)
        {
            if (!shotFired)
            {
                return true;
            }
        }
        else
        {
            shotFired = false;
        }
        return false;
    }

    bool CanFire()
    {
        return timer <= 0 && ammoCount > 0 && !reloading;
    }
    void Reload()
    {
        if (timer > reloadDuration / 2) { magazine.Translate(0, -Time.deltaTime / reloadDuration, 0); }
        else if (timer > 0) { magazine.Translate(0, Time.deltaTime / reloadDuration, 0); }
        else if (totalAmmo > 0)
        {
            magazine.localPosition = magazinePositionBackup;
            reloading = false;
            if (totalAmmo > magazineSize)
            {
                totalAmmo -= magazineSize - ammoCount;
                ammoCount = magazineSize;
            } else
            {
                ammoCount = totalAmmo;
                totalAmmo = 0;
            }
            ammoMcCount.UpdateValue(ammoCount, totalAmmo);
        }
    }
    Vector3 RandomizedShot(Vector3 direction, float recoil)
    {
        return direction + (new Vector3(Random.Range(-recoil, recoil), Random.Range(-recoil, recoil), Random.Range(-recoil, recoil))) / 100;
    }
}
