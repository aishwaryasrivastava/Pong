using UnityEngine;

public class PlayerShootingScript : MonoBehaviour
{
    private float timer;
    public float recoil;
    private int damage = 30;
    private float fireGap = 0.1f;
    private float yaw = -0.044f;
    private float pitch = 0.044f;
    private float sensitivity = 0.9f;
    private float MaxRecoilShift = 15;

    private RaycastHit Shot;
    private GameObject flare;
    private Transform gun;

    public SoundController sounds;
    public PlayerMovementController movement;

    void Start()
    {
        timer = 0;
        gun = transform.GetChild(0);
        flare = gun.Find("Flare").gameObject;
        flare.SetActive(false);
        recoil = 0;
    }

    void Update()
    {
        if (PauseManager.Paused) return;
        if (movement.AmBusy()) return; //Don't shoot people while in dialogue with them
        Fire();
    }

    private void Recoil(float shift)
    {
        recoil += shift;
        gun.Rotate(-shift, 0, 0);
    }

    void Fire()
    {
        if (timer <= 0)
        {
            flare.SetActive(false);
            if (Input.GetMouseButton(0))
            {
                if (Physics.Raycast(transform.position, transform.forward, out Shot))
                {
                    flare.SetActive(true);
                    var tmp = Shot.transform.GetComponent<ShotAtScript>();
                    if (tmp != null) tmp.ShotAt(damage * transform.forward); //in case we're shooting at something that doesn't react to shooting
                }
                timer = fireGap;
                flare.SetActive(true);
                if (recoil < MaxRecoilShift) Recoil(Mathf.Min(sensitivity, MaxRecoilShift - recoil)); //prevents infinite recoil which looks weird
                sounds.PlayShoot();
            }
            else if (recoil > 0)
            {
                var reverser = -Mathf.Min(Time.deltaTime * 20, recoil); //prevents negative recoil which will stack
                Recoil(reverser);
            }
        }
        else timer -= Time.deltaTime;

        
    }
}
