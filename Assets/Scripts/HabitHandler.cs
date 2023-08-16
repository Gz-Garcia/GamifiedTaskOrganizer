using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
using System.IO;
using System;
using TMPro;

public class HabitHandler : MonoBehaviour
{   
    public List<HabitData> habits = new List<HabitData>();
    private string filename = "habitos.json";

    public TMP_Text habitName;
    public GameObject habitObject, codeHolder;

    private bool completed;
    public Button button;
    public Sprite notDone, done;

    void Start() {
        completed = false;
    }

    private void carregaLista() {
        habits = FileHandler.ReadListFromJSON<HabitData>(filename);
    }

    public void completeHabit() {
        carregaLista();

        int codigo = Convert.ToInt32(codeHolder.name);
        foreach (HabitData habit in habits) {
            
            if(codigo == habit.hcode) {
                habit.hstate = 0;
            }
        }

        habitObject.SetActive(false);
        FileHandler.SaveToJSON<HabitData>(habits, filename);
        
    }

    public void CheckHabit() {
        completed = !completed;

        if (completed)
        {
            button.GetComponent<Image>().sprite = done;
        }
        else
        {
            button.GetComponent<Image>().sprite = notDone;
        }
    }

}
