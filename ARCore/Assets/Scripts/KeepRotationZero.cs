using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeepRotationZero : MonoBehaviour
{
    RectTransform thisRectTrans;

    private void Start()
    {
        //thisRectTrans = gameObject.GetComponent<RectTransform>();
    }
    // Update is called once per frame
    void Update()
    {
        //thisRectTrans.SetPositionAndRotation(thisRectTrans.localPosition , Quaternion.Euler(0,0,0));
    }
}
