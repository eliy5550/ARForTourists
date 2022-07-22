using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.IO.Compression;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Networking;

public class ARLocationsLoader : MonoBehaviour
{

    public ARLocation[] aRLocations;
    public int size;
    bool unzipped;
    string asset_bundle_path;
    AssetBundle ab1;
    //public Text txt1;
    void Start()
    {
        //StartCoroutine(GetAssetBundle());
        LoadFromAssetBundle();
    }

    IEnumerator GetAssetBundle()
    {
        string url = "https://github.com/eliy5550/eliy5550.github.io/raw/main/Bundle/ab2";

        using (UnityWebRequest uwr = UnityWebRequestAssetBundle.GetAssetBundle(url))
        {
            yield return uwr.SendWebRequest();
            //StopWaiting();
            ab1 = DownloadHandlerAssetBundle.GetContent(uwr);
            //print(ab1.LoadAllAssets<GameObject>()[1].name);
            //FindObjectOfType<Location>().closestARModel = ab1.LoadAllAssets<GameObject>()[0];
            LoadFromAssetBundle();
        }
    }

    private void LoadFromAssetBundle()
    {
        //LOAD ALL PREFABS
<<<<<<< HEAD
<<<<<<< HEAD
        GameObject[] allPrefabs = ab.LoadAllAssets<GameObject>();
=======
        GameObject[] allPrefabs = Resources.LoadAll<GameObject>("zip/prefabs");
>>>>>>> parent of 9f9ca6f (not working)
        //LOAD ALL AUDIO
        AudioClip[] allAudio = Resources.LoadAll<AudioClip>("zip/audio");

        //LOADING STRINGS
<<<<<<< HEAD
        TextAsset df = ab.LoadAsset<TextAsset>("info.csv");
=======
        //GameObject[] allPrefabs = Resources.LoadAll<GameObject>("zip/prefabs");
        //LOAD ALL AUDIO
        //AudioClip[] allAudio = Resources.LoadAll<AudioClip>("zip/audio");
        //LOADING STRINGS
        //TextAsset df = Resources.Load<TextAsset>("zip/info");

        ab1 = AssetBundle.LoadFromFile(Application.persistentDataPath + "/ab2");

        TextAsset df = ab1.LoadAsset("info.csv") as TextAsset;


>>>>>>> parent of 594b093 (Works - NO DOWNLOADS!)
=======
        TextAsset df = Resources.Load<TextAsset>("zip/info");
>>>>>>> parent of 9f9ca6f (not working)
        string dftext = df.text;
        string[] rows = dftext.Split('\n');

        size = rows.Length - 2;
        aRLocations = new ARLocation[size];

        for (int i = 0; i < size; i++)
        {
            aRLocations[i] = new ARLocation();
        }

        for (int x = 1; x < rows.Length - 1; x++)
        {
            string[] cells = rows[x].Split(",");
            string model = "";
            string sound = "";
            int rowNum = x - 1;
            for (int j = 0; j < cells.Length; j++)
            {
                string cellInfo = cells[j];
                switch (j)
                {
                    case 0:
                        aRLocations[rowNum].name = cellInfo;
                        break;
                    case 1:
                        aRLocations[rowNum].lon = float.Parse(cellInfo);
                        break;
                    case 2:
                        aRLocations[rowNum].lat = float.Parse(cellInfo);
                        break;
                    case 3:
                        model = cellInfo;
                        break;
                    case 4:
                        aRLocations[rowNum].animationName = cellInfo;
                        break;
                    case 5:
                        char[] charsToTrim = { '*', ' ', '\'' };
                        sound = cellInfo.Trim(charsToTrim);
                        break;
                }
            }



            //SET GAMEOBJECT
            aRLocations[rowNum].arModel = ab1.LoadAsset(model+".prefab") as GameObject;

            //foreach (GameObject go in allPrefabs)
            //{
            //    if (go.name == model)
            //    {
            //        aRLocations[rowNum].arModel = go;
            //        break;
            //    }
            //}


            //SET SOUND
            AudioClip[] audioClips = ab1.LoadAllAssets<AudioClip>();

            for (int i = 0; i < audioClips.Length; i++)
            {
                if (audioClips[i].name.Trim() == sound.Trim())
                {
                    aRLocations[rowNum].clip = audioClips[i];
                    break;
                }
            }
        }
        //Instantiate(ab1.LoadAsset<GameObject>("A") , new Vector3(0.5f , 0 , 4) , Quaternion.identity);
        Location location = FindObjectOfType<Location>();
        location.arLocations = aRLocations;
    }

    void StopWaiting() {
        Destroy(GameObject.Find("Wait"));
    }

    private void Update()
    {
        //FindObjectOfType<Location>().arLocations = aRLocations;
    }

}
