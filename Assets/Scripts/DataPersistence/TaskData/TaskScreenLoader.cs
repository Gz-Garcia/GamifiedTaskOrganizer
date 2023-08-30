using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskScreenLoader : MonoBehaviour
{
    public List<TaskData> tasks = new List<TaskData>();
    public TMP_InputField taskName, taskDesc, taskDate, taskDificulty;
    private string filename = "tarefas.json";
    private string code;

    void Start()
    {   
        if (MainPersistence.Instance != null) {
            this.code = MainPersistence.Instance.code;
            Debug.Log("code = " + code);
        }
        if(code != null) {
            tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
            LoadTaskScreen();
        }
        
    }

    private void LoadTaskScreen() {
        foreach (TaskData task in tasks) {
            if (task.tcode == code) {
                Debug.Log(task.tname);
                taskName.text = task.tname;
                taskDesc.text = task.tdescription;
                taskDate.text = task.tduedate;
                if(taskDificulty != null) taskDificulty.text = task.tdificulty.ToString();
            }
        }
    }
}
