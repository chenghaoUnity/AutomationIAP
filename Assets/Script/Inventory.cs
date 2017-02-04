using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets._2D;
using UnityEngine.UI;

public class Inventory : MonoBehaviour 
{

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

	//Super Power
	private bool canReborn = false;
	public GameObject doubleJumpButton;

	public void Awake() {

		if (PlayerPrefs.GetInt ("GameMode", 0) == 1) {
			return;
		}

		GameObject.Find ("SimpleJoystick").GetComponent<UltimateJoystick> ().customSpacing_X = 50f;
		GameObject.Find ("SimpleJoystick").GetComponent<UltimateJoystick> ().customSpacing_Y = 16f;
		doubleJumpButton.SetActive (false);

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


		languageManager = FindObjectOfType<LanguageManager> ();
		languageManager.SetLanguage(PlayerPrefs.GetInt ("LanguagePrefer", 0));

		GameObject.Find ("CharacterBase").GetComponent<SpriteRenderer> ().sprite = sprites [characterOrder];

		setUpCharacter (
			(int)(HeroTable.HeroInfoTable [characterOrder] ["maxHealth"]),
			(int)(HeroTable.HeroInfoTable [characterOrder] ["recovSpeed"]),
			(float)(HeroTable.HeroInfoTable [characterOrder] ["moveSpeedTuning"]),
			(float)(HeroTable.HeroInfoTable [characterOrder] ["jumpForceTuning"])
		);


		if (characterOrder == 17) {
			canReborn = true;
		} else if (characterOrder == 18) {
			GameObject.Find ("SimpleJoystick").GetComponent<UltimateJoystick> ().customSpacing_X = 14.6f;
			GameObject.Find ("SimpleJoystick").GetComponent<UltimateJoystick> ().customSpacing_Y = 16f;
			doubleJumpButton.SetActive (true);
		}

		if (PlayerPrefs.GetInt ("GameMode", 0) == 1) {
			return;
		}

		updateIAPResult ();
		curHealth = maxHealth;
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
		

	}

	public void Update() {
		
		if (PlayerPrefs.GetInt ("GameMode", 0) == 1) {
			return;
		}

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
		maxHealth += amount;
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
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		// player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifVipSelected", 1);
		PlayerPrefs.Save ();
	}

	public void onJump() 
	{
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		// player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifJumpSelected", 1);
		PlayerPrefs.Save ();
	}

	public void onVIPf() 
	{
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		// player.GetComponent<PlatformerCharacter2D> ().AddPower ();
		PlayerPrefs.SetInt ("ifVipfSelected", 1);
		PlayerPrefs.Save ();
	}

	public void onJumpf() 
	{
		GameObject player = GameObject.FindGameObjectWithTag ("Player");
		// player.GetComponent<PlatformerCharacter2D> ().AddPower ();
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

	private void setUpCharacter(float maxHealth, int recovSpeed, float moveSpeedTuning = 0, float jumpForceTuning = 0) {
		this.maxHealth = maxHealth;
		this.recovSpeed = recovSpeed;
		if (moveSpeedTuning < -1 || moveSpeedTuning > 1 || jumpForceTuning < -1 || jumpForceTuning > 1) {
			return;
		}
		if (SceneManagerHelper.ActiveSceneBuildIndex == 2) {
			GameObject.Find ("Human").GetComponent<PlatformerCharacter2D> ().m_MaxSpeed *= (1 + moveSpeedTuning);
			GameObject.Find ("Human").GetComponent<PlatformerCharacter2D> ().m_JumpForce *= (1 + jumpForceTuning);
		} else if (SceneManagerHelper.ActiveSceneBuildIndex == 3) {
			GameObject.Find ("Human(Clone)").GetComponent<PlatformerCharacter2D> ().m_MaxSpeed *= (1 + moveSpeedTuning);
			GameObject.Find ("Human(Clone)").GetComponent<PlatformerCharacter2D> ().m_JumpForce *= (1 + jumpForceTuning);
		}
	}

	public bool reborn() {
		if (canReborn == false) {
			return false;
		}

		GameObject.Find ("Human").transform.position = new Vector2 (-10.38f, 170f);
		curHealth = maxHealth;
		canReborn = false;

		return true;
	}
}
