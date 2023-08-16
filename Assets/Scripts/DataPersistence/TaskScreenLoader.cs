using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskScreenLoader : MonoBehaviour
{

    public List<TaskData> tasks = new List<TaskData>();
    public TMP_Text taskName, taskDesc;
    private string filename = "tarefas.json";
    private int code = -1;

    void Start()
    {
        
        if (MainPersistence.Instance != null) {
            this.code = MainPersistence.Instance.code;
        }
        if(code >= 0) {
            tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
            LoadTaskScreen();
        }
        
    }

    private void LoadTaskScreen() {
        foreach (TaskData task in tasks) {
            if (task.tcode == code) {
                taskName.text = task.tname;
                taskDesc.text = task.tdescription;
            }
        }
    }
}
