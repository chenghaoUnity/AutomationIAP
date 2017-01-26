using UnityEngine;
using UnityEditor;
using System.Xml;

public class TextAreaWindow :  EditorWindow
{
    private static XmlDocument xmlDocument;

    private static int language;
    private static int element;
    private static string text;

    private Vector2 scrollPosition;


    public static void Init(XmlDocument xmlDocument, int language, int element, string text)
    {
        TextAreaWindow.xmlDocument = xmlDocument;
        TextAreaWindow.language = language;
        TextAreaWindow.element = element;
        TextAreaWindow.text = text;

        TextAreaWindow window = (TextAreaWindow)EditorWindow.GetWindow(typeof(TextAreaWindow), false, "Text Area");
        window.Show();
    }

    private void OnGUI()
    {
        EditorStyles.textField.wordWrap = true;

        string newText = EditorGUILayout.TextArea(text, GUILayout.Height(position.height - 4f));

        if (GUI.changed)
        {
            XmlWriter.RenameNodeValue(xmlDocument, language, element, newText);
        }
    }
}
