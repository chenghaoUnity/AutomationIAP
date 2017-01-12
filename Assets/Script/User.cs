using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User {

	private string highScore;
	private string username;

	public User() {
	}

	public User(string highScore, string username) {
		this.highScore = highScore;
		this.username = username;
	}

	public string getUsername() {
		return username;
	}

	public string getHighScore() {
		return highScore;
	}

	public void setUsername(string username) {
		this.username = username;
	}

	public void setHighScore(string highScore) {
		this.highScore = highScore;
	}

	public int CompareTo(User comparePart)
	{
		// A null value means that this object is greater.
		if (comparePart == null)
			return 1;

		else
			return (int.Parse(this.highScore).CompareTo(int.Parse(comparePart.highScore)));
	}


}