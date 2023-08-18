using System.Diagnostics;
using System.Dynamic;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskDataHandler : MonoBehaviour
{
    [SerializeField] TMP_InputField nameInput;
    [SerializeField] TMP_InputField descriptionInput;
    [SerializeField] TMP_InputField duedateInput;

    private int taskDificulty = 1;

    private string filename = "tarefas.json";

    List<TaskData> tasks = new List<TaskData>();

    private void Start() {
        tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
    }

    public void AddTask() {
        string taskCode = GenerateCode();
        string taskName = nameInput.text;
        string taskDescription = descriptionInput.text;
        string taskDueDate = duedateInput.text;

        tasks.Add(new TaskData(taskCode, taskName, taskDescription, taskDificulty, taskDueDate, "", 1));
        nameInput.text = "";
        descriptionInput.text = "";

        FileHandler.SaveToJSON<TaskData>(tasks, filename);
    }

    public string GenerateCode() {
        return System.Guid.NewGuid().ToString();
    }

    public void SetDificulty(int d) {
        this.taskDificulty = d;
    }
}
