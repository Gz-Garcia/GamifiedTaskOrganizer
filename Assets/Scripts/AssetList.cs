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
    public List<ItemData> itens = new List<ItemData>();
    private string filename = "itens.json";
    
    private void Awake() {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    void Start() {
        itens = FileHandler.ReadListFromJSON<ItemData>(filename);
        if(itens.Count == 0) {
            foreach(string font in fontKeys) {
                itens.Add(new ItemData(font, 100, 1, false));
            }

            FileHandler.SaveToJSON<ItemData>(itens, filename);
        }
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
