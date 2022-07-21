
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.UI;

public class Unzipper : MonoBehaviour
{
    public Text txt1 , txt2;
    public Text txt3 , txt4;
    string path;
    string resourcesPath;
    string desktoppath;
    // Start is called before the first frame update
    void Start()
    {
        string url = "https://github.com/eliy5550/DataScienceProject/archive/refs/heads/main.zip";
        path = Application.persistentDataPath;
        resourcesPath = Application.dataPath + "/Resources";
        desktoppath = "C:/Users/ALAN/Desktop/";
        txt2.text = path;
        txt3.text = resourcesPath;
        
        using (WebClient Client = new WebClient())
        {
            Client.DownloadFile(
                    // Param1 = Link of file
                    new System.Uri(url),
                    // Param2 = Path to save
                    resourcesPath + "/ds.zip"
                );
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (File.Exists(desktoppath + "/zip/prefabs/A.prefab"))
        {
            txt4.text = "yes";
        }
        else
        {
            txt4.text = "no";
        }
    }
}
