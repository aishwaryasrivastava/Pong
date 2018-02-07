using UnityEngine;
using UnityEngine.UI;
using Random = System.Random;

public static class UniRand
{
    public static Random rnd = new Random();
}

public class ItemAttributeInformation : Component
{
    public enum Type { Weapon, Key, Cake }

    public Type type;

    public Image image = Instantiate(Resources.Load("temp")) as Image;

    void Start()
    {
        switch (UniRand.rnd.Next(0, 3))
        {
            case 0:
                type = Type.Weapon;
                break;
            case 1:
                type = Type.Key;
                break;
            case 2:
                type = Type.Cake;
                break;
        }
        //in the future set the image (icon) here
    }
}
