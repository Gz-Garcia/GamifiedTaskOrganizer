using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TaskDataHandler : MonoBehaviour
{
    [SerializeField] TMP_InputField nameInput;
    [SerializeField] TMP_InputField descriptionInput;
    private string filename = "tarefas.json";

    List<TaskData> tasks = new List<TaskData>();

    private void Start() {
        tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
    }

    public void AddTask() {
        tasks.Add(new TaskData(tasks.Count ,nameInput.text, descriptionInput.text, 1));
        nameInput.text = "";
        descriptionInput.text = "";

        FileHandler.SaveToJSON<TaskData>(tasks, filename);
    }
}
