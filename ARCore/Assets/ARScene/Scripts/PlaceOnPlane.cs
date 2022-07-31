using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using System.Collections;

/// <summary>
/// Listens for touch events and performs an AR raycast from the screen touch point.
/// AR raycasts will only hit detected trackables like feature points and planes.
///
/// If a raycast hits a trackable, the <see cref="placedPrefab"/> is instantiated
/// and moved to the hit position.
/// </summary>
[RequireComponent(typeof(ARRaycastManager))]
public class PlaceOnPlane : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Instantiates this prefab on a plane at the touch location.")]
    GameObject m_PlacedPrefab;

    UnityEvent placementUpdate;

    bool isModelLocked = false;

    public GameObject resetButton , lockButton , explainButton;

    Camera cam;
    Renderer renderer;
    WebCamTexture _webCamTexture;
    ARPointCloud arPointCloud;
    ARPointCloudManager arPointCloudManager;

    public Text closestLocationText;

    public GameObject placeButton;
    public GameObject placedPrefab
    {
        get { return m_PlacedPrefab; }
        set { m_PlacedPrefab = value; }
    }

    public GameObject redCircle;
    public Text state;
    bool clickedPlace;
    bool playingAnimation;
    GameObject spinner;
    GameObject prompt;

    /// <summary>
    /// The object instantiated as a result of a successful raycast intersection with a plane.
    /// </summary>
    public GameObject spawnedObject { get; private set; }
    public GameObject spawnedRedObject { get; private set; }
    public object detectorParameters { get; private set; }

    public AudioClip clipForThisLocation;
    public string animationName = "arm_npc_1|A";
    public string name = "?";
    Animator animator;


    private void Start()
    {
        cam = Camera.main;
        arPointCloud = gameObject.GetComponent<ARPointCloud>();
        arPointCloudManager = gameObject.GetComponent<ARPointCloudManager>();
        spinner = GameObject.Find("Spinner");
        prompt = GameObject.Find("Prompt");
        closestLocationText.text = "?";
        clickedPlace = false;
        explainButton.SetActive(false);
        playingAnimation = false;
    }

    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();

        if (placementUpdate == null)
            placementUpdate = new UnityEvent();

        //placementUpdate.AddListener(DiableVisual);
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }

        touchPosition = default;
        return false;
    }

    void Update()
    {
        FindMarkerPoint();
        if (!clickedPlace) { 
            PlaceRedCircleOnGround();
        }

    }
    

    void PlaceRedCircleOnGround() {
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


    private void RemovePlaneIndicators()
    {
        arPointCloud.enabled = !arPointCloud.enabled;
        arPointCloudManager.enabled = !arPointCloudManager.enabled;
    }

    public void DiableVisual()
    {
        //visualObject.SetActive(false);
    }

    public void LockModel() {
        isModelLocked = true;
    }

    public void ResetScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }


    public void FindMarkerPoint() {

    }

    public void PlaceARObjectInTheMiddle() {

        Vector2 screenPos = new Vector2(Screen.width / 2, Screen.height / 2);

        if (m_RaycastManager.Raycast(screenPos, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            // Raycast hits are sorted by distance, so the first one
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
}