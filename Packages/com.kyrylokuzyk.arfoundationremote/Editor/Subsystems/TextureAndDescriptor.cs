﻿using ARFoundationRemote.Runtime;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.Rendering;
using UnityEngine.XR.ARSubsystems;
using Object = UnityEngine.Object;


namespace ARFoundationRemote.Editor {
    public class TextureAndDescriptor {
        [CanBeNull] Texture2D texture;
        XRTextureDescriptor _descriptor;

        
        public TextureAndDescriptor() {
        }

        public TextureAndDescriptor([NotNull] Texture2D solidColorTexture, [NotNull] string propName) {
            texture = solidColorTexture;
            updateDescriptor(propName);
        }

        public XRTextureDescriptor? descriptor {
            get {
                if (_descriptor.valid) {
                    return _descriptor;
                } else {
                    // using invalid descriptor will crash Unity Editor
                    return null;
                }
            }
        }

        public void Update(SerializedTextureAndPropId ser) {
            Update(ser.texture, ser.propName);
        }

        public void Update(Texture2DSerializable texture2DSerializable, string propName) {
            texture2DSerializable.ResizeIfNeededAndDeserializeInto(ref texture);
            updateDescriptor(propName);
            #if ARFOUNDATION_4_0_2_OR_NEWER
                Assert.AreEqual(TextureDimension.Tex2D, _descriptor.dimension);
            #endif
        }

        void updateDescriptor(string propName) {
            _descriptor = new XRTextureDescriptorWrapper(texture, Shader.PropertyToID(propName)).Value;
        }

        public void DestroyTexture() {
            _descriptor.Reset();
            if (texture != null) {
                Object.Destroy(texture);
                texture = null;
            }
        }
    }
}
