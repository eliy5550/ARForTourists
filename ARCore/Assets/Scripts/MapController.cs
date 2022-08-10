using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapController : MonoBehaviour
{
    GameObject user;
    public float lon, lat;
    public Vector2 bottomRight, topLeft , bottomLeft, topRight;
    RectTransform userRectTrans;
    void Start()
    {
        user = GameObject.Find("User");
        if (user) {
            user.SetActive(false);
            userRectTrans = user.GetComponent<RectTransform>(); 
        }
        
    }

    private void Update()
    {
        //PlaceUserOnMap();
    }

    public void updateUserLocation(float longi , float lati)
    {
        user.SetActive(true);
        lon = longi;
        lat = lati;
        PlaceUserOnMap();
    }

    void PlaceUserOnMap() {
        Vector3 pos = userRectTrans.anchoredPosition;

        float width = topRight.x - topLeft.x;
        float distanceFronLeft = lon - topLeft.x;
        float xPos = (distanceFronLeft / width) * 453;


        float templat = lat;
        float height = topLeft.y - bottomLeft.y;
        float distanceFromBottom = templat - bottomRight.y;
        float yPos = (distanceFromBottom / height) * 555;

        print(height);
        print(distanceFromBottom);
        print(yPos);


        pos.x = xPos;
        pos.y = yPos;
        userRectTrans.anchoredPosition = pos;
    }

}
