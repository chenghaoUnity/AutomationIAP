using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorMoving : MonoBehaviour {

	float downSpeed = 2.0f;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void FixedUpdate () {

		downSpeed += 0.0001f;

		this.gameObject.transform.position = new Vector3 (this.gameObject.transform.position.x, this.gameObject.transform.position.y - downSpeed * Time.deltaTime, this.gameObject.transform.position.z);

		if (this.gameObject.transform.position.y <= -1.46f) {

			float newX = this.gameObject.transform.position.x + Random.Range (-1.1f, 1.1f);

			while (newX < -30.3f || newX > 38.40f) {
				newX = this.gameObject.transform.position.x + Random.Range (-1.1f, 1.1f);
			}

			this.gameObject.transform.position = new Vector3 (newX, 170f, this.gameObject.transform.position.z);

			if (this.gameObject.GetComponentInChildren<TripRandomer> () as TripRandomer != null) {
				this.gameObject.GetComponentInChildren<TripRandomer> ().random ();
			}
		}
	}
}
