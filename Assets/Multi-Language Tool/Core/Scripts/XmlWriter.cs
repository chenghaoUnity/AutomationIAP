using UnityEngine;
using System.Xml;

public static class XmlWriter
{
    public static void RenameNodeName(XmlDocument xmlDocument, int element, string newName)
    {
        if (!AcceptNewName(xmlDocument, element, newName)) return;

        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        for (int i = 0; i < XmlReader.GetLanguagesCount(xmlDocument); i++)
        {
            XmlNodeList languageContent = languageNodes[i].ChildNodes;

            XmlNode oldNode = languageContent[element];
            XmlNode newNode = xmlDocument.CreateElement(newName);

            newNode.AppendChild(oldNode.FirstChild);

            languageNodes[i].ReplaceChild(newNode, oldNode);
        }

        Save(xmlDocument);
    }

    public static bool AcceptNewName(XmlDocument xmlDocument, int element, string name)
    {
        switch (name)
        {
            case "Language":
                Debug.LogWarning("The word -Language- is being used for the language identification. Please use another word.");
                return false;

            case "Languages":
                Debug.LogWarning("The word -Languages- is being used for the language identification. Please use another word.");
                return false;

            case "Name":
                Debug.LogWarning("The word -Name- is being used for the language identification. Please use another word.");
                return false;

            case "":
                Debug.LogWarning("NameID has to contain at least one character");
                return false;
        }

        if (name.Contains(" "))
        {
            Debug.LogWarning("NameID's can't be splitted.");
            return false;
        }


        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        for (int i = 0; i < languageNodes[0].ChildNodes.Count; i++)
        {
            if (i != element)
            {
                if (languageNodes[0].ChildNodes[i].Name == name)
                {
                    Debug.LogWarning("You can't have to NameID's with the same name.");
                    return false;
                }
            }
        }

        return true;
    }

    public static void RenameNodeValue(XmlDocument xmlDocument, int language, int element, string newInnerText)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        XmlNodeList languageContent = languageNodes[language].ChildNodes;
        languageContent[element].InnerText = newInnerText;

        Save(xmlDocument);
    }


    public static void AddNode(XmlDocument xmlDocument)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        string name = "NameID";

        if (!AcceptNewName(xmlDocument, 0, name)) return;

        for (int i = 0; i < languageNodes.Count; i++)
        {
            XmlNode newNode = xmlDocument.CreateElement(name);

            newNode.AppendChild(xmlDocument.CreateTextNode("Translation"));

            languageNodes[i].AppendChild(newNode);
        }

        Save(xmlDocument);
    }

    public static void DeleteNode(XmlDocument xmlDocument, int element)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        for (int i = 0; i < languageNodes.Count; i++)
        {
            XmlNodeList languageContent = languageNodes[i].ChildNodes;

            XmlNode removeNode = languageContent[element];

            languageNodes[i].RemoveChild(removeNode);
        }

        Save(xmlDocument);
    }


    public static void MoveNodeUp(XmlDocument xmlDocument, int element)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        for (int i = 0; i < languageNodes.Count; i++)
        {
            XmlNodeList languageContent = languageNodes[i].ChildNodes;

            XmlNode moveNode = languageContent[element];
            XmlNode previusNode = moveNode.PreviousSibling;

            if (previusNode != null && previusNode != languageContent[0])
            {
                languageNodes[i].RemoveChild(moveNode);

                languageNodes[i].InsertBefore(moveNode, previusNode);
            }
        }

        Save(xmlDocument);
    }

    public static void MoveNodeDown(XmlDocument xmlDocument, int element)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        for (int i = 0; i < languageNodes.Count; i++)
        {
            XmlNodeList languageContent = languageNodes[i].ChildNodes;

            XmlNode moveNode = languageContent[element];
            XmlNode nextNode = moveNode.NextSibling;

            if (nextNode != null)
            {
                languageNodes[i].RemoveChild(moveNode);

                languageNodes[i].InsertAfter(moveNode, nextNode);
            }
        }

        Save(xmlDocument);
    }


    public static void RenameLanguage(XmlDocument xmlDocument, int index, string newName)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        XmlNodeList languageContent = languageNodes[index].ChildNodes;
        languageContent[0].InnerText = newName;

        Save(xmlDocument);
    }

    public static void AddLanguage(XmlDocument xmlDocument)
    {
        for (int i = 0; i < XmlReader.GetLanguageNames(xmlDocument).Length; i++)
        {
            if (XmlReader.GetLanguageNames(xmlDocument)[i] == "New Language")
            {
                Debug.LogWarning("You can't have to Lanuguages with the same name.");
                return;
            }
        }

        XmlNode root = xmlDocument.DocumentElement;

        XmlNode newNode = xmlDocument.CreateElement("Language");

        for (int i = 0; i < XmlReader.GetChildNodesCount(xmlDocument); i++)
        {
            XmlNode newChild;

            if (i == 0)
            {
                newChild = xmlDocument.CreateElement("Name");
                newChild.AppendChild(xmlDocument.CreateTextNode("New Language"));
            }
            else
            {
                string nameID = XmlReader.GetNameIDs(xmlDocument)[i - 1];

                newChild = xmlDocument.CreateElement(nameID);
                newChild.AppendChild(xmlDocument.CreateTextNode("Translate"));
            }

            newNode.AppendChild(newChild);
        }

        root.AppendChild(newNode);

        Save(xmlDocument);
    }

    public static void DeleteLanguage(XmlDocument xmlDocument, int index)
    {
        XmlNodeList languageNodes = xmlDocument.GetElementsByTagName("Language");

        if (languageNodes.Count == 1) return;

        XmlNode deleteNode = languageNodes[index];

        deleteNode.ParentNode.RemoveChild(deleteNode);

        Save(xmlDocument);
    }


    public static void Save(XmlDocument xmlDocument)
    {
        string filepath = Application.dataPath.ToString() + "/Multi-Language Tool/Core/Resources/Languages.xml";

        xmlDocument.Save(filepath);
    }
}
