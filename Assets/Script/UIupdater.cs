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
		DrawLineWithOppo ();
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
				PhotonNetwork.Disconnect ();
				diamond_increase = (int) ((timer * timer) / 300);
				GameObject.Find ("DiamondAddedAmount").GetComponent<Text> ().text = "- " + diamond_increase.ToString ();
				int final = PlayerPrefs.GetInt ("Diamond", 0) - diamond_increase > 0 ? PlayerPrefs.GetInt ("Diamond", 0) - diamond_increase : 0;
				PlayerPrefs.SetInt ("Diamond", final);
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
				PhotonNetwork.Disconnect ();
				diamond_increase = (int) ((timer * timer) / 300);
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

		if (SceneManagerHelper.ActiveSceneBuildIndex == 3) {
			int diamond_increase = PhotonNetwork.connectedAndReady == true ? 50 : 0;
			PhotonNetwork.Disconnect ();
			
			int final = PlayerPrefs.GetInt ("Diamond", 0) - diamond_increase > 0 ? PlayerPrefs.GetInt ("Diamond", 0) - diamond_increase : 0;
			PlayerPrefs.SetInt ("Diamond", final);
		}
			
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

		// MP
		if (SceneManager.GetActiveScene().buildIndex == 3) {
			return;
		}
			
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

	public void DrawLineWithOppo() {

		if (SceneManager.GetActiveScene ().buildIndex != 3) {
			return;
		}

		GameObject me = GameObject.FindGameObjectWithTag ("Player");
		GameObject he = GameObject.FindGameObjectWithTag ("otherPlayer");

		if (me != null && he != null) {
			DrawLine (me.transform.position, he.transform.position, Color.red, 0.01f);
		}
	}

	private void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 0.2f)
	{
		GameObject myLine = new GameObject();
		myLine.transform.position = start;
		myLine.AddComponent<LineRenderer>();
		LineRenderer lr = myLine.GetComponent<LineRenderer>();
		lr.material = new Material(Shader.Find("Particles/Alpha Blended Premultiply"));
		lr.SetColors(color, color);
		lr.SetWidth(0.1f, 0.1f);
		lr.SetPosition(0, start);
		lr.SetPosition(1, end);
		GameObject.Destroy(myLine, duration);
	}
}
