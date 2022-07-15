using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OpenCamSc : MonoBehaviour
{
    public void OpenCameraScene()
    {
        SceneManager.LoadScene("ARScene");
    }
}
