using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class AdicionarHabito : MonoBehaviour
{
    private string nome, descricao;
    private int dificuldade;

    public GameObject aviso;

    public void ReadName(string s) {
        nome = s;
    }

    public void ReadDesc(string s) {
        descricao = s;
    }

    public void Salvar() {

        if(nome.Contains('*') || nome.Contains('/') || nome.Contains(':') || descricao.Contains('*') || descricao.Contains('/') || descricao.Contains(':')) {
            aviso.SetActive(true);
            return;
        }
        aviso.SetActive(false);

        string str = "n:" + nome + "/d:" + descricao;

        string path = Application.persistentDataPath + "/habitos.txt";
        StreamWriter writer = new StreamWriter(path, true);

        writer.WriteLine("*c:1/" + str);
        writer.Close();
    }


}
