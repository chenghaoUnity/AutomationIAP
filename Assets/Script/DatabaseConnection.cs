using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using UnityEngine.Events;

public class DatabaseConnection : MonoBehaviour {

	public UnityEvent onCompelete;

	private DatabaseReference reference;

	// Use this for initialization
	void Awake () {
		FirebaseApp.DefaultInstance.SetEditorDatabaseUrl("https://robot-jump.firebaseio.com");
		reference = FirebaseDatabase.DefaultInstance.RootReference;
	}

	public void Start() {

	}

	public void WriteNewScore(string userId, string score) {
		string key = reference.Child("leaderboard").Push().Key;
		Dictionary<string, object> childUpdates = new Dictionary<string, object>();
		childUpdates["/leaderboard/" + userId + "/score/"] = int.Parse(score);

		reference.UpdateChildrenAsync(childUpdates);
	}
		
	public List<User> loadTopTen() {

		List<User> lists = new List<User>();

		FirebaseDatabase.DefaultInstance
			.GetReference ("leaderboard")
			.OrderByChild("score")
			.LimitToLast (10)
			.GetValueAsync().ContinueWith(task => {
				if (task.IsFaulted) {
					// Handle the error...
				}
				else if (task.IsCompleted) {
					DataSnapshot snapshot = task.Result;
					// Do something with snapshot...
					foreach (DataSnapshot data in snapshot.Children) {

						IDictionary idict = (IDictionary)data.Value;
						string score = null;

						foreach (object value in idict.Values) {
							score = value.ToString();
						}
							
						User newUser = new User (score, data.Key.ToString());
						lists.Insert(0, newUser);
					}

					if (onCompelete != null) {
						onCompelete.Invoke();
					}
				}
			});


		return lists;

	}
}




