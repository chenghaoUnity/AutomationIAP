using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(CanvasTranslator))]
public class CanvasTranslatorEditor : Editor
{
    private CanvasTranslator canvasTranslator;


    public override void OnInspectorGUI()
    {
        canvasTranslator = target as CanvasTranslator;

        canvasTranslator.nameID = EditorGUILayout.TextField("Name ID", canvasTranslator.nameID);
    }
}
