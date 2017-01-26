using UnityEngine;
using System.Collections;
using System.Xml;

public class MenuManager : MonoBehaviour
{
    private LanguageManager languageManager;

    private int currentMenu;


    private void Start()
    {
        languageManager = FindObjectOfType<LanguageManager>();
    }

	void OnGUI()
    {
        switch (currentMenu)
        {
            case 0:

                if (GUI.Button(new Rect(Screen.width / 2f - 50f, Screen.height / 2 - 10f - 20f - 5f, 100f, 20f), languageManager.GetTranslation("Button_1")))
                {

                }

                if (GUI.Button(new Rect(Screen.width / 2f - 50f, Screen.height / 2f - 10f, 100f, 20f), languageManager.GetTranslation("Button_2")))
                {

                }

                if (GUI.Button(new Rect(Screen.width / 2f - 50, Screen.height / 2f - 10f + 20f + 5f, 100f, 20f), languageManager.GetTranslation("Button_3")))
                {
                    currentMenu = 1;
                }

                break;

            case 1:

                if (GUI.Button(new Rect(Screen.width / 2f - 50f, Screen.height / 2 - 10f - 20f - 5f, 100f, 20f), languageManager.GetTranslation("Language_1")))
                {
                    languageManager.SetLanguage("English");

                    currentMenu = 0;
                }

                if (GUI.Button(new Rect(Screen.width / 2f - 50f, Screen.height / 2f - 10f, 100f, 20f), languageManager.GetTranslation("Language_2")))
                {
                    languageManager.SetLanguage("Spanish");

                    currentMenu = 0;
                }

                if (GUI.Button(new Rect(Screen.width / 2f - 50, Screen.height / 2f - 10f + 20f + 5f, 100f, 20f), languageManager.GetTranslation("Language_3")))
                {
                    languageManager.SetLanguage("French");

                    currentMenu = 0;
                }

                break;
        }

    }
}
