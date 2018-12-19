using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class ManageScrollContent : MonoBehaviour
{

    private static string logs = "";
    private static string oldLogs = "";
    private ScrollRect scrollRect;
    private Text textLog;

    // Use this for initialization
    void Start()
    {
        scrollRect = gameObject.GetComponent<ScrollRect>();
        textLog = scrollRect.content.GetComponentInChildren<Text>();
    }

    void Update()
    {
        if (scrollRect != null && logs != oldLogs)
        {
            textLog.text = logs;
            StartCoroutine(DelayMethod(5, () =>
            {
                scrollRect.verticalNormalizedPosition = 0;
            }));
            oldLogs = logs;
        }
    }

    public static void Logging(string log)
    {
        logs += DateTime.Now.ToString("T") + " " + log + "\n";
        Debug.Log(log);
    }

    private IEnumerator DelayMethod(int delayFrameCount, Action action)
    {
        for (var i = 0; i < delayFrameCount; i++)
        {
            yield return null;
        }
        action();
    }
}
