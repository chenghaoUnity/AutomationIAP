using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIupdater : MonoBehaviour {

	public GameObject UItext;
	public GameObject attentionBar;
	public GameObject timerUI;

	public GameObject exitUI;
	public GameObject IAPUI;
	public GameObject deathUI;

	public GameObject vistualController;

	public float attentionBarTimer = 0;
	public float timer = 0;

	// Use this for initialization
	void Start () {
		
		if (UItext == null) 
		{
			UItext = GameObject.Find ("GOLDS");
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
		UItext.GetComponent<Text> ().text = "GOLDS: " + this.gameObject.GetComponent<Inventory> ().gold.ToString();

		if (PlayerPrefs.GetString ("PreferController").Equals ("Vistual")) {
			vistualController.SetActive (true);
		} else if (PlayerPrefs.GetString ("PreferController").Equals ("Gravity")) {
			vistualController.SetActive (false);
		} else {
			vistualController.SetActive (true);                                                                                                       
		}
			
	}

	void FixedUpdate() {

		// Add gold to user per second
		timer = timer + Time.deltaTime;
		if ((int)timer % 10 == 0) {
			this.gameObject.GetComponent<Inventory> ().AddGold (1);
		}

		sync ();
		syncWithTimer (timer);
		attentionBarVanish ();
	}

	public void sync() {
		UItext.GetComponent<Text> ().text = "GOLDS: " + this.gameObject.GetComponent<Inventory> ().gold.ToString();
	}

	public void syncWithWords(string str) {
		attentionBar.GetComponent<Text> ().text = str;
	}

	public void syncWithTimer(float f) {
		timerUI.GetComponent<Text> ().text = "TIME: " + ((int)f).ToString ();
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
		Time.timeScale = 1f;
		SceneManager.LoadScene(1);
	}
		
	public void restart() {
		Time.timeScale = 1f;
		SceneManager.LoadScene(2);
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
