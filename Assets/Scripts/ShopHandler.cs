using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShopHandler : MonoBehaviour
{
    private string filename = "itens.json";
    public List<ItemData> itens = new List<ItemData>();
    public GameObject itemObject, itemNameHolder;

    public void TryBuyItem() {
        LoadItemList();
        string itemName = itemNameHolder.GetComponent<TMP_Text>().text;

        foreach(ItemData item in itens) {
            if(itemName == item.name) {

                if(MainPersistence.Instance.playerData.gold < item.price) {
                    ModalManager.Show("Pobre!", "Você não possui dinheiro para comprar esse item.", 
                    new[] {new ModalButton() { Text = " D: "}});
                    return;
                }
                else {
                    string message = "Você comprou " + item.name + ", viva o Capitalismo!";
                    ModalManager.Show("Sucesso", message, new[] {new ModalButton() { Text = "Yay"}});

                    item.owned = true;
                    MainPersistence.Instance.SpendGold(item.price);
                    itemObject.SetActive(false);
                    FileHandler.SaveToJSON<ItemData>(itens, filename);
                }
            }
        }
    }

    private void LoadItemList() {
        itens = FileHandler.ReadListFromJSON<ItemData>(filename);
    }
}
