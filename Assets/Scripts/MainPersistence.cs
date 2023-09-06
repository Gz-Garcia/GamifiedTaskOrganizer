using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainPersistence : MonoBehaviour
{
    public static MainPersistence Instance;
    public string code = "-1";
    public PlayerData playerData;
    private string playerFilename = "player.json";

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this;
        
        LoadPlayerInfo();
        
        DontDestroyOnLoad(gameObject);
    }

    public void CompleteTask(int xpGained) {
        playerData.xp += xpGained;
        playerData.completedTasks += 1;
        SavePlayerInfo();
    }

    public void UncompleteTask(int xpGained) {
        playerData.xp -= xpGained;
        playerData.completedTasks -= 1;
        SavePlayerInfo();
    }

    void SavePlayerInfo()
    {
        FileHandler.SaveToJSON<PlayerData>(playerData, playerFilename);
    }

    public void LoadPlayerInfo()
    {
        playerData = FileHandler.ReadFromJSON<PlayerData>(playerFilename);
        if (playerData == null)
        {
            Debug.Log("No player, initializing");
            playerData = new PlayerData("Player", 0, 0, 0, 0);
            SavePlayerInfo();
        }
    }

    public void SpendGold(int gold) {
        playerData.gold -= gold;
        SavePlayerInfo();
    }

    void OnDestroy()
    {
        SavePlayerInfo();
    }
}
