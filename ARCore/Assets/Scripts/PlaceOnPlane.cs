using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Collections;
using System;

[RequireComponent(typeof(ARRaycastManager))]
public class PlaceOnPlane : MonoBehaviour
{

    //UI:
    GameObject prompt;
    GameObject spinner;
    public GameObject resetButton , lockButton , explainButton , placeButton , redCircle;
    public Text state , closestLocationText;
    public string name = "?";

    //VARIABLES FOR AR:
    public object detectorParameters { get; private set; }
    public GameObject spawnedRedObject { get; private set; }
    public GameObject spawnedObject { get; private set; }
    [SerializeField]
    [Tooltip("Instantiates this prefab on a plane at the touch location.")]
    GameObject m_PlacedPrefab;
    Camera cam;
    ARPointCloud arPointCloud;
    ARPointCloudManager arPointCloudManager;
    public GameObject placedPrefab{ get { return m_PlacedPrefab; } set { m_PlacedPrefab = value; }}
    bool clickedPlace;
    UnityEvent placementUpdate;

    //Data For Displaying:
    Animator animator;
    public AudioClip clipForThisLocation;
    public string animationName = "arm_npc_1|A";
    public bool hasLocation;

    //RED DOT DETECTION:
    Vector2 redPos = new Vector2(0,0);
    
    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();

        if (placementUpdate == null)
            placementUpdate = new UnityEvent();

        cam = Camera.main;
        arPointCloud = gameObject.GetComponent<ARPointCloud>();
        arPointCloudManager = gameObject.GetComponent<ARPointCloudManager>();

        SetUI();

        hasLocation = false;
        //placementUpdate.AddListener(DiableVisual);
    }

    //EVERY FRAME PLACE AN X ON THE GROUND
    private void Update()
    {
        if (!clickedPlace && hasLocation) {
            PlaceXOnGround();
        }
        
    }

    void FixedUpdate()
    {
        if (RedDotDetector.FindRedCircle(cam.activeTexture ,ref redPos))
        {
            //RaycastInstantiation(pos);
            GameObject.Find("reddotpos").GetComponent<Text>().text = "Found: " + redPos.ToString();
        }
        else { 
            
            GameObject.Find("reddotpos").GetComponent<Text>().text = "no red...";
        }

    }

    private void RaycastInstantiation(Vector2 screenpos)
    {
        if (!hasLocation) return;

        if (m_RaycastManager.Raycast(screenpos, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = s_Hits[0].pose;
            if (spawnedObject == null)
            {
                clickedPlace = true;
                spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
                //spawnedObject.transform.LookAt(cam.transform.position);
                //spawnedObject.transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);
                RemovePlaneIndicators();
                explainButton.SetActive(true);
            }
            else
            {
                //repositioning of the object
                spawnedObject.transform.position = hitPose.position;
                spawnedObject.transform.LookAt(cam.transform.position);
                spawnedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);
                RemovePlaneIndicators();
            }

            Destroy(placeButton);
            Destroy(spawnedRedObject);
            placementUpdate.Invoke();
        }
    }

    void PlaceXOnGround() {
        Vector2 screenPos = new Vector2(Screen.width / 2, Screen.height / 2);
        if (m_RaycastManager.Raycast(screenPos, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = s_Hits[0].pose;
            if (spawnedRedObject == null)
            {
                spawnedRedObject = Instantiate(redCircle, hitPose.position, hitPose.rotation);
                spawnedRedObject.transform.LookAt(cam.transform.position);
                spawnedRedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, hitPose.rotation.z);
                state.text = "PLACE THE X DIRECTLY ON THE RED CIRCLE ON THE GROUND.\nTHEN TAP 'PLACE'!";
                if (spinner) { 
                    Destroy(spinner);
                }
                //RemovePlaneIndicators();
            }
            else
            {
                //repositioning of the object 
                spawnedRedObject.transform.position = hitPose.position;
                spawnedRedObject.transform.LookAt(cam.transform.position);
                spawnedRedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, hitPose.rotation.z);
                //RemovePlaneIndicators();
            }
            placementUpdate.Invoke();
        }
    }
    //WHEN I CLICK THE PLACE BUTTON DO THIS:
    public void PlaceARObjectInTheMiddle()
    {
        if (!hasLocation) return; 

        Vector2 screenPos = new Vector2(Screen.width / 2, Screen.height / 2);

        if (m_RaycastManager.Raycast(screenPos, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = s_Hits[0].pose;
            if (spawnedObject == null)
            {
                Debug.Log("Spawning object!");
                clickedPlace = true;
                spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
                spawnedObject.transform.LookAt(cam.transform.position);
                spawnedObject.transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.x, 0);
                RemovePlaneIndicators();
                explainButton.SetActive(true);
            }
            //else
            //{
            //    //repositioning of the object
            //    spawnedObject.transform.position = hitPose.position;
            //    spawnedObject.transform.LookAt(cam.transform.position);
            //    spawnedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);
            //    RemovePlaneIndicators();
            //}

            Destroy(placeButton);
            Destroy(spawnedRedObject);
            placementUpdate.Invoke();
        }
    }


    private void RemovePlaneIndicators()
    {
    
        arPointCloud.enabled = !arPointCloud.enabled;
        arPointCloudManager.enabled = !arPointCloudManager.enabled;
    }

    public void DiableVisual()
    {
        //visualObject.SetActive(false);
    }

    public void ResetScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }


    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    ARRaycastManager m_RaycastManager;
    public void ExplainButton() {
        explainButton.SetActive(false);
        //play sound
        AudioManager.Instance.PlaySound(clipForThisLocation);
        PlayAnimation();
    }

    void PlayAnimation() {
        animator = GameObject.FindGameObjectWithTag("ARModel").GetComponent<Animator>();
        animator.Play(animationName);
        RemoveExplainButton(clipForThisLocation.length);
    }

    void RemoveExplainButton(float time) {
        StartCoroutine(RemoveExplainButtonForTime(time));
    }

    IEnumerator RemoveExplainButtonForTime(float time) {
        explainButton.SetActive(false);
        yield return new WaitForSeconds(time);
        explainButton.SetActive(true);
    }

    public void Yes()
    {
        Destroy(prompt);
    }
    private void SetUI()
    {
        spinner = GameObject.Find("Spinner");
        prompt = GameObject.Find("Prompt");
        closestLocationText.text = "?";
        clickedPlace = false;
        explainButton.SetActive(false);
    }
}