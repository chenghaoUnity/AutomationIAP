using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TripRandomer : MonoBehaviour {
	
	void Start () {
		if (this.gameObject.name == "spikes-md") {
			random ();
		}	
	}

	public void random () {
		this.gameObject.transform.localPosition = new Vector2(Random.Range (0.3f, 1.6f), this.gameObject.transform.localPosition.y);
	}
}
