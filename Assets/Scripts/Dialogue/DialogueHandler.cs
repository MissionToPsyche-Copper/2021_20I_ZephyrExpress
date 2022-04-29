using System.IO;
using System;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogueHandler : MonoBehaviour
{
    int currentLevel;
    int dialogueLevel;
    GameObject[] backgroundImages;
    GameObject[] speakerImages;
    string[] dialogueArray;
    DialogueTextHolder textArray = new DialogueTextHolder();
    public Text DialogueField;
    public TextMeshProUGUI DialogueLevelField;
    public Button nextLineButton;
    public static int lineCounter = 0;
    string currentSpeaker;
    string previousSpeaker;
    String[] LevelNames ={
        "Zephyr Express Headquarters",
        "Neo Houston Base",
        "New Anchorage Base",
        "Old Forge Junction",
        "Old Bay Shipyard",
        "Infinity"};
    void Start()
    {
        currentLevel = Player.GetInstance().DialogueState;
        backgroundImages = new GameObject[GameObject.Find("backgroundList").transform.childCount];
        speakerImages = new GameObject[GameObject.Find("speakerList").transform.childCount];
        populateBackgroundList();
        setBackground();
        populateSpeakerList();
        dialogueArray = getLevelDialogue();
        getCurrentSpeaker();
        DialogueField = GetComponentInChildren<DialogueFieldMarker>().GetComponentInParent<Text>();
        DialogueLevelField = GetComponentInChildren<DialogueLevelMarker>().GetComponentInParent<TextMeshProUGUI>();
        nextLineButton = GetComponentInChildren<DialogueContinueMarker>().GetComponentInParent<Button>();
        //Debug.Log(LevelNames[currentLevel]);
        DialogueLevelField.text = LevelNames[currentLevel];
        printText();
        nextLineButton.onClick.AddListener(printText);
    }

    void printText()
    {
        if(lineCounter < dialogueArray.Length && dialogueArray[lineCounter].Length > 0)
        {
            getCurrentSpeaker();
            previousSpeaker = currentSpeaker;
        }
        if(lineCounter < dialogueArray.Length && dialogueArray[lineCounter].Length == 0)
        {
            lineCounter++;
            Player.GetInstance().shipSelected = true;
            Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetShipSelectState());
        }
        else if(lineCounter < dialogueArray.Length)
        {
            DialogueField.text = dialogueArray[lineCounter];
            lineCounter++;
        }
        else
        {
            playingSceneTransition();
        }
    }

    void setBackground()
    {
        for(int i = 0; i < backgroundImages.Length; i++)
        {
            if(i == currentLevel)
            {
                backgroundImages[i].SetActive(true);
            }
            else if(backgroundImages[i].activeSelf)
            {
                backgroundImages[i].SetActive(false);
            }
        }
    }

   void populateBackgroundList()
    {
        for (int i = 0; i < backgroundImages.Length; i++)
        {
            backgroundImages[i] = GameObject.Find("backgroundList").transform.GetChild(i).gameObject;
        }
    }

    void populateSpeakerList()
    {
        for (int i = 0; i < speakerImages.Length; i++)
        {
            speakerImages[i] = GameObject.Find("speakerList").transform.GetChild(i).gameObject;
        }
    }

    string[] getLevelDialogue()
    {
        switch (currentLevel)
        {
            case 0:
                return textArray.level1;
            case 1:
                return textArray.level2;
            case 2:
                return textArray.level3;
            case 3:
                return textArray.level4;
            case 4:
                return textArray.level5;
            default:
                return null;
        }
    }

    void getCurrentSpeaker()
    {
        int i = dialogueArray[lineCounter].IndexOf(':');
        currentSpeaker = dialogueArray[lineCounter].Substring(0, i);
        if(previousSpeaker != null && currentSpeaker == previousSpeaker)
        {
            return;
        }
        Transform currentSpeakerObject = gameObject.GetComponentsInChildren<Transform>(true).FirstOrDefault(t => t.name == currentSpeaker);
        currentSpeakerObject.gameObject.SetActive(true);
        if(previousSpeaker != null)
        {
            Transform previousSpeakerObject = gameObject.GetComponentsInChildren<Transform>(true).FirstOrDefault(t => t.name == previousSpeaker);
            previousSpeakerObject.gameObject.SetActive(false);
        }
    }

    public void playingSceneTransition()
    {
        lineCounter = 0;
        if(Player.GetInstance().DialogueState == 0 && Player.GetInstance().shipSelected == false)
        {
            Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetShipSelectState());
        }
        else
        {
            Player.GetInstance().shipSelected = false;
            Player.GetInstance().StateMachine.SetState(Player.GetInstance().StateMachine.GetPlayingState());
        }
    }

}
