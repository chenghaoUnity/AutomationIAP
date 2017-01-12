using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Loading : MonoBehaviour {

	public void Start() {
		LoadGame();
	}

	public void LoadGame() {
		StartCoroutine(StartLoading_1(1));
	}

	private IEnumerator StartLoading_1(int scene) {
		AsyncOperation op = Application.LoadLevelAsync(scene);
		while(!op.isDone) {            
			yield return new WaitForEndOfFrame();
		}        
	}
}
