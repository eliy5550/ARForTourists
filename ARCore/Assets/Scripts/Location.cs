using System.Collections;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

public class Location : MonoBehaviour
{
    //LocationService location;
    //string locationData;
    public Text locationtext;
    public float timer , getLocationTimer = 1;
    public double lon = 0, lat = 0;
    bool lookingForLocation;
    public ARLocation[] arLocations;
    public GameObject closestARModel;
    public PlaceOnPlane PlaceOnPlaneSC;
    public Text distancesText;
    void Start()
    {
        lon = 0;
        lat = 0;
        timer = getLocationTimer;
        lookingForLocation = true;

        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }

        locationtext = GameObject.Find("LocationsText").GetComponent<Text>();

        StartCoroutine(GPSLoc());

    }

    private void FixedUpdate()
    {
        timer -= Time.deltaTime;
        if (timer <= 0) {
            timer = getLocationTimer;
            if (lookingForLocation == false) { 
                StartCoroutine(GPSLoc());
                lookingForLocation = true;
            }
        }
    }


    IEnumerator GPSLoc() {
        if (!Input.location.isEnabledByUser)
        {
            locationtext.text = "Turn on location services!";
            yield break;
        }
        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int maxWait = 3;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            print("Timed out");
            locationtext.text = "Timed out";
            lookingForLocation = false;
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            locationtext.text = "Unable to determine device location";
            lookingForLocation = false;
            yield break;
        }
        else
        {
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            lat = Input.location.lastData.latitude;
            lon = Input.location.lastData.longitude;

            //print("LAT: " + lat + "\nLON: " + lon);
            locationtext.text = "LAT: " + lat + "\nLON: " + lon;
            ARLocation arloc = new ARLocation();
            ARLocation closestAR = arloc.closest(arLocations, (float)lon, (float)lat);

            PlaceOnPlaneSC.hasLocation = true;
            SetModelForDisplaying(closestAR.arModel);
            SetName(closestAR.name);
            SetSoundForPlaying(closestAR.clip);
            SetAnimationNameForPlaying(closestAR.animationName);

            lookingForLocation = false;
        }


        void SetModelForDisplaying(GameObject go) {
            PlaceOnPlaneSC.placedPrefab = go;
            distancesText.text = ARLocation.distances;
        }

        void SetSoundForPlaying(AudioClip clip){
            PlaceOnPlaneSC.clipForThisLocation = clip;
        }
        void SetAnimationNameForPlaying(string name)
        {
            PlaceOnPlaneSC.animationName = name;
        }

        void SetName(string name){
            PlaceOnPlaneSC.closestLocationText.text = name;
        }
    }

}
