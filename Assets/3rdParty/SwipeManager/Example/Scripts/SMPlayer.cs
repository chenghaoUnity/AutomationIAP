using UnityEngine;
using System.Collections;

public class SMPlayer : MonoBehaviour {

	public Color playerColor = Color.red;
	
	public Transform road1;
	public Transform road2;
	public Transform road3;
	
	public GUIText guiText;
	
	private int selectRoad = 2;
	private float x;

	void Start(){
		Renderer rend = GetComponent<Renderer>();
		rend.material.SetColor("_Color",playerColor);
	}
	
	void OnEnable(){
		SwipeManager.OnSwipe+=OnSwipe;
	}
	
	void OnDisable(){
		SwipeManager.OnSwipe-=OnSwipe;
	}
	
	void  Update(){
		transform.position = Vector3.Lerp(transform.position,new Vector3(x,-7,0),Time.deltaTime*5);
		if(SwipeManager.GetSwipe(SwipeManager.SwipeList.Right)){
			selectRoad++;
			selectRoad = Mathf.Clamp(selectRoad,1,3);
			SetPlayerPosition();
		}
		
		if(SwipeManager.GetSwipe(SwipeManager.SwipeList.Left)){
			selectRoad--;
			selectRoad = Mathf.Clamp(selectRoad,1,3);
			SetPlayerPosition();
		}
	}
	
	void SetPlayerPosition(){
		switch(selectRoad){
		case 1:
			x = road1.position.x;
			break;
		case 2:
			x = road2.position.x;
			break;
		case 3:
			x = road3.position.x;
			break;
		}
	}
	
	void OnSwipe(SwipeManager.SwipeList swipe){
		guiText.text = "Swipe:"+ swipe.ToString();
	}
	
	void OnTriggerEnter(Collider other) {
		Application.LoadLevel(Application.loadedLevel);
	}
}
