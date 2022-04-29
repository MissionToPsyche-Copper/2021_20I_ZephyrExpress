using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioController : MonoBehaviour
{
    public AudioClip[] audioClips;
    public AudioSource source;
    // Start is called before the first frame update
    void Start()
    {
        if (audioClips.Length == 0) return;
        if (source == null) return;
        source.clip = audioClips[0];
    }
    public void ChangeTrack(string track)
    {
        foreach(AudioClip s in audioClips)
        {
            if (s.name.Equals(track))
            {
                source.clip = s;
                break;
            }
        }
    }
    public void GameOver()
    {
        source.Stop();
        source.clip = audioClips[1];
        source.Play();
    }
    public void ChangeTrack(AudioTrack track)
    {
        source.Stop();
        source.clip = track.track;
        source.Play();
    }
}
