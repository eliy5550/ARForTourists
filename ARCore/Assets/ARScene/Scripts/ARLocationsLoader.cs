using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.IO.Compression;
using System;


public class ARLocationsLoader : MonoBehaviour
{

    public ARLocation[] aRLocations;
    public int size;
    bool unzipped;
    void Start()
    {
        

        LoadFromResources();
    }
    private void LoadFromResources()
    {
        //LOAD ALL PREFABS
        GameObject[] allPrefabs = Resources.LoadAll<GameObject>("zip/prefabs");
        //LOAD ALL AUDIO
        AudioClip[] allAudio = Resources.LoadAll<AudioClip>("zip/audio");

        //LOADING STRINGS
        TextAsset df = Resources.Load<TextAsset>("zip/info");
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
            foreach (GameObject go in allPrefabs)
            {
                if (go.name == model)
                {
                    aRLocations[rowNum].arModel = go;
                    break;
                }
            }
            //SET SOUND
            for (int i = 0; i < allAudio.Length; i++)
            {
                if (allAudio[i].name.Trim() == sound.Trim())
                {
                    aRLocations[rowNum].clip = allAudio[i];
                    break;
                }
            }
        }

        Location location = FindObjectOfType<Location>();
        location.arLocations = aRLocations;
    }

    void Update()
    {

    }
}
