using UnityEngine;
using System.Xml;

[AddComponentMenu("Multi-Language Tool/Language Manager")]
public class LanguageManager : MonoBehaviour
{
    private XmlDocument xmlDocument;

    public int currentLanguage;


    private void Start()
    {
        xmlDocument = XmlReader.LoadXmlDocument();
    }


    public string GetLanguage()
    {
        return XmlReader.GetLanguageNames(xmlDocument)[currentLanguage];
    }

    public void SetLanguage(int index)
    {
        currentLanguage = index;

		PlayerPrefs.SetInt ("LanguagePrefer", index);
		PlayerPrefs.Save ();
    }

    public void SetLanguage(string name)
    {
        for (int i = 0; i < XmlReader.GetLanguageNames(xmlDocument).Length; i++)
        {
            if (name == XmlReader.GetLanguageNames(xmlDocument)[i])
            {
                currentLanguage = i;
            }
        }
	}


    public string GetTranslation(string nameID)
    {
        return XmlReader.GetInnerText(xmlDocument, currentLanguage, nameID);
    }
}
