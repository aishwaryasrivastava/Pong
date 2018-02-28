using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dialogue {

	//Text of this dialogue option
	public string Text { get; set; }

	//What the player says to get to this option
	public string Option { get; set; }

	//Only visible if player has the requirement
	public string Req { get; set; }
<<<<<<< HEAD
    public string Take { get; set; }
=======

	//Only visible if player gives up the requirement
	public string ReqCost { get; set; }

	//Gives this item to player
>>>>>>> a30de6ced73e7b4e09d2f53d09aaf0dec8cec915
	public Pickup GiveItem { get; set; }

	//Only visible if player has sufficient reputation
	public int ReqRep { get; set; }

	//Taking this option gains/loses reputation
	public int Rep { get; set; }
	List<Dialogue> children = new List<Dialogue>();

	public void AddChild(Dialogue d) {
		children.Add (d);
	}

	public List<Dialogue> Children() {
		return children;
	}
}
