using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class OpeningScene : MonoBehaviour
{
    /// <summary>
    /// Try to get location every 7 seconds
    /// 
    /// </summary>

    Text locationStateUI;
    float timer ,timerReset;
    bool lookingForLocation;
    [SerializeField]GameObject start;


    void Start()
    {
        start.SetActive(false) ;

        lookingForLocation = false;

        timer = 0;
        timerReset = 7;

        GameObject temp = GameObject.Find("LocationState");

        if (temp)
        {
            locationStateUI = temp.GetComponent<Text>();
        }
        //locationStateUI.text = "ho";
        StartCoroutine(LookForGPS());
    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;
        if (timer < 0 && !lookingForLocation) {
            lookingForLocation = true;
            timer = timerReset;
            StartCoroutine(LookForGPS());
        }

    }

    IEnumerator LookForGPS()
    {
        print("looking");
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            locationStateUI.text = "Location Services are not permetted!";
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
            lookingForLocation = false;

            yield break;
        }

        // Check if the user has location service enabled.
        if (!Input.location.isEnabledByUser)
        {
            print("Location off");
            locationStateUI.text = "Location Services are off!";
            lookingForLocation = false;
            yield break; 
        }

        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int maxWait = 7;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            print("Timed out");
            locationStateUI.text = "Location search timed out!";
            lookingForLocation = false;
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            locationStateUI.text = "Unable to determine device location!";
            lookingForLocation = false;
            yield break;
        }
        else
        {
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
            locationStateUI.text = "Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp;
            locationStateUI.text = "Location Found!";

            lookingForLocation = false;
            //SceneManager.LoadScene("Map");
            start.SetActive(true);
        }

        // Stops the location service if there is no need to query location updates continuously.
        //Input.location.Stop();
    }

    public void ResetButton() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void StartButton()
    {
        SceneManager.LoadScene("Map");
    }
}
