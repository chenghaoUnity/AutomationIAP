using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorMoving : MonoBehaviour {

	float downSpeed = 2.5f;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void FixedUpdate () {

		downSpeed += 0.0005f;

		this.gameObject.transform.position = new Vector3 (this.gameObject.transform.position.x, this.gameObject.transform.position.y - downSpeed * Time.deltaTime, this.gameObject.transform.position.z);

		if (this.gameObject.transform.position.y <= 0) {

			float newX = this.gameObject.transform.position.x + Random.Range (-3f, 3f);
			while (newX < -30.3f || newX > 38.40f) {
				newX = this.gameObject.transform.position.x + Random.Range (-3f, 3f);
			}

			this.gameObject.transform.position = new Vector3 (newX, 93f, this.gameObject.transform.position.z);
			if (this.gameObject.GetComponentInChildren<TripRandomer> () as TripRandomer != null) {
				this.gameObject.GetComponentInChildren<TripRandomer> ().random ();
			}
		}
	}
}
