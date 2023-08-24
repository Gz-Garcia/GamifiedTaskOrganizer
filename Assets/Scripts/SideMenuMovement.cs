using System.Threading;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SideMenuMovement : MonoBehaviour
{
    
    public GameObject originalPos, activePos;
    public GameObject menuPanel;

    private bool moveMenuIn, moveMenuBack;
    public float slideSpeed;
    private float tempMenuPos;

    void Start()
    {
        menuPanel.transform.position = originalPos.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if(moveMenuIn){
            menuPanel.transform.position = UnityEngine.Vector3.Lerp(menuPanel.transform.position, 
            activePos.transform.position, slideSpeed * Time.deltaTime);

            if(menuPanel.transform.localPosition.x == tempMenuPos) {
                moveMenuIn = false;
                menuPanel.transform.position = activePos.transform.position;
                tempMenuPos = -999999999.99f;
            }
            if(moveMenuIn) tempMenuPos = menuPanel.transform.position.x;
        }
        if(moveMenuBack){
            menuPanel.transform.position = UnityEngine.Vector3.Lerp(menuPanel.transform.position,
                        originalPos.transform.position, slideSpeed * Time.deltaTime);

            if (menuPanel.transform.localPosition.x == tempMenuPos)
            {
                moveMenuIn = false;
                menuPanel.transform.position = originalPos.transform.position;
                tempMenuPos = -999999999.99f;
            }
            if (moveMenuBack) tempMenuPos = menuPanel.transform.position.x;
        }
    }

    public void MoveMenuIn (){
        moveMenuBack = false;
        moveMenuIn = true;
    }

    public void MoveMenuBack (){
        moveMenuIn = false;
        moveMenuBack = true;
    }
}
