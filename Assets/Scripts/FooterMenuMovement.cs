using System.Threading;
using System.Numerics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FooterMenuMovement : MonoBehaviour
{
    
    public GameObject originalPos, activePos, imageIn, imageOut;
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

            if(menuPanel.transform.localPosition.y == tempMenuPos) {
                moveMenuIn = false;
                menuPanel.transform.position = activePos.transform.position;
                tempMenuPos = -999999999.99f;
            }
            if(moveMenuIn) tempMenuPos = menuPanel.transform.position.y;
        }
        if(moveMenuBack){
            menuPanel.transform.position = UnityEngine.Vector3.Lerp(menuPanel.transform.position,
                        originalPos.transform.position, slideSpeed * Time.deltaTime);

            if (menuPanel.transform.localPosition.y == tempMenuPos)
            {
                moveMenuIn = false;
                menuPanel.transform.position = originalPos.transform.position;
                tempMenuPos = -999999999.99f;
            }
            if (moveMenuBack) tempMenuPos = menuPanel.transform.position.y;
        }
    }

    private void MoveMenuIn (){
        moveMenuBack = false;
        moveMenuIn = true;
        imageIn.SetActive(false);
        imageOut.SetActive(true);
    }

    private void MoveMenuBack (){
        moveMenuIn = false;
        moveMenuBack = true;
        imageOut.SetActive(false);
        imageIn.SetActive(true);
    }

    public void SwitchMenu() {
        if(imageIn.activeSelf){
            MoveMenuIn();
        } else MoveMenuBack();
    }
}
