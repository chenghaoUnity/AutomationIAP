using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestCase {

	private string ID;
	private bool result;
	private string descitpion;
	private System.DateTime date;

	public TestCase() {
	}

	public TestCase(string ID, bool result, string descitpion, System.DateTime date) {
		this.ID = ID;
		this.result = result;
		this.descitpion = descitpion;
		this.date = date;
	}

	public string getID() {
		return ID;
	}

	public bool getResult() {
		return result;
	}

	public string getDescitpion() {
		return descitpion;
	}

	public System.DateTime getDate() {
		return date;
	}

	public void setID(string ID) {
		this.ID = ID;
	}

	public void setResult(bool result) {
		this.result = result;
	}

	public void setDescitpion(string descitpion) {
		this.descitpion = descitpion;
	}

	public void setdate(System.DateTime date) {
		this.date = date;
	}
}
