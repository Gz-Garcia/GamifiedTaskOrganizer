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
    [SerializeField] GameObject screenBlur;

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

        string modalTitle = "Missão adicionada";
        bool isEditing = false;

        if (MainPersistence.Instance.code != "0") {
            this.codigo = MainPersistence.Instance.code;
            isEditing = true;

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
            tasks.Add(new TaskData(taskCode, taskName, taskDescription, taskDificulty, taskDueDate, "", 1));
        }

        MainPersistence.Instance.code = "0";
        FileHandler.SaveToJSON<TaskData>(tasks, filename);

        screenBlur.SetActive(true);
        if (isEditing) modalTitle = "Missão alterada";
        ModalManager.Show(modalTitle, "Agora corra atraz de fazê-la!",
        new[] { new ModalButton() { Text = "Home", Callback = ReturnHome }, 
        new ModalButton() { Text = "Adicionar outra", Callback = AddOther}});
    }

    public void DeleteTask() {
        if (MainPersistence.Instance.code == "0") {
            Debug.Log("ERRO: Nenhum código selecionado");
        }
        else {
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

    public void ReturnHome() {
        screenBlur.SetActive(false);
        SceneManager.LoadScene(0);
    }

    public void AddOther() {
        screenBlur.SetActive(false);
        SceneManager.LoadScene(1);
    }

    public void ConfirmDeletion() {
        screenBlur.SetActive(true);
        ModalManager.Show("Confirmação", "Deseja realmente excluir esta missão?",
        new[] { new ModalButton() { Text = "Cancelar", Callback = CancelDeletion}, 
        new ModalButton() { Text = "Excluir", Callback = DeleteConfirmation}});
    }

    public void DeleteConfirmation() {
        ModalManager.Show("Missão Excluída", "Lembre-se de nunca desistir.",
        new[] { new ModalButton() { Text = "Ok", Callback = DeleteTask}});
    }

    public void CancelDeletion() {
        screenBlur.SetActive(false);
    }

}
