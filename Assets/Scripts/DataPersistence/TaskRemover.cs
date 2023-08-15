using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using TMPro;

public class TaskRemover : MonoBehaviour
{   
    public List<TaskData> tasks = new List<TaskData>();
    private string filename = "tarefas.json";

    public TMP_Text taskName;
    public GameObject taskObject, codeHolder;


    private void carregaLista() {
        tasks = FileHandler.ReadListFromJSON<TaskData>(filename);
    }

    public void completeTask() {
        carregaLista();

        int codigo = Convert.ToInt32(codeHolder.name);
        foreach (TaskData task in tasks) {
            
            if(codigo == task.tcode) {
                task.tstate = 0;
            }
        }

        taskObject.SetActive(false);
        FileHandler.SaveToJSON<TaskData>(tasks, filename);
        
    }
    
}
