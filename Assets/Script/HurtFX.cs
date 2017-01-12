using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HurtFX : MonoBehaviour {

	public float m_Timer = 0f;
	public float m_HoldingTime = 1.5f;
	public string m_Text;

	private bool b_Background;

	// Update is called once per frame
	void FixedUpdate () {

		if (m_Text != null || m_Text.Length != 0) {

			this.GetComponent<Text> ().text = m_Text;
			changeBackground ();

			m_Timer += Time.deltaTime;
			transform.localPosition = new Vector3 (transform.localPosition.x, transform.localPosition.y + 1, transform.localPosition.z);

			if (m_Timer > m_HoldingTime) {
				m_Timer = 0f;
				Destroy (this.gameObject);
			}
		}

	}

	void changeBackground() {

		if (b_Background == false) {
			return;
		} 

		b_Background = false;
		GameObject.Find ("Main Camera").GetComponent<Camera> ().backgroundColor = new Color (Mathf.Lerp(180, 255, m_HoldingTime), Mathf.Lerp(94, 255, m_HoldingTime), Mathf.Lerp(94, 255, m_HoldingTime));
	}

}
