using UnityEngine;

public class SoundController : MonoBehaviour {

	//public AudioClip walkingSound;
	public AudioClip inventorySound, lockedSound, ding, slideSound, swingSound, ShootingSound, reloadSound, gunEquip, dwang, scroll, delete, slash;
	public AudioClip m4, handgun, sniper, shell, inspect, press, pass, select, drag, eat, keys, scroll2, end, reputation, item;
	public AudioClip[] swing = new AudioClip[10];
	public AudioClip[] voice = new AudioClip[25];
	public GameObject guns;
	public AudioSource source;
	public AudioSource source2;

	//private float highVol = 1f;
	private float lowVol = 0.3f;

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
		case 2: 
			//if (!source.isPlaying) {
				source.PlayOneShot (voice [Random.Range (11, 14)], 0.4f);
			//}
			break;
		case 3: 
			//if (!source.isPlaying) {
				source.PlayOneShot (voice [Random.Range (15, 17)], lowVol);
			//}
			break;
		case 4: 
			if (!source.isPlaying) {
				source.PlayOneShot (voice [Random.Range (4, 7)], lowVol);
			}
			break;
		case 5: 
			source.PlayOneShot (voice [Random.Range (18, 21)], lowVol);
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
		source.PlayOneShot (pass, 0.6f);
	}

	public void PlaySelect(){
		source.PlayOneShot (select, lowVol);
	}

	public void PlayDrag(){
		var tmp = gameObject.GetComponent<PlayerMovementController> ();
		if (!source2.isPlaying) {
			//source.PlayOneShot (drag, lowVol);
			source2.Play ();
		}
	}

	public void PlayEat(){
		
		source.PlayOneShot (eat, lowVol);
	}

	public void PlaySlash(){

		source.PlayOneShot (slash, 0.4f);
	}

	public void PlayKeys(){

		source.PlayOneShot (keys, 0.6f);
	}

	public void PlayReload(){
		if (source.isPlaying) {
			source.Stop ();
		}
		source.PlayOneShot (reloadSound, 0.4f);
	}

	public void PlayScroll2(){

		source.PlayOneShot (scroll2, 0.7f);
	}

	public void PlayEnd(){

		source.PlayOneShot (end, 0.5f);
	}

	public void PlayReputation(){

		source.PlayOneShot (reputation, 0.8f);
	}

	public void PlayItem(){

		source.PlayOneShot (item, 0.5f);
	}
}
