using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour {

	public void onPurchaseComplete() {
		Debug.Log ("Purchase Completed");
	}

	public void onPurchaseFail() {
		Debug.Log ("Purchase Failed");
	}
}
