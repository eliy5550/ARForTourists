using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Net;
using System.IO;

public class DownloadSC : MonoBehaviour
{
    bool once;
    void Start()
    {
        once = false;
    }


    void Update()
    {
        if (!once) {
            DownloadBundle(Application.persistentDataPath + "/ab" , "https://github.com/eliy5550/eliy5550.github.io/raw/main/Bundle/ab2");
            once = true;
        }
    }

    public static void DownloadBundle(string path , string url) {

        using (WebClient webClient = new WebClient())
        {
            webClient.DownloadFile(url, path); ;
        }
        if (File.Exists(Application.persistentDataPath + "/ab"))
        {
            GameObject.Find("txt").GetComponent<Text>().text = "DONE!";
            SceneManager.LoadScene("Map");
        }
        else {
            GameObject.Find("txt").GetComponent<Text>().text = "Failed... Internet off?";
        }
    }

}
