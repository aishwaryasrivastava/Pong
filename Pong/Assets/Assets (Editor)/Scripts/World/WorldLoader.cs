using UnityEngine;

public class WorldLoader : MonoBehaviour
{
    private int CurLevel;
    public int TotalLevels;

    void Start()
    {
        TriggerNextLevel();
    }

    public void TriggerNextLevel()
    {
        CurLevel++; //move to the next level
        if (CurLevel > TotalLevels) return; //we done
        for (var i = 0; i < transform.childCount; i++) //for each type of object (prison, Items, NPCs, etc)
        {
            var sect = transform.GetChild(i);
            for (var j = 1; j <= TotalLevels; j++) //check each level, since things in one level may be used again
            {
                var lvlSect = sect.Find("Level " + j);
                if (lvlSect != null) //just in case there isn't a level marker for some reason
                {
                    for (var k = 0; k < lvlSect.childCount; k++) //look through the top level entities of the level (this won't ever be very high)
                    {
                        var marker = lvlSect.GetChild(k).GetComponent<LevelShiftController>(); //this is the controller that holds what levels something belongs to
                        if (marker != null) //more error checking just in case someone forgets to add a controller
                        {
                            marker.Transfer(CurLevel); //Tell the controller what level is loading
                        }
                    }
                }
            }
        }
    }
}
