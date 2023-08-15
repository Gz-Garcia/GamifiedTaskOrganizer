using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HabitLoader : MonoBehaviour
{
    public GameObject habitPrefab, habitContainer;
    public List<HabitData> habits = new List<HabitData>();
    private string filename = "habitos.json";

    void Start()
    {
        habits = FileHandler.ReadListFromJSON<HabitData>(filename);
        LoadHabits();
    }

    void Update()
    {
        
    }

    public void LoadHabits() {
        foreach (HabitData habit in habits) {
            if(habit.hstate == 1) {
                GameObject nh = Instantiate(habitPrefab);
                nh.transform.SetParent(habitContainer.transform);

                TMP_Text nhName = nh.GetComponentInChildren<TMP_Text>();
                nhName.text = habit.hname;

                GameObject codeHolder = GameObject.Find("CodeHolder");
                codeHolder.name = habit.hcode.ToString();
            }

        }    
    }
}
