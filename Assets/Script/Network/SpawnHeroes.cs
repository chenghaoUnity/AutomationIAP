using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets._2D;
using UnityEngine.UI;

public class SpawnHeroes : MonoBehaviour {

	private bool initialize;
	private bool gameOver;
	private bool player2joined;

	private string oppositeUsername;
	private string oppositeOrder;

	public void Start() {
		initialize = true;
		gameOver = false;
		player2joined = false;
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
					oppositeUsername = hero.GetComponent<PhotonView> ().owner.NickName.ToString ().Split (':') [0];
					oppositeOrder = hero.GetComponent<PhotonView> ().owner.NickName.ToString ().Split (':') [1];

					hero.GetComponent<Rigidbody2D> ().simulated = false;
					hero.GetComponent<PlatformerCharacter2D> ().enabled = false;
					hero.GetComponent<Platformer2DUserControl> ().enabled = false;
					GameObject.Find ("Attention").GetComponent<Text> ().text = PlayerPrefs.GetString ("PlayerName", "guest") + " VS " + oppositeUsername;
					(hero.GetComponentInChildren(typeof(SpriteRenderer)) as SpriteRenderer).sprite = GameObject.Find("IAPTestingUI").GetComponent<Inventory>().sprites [int.Parse(oppositeOrder)];
				}
			}
			player2joined = true;
		}
			
		if (!initialize && !gameOver && player2joined && PhotonNetwork.connected) {

			if (GameObject.FindGameObjectWithTag("otherPlayer") == null) {
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
