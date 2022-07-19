using System.Collections;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;

[Serializable]
public class ARLocation
{
    public string name;
    public float lon;
    public float lat;
    public GameObject arModel;
    public static string distances = "";
    public AudioClip clip;
    public string animationName;


    public ARLocation(float lo, float la, GameObject m)
    {
        lon = lo;
        lat = la;
        arModel = m;

    }
    public ARLocation()
    {
        lon = 0;
        lat = 0;
        arModel = null;

    }


    float  DegToRad(float deg)
    {
        float temp;
        temp = (deg * Mathf.PI ) / 180.0f;
        temp = Mathf.Tan(temp);
        return temp;
    }

    float  Distance_x(float lon_a, float lon_b, float lat_a, float lat_b)
    {
        float temp;
        float c;
        temp = (lat_b - lat_a);
        c = Mathf.Abs(temp * Mathf.Cos((lat_a + lat_b)) / 2);
        return c;
    }

    private  float Distance_y(float lat_a, float lat_b)
    {
        float c;
        c = (lat_b - lat_a);
        return c;
    }

    float  Final_distance(float x, float y)
    {
        float c;
        c = Mathf.Abs(Mathf.Sqrt(Mathf.Pow(x, 2f) + Mathf.Pow(y, 2f))) * 6371;
        return c;
    }

    //*******************************
    //This is the function to call to calculate the distance between two points

    public  float Calculate_Distance(float long_a, float lat_a, float long_b, float lat_b)
    {
        float a_long_r, a_lat_r, p_long_r, p_lat_r, dist_x, dist_y, total_dist;
        a_long_r = DegToRad(long_a);
        a_lat_r = DegToRad(lat_a);
        p_long_r = DegToRad(long_b);
        p_lat_r = DegToRad(lat_b);
        dist_x = Distance_x(a_long_r, p_long_r, a_lat_r, p_lat_r);
        dist_y = Distance_y(a_lat_r, p_lat_r);
        total_dist = Final_distance(dist_x, dist_y);
        //prints the distance on the console
        return total_dist;

    }

    public float getDistance(float long_a, float lat_a, float long_b, float lat_b)
    {
        return (float)Math.Sqrt((Math.Pow(long_a - long_b, 2) + Math.Pow(lat_a - lat_b, 2)));
        //return Calculate_Distance( long_a,  lat_a,  long_b,  lat_b);
    }

    public ARLocation closest(ARLocation[] locations, float mylon, float mylat)
    {
        ARLocation closest = locations[0];
        double shortest = getDistance(mylon, mylat, locations[0].lon, locations[0].lat);
        string temp = "";
        foreach (ARLocation loc in locations)
        {
            float distance = getDistance(mylon, mylat, loc.lon, loc.lat);
            temp += loc.arModel.name + ":" + distance + "\n";
            if (distance < shortest)
            {
                shortest = distance;
                closest = loc;
            }
        }
        distances = temp;
        return closest;
    }
}
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
            SetModelForDisplaying(closestAR.arModel);
            SetSoundForPlaying(closestAR.clip);
            SetAnimationNameForPlaying(closestAR.animationName);
            lookingForLocation = false;
        }


        void SetModelForDisplaying(GameObject go) {
            PlaceOnPlaneSC.placedPrefab = go;
            PlaceOnPlaneSC.closestLocationText.text = go.name;
            distancesText.text = ARLocation.distances;
        }

        void SetSoundForPlaying(AudioClip clip){
            PlaceOnPlaneSC.clipForThisLocation = clip;
        }
        void SetAnimationNameForPlaying(string name)
        {
            PlaceOnPlaneSC.animationName = name;
        }
    }

}
