using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapSC : MonoBehaviour
{

    public Text locationText;
    public float lon = 0, lat = 0;
    string url;
    private void Start()
    {
        StartCoroutine(Location());
        url = "https://www.google.com/maps/d/u/0/edit?mid=1IpW0S3A0C-L1O8KZqR3UVyOfc2Fv29A&ll=" +
            "32.014379989221794" +
            "%2C" +
            "34.77346" +
            "&" +
            "z=18";
    }

    IEnumerator Location()
    {
        // Check if the user has location service enabled.
        if (!Input.location.isEnabledByUser)
            yield break;

        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            print("Timed out");
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
            lon = Input.location.lastData.longitude;
            lat = Input.location.lastData.latitude;
            locationText.text = 
                "LON: " +lon+
                "\nLAT: "+lat;

            FindObjectOfType<MapController>().updateUserLocation((float)lon, (float)lat);
        }

        // Stops the location service if there is no need to query location updates continuously.
        Input.location.Stop();
    }
}
