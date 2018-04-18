using UnityEngine;

public class SoundController : MonoBehaviour {

	//public AudioClip walkingSound;
	public AudioClip inventorySound, lockedSound, ding, slideSound, swingSound, ShootingSound, reloadSound, gunEquip, dwang, scroll, delete, slash;
	public AudioClip m4, handgun, sniper, shell, inspect, press, pass, select, drag, eat, keys;
	public AudioClip[] swing = new AudioClip[10];
	public AudioClip[] voice = new AudioClip[15];
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
		if (tmp == null) {
			return;
		}
		var t = guns.GetComponent<PlayerWeaponEquip>();
		if (!t.weapons [0].activeSelf) {
			if ((Input.GetAxis("Reload") > 0) && guns.activeSelf && tmp.magazineSize != tmp.ammoCount) {
				PlayReload ();
			}
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

	public void PlayVoice(int num){
		switch (num) {
		case 1:
			if (!source.isPlaying) {
				source.PlayOneShot (voice [Random.Range (0, 3)], lowVol);
			}
				break;
		case 4: 
			if (!source.isPlaying) {
				source.PlayOneShot (voice [Random.Range (4, 7)], lowVol);
			}
				break;
		case 9: 
			if (!source.isPlaying) {
				source.PlayOneShot (voice [Random.Range (8, 10)], lowVol);
			}
			break;
		default:
			break;
		}

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

	public void PlayInspect(){
		source.PlayOneShot (inspect, 1f);
	}

	public void PlayPress(){
		source.PlayOneShot (press, lowVol);
	}

	public void PlayPass(){
		source.PlayOneShot (pass, lowVol);
	}

	public void PlaySelect(){
		source.PlayOneShot (select, lowVol);
	}

	public void PlayDrag(){
		if (!source.isPlaying) {
			source.PlayOneShot (drag, lowVol);
		}
	}

	public void PlayEat(){
		
		source.PlayOneShot (eat, lowVol);
	}

	public void PlaySlash(){

		source.PlayOneShot (slash, 0.4f);
	}

	public void PlayKeys(){

		source.PlayOneShot (keys, 0.4f);
	}

	public void PlayReload(){
		if (source.isPlaying) {
			source.Stop ();
		}
		source.PlayOneShot (reloadSound, 0.4f);
	}
}
