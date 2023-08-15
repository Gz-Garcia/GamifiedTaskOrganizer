using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskLoader : MonoBehaviour
{
    public GameObject taskPrefab, taskContainer;
    public List<TaskData> tasks = new List<TaskData>();
    private string filename = "tarefas.json";

    void Start()
    {
        tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
        LoadTasks();
    }

    void Update()
    {
        
    }

    public void LoadTasks() {
        foreach (TaskData task in tasks) {
            if(task.tstate == 1) {
                GameObject nt = Instantiate(taskPrefab);
                nt.transform.SetParent(taskContainer.transform);

                TMP_Text ntName = nt.GetComponentInChildren<TMP_Text>();
                ntName.text = task.tname;

                GameObject codeHolder = GameObject.Find("CodeHolder");
                codeHolder.name = task.tcode.ToString();
            }

        }    
    }
}
