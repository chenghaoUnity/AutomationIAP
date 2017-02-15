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
using System.Xml;

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
	public GameObject heroInfoUI;

	public GameObject settingUI;
	public GameObject settingUI_Vistual;
	public GameObject settingUI_Gravity;

	private float highScore;
	private List<User> rankList = new List<User>();

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

	private LanguageManager languageManager;
	private XmlDocument xmlDocument;

	private bool canSwitch;

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

		languageManager = FindObjectOfType<LanguageManager> ();
		languageManager.SetLanguage(PlayerPrefs.GetInt ("LanguagePrefer", 0));
		xmlDocument = XmlReader.LoadXmlDocument();

		PlayerPrefs.GetInt ("GameMode", 0);
		canSwitch = true;
	}

	void Start () {

		DatabaseConnection dbConnection = this.gameObject.GetComponent<DatabaseConnection>();
	
		if (dbConnection) {
			dbConnection.onCompelete.AddListener(displayRank);
		}

		this.onCompelete.AddListener (QAStatusHandler);
		getQAstatus ();

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
			
		// if first time user, make the skin0 availible
		if (PlayerPrefs.GetInt ("CharacterOwned0", 1) == 1) {
			PlayerPrefs.SetInt ("CharacterOwned0", 0);
		}
	
		updateUI ();
	}


	
	// Update is called once per frame
	void FixedUpdate () {
		if (logo.GetComponent<Image>().color.a >= 0) {
			logo.GetComponent<Image> ().color = new Color (255f, 255f, 255f, logo.GetComponent<Image>().color.a - 0.015f);
		}

		if (GameObject.Find ("Human").transform.position.y < -5.6f) {
			if (PlayerPrefs.GetInt ("GameMode", 0) == 0) {
				SceneManager.LoadScene (2);
			} else {
				SceneManager.LoadScene (3);
			}
		}

		if (canSwitch && (SwipeManager.GetSwipe (SwipeManager.SwipeList.Left) || SwipeManager.GetSwipe (SwipeManager.SwipeList.DownLeft) || SwipeManager.GetSwipe (SwipeManager.SwipeList.UpLeft))) {
			switchCharacter (true);
		}

		if (canSwitch && (SwipeManager.GetSwipe (SwipeManager.SwipeList.Right) || SwipeManager.GetSwipe(SwipeManager.SwipeList.DownRight) || SwipeManager.GetSwipe(SwipeManager.SwipeList.UpRight))) {
			switchCharacter (false);
		}

	}

	public void StartGame() {

		// if user does not own this skin
		if (PlayerPrefs.GetInt("CharacterOwned" + characterOrder.ToString(), 1) == 1) {
			// open buy skin window
			openBuySkinWindow();
			return;
		}

		canSwitch = false;
		Destroy (brick);
		Destroy (botton);

		GameObject.Find ("SwtichMode").SetActive (false);

		PlayerPrefs.SetInt ("CharacterOrder", characterOrder);
		PlayerPrefs.Save ();
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
		GameObject.Find ("Reminder").GetComponent<Text> ().text = GetTranslation ("Text_BuySkin");
	}
		
	public void openHeroInfoWindow() {

		Time.timeScale = 0f;
		disableAllButton ();
		if (buyskinUI.activeSelf == true) {
			Time.timeScale = 1f;
			heroInfoUI.SetActive (false);
			return;
		}

		heroInfoUI.SetActive (true);
		GameObject.Find ("Reminder").GetComponent<Text> ().text = GetTranslation (HeroTable.HeroInfoTable[characterOrder]["introduction"].ToString());
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

	public void closeHeroInfoWindow() {
		Time.timeScale = 1f;
		enableAllButton ();
		heroInfoUI.SetActive (false);
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
			if (characterOrder < 19) {
				characterOrder++;
			}
		} else {
			if (characterOrder > 0) {
				characterOrder--;
			}
		}

		GameObject.Find ("CharacterBase").GetComponent<SpriteRenderer> ().sprite = sprites [characterOrder];

		updateUI ();
	}

	public void switchMode() {
		if (PlayerPrefs.GetInt ("GameMode", 0) == 0) {
			PlayerPrefs.SetInt ("GameMode", 1);
		} else {
			PlayerPrefs.SetInt ("GameMode", 0);
		}

		updateUI ();
	}

	public void confirmBuySkin() {

		int curDiamond = PlayerPrefs.GetInt ("Diamond", 0);

		// User has enough diamond, and user does not own this skin
		if (curDiamond >= (int)HeroTable.HeroInfoTable [characterOrder]["price"] && PlayerPrefs.GetInt ("CharacterOwned" + characterOrder.ToString (), 1) == 1) {
			curDiamond -=  (int)HeroTable.HeroInfoTable [characterOrder]["price"];
			PlayerPrefs.SetInt ("Diamond", curDiamond);
			PlayerPrefs.SetInt ("CharacterOwned" + characterOrder.ToString (), 0);
			GameObject.Find ("DiamondAmount").GetComponent<Text> ().text = PlayerPrefs.GetInt ("Diamond", 0).ToString ();
			GameObject.Find ("StartText").GetComponent<Text> ().text = GetTranslation ("Button_Start");
			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = null;
			closeBuySkinWindow ();
		} else if (curDiamond <  (int)HeroTable.HeroInfoTable [characterOrder]["price"]) {
			GameObject.Find ("Reminder").GetComponent<Text> ().text = GetTranslation ("Text_NotEnoughDiamond");
		} else {
			GameObject.Find ("Reminder").GetComponent<Text> ().text = GetTranslation ("Text_AlreadyOwnedCharacter");
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

	private string GetTranslation(string nameID) {
		return XmlReader.GetInnerText(xmlDocument, languageManager.currentLanguage, nameID);
	}

	public void updateUI() {

		// When first launch game, no previous highest score availible
		if (PlayerPrefs.HasKey ("HighScore") == false) {
			highScoreButton.gameObject.GetComponent<Text> ().text = "";
		} else {
			highScore = PlayerPrefs.GetFloat ("HighScore");
			highScoreButton.gameObject.GetComponent<Text> ().text = GetTranslation("Text_HighScore") + ((int)highScore).ToString ();
		}

		// The character is not unlocked
		if (PlayerPrefs.GetInt ("CharacterOwned" + characterOrder.ToString (), 1) == 1) {

			GameObject.Find ("StartText").GetComponent<Text> ().text = GetTranslation ("Button_Buy");

			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = 
				GetTranslation(HeroTable.HeroInfoTable[characterOrder]["name"].ToString()) + Environment.NewLine + GetTranslation ("Text_DiamondNeeds") + HeroTable.HeroInfoTable [characterOrder] ["price"].ToString ();

		} else {

			if (PlayerPrefs.GetInt ("GameMode", 0) == 0) {
				GameObject.Find ("StartText").GetComponent<Text> ().text = GetTranslation ("Button_Start");
			} else {
				GameObject.Find("StartText").GetComponent<Text>().text = GetTranslation ("Button_StartMP");
			}


			GameObject.Find ("SuggestPrice").GetComponent<Text> ().text = 
				GetTranslation (HeroTable.HeroInfoTable [characterOrder] ["name"].ToString ()) + Environment.NewLine;
		}
	}
}
