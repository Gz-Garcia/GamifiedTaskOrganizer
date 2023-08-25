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
    public List<TaskData> tasks = new List<TaskData>();
    private string filename = "tarefas.json";
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
                if(task.tstate == 1) task.tstate = 0;
                else task.tstate = 1;
            }
        }

        taskObject.SetActive(false);
        FileHandler.SaveToJSON<TaskData>(tasks, filename);
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
