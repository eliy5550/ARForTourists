using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testcat : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.A)) {
            GetComponent<Animator>().Play("arm_npc_1|A");
        }
        if (Input.GetKeyDown(KeyCode.B))
        {
            GetComponent<Animator>().Play("arm_npc_1|B");
        }
        if (Input.GetKeyDown(KeyCode.C))
        {
            GetComponent<Animator>().Play("arm_npc_1|C");
        }
    }
}
