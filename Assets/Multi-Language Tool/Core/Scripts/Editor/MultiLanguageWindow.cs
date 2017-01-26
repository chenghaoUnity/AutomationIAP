using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using System.Text;
using System.Linq;


public class MultiLanguageWindow : EditorWindow
{
    private static XmlDocument xmlDocument;

    public static int currentLanguage;
    private bool editing = false;

    private Vector2 scrollPosition;
    private bool scrollbarVisible;


    [MenuItem("Window/Mutli-Language")]
    public static void Init()
    {
        MultiLanguageWindow window = (MultiLanguageWindow)EditorWindow.GetWindow(typeof(MultiLanguageWindow), false, "Multi-Language");
        window.Show();

        xmlDocument = XmlReader.LoadXmlDocument();
        
        currentLanguage = 0;      
    }

    private void OnGUI()
    {
        if (xmlDocument == null)
        {
            xmlDocument = XmlReader.LoadXmlDocument();
        }

        GUILayout.Space(5f);

        GUILayout.BeginHorizontal("box");

        EditorGUILayout.LabelField("Language", GUILayout.Width(position.width / 4f));

        if (!editing)
        {
            currentLanguage = EditorGUILayout.Popup(currentLanguage, XmlReader.GetLanguageNames(xmlDocument), GUILayout.Width(position.width / 4f * 3f - 62f));
        }
        else
        {
            string name = EditorGUILayout.TextField(XmlReader.GetLanguageNames(xmlDocument)[currentLanguage], GUILayout.Width(position.width / 4f * 3f - 62f));

            if (GUI.changed)
            {
                XmlWriter.RenameLanguage(xmlDocument, currentLanguage, name);
            }
            
        }

        if (GUILayout.Button("E", GUILayout.Width(18f), GUILayout.Height(16f)))
        {
            editing = !editing ? editing = true : editing = false;
        }

        if (!editing)
        {
            if (GUILayout.Button("+", GUILayout.Width(18f), GUILayout.Height(16f)))
            {
                XmlWriter.AddLanguage(xmlDocument);
                currentLanguage = XmlReader.GetLanguagesCount(xmlDocument) - 1;
            }
        }
        else
        {
            if (GUILayout.Button("-", GUILayout.Width(18f), GUILayout.Height(16f)))
            {
                editing = false;
                XmlWriter.DeleteLanguage(xmlDocument, currentLanguage);
                currentLanguage = 0;                
            }
        }
        
        GUILayout.EndHorizontal();

        float rescale = scrollbarVisible ? 15f : 0f;

        GUILayout.BeginVertical("box", GUILayout.Width(position.width - 6f));

        GUILayout.BeginHorizontal();

        EditorGUILayout.LabelField("Name ID", GUILayout.Width(position.width / 4f));
        EditorGUILayout.LabelField("Translations", GUILayout.Width(position.width - (position.width / 4) - 105f - rescale));
        EditorGUILayout.LabelField("Settings", GUILayout.Width(60f));

        GUILayout.EndHorizontal();

        GUILayout.EndVertical();

        scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition, GUILayout.Width(position.width - 2f));

        GUILayout.BeginHorizontal();

        GUILayout.Space(7f);

        GUILayout.BeginVertical( GUILayout.Width(position.width - 16 - rescale));

        for (int i = 1; i < XmlReader.GetChildNodesCount(xmlDocument); i++)
        {      
            GUI.color = (i - 1) % 2 == 0 ? new Color(0.725f, 0.725f, 0.725f, 1f) : Color.white;
   
            GUILayout.BeginHorizontal();

            KeyValuePair<string, string> node = XmlReader.GetChildNodes(xmlDocument)[currentLanguage].ElementAt(i);

            string nameID = EditorGUILayout.TextField(node.Key, GUILayout.Width(position.width / 4f));

            if (GUI.changed)
            {
                XmlWriter.RenameNodeName(xmlDocument, i, nameID);
            }      

            string text = EditorGUILayout.TextField(node.Value, GUILayout.Width(position.width - (position.width / 4) - 105f - rescale));

            if (GUI.changed)
            {
                XmlWriter.RenameNodeValue(xmlDocument, currentLanguage, i, text);
            }

            if (GUILayout.Button("E", GUILayout.Width(18f), GUILayout.Height(16f)))
            {
                TextAreaWindow.Init(xmlDocument, currentLanguage, i, text);
            }

            if (GUILayout.Button("U", GUILayout.Width(18f), GUILayout.Height(16f)))
            {
                XmlWriter.MoveNodeUp(xmlDocument, i);
            }

            if (GUILayout.Button("D", GUILayout.Width(18f), GUILayout.Height(16f)))
            {
                XmlWriter.MoveNodeDown(xmlDocument, i);
            }

            if (GUILayout.Button("-", GUILayout.Width(18f), GUILayout.Height(16f)))
            {
                XmlWriter.DeleteNode(xmlDocument, i);
            }

            GUILayout.EndHorizontal();

            GUILayout.Space(2f);
        }  

        GUI.color = Color.white;

        if (GUILayout.Button("+", GUILayout.Width(position.width - 13f - rescale), GUILayout.Height(16f)))
        {
            XmlWriter.AddNode(xmlDocument);
        }

        float buttonYposition = GUILayoutUtility.GetLastRect().yMin + 23f;

        GUILayout.EndVertical();

        GUILayout.EndHorizontal();
              
        EditorGUILayout.EndScrollView();

        if (GUILayoutUtility.GetLastRect().height != 1)
        {
            if (GUILayoutUtility.GetLastRect().height < buttonYposition)
            {
                scrollbarVisible = true;
            }
            else
            {
                scrollbarVisible = false;
            }
        }
    }
}