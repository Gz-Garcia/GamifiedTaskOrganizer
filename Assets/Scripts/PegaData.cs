using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;

public class PegaData : MonoBehaviour
{
    private string data;
    public TMP_Text texto;
    
    // Start is called before the first frame update
    void Start()
    {
        data = DateTime.Now.ToString("dd / MM / yyyy");
        texto.text = data;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
