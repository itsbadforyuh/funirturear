﻿using ARFoundationRemote.Runtime;
using UnityEngine;


namespace ARFoundationRemote.Examples {
    public class CheckUguiInstalled : MonoBehaviour {
        void Awake() {
            if (!Defines.isCanvasGUIInstalled) {
                Debug.LogError($"{Constants.packageName}: please install Unity UI (\"com.unity.ugui\") via Package Manager to run this example");
            }
        }
    }
}
