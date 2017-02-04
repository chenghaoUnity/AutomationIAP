using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets._2D;

public class SpawnHeroes : MonoBehaviour {

	private bool initialize;
	private bool gameOver;

	public void Start() {
		initialize = true;
		gameOver = false;
	}

	public void Update() {
		if (PhotonNetwork.playerList.Length == 2 && initialize) {
			initialize = false;
			CreatePlayerObject ();
			GameObject.Find ("loading").SetActive (false);
		}

		if (GameObject.FindGameObjectsWithTag ("Player").Length == 2) {
			foreach (GameObject hero in GameObject.FindGameObjectsWithTag ("Player")) {
				if (hero.GetComponent<PhotonView> ().isMine == false) {
					hero.tag = "otherPlayer";
				}
			}
		}
			
		if (!initialize && !gameOver) {
			if (PhotonNetwork.playerList.Length == 1) {
				// Someone wins
				gameOver = true;
				GameLogic.FindObjectOfType<UIupdater> ().openWindow ("Win");
				PhotonNetwork.Disconnect ();
			}
		}
	}

	void CreatePlayerObject()
	{
		Vector2 position = GameObject.Find ("SpawnLocation").transform.position;

		GameObject newPlayerObject = PhotonNetwork.Instantiate ("Human", position, Quaternion.identity, 0);

		PlayerPrefs.SetInt ("GameMode", 0);
		Time.timeScale = 1f;
		GameObject.Find ("IAPTestingUI").GetComponent<Inventory> ().Awake ();
		GameObject.Find ("IAPTestingUI").GetComponent<UIupdater> ().Awake ();

		if (newPlayerObject.GetComponent<PhotonView> ().isMine == true) {
			GameObject.Find ("Main Camera").GetComponent<Camera2DFollow> ().target = newPlayerObject.transform;
		}
	}
}
