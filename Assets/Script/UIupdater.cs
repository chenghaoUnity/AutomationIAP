using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIupdater : MonoBehaviour {

	public GameObject heathBar;
	public GameObject attentionBar;
	public GameObject timerUI;

	public GameObject exitUI;
	public GameObject IAPUI;
	public GameObject deathUI;
	public GameObject winUI;

	public GameObject vistualController;

	public float attentionBarTimer = 0;
	public float timer = 0;

	// Use this for initialization
	public void Awake () {

		if (PlayerPrefs.GetInt ("GameMode", 0) == 1) {
			Time.timeScale = 0f;
			return;
		}

		if (heathBar == null) 
		{
			heathBar = GameObject.Find ("HealthBar");
		}

		if (attentionBar == null) 
		{
			attentionBar = GameObject.Find ("Attention");
		}

		if (timerUI == null) 
		{
			timerUI = GameObject.Find ("Timer");
		}
			
		attentionBar.GetComponent<Text> ().text = "Welcome, " + PlayerPrefs.GetString ("PlayerName");
		heathBar.GetComponent<Slider> ().value = 1;

		if (PlayerPrefs.GetString ("PreferController").Equals ("Vistual")) {
			vistualController.SetActive (true);
		} else if (PlayerPrefs.GetString ("PreferController").Equals ("Gravity")) {
			vistualController.SetActive (false);
		} else {
			vistualController.SetActive (true);                                                                                                       
		}
			
		GameObject.Find ("DiamondAmount").GetComponent<Text> ().text = PlayerPrefs.GetInt ("Diamond", 0).ToString();
	}

	void FixedUpdate() {

		if (PlayerPrefs.GetInt ("GameMode", 0) == 1) {
			return;
		}

		// Add gold to user per second
		timer = timer + Time.deltaTime;
		if ((int)timer % this.gameObject.GetComponent<Inventory>().recovSpeed == 0) {
			this.gameObject.GetComponent<Inventory> ().RecoverHealth ();
		}

		sync ();
		syncWithTimer (timer);
		attentionBarVanish ();
	}

	public void sync() {
		float curValue = heathBar.GetComponent<Slider> ().value;
		heathBar.GetComponent<Slider> ().value = Mathf.Lerp (
			curValue, 
			this.gameObject.GetComponent<Inventory> ().curHealth / this.gameObject.GetComponent<Inventory> ().maxHealth,
			timer
		);

		GameObject.Find ("HealthBarInfo").GetComponent<Text> ().text = this.gameObject.GetComponent<Inventory> ().curHealth.ToString()
			+ "/" + this.gameObject.GetComponent<Inventory> ().maxHealth.ToString();

	}

	public void syncWithWords(string str) {
		attentionBar.GetComponent<Text> ().text = str;
	}

	public void syncWithTimer(float f) {
		timerUI.GetComponent<Text> ().text = ((int)f).ToString ();
	}

	public void openWindow(string name) {
		if (name == "Exit") {
			if (exitUI.activeSelf == true) {
				Time.timeScale = 1f;
				exitUI.SetActive (false);
			} else {
				Time.timeScale = 0f;
				exitUI.SetActive (true);
			}

			IAPUI.SetActive (false);
			deathUI.SetActive (false);

		}

		if (name == "IAP") {
			if (IAPUI.activeSelf == true) {
				Time.timeScale = 1f;
				IAPUI.SetActive (false);
			} else {
				Time.timeScale = 0f;
				IAPUI.SetActive (true);
			}

			exitUI.SetActive (false);
			deathUI.SetActive (false);

		}

		if (name == "Death") {
			
			deathUI.SetActive (true);
			exitUI.SetActive (false);
			IAPUI.SetActive (false);

			GameObject.Find ("IAP").GetComponent<Button> ().interactable = false;
			GameObject.Find ("Back").GetComponent<Button> ().interactable = false;

			int diamond_increase = 0;

			// SinglePlayer
			if (SceneManagerHelper.ActiveSceneBuildIndex == 2) {
				diamond_increase = (int) ((timer * timer) / 1400);
				GameObject.Find ("DiamondAddedAmount").GetComponent<Text> ().text = "+ " + diamond_increase.ToString ();
				PlayerPrefs.SetInt ("Diamond", PlayerPrefs.GetInt ("Diamond", 0) + diamond_increase);
			}
				
			// MultiPlayer - lose
			if (SceneManagerHelper.ActiveSceneBuildIndex == 3) {
				diamond_increase = (int)20;
				GameObject.Find ("DiamondAddedAmount").GetComponent<Text> ().text = "- " + diamond_increase.ToString ();
				PlayerPrefs.SetInt ("Diamond", PlayerPrefs.GetInt ("Diamond", 0) - diamond_increase);
			}


			Time.timeScale = 0f;
		}

		if (name == "Win") {

			winUI.SetActive (true);
			exitUI.SetActive (false);
			IAPUI.SetActive (false);

			GameObject.Find ("IAP").GetComponent<Button> ().interactable = false;
			GameObject.Find ("Back").GetComponent<Button> ().interactable = false;

			int diamond_increase = 0;

			// MultiPlayer - win
			if (SceneManagerHelper.ActiveSceneBuildIndex == 3) {
				diamond_increase = (int)30;
				GameObject.Find ("DiamondAddedAmount").GetComponent<Text> ().text = "+ " + diamond_increase.ToString ();
				PlayerPrefs.SetInt ("Diamond", PlayerPrefs.GetInt ("Diamond", 0) + diamond_increase);
			}
			Time.timeScale = 0f;
		}
	}

	public void closeWindow(string name) {
		Time.timeScale = 1f;
		exitUI.SetActive (false);
		IAPUI.SetActive (false);
		deathUI.SetActive (false);
	}

	public void backToMenu() {
		PhotonNetwork.Disconnect ();
		Time.timeScale = 1f;
		SceneManager.LoadScene(1);
	}
		
	public void restart() {

		if (SceneManager.GetActiveScene ().buildIndex == 2) {
			PlayerPrefs.SetInt ("GameMode", 0);
		} else if (SceneManager.GetActiveScene ().buildIndex == 3) {
			PlayerPrefs.SetInt ("GameMode", 1);
		}

		PhotonNetwork.Disconnect ();
		Time.timeScale = 1f;
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}

	private void attentionBarVanish() {
		if (PlayerPrefs.GetString("QAstatus", "False").Equals("False")) {
			if (attentionBar.GetComponent<Text> ().text != "") {
				attentionBarTimer = attentionBarTimer + Time.deltaTime;
				if (attentionBarTimer > 5f) {
					attentionBarTimer = 0;
					attentionBar.GetComponent<Text> ().text = "";
				}
			}
		}
	}
}
