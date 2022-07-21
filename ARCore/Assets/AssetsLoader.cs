using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class AssetsLoader : MonoBehaviour
{
    // Start is called before the first frame update
    
void Start()
    {
        GameObject.Find("txt1").GetComponent<Text>().text = Application.dataPath;

        var myLoadedAssetBundle = AssetBundle.LoadFromFile((Application.dataPath + "/AssetBundles/ab1"));
        if (myLoadedAssetBundle == null)
        {
            Debug.Log("Failed to load AssetBundle!");
            return;
        }

        var prefab = myLoadedAssetBundle.LoadAsset<GameObject>("A");
        Instantiate(prefab);

        myLoadedAssetBundle.Unload(false);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
