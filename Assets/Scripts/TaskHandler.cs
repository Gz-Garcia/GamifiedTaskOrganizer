using System.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using TMPro;

public class TaskHandler : MonoBehaviour
{
    private string filename = "tarefas.json";
    private int completedTaskIndex;
    public List<TaskData> tasks = new List<TaskData>(); 
    public TMP_Text taskName;
    public GameObject taskObject, codeHolder;
    public int sceneID;


    private void carregaLista() {
        tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
    }

    public void completeTaskSwitch() {
        carregaLista();

        string codigo = codeHolder.name;
        foreach (TaskData task in tasks) { 
            if(codigo == task.tcode) {
                int reward = CalcReward(task.tdificulty, task.tduedate);
                if(task.tstate == 1) {
                    task.tstate = 0;
                    MainPersistence.Instance.CompleteTask(reward);
                }
                else {
                    task.tstate = 1;
                    MainPersistence.Instance.UncompleteTask(reward);
                }
            }
        }

        taskObject.SetActive(false);
        FileHandler.SaveToJSON<TaskData>(tasks, filename);
    }

    public int CalcReward(int dificulty, string dueDate) {
        
        var dataEntrega = DateTime.Parse(dueDate);
        var dif = dataEntrega - DateTime.Now;

        int diasAdiantado = Convert.ToInt32(dif.Days);

        return 5* (dificulty + diasAdiantado);
    }

    public void LaunchTaskScreen() {
        string codigo = codeHolder.name;
        MainPersistence.Instance.code = codigo;
        SceneManager.LoadScene(sceneID);
    }

    public void LaunchEditTask() {
        /*string codigo = codeHolder.name;
        MainPersistence.Instance.code = codigo;*/
        SceneManager.LoadScene(sceneID);
    }
}
