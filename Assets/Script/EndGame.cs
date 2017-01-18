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
			bool death = UI.GetComponent<Inventory> ().ReduceGold (number);
			if (death == true) {
				// what happen while death
				sentEvent ();
				UI.GetComponent<UIupdater> ().openWindow ("Death");
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
				sentEvent ();
				UI.GetComponent<UIupdater> ().openWindow ("Death");
			}

		}
	}

	public void sentEvent() {

		if (canSend == false || PlayerPrefs.GetString("QAstatus", "False").Equals("True")) {
			return;
		}

		canSend = false;

		float gold = GameObject.Find ("IAPTestingUI").GetComponent<Inventory> ().gold;
		float time = GameObject.Find ("IAPTestingUI").GetComponent<UIupdater> ().timer;

		Analytics.CustomEvent("gameOver", new Dictionary<string, object>
			{
				{ "gold", gold },
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
