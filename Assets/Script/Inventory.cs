using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets._2D;
using UnityEngine.UI;

public class Inventory : MonoBehaviour 
{
	int m_GoldAmount = 0;

	private bool ifVip = false;
	private bool ifJump = false;
	private bool ifVipf = false;
	private bool ifJumpf = false;

	public bool ifVipSelected = false;
	public bool ifJumpSelected = false;
	public bool ifVipfSelected = false;
	public bool ifJumpfSelected = false;

	public GameObject ifVipButton;
	public GameObject ifJumpButton;
	public GameObject ifVipfButton;
	public GameObject ifJumpfButton;

	public GameObject ifVipButtonChecker;
	public GameObject ifJumpButtonChecker;
	public GameObject ifVipfButtonChecker;
	public GameObject ifJumpfButtonChecker;

	public GameObject hurt;

	public int characterOrder;
	public Sprite[] sprites;

	private float zoomInTimer = 0;

	private LanguageManager languageManager;
			
	public float maxHealth; 
	// smalelr, faster
	public int recovSpeed = 10;
	public float curHealth;

	public void Awake() {

		ifVip = PlayerPrefs.GetInt ("ifVip") != 0;
		ifJump = PlayerPrefs.GetInt ("ifJump") != 0;
		ifVipf = PlayerPrefs.GetInt ("ifVipf") != 0;
		ifJumpf = PlayerPrefs.GetInt ("ifJumpf") != 0;

		ifVipSelected = PlayerPrefs.GetInt ("ifVipSelected") != 0;
		ifJumpSelected = PlayerPrefs.GetInt ("ifJumpSelected") != 0;
		ifVipfSelected = PlayerPrefs.GetInt ("ifVipfSelected") != 0;
		ifJumpfSelected = PlayerPrefs.GetInt ("ifJumpfSelected") != 0;

		Application.targetFrameRate = 30;

		characterOrder = PlayerPrefs.GetInt ("CharacterOrder", 0);
		GameObject.Find ("CharacterBase").GetComponent<SpriteRenderer> ().sprite = sprites [characterOrder];

		maxHealth = HeroTable.HeroInfoTable [characterOrder] ["maxHealth"];
		recovSpeed = HeroTable.HeroInfoTable [characterOrder] ["recovSpeed"];

		languageManager = FindObjectOfType<LanguageManager> ();
		languageManager.SetLanguage(PlayerPrefs.GetInt ("LanguagePrefer", 0));
	}

	private void updateIAPResult() {
		if (ifVip == true) {
			DisableIAPButton (ifVipButton);
			showChecker (ifVipButton);
		}

		if (ifJump == true) {
			DisableIAPButton (ifJumpButton);
			showChecker (ifJumpButton);
		}

		if (ifVipf == true) {
			DisableIAPButton (ifVipfButton);
			showChecker (ifVipfButton);
		}

		if (ifJumpf == true) {
			DisableIAPButton (ifJumpfButton);
			showChecker (ifJumpfButton);
		}

		if (ifVipSelected == true) {
			ifVipButtonChecker.GetComponent<Toggle> ().isOn = true;
			onVIP ();
		}

		if (ifJumpSelected == true) {
			ifJumpButtonChecker.GetComponent<Toggle> ().isOn = true;
			onJump ();
		}

		if (ifVipfSelected == true) {
			ifVipfButtonChecker.GetComponent<Toggle> ().isOn = true;
			onVIPf ();
		}

		if (ifJumpfSelected == true) {
			ifJumpfButtonChecker.GetComponent<Toggle> ().isOn = true;
			onJumpf ();
		}
	}

	void Start() {
		updateIAPResult ();
		curHealth = maxHealth;
	}

	public void Update() {
		// Zoom in animation
		if (zoomInTimer <= 1) {
			zoomInTimer += Time.deltaTime * 0.7f;
			GameObject.Find ("Main Camera").GetComponent<Camera> ().orthographicSize = Mathf.Lerp (5, 7, zoomInTimer);
		}
	}

	public void AddDiamond(int amount) {
		PlayerPrefs.SetInt ("Diamond", PlayerPrefs.GetInt ("Diamond", 0) + amount);
		GameObject.Find ("DiamondAmount").GetComponent<Text> ().text = PlayerPrefs.GetInt ("Diamond", 0).ToString();
	}


	public void AddHealthLimit (int amount)
	{
		m_GoldAmount += amount;
		this.gameObject.GetComponent<UIupdater> ().sync ();
	}

	public void RecoverHealth ()
	{
		float amount = 1;

		if (curHealth < maxHealth) {
			if (curHealth + amount >= maxHealth) {
				curHealth = maxHealth;
			} else {
				curHealth += amount;
			}
		}
		this.gameObject.GetComponent<UIupdater> ().sync ();
	}

	public void BuyVIP() {
		ifVip = true;
		PlayerPrefs.SetInt ("ifVip", 1);
		PlayerPrefs.Save ();
		updateIAPResult();
	}

	public void BuyJump() {
		ifJump = true;
		PlayerPrefs.SetInt ("ifJump", 1);
		PlayerPrefs.Save ();
		updateIAPResult();
	}

	public void BuyVIPf() {
		ifVipf = true;
		PlayerPrefs.SetInt ("ifVipf", 1);
		PlayerPrefs.Save ();
		updateIAPResult();
	}

	public void BuyJumpf() {
		ifJumpf = true;
		PlayerPrefs.SetInt ("ifJumpf", 1);
		PlayerPrefs.Save ();
		updateIAPResult();
	}

	public void onVIP() 
	{
		AddHealthLimit (100);
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifVipSelected", 1);
		PlayerPrefs.Save ();
	}

	public void onJump() 
	{
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifJumpSelected", 1);
		PlayerPrefs.Save ();
	}

	public void onVIPf() 
	{
		AddHealthLimit (100);
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifVipfSelected", 1);
		PlayerPrefs.Save ();
	}

	public void onJumpf() 
	{
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifJumpfSelected", 1);
		PlayerPrefs.Save ();
	}

	// return true if died
	public bool ReduceHealth(int number) {

		if (number == int.MaxValue) {
			return true;
		}

		BleedBehavior.BloodAmount = 0.5f;

		if (curHealth - number <= 0) {
			curHealth = 0;
			this.gameObject.GetComponent<UIupdater> ().sync ();
			return true;
		} else {
			curHealth = curHealth - number;
			this.gameObject.GetComponent<UIupdater> ().sync ();
			return false;
		}
	}

	private void DisableIAPButton(GameObject button)
	{
		// if (PlayerPrefs.GetString("QAstatus", "False").Equals("False")) {
		// 	button.GetComponent<Button> ().interactable = false;
		// }
	}

	public void showChecker(GameObject obj) {

		if (obj.name == "BuySuperPower") {
			ifJumpButtonChecker.SetActive (true);
		}

		if (obj.name == "BuyVIP") {
			ifVipButtonChecker.SetActive (true);
		}

		if (obj.name == "BuySuperPowerf") {
			ifJumpfButtonChecker.SetActive (true);
		}

		if (obj.name == "BuyVIPf") {
			ifVipfButtonChecker.SetActive (true);
		}
	}

	public void checkerLogic(GameObject obj) {
	
		if (obj.name == "BuySuperPowerChecker") {
			ifJumpSelected = obj.GetComponent<Toggle> ().isOn;
			PlayerPrefs.SetInt ("ifJumpSelected", ifJumpSelected == true ? 1 : 0);
		}

		if (obj.name == "BuyVIPChecker") {
			ifVipSelected = obj.GetComponent<Toggle> ().isOn;
			PlayerPrefs.SetInt ("ifVipSelected", ifVipSelected == true ? 1 : 0);
		}

		if (obj.name == "BuySuperPowerfChecker") {
			ifJumpfSelected = obj.GetComponent<Toggle> ().isOn;
			PlayerPrefs.SetInt ("ifJumpfSelected", ifJumpfSelected == true ? 1 : 0);
		}

		if (obj.name == "BuyVIPfChecker") {
			ifVipfSelected = obj.GetComponent<Toggle> ().isOn;
			PlayerPrefs.SetInt ("ifVipfSelected", ifVipfSelected == true ? 1 : 0);
		}
	}
}
