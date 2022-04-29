using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
    public class LevelSummary : MonoBehaviour
    {
        private Text timerText;
        private Text notificationText;
        private Text scoreText;
        private Text powerUpText;
        private Text rankText;

        private void Start()
        {
            timerText = GetComponentInChildren<TimerUIMarker>().GetComponentInParent<Text>();
            scoreText = GetComponentInChildren<ScoreMarker>().GetComponentInParent<Text>();
            powerUpText = GetComponentInChildren<PowerUpUIMarker>().GetComponentInParent<Text>();
            rankText = GetComponentInChildren<RankUIMarker>().GetComponentInParent<Text>();
            var summaryTimer = (Player.GetInstance().SummaryValues.EndTime - Player.GetInstance().SummaryValues.StartTime);
            timerText.text = summaryTimer.Minutes.ToString()+":"+summaryTimer.ToString("ss");
            scoreText.text = Player.GetInstance().SummaryValues.Score.ToString();
            powerUpText.text = Player.GetInstance().SummaryValues.PowerUpCount.ToString();

            if (Player.GetInstance().SummaryValues.Score>=5000)
            {
                rankText.text = "A";
            }
            else if (Player.GetInstance().SummaryValues.Score >= 2500)
            {
                rankText.text = "B";
            }
            else
            {
                rankText.text = "C";
            }
        }
        public void SetTimerDisplay(double _timer)
        {
            if (timerText is null)
                Debug.LogError("A TimerUIMarker has NOT been properly attached to any component!");
            else
                timerText.text = _timer.ToString("ss");
        }
        void LateUpdate()
        {
            Player.GetInstance().StateMachine.CheckTime();
        }
        public void Continue()
        {
            Player.GetInstance().DialogueState = Player.GetInstance().DialogueState + 1;
            if(Player.GetInstance().DialogueState > 4)
            {
                Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetPlayingState());
            }
            else
            {
                Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetDialogState());
            }
        }
        IEnumerator MessageScroll(string message)
        {
            Text notification = Instantiate(notificationText, Player.GetInstance().StateMachine.HUD.gameObject.transform);
            notification.text = message;
            for (float i = 0; i < 100; i++)
            {
                yield return new WaitForSeconds(0.01f);
                notification.transform.position = notification.transform.position - new Vector3(0, i / 10, 0);
                notification.color = new Color(255, 255, 255, (100 - i) / 100.0f);

            }
            Destroy(notification);
        }
    }


