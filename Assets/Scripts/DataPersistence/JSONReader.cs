using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class JSONReader : MonoBehaviour
{
    string path;

    [System.Serializable]
    public class Task {
        public int state;
        public string name;
        public string description;
    }

    [System.Serializable]
    public class TaskList {
        public Task[] task;
    }

    public TaskList taskList = new TaskList();

    void Start()
    {
        path = Application.persistentDataPath + "/tarefas.json";
        readJSON();
    }

    void Update()
    {
        
    }

    void readJSON() {
        StreamReader reader = new StreamReader(path);
        string tasksRaw = reader.ReadToEnd();

        taskList = JsonUtility.FromJson<TaskList>(tasksRaw);
    }

    public string getPath() {
        return path;
    }
}
