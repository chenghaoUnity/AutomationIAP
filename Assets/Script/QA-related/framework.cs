using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class framework : MonoBehaviour {

	public List<TestCase> resultTable = new List<TestCase>();
	public List<IEnumerator> testSuite = new List<IEnumerator>();

	public GameObject QAModeUI;
	public GameObject QAModeUI_progress;

	public UnityEvent onCompelete;

	private int maxTest = 0;
	private int runOrder = 0;
	public string result;
	private DatabaseReference reference;

	void Awake () {
		FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://robot-jump.firebaseio.com");
		reference = FirebaseDatabase.DefaultInstance.RootReference;
	}

	public void Start() {
		if (PlayerPrefs.GetString("QAstatus", "False").Equals("True")) {
			testRun();
		}
	}
		
	public void testRun() {
		// Set environment for QA
		GameObject.FindGameObjectWithTag ("Player").GetComponent<Rigidbody2D> ().simulated = false;
		GameObject.Find ("WaterManager").SetActive (false);
		GameObject.Find ("RainPrefab2D").SetActive (false);
		QAModeUI.SetActive (true);


		// Add test cases to test suite
		testSuite.Add (test01 ());
		testSuite.Add (test02 ());
		testSuite.Add (test03 ());
		testSuite.Add (test04 ());
		testSuite.Add (test05 ());
		testSuite.Add (test06 ());
		testSuite.Add (finalization ());

		maxTest = testSuite.Count;

		// Start test run
		StartCoroutine(testSuite[runOrder]);
	
	}
		
	public IEnumerator test01() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		click ("IAP");
		Time.timeScale = 1f;

		yield return new WaitForSeconds(0.3f);
		click ("BuySuperPower", "IAP");

		yield return new WaitForSeconds (0.3f);
		click ("Button1");

		yield return new WaitForSeconds (0.1f);
		resultTable.Add(new TestCase(
			"C2777-1",
			compareInfo ("Attention", "Purchase Compelte"), 
			"Buy a consumable product, succeed event test",
			System.DateTime.Now.ToString("MMM d, yyyy HH:mm")));

		yield return new WaitForSeconds (0.3f);
		click ("No", "IAP");


		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test02() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		click ("IAP");
		Time.timeScale = 1f;

		yield return new WaitForSeconds(0.3f);
		click ("BuySuperPower", "IAP");

		yield return new WaitForSeconds (0.3f);
		click ("Button2");

		yield return new WaitForSeconds (0.1f);
		resultTable.Add(new TestCase(
			"C2777-2",
			compareInfo ("Attention", "Purchase Fail"), 
			"Buy a consumable product, failed event test",
			System.DateTime.Now.ToString("MMM d, yyyy HH:mm")));

		yield return new WaitForSeconds (0.3f);
		click ("No", "IAP");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test03() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		click ("IAP");
		Time.timeScale = 1f;

		yield return new WaitForSeconds(0.3f);
		click ("Buy100Golds", "IAP");

		yield return new WaitForSeconds (0.3f);
		click ("Button1");

		yield return new WaitForSeconds (0.1f);
		resultTable.Add(new TestCase(
			"C2778-1",
			compareInfo ("Attention", "Purchase Compelte"), 
			"Buy a non-consumable product, succeed event test",
			System.DateTime.Now.ToString("MMM d, yyyy HH:mm")));

		yield return new WaitForSeconds (0.3f);
		click ("No", "IAP");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test04() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		click ("IAP");
		Time.timeScale = 1f;

		yield return new WaitForSeconds(0.3f);
		click ("Buy100Golds", "IAP");

		yield return new WaitForSeconds (0.3f);
		click ("Button2");

		yield return new WaitForSeconds (0.1f);
		resultTable.Add(new TestCase(
			"C2778-2",
			compareInfo ("Attention", "Purchase Fail"), 
			"Buy a non-consumable product, failed event test",
			System.DateTime.Now.ToString("MMM d, yyyy HH:mm")));

		yield return new WaitForSeconds (0.3f);
		click ("No", "IAP");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test05() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		click ("IAP");
		Time.timeScale = 1f;

		yield return new WaitForSeconds(0.3f);
		click ("BuyVIP", "IAP");

		yield return new WaitForSeconds (0.3f);
		click ("Button1");

		yield return new WaitForSeconds (0.1f);
		resultTable.Add(new TestCase(
			"C2779-1",
			compareInfo ("Attention", "Purchase Compelte"), 
			"Buy a subscription product, succeed event test",
			System.DateTime.Now.ToString("MMM d, yyyy HH:mm")));

		yield return new WaitForSeconds (0.3f);
		click ("No", "IAP");
	
		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}

	public IEnumerator test06() {
		runOrder++;
		showProgess (runOrder);

		yield return new WaitForSeconds(0.3f);
		click ("IAP");
		Time.timeScale = 1f;

		yield return new WaitForSeconds(0.3f);
		click ("BuyVIP", "IAP");

		yield return new WaitForSeconds (0.3f);
		click ("Button2");

		yield return new WaitForSeconds (0.1f);
		resultTable.Add(new TestCase(
			"C2779-2",
			compareInfo ("Attention", "Purchase Fail"), 
			"Buy a subscription product, failed event test",
			System.DateTime.Now.ToString("MMM d, yyyy HH:mm")));

		yield return new WaitForSeconds (0.3f);
		click ("No", "IAP");

		if (runOrder < maxTest) {
			yield return StartCoroutine (testSuite [runOrder]);
		} 
	}
		

	public IEnumerator finalization() {
		showReport ();
		yield return new WaitForSeconds (0.3f);
		// Application.OpenURL("https://robot-jump.firebaseio.com/qaReport");

	}

	private void click(string name, string needed = null) {
		StartCoroutine (click_ (name, needed));
	}
		
	private IEnumerator click_(string name, string needed = null) {
		// Click a button
		if (needed == null) {
			GameObject.Find (name).GetComponent<Button> ().onClick.Invoke ();
		}

		while (GameObject.Find (needed) == null) {
			yield return new WaitForEndOfFrame ();
		}

		GameObject.Find (name).GetComponent<Button> ().onClick.Invoke ();
	}

	private bool compareInfo(string name, string expected) {
		// Get text from a text UI
		return GameObject.Find (name).GetComponent<Text> ().text == expected;
	}

	private void showProgess(int progress) {
		// Show progree to the screen
		QAModeUI_progress.GetComponent<Text>().text = "Please wait, running " + progress + " / " + (maxTest - 1) + "...";
	}

	private void showReport() {
		// Push the result to the server and reminds user
		int failed = 0;

		foreach(TestCase result in resultTable) {
			if (result.getResult () == false) {
				failed++;
			}
			pushResultToServer (result);
		}


		QAModeUI_progress.GetComponent<Text> ().text = "Finished! " + (maxTest - failed - 1) + " / " + (maxTest - 1)  + " Passed!";
	}

	private void pushResultToServer(TestCase testCase) {
		string key = reference.Child("qaReport").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates ["/qaReport/" + testCase.getDescitpion() + "/" + testCase.getDate() + "/Result/"] = testCase.getResult () == true ? "Pass" : "Fail";

		reference.UpdateChildrenAsync(childUpdates);
	}
		

	private void getScreenContent() {
		result = this.gameObject.GetComponent<WebCamTextureToCloudVision> ().result;
	}

}
