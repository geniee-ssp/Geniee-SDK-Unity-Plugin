using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class ManageScrollContent : MonoBehaviour
{

    private static string logs = "";
    private static string oldLogs = "";
    private static ScrollRect scrollRect;
    private static Text textLog;

    // Start is called before the first frame update
    void Start()
    {
        scrollRect = null;
        textLog = null;
    }

    // Update is called once per frame
    void Update()
    {
        if (scrollRect == null || textLog == null)
        {
            return;
        }

        if (logs != oldLogs)
        {
            textLog.text = logs;
            StartCoroutine(DelayMethod(5, () =>
            {
                scrollRect.verticalNormalizedPosition = 0;
            }));
            oldLogs = logs;
        }
    }

    public static void InitManageScrollContent(ScrollRect sr)
    {
        scrollRect = sr;
        textLog = scrollRect.content.GetComponentInChildren<Text>();
        logs = "";
        oldLogs = "";
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
