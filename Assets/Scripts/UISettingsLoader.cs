using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UISettingsLoader : MonoBehaviour
{
    private List<string> fontKeys;
    private List<TMP_FontAsset> fontValues;
    public string currentFont;
    private Dictionary<string, TMP_FontAsset> fontAssetDic;
    private TMP_Text[] tmpTexts;

    void Start() {
        fontKeys = AssetList.Instance.getFontKeysList();
        fontValues = AssetList.Instance.getFontAssetList();

        Filldictionary();
        StartCoroutine("FontUpdate");
    }

    void Filldictionary() {
        if (fontKeys.Count == fontValues.Count)
        {
            fontAssetDic = new Dictionary<string, TMP_FontAsset>();

            int index = 0;
            foreach (TMP_FontAsset fontAsset in fontValues)
            {
                fontAssetDic.Add(fontKeys[index], fontValues[index++]);
            }
        }
        else
        {
            Debug.Log("Lista de valores e de chaves das fontes são de tamanhos diferentes.");
        }
    }

    IEnumerator FontUpdate() {
        tmpTexts = GetComponentsInChildren<TMP_Text>(true);
        foreach (TMP_Text text in tmpTexts) {
            text.font = fontAssetDic[currentFont];
        }
        yield return new WaitForSeconds(1);
        StartCoroutine("FontUpdate");
    }
}
