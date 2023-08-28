using System.Dynamic;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class TaskDataHandler : MonoBehaviour
{
    [SerializeField] TMP_InputField nameInput;
    [SerializeField] TMP_InputField descriptionInput;
    [SerializeField] TMP_InputField duedateInput;

    private int taskDificulty = 1;

    private string filename = "tarefas.json", codigo;

    List<TaskData> tasks = new List<TaskData>();

    private void Start() {
        tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
    }

    public void AddTask() {
        string taskCode = GenerateCode();
        string taskName = nameInput.text;
        string taskDescription = descriptionInput.text;
        string taskDueDate = duedateInput.text;

        if (MainPersistence.Instance.code != "0") {
            Debug.Log("Edit");
            this.codigo = MainPersistence.Instance.code;
            foreach (TaskData task in tasks) {
                if (codigo == task.tcode) {
                    task.tname = taskName;
                    task.tdescription = taskDescription;
                    task.tduedate = taskDueDate;
                    task.tdificulty = taskDificulty;
                }
            }
        }
        else {
            Debug.Log("Add");
            tasks.Add(new TaskData(taskCode, taskName, taskDescription, taskDificulty, taskDueDate, "", 1));
        }

        MainPersistence.Instance.code = "0";
        FileHandler.SaveToJSON<TaskData>(tasks, filename);
        SceneManager.LoadScene(0);
    }

    public void DeleteTask() {
        if (MainPersistence.Instance.code == "0") {
            Debug.Log("ERRO: Nenhum código selecionado");
        }
        else {
            Debug.Log("Remove");
            this.codigo = MainPersistence.Instance.code;
            foreach (TaskData task in tasks) {
                if (codigo == task.tcode) {
                    tasks.Remove(task);
                    MainPersistence.Instance.code = "0";
                    FileHandler.SaveToJSON<TaskData>(tasks, filename);
                    SceneManager.LoadScene(0);
                    return;
                }
            }
        }
    }

    public string GenerateCode() {
        return System.Guid.NewGuid().ToString();
    }

    public void SetDificulty(int d) {
        this.taskDificulty = d;
    }
}
