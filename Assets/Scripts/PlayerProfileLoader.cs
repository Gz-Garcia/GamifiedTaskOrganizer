using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerProfileLoader : MonoBehaviour
{
    public TMP_Text playerName, playerLevel, playerXp, playerCoins;
    private PlayerData player;
    void Start() {
        player = MainPersistence.Instance.playerData;
        LoadFields();
    }

    void Update() {
        player = MainPersistence.Instance.playerData;
        LoadFields();
    }

    void LoadFields() {
        playerName.text = player.name;
        playerLevel.text = "Level " + player.level.ToString();
        playerXp.text = player.xp.ToString() + " XP";
        playerCoins.text = player.gold.ToString();
    }
}
