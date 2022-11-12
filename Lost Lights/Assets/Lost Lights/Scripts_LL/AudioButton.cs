using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


namespace InsertStudioLostLights
{
    public class AudioButton : MonoBehaviour
    {
        [SerializeField] AudioClip audioClip;
        [SerializeField] [Range(0.0f, 1.0f)] float _volume = 1;
        AudioSource audioSource;

        void Awake()
        {
            audioSource = gameObject.AddComponent<AudioSource>();
            if (audioClip != null)
                audioSource.clip = audioClip;
            audioSource.playOnAwake = false;
            audioSource.volume = _volume;
            GetComponent<Button>().onClick.AddListener(() => audioSource.Play());
        }
    }
}