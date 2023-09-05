using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AssetList : MonoBehaviour
{
    public static AssetList Instance;
    public List<string> fontKeys;
    public List<TMP_FontAsset> fontValues;
    public string currentFont;
    private Dictionary<string, TMP_FontAsset> fontAssetDic;
    private void Awake() {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    public List<TMP_FontAsset> getFontAssetList() {
        return fontValues;
    }

    public List<string> getFontKeysList() {
        return fontKeys;
    }

    public string getCurrentFont() {
        return currentFont;
    }

    public void setCurrentFont(string font)
    {
        this.currentFont = font;
    }
}
