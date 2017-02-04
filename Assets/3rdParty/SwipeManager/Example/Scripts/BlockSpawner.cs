using UnityEngine;
using System.Collections;

public class BlockSpawner : MonoBehaviour {

	public GameObject block;
	public float createTime = 1f;
	
	public Transform road1;
	public Transform road2;
	public Transform road3;
	
	private float timer;
	
	
	void Update(){
		timer-=Time.deltaTime;
		if(timer<0){
			timer+=createTime;
			Instantiate(block,new Vector3(RandomRoad(),24,0),Quaternion.identity);
		}
	}
				
	float RandomRoad(){
		int r = Random.Range(0,100);
		
		if(r>0&&r<33){
			return road1.position.x;
		}else
		if(r>33&&r<66){
			return road2.position.x;
		}else{
			return road3.position.x;
		}
	}
}
