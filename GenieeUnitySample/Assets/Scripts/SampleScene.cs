using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SampleScene : MonoBehaviour
{

    public Button gotoInterstitialButton;
    public Button gotoRewardButton;

    // Start is called before the first frame update
    void Start()
    {
        gotoInterstitialButton.onClick.AddListener(OnInterstitialButtonClick);
        gotoRewardButton.onClick.AddListener(OnRewardButtonClick);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnRewardButtonClick()
    {
        SceneManager.LoadScene("RewardScene");
        SceneNavigator.SetPreviousScene(SceneManager.GetActiveScene().name);

    }

    public void OnInterstitialButtonClick()
    {
        SceneManager.LoadScene("InterstitialScene");
        SceneNavigator.SetPreviousScene(SceneManager.GetActiveScene().name);

    }
}
