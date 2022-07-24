using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


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


    float DegToRad(float deg)
    {
        float temp;
        temp = (deg * Mathf.PI) / 180.0f;
        temp = Mathf.Tan(temp);
        return temp;
    }

    float Distance_x(float lon_a, float lon_b, float lat_a, float lat_b)
    {
        float temp;
        float c;
        temp = (lat_b - lat_a);
        c = Mathf.Abs(temp * Mathf.Cos((lat_a + lat_b)) / 2);
        return c;
    }

    private float Distance_y(float lat_a, float lat_b)
    {
        float c;
        c = (lat_b - lat_a);
        return c;
    }

    float Final_distance(float x, float y)
    {
        float c;
        c = Mathf.Abs(Mathf.Sqrt(Mathf.Pow(x, 2f) + Mathf.Pow(y, 2f))) * 6371;
        return c;
    }

    //*******************************
    //This is the function to call to calculate the distance between two points

    public float Calculate_Distance(float long_a, float lat_a, float long_b, float lat_b)
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