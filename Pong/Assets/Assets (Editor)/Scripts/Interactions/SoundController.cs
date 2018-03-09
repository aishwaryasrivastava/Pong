using UnityEngine;

public class SoundController : MonoBehaviour {

	//public AudioClip walkingSound;
	public AudioClip inventorySound, lockedSound, ding, slideSound, swingSound, ShootingSound, reloadSound, gunEquip, dwang, scroll, delete;
	public AudioClip m4, handgun, sniper, shell;
	public AudioClip[] swing = new AudioClip[10];
	public GameObject guns;
	public AudioSource source;

	//private float highVol = 1f;
	private float lowVol = 0.25f;

	private bool input_down;
	//private bool input_up;
	void Awake ()
    {
		source = GetComponent<AudioSource>();
	}

	void Update(){
		var tmp = guns.GetComponentInChildren<PlayerShootingScript>();
		if((Input.GetKeyDown(KeyCode.R)) && guns.activeSelf && tmp.magazineSize != tmp.ammoCount){
			PlayReload();
		}
	}

    public void PlayLocked()
    {
        source.PlayOneShot(lockedSound, lowVol);
    }

    public void PlayInventory()
    {
        source.PlayOneShot(inventorySound, lowVol);
    }

    public void PlayDing()
    {
        source.PlayOneShot(ding, lowVol);
    }

	public void PlaySwing()
	{
		source.PlayOneShot(swingSound, lowVol);
	}

	public void PlaySlide()
	{
		source.PlayOneShot(slideSound, lowVol);
	}

    public void PlayShoot()
    {
        source.PlayOneShot(ShootingSound, lowVol);
    }

	public void PlayEquip(){
		source.PlayOneShot(gunEquip, lowVol);
	}

	public void PlayDwang(){
		source.PlayOneShot(dwang, lowVol);
	}

	public void PlaySwingW(){
		source.PlayOneShot(swing[Random.Range (0, 10)], lowVol);
	}

	public void PlayScroll(){
		source.PlayOneShot(scroll, 0.3f);
	}

	public void PlayDelete(){
		source.PlayOneShot(delete, 0.3f);
	}

	public void PlayM4(){
		source.PlayOneShot (m4, lowVol);
	}


	public void PlaySniper(){
		source.PlayOneShot (sniper, lowVol);
	}

	public void PlayHandgun(){
		source.PlayOneShot (handgun, lowVol);
	}

	public void PlayShell(){
		source.PlayOneShot (shell, lowVol);
	}

	public void PlayReload(){
		source.PlayOneShot (reloadSound, 0.4f);
	}
}
