using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System.Collections.Generic;
using System.Xml;

public static class XmlReader
{
    public static XmlDocument LoadXmlDocument()
    {
#if UNITY_EDITOR

        AssetDatabase.ImportAsset("Assets/Resources/Languages.xml");

#endif

        TextAsset textAsset = (TextAsset)Resources.Load("Languages", typeof(TextAsset));

        XmlDocument xmlDocument = new XmlDocument();

        xmlDocument.LoadXml(textAsset.text);

        return xmlDocument;
    }


    public static XmlNodeList GetLanguageNodes(XmlDocument xmlDocument)
    {
        return xmlDocument.GetElementsByTagName("Language");
    }

    public static string[] GetLanguageNames(XmlDocument xmlDocument)
    {
        string[] returnList = new string[GetLanguagesCount(xmlDocument)];

        for (int i = 0; i < GetLanguagesCount(xmlDocument); i++)
        {
            XmlNodeList languageContent = GetLanguageNodes(xmlDocument)[i].ChildNodes;
            returnList[i] = languageContent[0].InnerText;
        }

        return returnList;
    }

    public static int GetLanguagesCount(XmlDocument xmlDocument)
    {
        return GetLanguageNodes(xmlDocument).Count;
    }


    public static List<Dictionary<string, string>> GetChildNodes(XmlDocument xmlDocument)
    {
        List<Dictionary<string, string>> returnList = new List<Dictionary<string, string>>();

        foreach (XmlNode languageNode in GetLanguageNodes(xmlDocument))
        {
            XmlNodeList languageContent = languageNode.ChildNodes;

            Dictionary<string, string> childNodes = new Dictionary<string, string>();

            foreach (XmlNode node in languageContent)
            {
                childNodes.Add(node.Name, node.InnerText);
            }

            returnList.Add(childNodes);
        }

        return returnList;
    }

    public static List<string> GetNameIDs(XmlDocument xmlDocument)
    {
        List<string> returnList = new List<string>(GetChildNodes(xmlDocument)[0].Keys);
        returnList.RemoveAt(0);

        return returnList;
    }

    public static int GetChildNodesCount(XmlDocument xmlDocument)
    {
        return GetLanguageNodes(xmlDocument)[0].ChildNodes.Count;
    } 


    public static string GetInnerText(XmlDocument xmlDocument, int language, string nameID)
    {
        XmlNodeList languageContent = GetLanguageNodes(xmlDocument)[language].ChildNodes;

        foreach (XmlNode node in languageContent)
        {
            if (node.Name == nameID)
            {
                return node.InnerText;
            }           
        }

        return null;
    }
}
