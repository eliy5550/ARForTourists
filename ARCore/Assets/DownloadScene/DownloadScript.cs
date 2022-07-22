
using System.Collections;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DownloadScript: MonoBehaviour
{
    public Text txt1 ;
    string folderpath;

    bool haveit;
    AssetBundle ab1;


    private void Start()
    {
        using (WebClient Client = new WebClient())
        {
            Client.DownloadFile(
                    // Param1 = Link of file
                    new System.Uri("https://github.com/eliy5550/eliy5550.github.io/raw/main/Bundle/ab2"),
                    // Param2 = Path to save
                    Application.persistentDataPath + "/ab2"
                );
        }

        if (File.Exists( Application.persistentDataPath + "/ab2" )) {
            txt1.text = "downloaded!";
        }

        var myLoadedAssetBundle = AssetBundle.LoadFromFile(Path.Combine(Application.persistentDataPath, "ab2"));
        if (myLoadedAssetBundle == null)
        {
            txt1.text = "Failed to load AssetBundle!";
            return;
        }
        else {

            txt1.text = "Succesfully got AssetBundle!";
            SceneManager.LoadScene("Map");
        }
        //var prefab = myLoadedAssetBundle.LoadAllAssets<GameObject>()[0];
        //Instantiate(prefab);
    }



    // Start is called before the first frame update
    //void Start()
    //{
    //    haveit = false;
    //    StartCoroutine(GetAssetBundle());
    //}
    //IEnumerator GetAssetBundle()
    //{
    //    string url = "https://github.com/eliy5550/eliy5550.github.io/raw/main/Bundle/ab2";

    //    using (UnityWebRequest uwr = UnityWebRequestAssetBundle.GetAssetBundle(url))
    //    {
    //        yield return uwr.SendWebRequest();
    //        //StopWaiting();
    //        ab1 = DownloadHandlerAssetBundle.GetContent(uwr);
    //        //print(ab1.LoadAllAssets<GameObject>()[1].name);
    //        //FindObjectOfType<Location>().closestARModel = ab1.LoadAllAssets<GameObject>()[0];
    //        haveit = true;
    //    }
    //}
    //// Update is called once per frame
    //void Update()
    //{
    //    if (haveit) {
    //        //txt1.text = ab1.LoadAllAssets<GameObject>()[0].name;
    //        Instantiate(ab1.LoadAllAssets<GameObject>()[0]);
    //        haveit = false;
    //    }
    //}
}
