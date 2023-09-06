using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ShopListLoader : MonoBehaviour
{
    public GameObject itemPrefab, itemContainer;
    public Sprite fontIcon, colorIcon, hatIcon;
    public List<ItemData> itens = new List<ItemData>();
    public int loadType;
    private string filename = "itens.json";

    void Start()
    {
        PriceComparer pc = new PriceComparer();
        itens = FileHandler.ReadListFromJSON<ItemData>(filename);
        itens.Sort(pc);
        LoadShop();
    }

    void Update()
    {
        
    }

    public void LoadShop() {
        foreach (ItemData item in itens) {
            if(item.type == 1 && (loadType == 0 || loadType == 1) && !item.owned) {
                GameObject itemObject = Instantiate(itemPrefab);
                itemObject.transform.SetParent(itemContainer.transform);

                TMP_Text[] itemTexts = itemObject.GetComponentsInChildren<TMP_Text>();
                
                itemTexts[0].text = item.name;
                itemTexts[1].text = "$" + item.price.ToString();

                Image[] imagens = itemObject.GetComponentsInChildren<Image>();
                imagens[1].sprite = fontIcon;
            }
        }   
    }
}

public class PriceComparer: IComparer<ItemData>
{
    public int Compare(ItemData x, ItemData y)
    {
        if(x.price.CompareTo(y.price) != 0) {
            return x.price.CompareTo(y.price);
        }
        else {
            return string.Compare(x.name, y.name);
        }
    }
}
