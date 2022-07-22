using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;
 
public class CreateAssetBundles
{

    [MenuItem("Assets/Build AssetBundles")]
    static void BuildAllAssetBundles()
    {
        //BuildPipeline.BuildAssetBundles("Assets/AssetBundles", BuildAssetBundleOptions.None, BuildTarget.StandaloneWindows64);
        BuildPipeline.BuildAssetBundles("Assets/AssetBundles",
            BuildAssetBundleOptions.CollectDependencies,
            BuildTarget.Android);

    }

}

public class AssertBundlesSC : MonoBehaviour
{
            

    void Start()
    {

        
    }

}
