using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueManager: MonoBehaviour
{
    private Queue<string> lines;
    //private float lineTimer = 5.0f;
    // Start is called before the first frame update
    void Start()
    {
        lines = new Queue<string>();
    }



    public void StartDialogue(Dialogue dialogue)
    {
        Debug.Log("This works");
        lines.Clear();
        foreach(string line in dialogue.sentences)
        {
            lines.Enqueue(line);
        }
        DisplayNextLine();
    }

    public void DisplayNextLine()
    {
        if(lines.Count == 0)
        {
            EndDialogue();
            return;
        }
        string displaySentence = lines.Dequeue();
        Debug.Log(displaySentence);
    }

    void EndDialogue()
    {
        Debug.Log("The dialogue is over");
    }

    
}
