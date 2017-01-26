using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Xml;
using System;

[AddComponentMenu("Multi-Language Tool/Canvas Translator")]
[RequireComponent(typeof (Text))]
public class CanvasTranslator : MonoBehaviour
{
    private LanguageManager languageManager;

    private XmlDocument xmlDocument;

    public string nameID;


    public void Start()
    {
        languageManager = FindObjectOfType<LanguageManager>();

        xmlDocument = XmlReader.LoadXmlDocument();
    }

    public void Update()
    { 
        foreach (string name in XmlReader.GetNameIDs(xmlDocument).ToArray())
        {
            if (nameID == name)
            {
                gameObject.GetComponent<Text>().text = XmlReader.GetInnerText(xmlDocument, languageManager.currentLanguage, nameID);
            }
        }
    }
}
