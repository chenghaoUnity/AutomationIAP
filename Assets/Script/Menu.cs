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
	public GameObject buyskinUI;

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

	public int characterOrder;
	public Sprite[] sprites;

	public Dictionary<int, int> priceTable = new Dictionary<int, int>() {
		// order - > price
		{0, 0},		// Archer
		{1, 10},		// Barbarian
		{2, 10},	// Dragon Slayer
		{3, 10},	// Fire
		{4, 10},	// Healer
		{5, 20},	// Harbalist
		{6, 20},	// Knight
		{7, 30},	// Lancer
		{8, 30},	// Light
		{9, 30},	// Merchant
		{10, 50},	// Ninja
		{11, 50},	// Pet Caller
		{12, 50},	// Poisoner
		{13, 50},	// Ranger
		{14, 50},	// Scout
		{15, 80},	// Shadow Keeper
		{16, 80},	// Summoner
		{17, 120},	// The Black Harvester
		{18, 120},	// The Frost Dragon
		{19, 120},	// Water
	};

	public Dictionary<int, string> chineseTable = new Dictionary<int, string>() {
		// order - > price
		{0, "弓箭手"},		// Archer
		{1, "野蛮人"},		// Barbarian
		{2, "弑龙者"},		// Dragon Slayer
		{3, "舞火者"},		// Fire
		{4, "治疗师"},		// Healer
		{5, "草药师"},		// Harbalist
		{6, "骑士"},			// Knight
		{7, "御林军"},		// Lancer
		{8, "光明师"},		// Light
		{9, "商人"},			// Merchant
		{10, "忍者"},		// Ninja
		{11, "猎人"},		// Pet Caller
		{12, "毒药师"},		// Poisoner
		{13, "神射手"},		// Ranger
		{14, "斥候"},		// Scout
		{15, "阴暗领主"},		// Shadow Keeper
		{16, "召唤师"},		// Summoner
		{17, "黑色镰刀手"},	// The Black Harvester
		{18, "龙战骑士"},		// The Frost Dragon
		{19, "大灵动家"},		// Water
	};

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

		characterOrder = PlayerPrefs.GetInt ("CharacterOrder", 0);
		GameObject.Find ("CharacterBase").GetComponent<SpriteRenderer> ().sprite = sprites [characterOrder];
		GameObject.Find ("DiamondAmount").GetComponent<Text> ().text = PlayerPrefs.GetInt ("Diamond", 0).ToString();


		// if first time user, make the skin0 availible
		if (PlayerPrefs.GetInt ("CharacterOwned0", 1) == 1) {
			PlayerPrefs.SetInt ("CharacterOwned0", 0);
		}

		GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = chineseTable [characterOrder] + Environment.NewLine;

		// if for some reason the beginning skin is not 0, make sure cannot play
		if (PlayerPrefs.GetInt("CharacterOwned" + characterOrder.ToString(), 1) == 1) {
			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = chineseTable[characterOrder] + Environment.NewLine + "Diamond needed: " + priceTable [characterOrder].ToString ();
			GameObject.Find("StartText").GetComponent<Text> ().text = "Buy";
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

		if (GameObject.Find ("Human").transform.position.y < -5.6f) {
			SceneManager.LoadScene (2);
		}

	}

	public void StartGame() {

		// if user does not own this skin
		if (PlayerPrefs.GetInt("CharacterOwned" + characterOrder.ToString(), 1) == 1) {
			// open buy skin window
			openBuySkinWindow();
			return;
		}
			
		Destroy (brick);
		Destroy (botton);

		GameObject.Find ("SwtichCharacterLeft").SetActive (false);
		GameObject.Find ("SwtichCharacterRight").SetActive (false);

		PlayerPrefs.SetInt ("CharacterOrder", characterOrder);
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

	public void openBuySkinWindow() {

		Time.timeScale = 0f;
		disableAllButton ();
		if (buyskinUI.activeSelf == true) {
			Time.timeScale = 1f;
			buyskinUI.SetActive (false);
			return;
		}

		buyskinUI.SetActive (true);
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

	public void closeBuySkinWindow() {
		Time.timeScale = 1f;
		enableAllButton ();
		buyskinUI.SetActive (false);
	}
		
	public void showInfoEnter() {
		PlayerUI.SetActive (true);
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

	public void switchCharacter(bool right) {

		if (right == true) {
			if (characterOrder != 19) {
				GameObject.Find ("SwtichCharacterRight").GetComponent<Button> ().interactable = true;
				GameObject.Find ("SwtichCharacterLeft").GetComponent<Button> ().interactable = true;

				characterOrder++;
			} else {
				GameObject.Find ("SwtichCharacterRight").GetComponent<Button> ().interactable = false;
			}
		} else {
			if (characterOrder != 0) {
				GameObject.Find ("SwtichCharacterRight").GetComponent<Button> ().interactable = true;
				GameObject.Find ("SwtichCharacterLeft").GetComponent<Button> ().interactable = true;

				characterOrder--;
			} else {
				GameObject.Find ("SwtichCharacterLeft").GetComponent<Button> ().interactable = false;
			}
		}

		GameObject.Find ("CharacterBase").GetComponent<SpriteRenderer> ().sprite = sprites [characterOrder];

		// if this skin has not purchased, cannot play
		if (PlayerPrefs.GetInt ("CharacterOwned" + characterOrder.ToString (), 1) == 1) {
			GameObject.Find("StartText").GetComponent<Text> ().text = "Buy";
			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = chineseTable[characterOrder] + Environment.NewLine + "Diamond needed: " + priceTable [characterOrder].ToString ();
		} else {
			GameObject.Find("StartText").GetComponent<Text> ().text = "Start";
			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = chineseTable [characterOrder] + Environment.NewLine;
		}
	}

	public void confirmBuySkin() {

		int curDiamond = PlayerPrefs.GetInt ("Diamond", 0);

		// User has enough diamond, and user does not own this skin
		if (curDiamond >= priceTable [characterOrder] && PlayerPrefs.GetInt ("CharacterOwned" + characterOrder.ToString (), 1) == 1) {
			curDiamond -= priceTable [characterOrder];
			PlayerPrefs.SetInt ("Diamond", curDiamond);
			PlayerPrefs.SetInt ("CharacterOwned" + characterOrder.ToString (), 0);
			GameObject.Find ("DiamondAmount").GetComponent<Text> ().text = PlayerPrefs.GetInt ("Diamond", 0).ToString ();
			GameObject.Find ("StartText").GetComponent<Text> ().text = "Start";
			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = null;
			closeBuySkinWindow ();
		} else if (curDiamond < priceTable [characterOrder]) {
			GameObject.Find ("Reminder").GetComponent<Text> ().text = "You don't have enough diamond...";
		} else {
			GameObject.Find ("Reminder").GetComponent<Text> ().text = "You already own this character...";
		}
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
			SceneManager.LoadScene (2);
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
