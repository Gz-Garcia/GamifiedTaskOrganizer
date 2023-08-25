using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainPersistence : MonoBehaviour
{
    public static MainPersistence Instance;
    public string code = "-1";

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
    }
}
