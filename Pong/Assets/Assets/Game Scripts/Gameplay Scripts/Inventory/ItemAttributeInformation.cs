using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;

public static class UniRand
{
    public static Random rnd = new Random();
}

public class ItemAttributeInformation : MonoBehaviour
{
    public enum Type { Weapon, Key, Cake }

    public Type type;

    public Sprite weapon, key, cake;

    public Sprite image;

    void Start()
    { 
		SetType (UniRand.rnd.Next (0, 3));
        
    }

	public void SetType(int t) {
		switch (t)
		{
		case 0:
			type = Type.Weapon;
			image = weapon;
			break;
		case 1:
			type = Type.Key;
			image = key;
			break;
		case 2:
			type = Type.Cake;
			image = cake;
			break;
		}
	}
	//in the future set the image (icon) here
}
