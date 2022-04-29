using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;
public class ShipHUDController : HUDController
{
    private Text shieldText;
    private Text healthText;
    private Text timerText;
    private Text speedText;
    private Text notificationText;
    private Text distanceText;
    private Text scoreText;
    private Text levelText;

    private Text gameOverText;
    private Image gameOverImage;
    private Button gameOverButton;
    private Button gameOverButton1;
    private float floatScore;
    public Canvas pausedCanvas;
    private Camera MainCamera { get; set; }
    // Update is called once per frame
    public new void Start()
    {
        StartUp();

        shieldText = GetComponentInChildren<ShieldUIMarker>().GetComponentInParent<Text>();
        healthText = GetComponentInChildren<HealthUIMarker>().GetComponentInParent<Text>();
        timerText = GetComponentInChildren<TimerUIMarker>().GetComponentInParent<Text>();
        speedText = GetComponentInChildren<SpeedUIMarker>().GetComponentInParent<Text>();
        notificationText = GetComponentInChildren<NotificationUIMarker>().GetComponentInParent<Text>();
        distanceText = GetComponentInChildren<GoalMarker>().GetComponentInParent<Text>();
        scoreText = GetComponentInChildren<ScoreMarker>().GetComponentInParent<Text>();
        levelText = GetComponentInChildren<LevelMarker>().GetComponentInParent<Text>();

        gameOverText = GetComponentInChildren<GameOverLabelMarker>().GetComponentInParent<Text>();
        gameOverImage = GetComponentInChildren<GameOverBackgroundMarker>().GetComponentInParent<Image>();
        gameOverButton = GetComponentInChildren<GameButtonMarker>().GetComponentInParent<Button>();
        gameOverButton1 = GetComponentInChildren<GameButtonMarker1>().GetComponentInParent<Button>();
        gameOverButton.gameObject.SetActive(false);
        gameOverButton1.gameObject.SetActive(false);

       pausedCanvas = gameObject.GetComponentsInChildren<Canvas>(true).FirstOrDefault(t => t.name == "PausedCanvas");
    }
    public void SetShieldDisplay(int _shield)
    {
        if (shieldText is null) return;
        if (_shield > 0)
            shieldText.text = "SHIELD:" + _shield.ToString();
        else
        {
            shieldText.text = "SHIELD DEPLETED";
        }
    }
    public void SetHealthDisplay(int _health)
    {
        if (healthText is null) return;
        if(_health>0)
            healthText.text = "HEALTH:" + _health.ToString();
        else
        {
            healthText.text = "HULL BREACH DETECTED";
            Player.Log("ABANDON SHIP", Color.red);
        }
    }
    public void SetTimerDisplay(double _timer)
    {
        if (timerText is null) return;
        if (_timer < 0)
        {
            timerText.text = "0.00";
            if(Player.GetInstance().StateMachine.Health > 0)
            {
                Player.Log("TIME UP", Color.green);
            }
        }
        else
            timerText.text = _timer.ToString("0.00");
    }
    public void SetSpeedDisplay(double _speed)
    {
        if (speedText is null) return;
        speedText.text = _speed.ToString("0.00") + "KPH";
    }
    public void UpdateLevelDisplay()
    {
        levelText.text = "LEVEL: " + (Player.GetInstance().DialogueState + 1);
    }
    public void UpdateDistanceDisplay()
    {
        distanceText.text = Player.GetInstance().StateMachine.Distance.ToString("0.00") + "KM";
    }
    public void UpdateScore()
    {
        scoreText.text = ((int)(Math.Ceiling(Player.GetInstance().SummaryValues.Score))).ToString();
    }
    public void SetPauseActive(bool active)
    {
        gameObject.GetComponentsInChildren<Canvas>(true).FirstOrDefault(t => t.name == "PausedCanvas").gameObject.SetActive(active);
    }
    void LateUpdate()
    {
        Player.GetInstance().StateMachine.Timer -= Time.deltaTime;
        Player.GetInstance().SummaryValues.Score-= Time.deltaTime*10;
        Player.GetInstance().StateMachine.CheckTime();
        Player.UpdateHUD();
    }
    public void Log(string text)
    {
        StartCoroutine(MessageScroll(text,Color.white));
    }
    public void Log(string text,Color color)
    {
        StartCoroutine(MessageScroll(text,color));
    }
    public void GameOver()
    {
        StartCoroutine(GameOverFade());
        AudioSource SFXSource = gameObject.GetComponentsInChildren<AudioSource>(true).FirstOrDefault(t => t.name == "SFXSource");
        SFXSource.volume = 0;
        AudioSource GameOverAudioSource = gameObject.GetComponentsInChildren<AudioSource>(true).FirstOrDefault(t => t.name == "GameOverAudioSource");
        GameOverAudioSource.volume = Player.GetInstance().Options.BGMVolume;
        GameOverAudioSource.Play();
    }
     IEnumerator MessageScroll(string message, Color color)
    {
        Text notification = Instantiate(notificationText, Player.GetInstance().StateMachine.HUD.gameObject.transform);
        notification.text = message;
        for (float i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.005f);
            notification.transform.position = notification.transform.position - new Vector3(0,i/10,0);
            notification.color = new Color(color.r, color.g, color.b, (100-i)/100.0f);
        }
        Destroy(notification);
    }
    IEnumerator GameOverFade()
    {
        Player.GetInstance().AudioContext.BGMSource.volume = 0;
        
        for (float i = 0; i < 100; i++)
        {
            yield return new WaitForSeconds(0.005f);
            gameOverText.color = new Color(255, 255, 255, i / 100.0f);
            gameOverImage.color = new Color(0, 0, 0,  i / 100.0f);
        }
        gameOverButton.gameObject.SetActive(true);
        gameOverButton1.gameObject.SetActive(true);
    }
}
