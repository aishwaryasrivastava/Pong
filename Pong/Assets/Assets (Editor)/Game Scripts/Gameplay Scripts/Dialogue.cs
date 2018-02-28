using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dialogue {

	public string Text { get; set; }
	public string Option { get; set; }
	public string Req { get; set; }
    public string Take { get; set; }
	public Pickup GiveItem { get; set; }
	List<Dialogue> children = new List<Dialogue>();

	public void AddChild(Dialogue d) {
		children.Add (d);
	}

	public List<Dialogue> Children() {
		return children;
	}
}
