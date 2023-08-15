using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HabitDataHandler : MonoBehaviour
{
    [SerializeField] TMP_InputField nameInput;
    [SerializeField] TMP_InputField descriptionInput;
    private string filename = "habitos.json";

    List<HabitData> habits = new List<HabitData>();

    private void Start() {
        habits = FileHandler.ReadListFromJSON<HabitData>(filename);
    }

    public void AddHabit() {
        habits.Add(new HabitData(habits.Count ,nameInput.text, descriptionInput.text, 1));
        nameInput.text = "";
        descriptionInput.text = "";

        FileHandler.SaveToJSON<HabitData>(habits, filename);
    }
}
