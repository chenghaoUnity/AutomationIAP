using UnityEngine;
using System.Collections;

public class SwipeManager : MonoBehaviour {
	
	public delegate void SwipeAction(SwipeList swipe);
    public static event SwipeAction OnSwipe;
	
	public enum SwipeList{
		None,
		Up,
		Down,
		Left,
		Right,
		DownLeft,
		DownRight,
		UpLeft,
		UpRight
	}
	
	public bool debug;
	public bool isMobile;
	
	public static bool swipeBegan;
	public static bool swiping;
	public static bool swipeEnded;
	
	private SwipeList swipe;
	
	private Vector2 f;
	private Vector2 s;
	
	private static SwipeManager instance;
	
	void Start(){
		instance = this;
	}
	
	void Update(){
		swipe = SwipeList.None;
		swipeBegan = false;
		swipeEnded = false;
		
		if(!isMobile){
			if(Input.GetMouseButtonDown(0)){
				f = Input.mousePosition;
				swipeBegan = true;
				swiping = true;
			}
			
			if(Input.GetMouseButtonUp(0)){
				s = Input.mousePosition;
				swiping = false;
				swipeEnded = true;
				Swipe();
			}
		}else{
			int count = Input.touchCount;
			for(int i=0;i<count;i++){
				
				Touch touch = Input.GetTouch(i);
				if(touch.phase == TouchPhase.Began){
					f = touch.position;
					swipeBegan = true;
					swiping = true;
				}
				
				if(touch.phase == TouchPhase.Canceled|| touch.phase == TouchPhase.Ended){
					s = touch.position;
					swiping = false;
					swipeEnded = true;
					Swipe();
				}
			}
		}
	}
	
	void Swipe(){
			
			Vector2 c = new Vector2(s.x-f.x,s.y-f.y);
			
			c.Normalize();
			
			if(debug)
				print(c);
			
			if(c.y>=0.9f){
				swipe = SwipeList.Up;
				if(debug)
					print("Up");
			}else
			if(c.x>=0.9f){
				swipe = SwipeList.Right;
				if(debug)
					print("Right");
			}else
			if(c.y<=-0.9f){
				swipe = SwipeList.Down;
				if(debug)
					print("Down");
			}else
			if(c.x<=-0.9f){
				swipe = SwipeList.Left;
				if(debug)
					print("Left");
			}else
			if(c.y<=0.9f&&c.y>0&&c.x<=0.9f&&c.x>0){
				swipe = SwipeList.UpRight;
				if(debug)
					print("UpRight");
			}else
			if(c.y>=-0.9f&&c.y<0&&c.x<=0.9f&&c.x>0){
				swipe = SwipeList.DownRight;
				if(debug)
					print("DownRight");
			}else
			if(c.y>=-0.9f&&c.y<0&&c.x>=-0.9f&&c.x<0){
				swipe = SwipeList.DownLeft;
				if(debug)
					print("DownLeft");
			}else
			if(c.y<=0.9f&&c.y>0&&c.x>=-0.9f&&c.x<0){
				swipe = SwipeList.UpLeft;
				if(debug)
					print("UpLeft");
			}else{
				swipe = SwipeList.None;
				if(debug)
					print("None");
			}
		
		if(OnSwipe!=null){
			OnSwipe(swipe);
		}
	}
	
	public static bool GetSwipe(SwipeList _swipe){
		if(_swipe == instance.swipe){
			return true;
		}
		return  false;
	}
}
