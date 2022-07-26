using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class FontSetter : MonoBehaviour
{

    public Font font;
    public TMP_FontAsset fontasset;
    void Start()
    {
        Debug.Log("font setter");
        SetFontToAll(font);
    }

    void SetFontToAll(Font font){
        Text[] texts = FindObjectsOfType<Text>();
        TextMeshProUGUI[] textmeshes = FindObjectsOfType<TextMeshProUGUI>();
        foreach (Text txt in texts) {
            txt.font = font;
        }
        foreach (TextMeshProUGUI txt in textmeshes)
        {
            txt.font = fontasset;
        }
    }


}
