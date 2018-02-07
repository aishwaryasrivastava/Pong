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

    public Sprite image;

    void Start()
    {
        //image = (Sprite)Resources.Load("temp/temp");
        
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
