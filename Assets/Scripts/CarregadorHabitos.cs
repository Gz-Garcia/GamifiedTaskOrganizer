using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using System.IO;
using System;
using TMPro;


public class CarregadorHabitos : MonoBehaviour
{
    
    public GameObject taskPrefab, taskContainer;

    void Start() {
        getHabbits();
    }

    void Update() {
        
    }

    private void getHabbits() {
        string path = Application.persistentDataPath + "/habitos.txt";
        StreamReader reader = new StreamReader(path);

        string tasksRaw = reader.ReadToEnd();
        string[] tasks = tasksRaw.Split("*");

        reader.Close();

        foreach (string s in tasks) {
            if(s.Length > 0) {
                string[] fields = s.Split("/");

                if(fields[0].Equals("c:1")) {

                    GameObject nt = Instantiate(taskPrefab);
                    nt.transform.SetParent(taskContainer.transform);

                    TMP_Text ntName = nt.GetComponentInChildren<TMP_Text>();
                    ntName.text = fields[1].Remove(0,2);

                    Image[] icons = nt.GetComponentsInChildren<Image>(true);
                    //foreach(Image i in icons) Debug.Log(i);
                }

                
            }
        }    

    }
}
