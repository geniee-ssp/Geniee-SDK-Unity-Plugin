using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneNavigator : MonoBehaviour
{
    private static string previousScene = "";

    // Call this method when loading a new scene to update the previous scene
    public static void SetPreviousScene(string currentScene)
    {
        previousScene = currentScene;
    }

    // Call this to go back to the previous scene
    public static void GoBackToPreviousScene()
    {
        if (!string.IsNullOrEmpty(previousScene))
        {
            SceneManager.LoadScene(previousScene);
        }
        else
        {
            Debug.LogWarning("No previous scene found!");
        }
    }
}
