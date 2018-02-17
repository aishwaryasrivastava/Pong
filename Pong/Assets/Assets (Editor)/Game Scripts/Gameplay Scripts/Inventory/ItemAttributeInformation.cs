using UnityEngine;

public class ItemAttributeInformation : MonoBehaviour
{
    public enum Type { Weapon, Key, Cake, SuperKey, GunWeapon, None = -1 }

    public Type type;

    public Sprite weapon, key, cake;

    public Sprite image;

    void Start()
    {
        if (type == Type.None) SetType(Random.Range(0, 3));
        else SetType((int) type);
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

}

public static class ItemIDchip
{
    public static int CurrentChip = 1;
}

public class Pickup
{
    public int ItemId;
    public Sprite UiImage;
    public ItemAttributeInformation.Type Type;

    public Pickup(ItemAttributeInformation info)
    {
        ItemId = ItemIDchip.CurrentChip++;
        UiImage = info.image;
        Type = info.type;
    }
}

