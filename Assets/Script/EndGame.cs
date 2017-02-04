using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;
using System.Threading;

public class EndGame : MonoBehaviour {

	GameObject UI;
	private bool canSend;

	void Awake() {
		UI = GameObject.Find ("IAPTestingUI");
	}

	void Start() {
		canSend = true;
	}

	public void reduceGold(int number) {
		if (UI != null) {
			bool death = UI.GetComponent<Inventory> ().ReduceHealth (number);
			if (death == true) {
				bool reborn = UI.GetComponent<Inventory> ().reborn ();
				if (reborn == false) {
					// what happen while death
					sentEvent ();
					UI.GetComponent<UIupdater> ().openWindow ("Death");
					PhotonNetwork.Disconnect ();
				}
			}
		}
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.tag == "Player")
		{
			if (this.gameObject.name == "spikes-md") {
				reduceGold (100);
			}

			if (this.gameObject.name == "Killzone") {
				bool reborn = UI.GetComponent<Inventory> ().reborn ();
				if (reborn == false) {
					// what happen while death
					sentEvent ();
					UI.GetComponent<UIupdater> ().openWindow ("Death");
					PhotonNetwork.Disconnect ();
				}
			}

		}
	}

	public void sentEvent() {

		if (canSend == false || PlayerPrefs.GetString("QAstatus", "False").Equals("True")) {
			return;
		}

		canSend = false;

		float time = GameObject.Find ("IAPTestingUI").GetComponent<UIupdater> ().timer;

		Analytics.CustomEvent("gameOver", new Dictionary<string, object>
			{
				{ "time", time }
			});

		if (!PlayerPrefs.HasKey ("HighScore")) {
			PlayerPrefs.SetFloat ("HighScore", time);
		} else {
			PlayerPrefs.SetFloat ("HighScore", Mathf.Max(PlayerPrefs.GetFloat("HighScore"), time));
		}

		PlayerPrefs.Save ();
		GameObject.Find("IAPTestingUI").GetComponent<DatabaseConnection>().WriteNewScore (PlayerPrefs.GetString ("PlayerName"), ((int)PlayerPrefs.GetFloat ("HighScore")).ToString ());
	}

	void OnApplicationQuit() {
		sentEvent ();
	}
}
