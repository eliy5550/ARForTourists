using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent (typeof(ARTrackedImageManager))]
public class TrackedImages : MonoBehaviour
{

    [SerializeField] GameObject[] arObjectsToPlace;
    private ARTrackedImageManager m_TrackedImageManager;
    private Dictionary<string , GameObject> arObjects = new Dictionary<string, GameObject>();

    private void Awake()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        m_TrackedImageManager = GetComponent<ARTrackedImageManager>();
        foreach (GameObject arObject in arObjectsToPlace) {
            GameObject newObject = Instantiate(arObject, Vector3.zero, Quaternion.identity);
            newObject.name = arObject.name;
            arObjects.Add(arObject.name, newObject);
            newObject.SetActive(false);
        }
    }

    private void OnEnable()
    {
        m_TrackedImageManager.trackedImagesChanged += OnTrackedImageChanged;
    }

    private void OnDisable()
    {
        m_TrackedImageManager.trackedImagesChanged -= OnTrackedImageChanged;

    }

    void OnTrackedImageChanged(ARTrackedImagesChangedEventArgs args) {
        foreach (ARTrackedImage image in args.added) {
            UpdateImage(image);
        }

        foreach (ARTrackedImage image in args.updated)
        {
            if (image.trackingState == TrackingState.Tracking)
            {
                UpdateImage(image);
            }
            else {
                arObjects[image.referenceImage.name].SetActive(false);
            }
        }
        foreach (ARTrackedImage image in args.removed)
        {
            arObjects[image.referenceImage.name].SetActive(false);
        }
    }

    void UpdateImage(ARTrackedImage image) {
        AssignGameObject(image);
    }
    void AssignGameObject(ARTrackedImage image) {
        GameObject prefab = arObjects[image.referenceImage.name];
        prefab.transform.position = image.transform.position;
        prefab.transform.rotation = image.transform.rotation;
        prefab.SetActive(true);

        foreach (GameObject go in arObjects.Values) {
            if (go.name != image.referenceImage.name) {
                go.SetActive(false);
            }
        }
    }

}
