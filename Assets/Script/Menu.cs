using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Analytics;
using UnityEngine.UI;
using System.Threading;
using System;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using UnityEngine.Events;

public class Menu : MonoBehaviour {

	public GameObject logo;
	public GameObject brick;
	public GameObject botton;

	public GameObject exitButton;
	public GameObject settingButton;
	public GameObject highScoreButton;

	public GameObject exitUI;
	public GameObject PlayerUI;
	public GameObject rankUI;

	public GameObject settingUI;
	public GameObject settingUI_Vistual;
	public GameObject settingUI_Gravity;

	private float highScore;
	private List<User> rankList = new List<User>();
	private bool checkSameUsername = false;

	public List<GameObject> rankListUI_username;
	public List<GameObject> rankListUI_score;

	public controllerSetting controller;

	public enum controllerSetting {
		Vistual,
		Gravity
	};

	private bool QAstatus = false;
	public UnityEvent onCompelete;


	void Awake () {

		Application.targetFrameRate = 30;

		if (logo == null) {
			logo = GameObject.Find ("logo");
		}

		if (brick == null) {
			logo = GameObject.Find ("Platform08x01");
		}

		if (botton == null) {
			logo = GameObject.Find ("Start");
		}

		if (exitUI == null) {
			logo = GameObject.Find ("Close Apps Window");
		}

		if (highScoreButton == null) {
			logo = GameObject.Find ("High Score");
		}
	}

	void Start () {

		DatabaseConnection dbConnection = this.gameObject.GetComponent<DatabaseConnection>();
	
		if (dbConnection) {
			dbConnection.onCompelete.AddListener(displayRank);
		}

		this.onCompelete.AddListener (QAStatusHandler);
		getQAstatus ();

		// When first launch game, no previous highest score availible
		if (PlayerPrefs.HasKey ("HighScore") == false || PlayerPrefs.GetFloat ("HighScore") == null || PlayerPrefs.GetFloat ("HighScore") == 0) {
			highScoreButton.gameObject.GetComponent<Text> ().text = "";
		} else {
			highScore = PlayerPrefs.GetFloat ("HighScore");
			highScoreButton.gameObject.GetComponent<Text> ().text = "HIGH SCORE: " + ((int)highScore).ToString ();
		}

		// When first launch game, no previous name availble
		if (PlayerPrefs.HasKey ("PlayerName") == false) {
			PlayerUI.SetActive (true);
			GameObject.Find ("Close").GetComponent<Button> ().interactable = false;
			botton.GetComponent<Button> ().interactable = false;
		}

		// When first launch game, no previous prefer controller setting availible
		// Set it to default controller
		if (PlayerPrefs.HasKey ("PreferController") == false) {
			PlayerPrefs.SetString ("PreferController", controller.ToString());
		}

	}
	
	// Update is called once per frame
	void FixedUpdate () {
		if (logo.GetComponent<Image>().color.a >= 0) {
			logo.GetComponent<Image> ().color = new Color (255f, 255f, 255f, logo.GetComponent<Image>().color.a - 0.015f);
		}

		if (GameObject.Find ("CharacterRobotBoy").transform.position.y < -5.6f) {
			SceneManager.LoadScene (2);
		}

	}

	public void StartGame() {
		Destroy (brick);
		Destroy (botton);
	}

	public void endGame() {
		Time.timeScale = 1f;
		Application.Quit ();
	}

	public void openExitWindow() {
		Time.timeScale = 0f;
		disableAllButton ();
		if (exitUI.activeSelf == true) {
			Time.timeScale = 1f;
			exitUI.SetActive (false);
			return;
		}

		exitUI.SetActive (true);
	}

	public void openSettingWindow() {
		Time.timeScale = 0f;
		disableAllButton ();
		if (settingUI.activeSelf == true) {
			Time.timeScale = 1f;
			settingUI.SetActive (false);
			return;
		}
		settingUI.SetActive (true);
		if (PlayerPrefs.GetString ("PreferController").Equals("Vistual")) {
			settingUI_Vistual.GetComponent<Image> ().enabled = true;
			settingUI_Gravity.GetComponent<Image> ().enabled = false;
		} else if (PlayerPrefs.GetString ("PreferController").Equals("Gravity")) {
			settingUI_Vistual.GetComponent<Image> ().enabled = false;
			settingUI_Gravity.GetComponent<Image> ().enabled = true;
		}
	}

	public void openRankWindow() {
		
		Time.timeScale = 0f;
		disableAllButton ();
		if (rankUI.activeSelf == true) {
			Time.timeScale = 1f;
			rankUI.SetActive (false);
			return;
		}

		rankUI.SetActive (true);

		loadDisplayRank ();
	}

	public void chooseSetting(bool b) {
		if (b == true) {
			PlayerPrefs.SetString ("PreferController", "Vistual");
			settingUI_Vistual.GetComponent<Image> ().enabled = true;
			settingUI_Gravity.GetComponent<Image> ().enabled = false;
		} else {
			PlayerPrefs.SetString ("PreferController", "Gravity");
			settingUI_Vistual.GetComponent<Image> ().enabled = false;
			settingUI_Gravity.GetComponent<Image> ().enabled = true;
		}
	}

	public void closeExitWindow() {
		Time.timeScale = 1f;
		enableAllButton ();
		exitUI.SetActive (false);
	}

	public void closeSettingWindow() {
		Time.timeScale = 1f;
		enableAllButton ();
		settingUI.SetActive (false);
	}

	public void closeRankWindow() {
		Time.timeScale = 1f;
		enableAllButton ();
		rankUI.SetActive (false);
	}
		
	public void showInfoEnter() {
		PlayerUI.SetActive (true);
	}
		
	public void backendInfoEnter() {

		string name = GameObject.Find ("NameInput").GetComponent<InputField> ().text;
		string age = GameObject.Find ("AgeInput").GetComponent<InputField> ().text;

		if (name != null && name.Length != 0) {
			PlayerPrefs.SetString ("PlayerName", name);
		}

		if (age != null && age.Length != 0) {
			PlayerPrefs.SetString ("PlayerAge", age);
		}

		if (PlayerPrefs.HasKey ("PlayerName") && PlayerPrefs.HasKey ("PlayerAge")) {

			Analytics.SetUserBirthYear(int.Parse(age));
			Analytics.SetUserId(name);

			PlayerUI.SetActive (false);
			GameObject.Find ("Close").GetComponent<Button> ().interactable = true;
			botton.GetComponent<Button> ().interactable = true;
			return;
		}
 	}
	 
	public void loadDisplayRank() {
		rankList = this.gameObject.GetComponent<DatabaseConnection> ().loadTopTen ();
	}

	private void displayRank() {

		for (int i = 0; i < rankList.Count; i++) {
			rankListUI_username [i].GetComponentInChildren<Text> ().text = rankList [i].getUsername ();
			rankListUI_score [i].GetComponentInChildren<Text> ().text = rankList [i].getHighScore();
		}

	}
		
	private void disableAllButton() {
		botton.GetComponent<Button>().interactable = false;
		exitButton.GetComponent<Button>().interactable = false;
		highScoreButton.GetComponent<Button>().interactable = false;
		settingButton.GetComponent<Button>().interactable = false;
	}

	private void enableAllButton() {
		botton.GetComponent<Button>().interactable = true;
		exitButton.GetComponent<Button>().interactable = true;
		highScoreButton.GetComponent<Button>().interactable = true;
		settingButton.GetComponent<Button>().interactable = true;
	}

	private void QAStatusHandler() {
		if (QAstatus == true) {
			PlayerPrefs.SetString ("QAstatus", "True");
			PlayerPrefs.Save ();
			StartGame ();
		} else {
			PlayerPrefs.SetString ("QAstatus", "False");
			PlayerPrefs.Save ();
		}
	}

	private void getQAstatus() {

		FirebaseDatabase.DefaultInstance
			.GetReference ("QAstatus")
			.GetValueAsync().ContinueWith(task => {
				if (task.IsFaulted) {
					// Handle the error...
				}
				else if (task.IsCompleted) {
					DataSnapshot snapshot = task.Result;
					// Do something with snapshot...

					if (snapshot.Value.ToString().Equals("Run")) {
						QAstatus = true;
					} else {
						QAstatus = false;
					}

					if (onCompelete != null) {
						onCompelete.Invoke();
					}
				}
			});
	}


}
