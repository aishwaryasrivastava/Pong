using UnityEngine;

public class SoundController : MonoBehaviour {

	//public AudioClip walkingSound;
	public AudioClip inventorySound, lockedSound, ding, slideSound, swingSound, ShootingSound, reloadSound;
	public GameObject guns;
	private AudioSource source;

	//private float highVol = 1f;
	private float lowVol = 0.4f;

	private bool input_down;
	//private bool input_up;
	void Awake ()
    {
		source = GetComponent<AudioSource>();
	}

	void Update(){
		var tmp = guns.GetComponent<PlayerShootingScript> ();
		if((Input.GetKeyDown(KeyCode.R)) && guns.activeSelf && tmp.ammoCount != 30){
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

	public void PlayReload(){
		source.PlayOneShot (reloadSound, 0.6f);
	}
}
