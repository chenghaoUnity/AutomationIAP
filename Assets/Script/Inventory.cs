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

	public Dictionary<int, int> healthTable = new Dictionary<int, int>() {
		// order - > MaxHealth
		{0, 100},	// Archer
		{1, 100},	// Barbarian
		{2, 100},	// Dragon Slayer
		{3, 100},	// Fire
		{4, 100},	// Healer
		{5, 200},	// Harbalist
		{6, 200},	// Knight
		{7, 200},	// Lancer
		{8, 200},	// Light
		{9, 200},	// Merchant
		{10, 300},	// Ninja
		{11, 300},	// Pet Caller
		{12, 300},	// Poisoner
		{13, 300},	// Ranger
		{14, 300},	// Scout
		{15, 300},	// Shadow Keeper
		{16, 300},	// Summoner
		{17, 500},	// The Black Harvester
		{18, 500},	// The Frost Dragon
		{19, 500},	// Water
	};

	public Dictionary<int, int> recovTable = new Dictionary<int, int>() {
		// order - > recovSpeed
		{0, 10},	// Archer
		{1, 9},		// Barbarian
		{2, 9},		// Dragon Slayer
		{3, 9},		// Fire
		{4, 9},		// Healer
		{5, 9},		// Harbalist
		{6, 9},		// Knight
		{7, 8},		// Lancer
		{8, 8},		// Light
		{9, 8},		// Merchant
		{10, 8},	// Ninja
		{11, 8},	// Pet Caller
		{12, 8},	// Poisoner
		{13, 8},	// Ranger
		{14, 8},	// Scout
		{15, 7},	// Shadow Keeper
		{16, 7},	// Summoner
		{17, 5},	// The Black Harvester
		{18, 5},	// The Frost Dragon
		{19, 5},	// Water
	};
		
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

		maxHealth = healthTable[characterOrder];
		recovSpeed = recovTable[characterOrder];
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
			print (ifJumpSelected);
			PlayerPrefs.SetInt ("ifJumpSelected", ifJumpSelected == true ? 1 : 0);
		}

		if (obj.name == "BuyVIPChecker") {
			ifVipSelected = obj.GetComponent<Toggle> ().isOn;
			print (ifVipSelected);
			PlayerPrefs.SetInt ("ifVipSelected", ifVipSelected == true ? 1 : 0);
		}

		if (obj.name == "BuySuperPowerfChecker") {
			ifJumpfSelected = obj.GetComponent<Toggle> ().isOn;
			print (ifJumpfSelected);
			PlayerPrefs.SetInt ("ifJumpfSelected", ifJumpfSelected == true ? 1 : 0);
		}

		if (obj.name == "BuyVIPfChecker") {
			ifVipfSelected = obj.GetComponent<Toggle> ().isOn;
			print (ifVipfSelected);
			PlayerPrefs.SetInt ("ifVipfSelected", ifVipfSelected == true ? 1 : 0);
		}
	}
}
