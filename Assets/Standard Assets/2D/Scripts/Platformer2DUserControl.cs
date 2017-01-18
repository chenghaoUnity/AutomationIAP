using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.SceneManagement;

namespace UnityStandardAssets._2D
{
    [RequireComponent(typeof (PlatformerCharacter2D))]
    public class Platformer2DUserControl : MonoBehaviour
    {
        private PlatformerCharacter2D m_Character;
        private bool m_Jump;
		private float h;

        private void Awake()
        {
            m_Character = GetComponent<PlatformerCharacter2D>();
        }


        private void Update()
        {
            if (!m_Jump)
            {
                // Read the jump input in Update so button presses aren't missed.
                m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
            }
        }


        private void FixedUpdate()
        {

			if (SceneManager.GetActiveScene ().buildIndex == 1) {
				m_Character.Move(0, false, false);
			}

            // Read the inputs.
            bool crouch = Input.GetKey(KeyCode.LeftControl);

			if (PlayerPrefs.GetString ("PreferController").Equals ("Vistual")) {
				h = UltimateJoystick.GetPosition ("Movement").x;
			} else if (PlayerPrefs.GetString ("PreferController").Equals ("Gravity")) {
				h = Input.acceleration.x * 2;
			} else {
				h = UltimateJoystick.GetPosition( "Movement" ).x;                                                                                              
			}

            // Pass all parameters to the character control script.
            m_Character.Move(h, crouch, m_Jump);
            m_Jump = false;
        }
    }
}
