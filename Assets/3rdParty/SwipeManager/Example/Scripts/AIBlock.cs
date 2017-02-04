using UnityEngine;
using System.Collections;

public class AIBlock : MonoBehaviour {

	public float speed = 5f;
	
	void Start(){
		Destroy(gameObject,7);
	}
	
	void Update(){
		transform.Translate(0,-speed*Time.deltaTime,0);
	}
}
