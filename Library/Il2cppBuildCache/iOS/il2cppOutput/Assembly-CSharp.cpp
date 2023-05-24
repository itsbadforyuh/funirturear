#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<EnumState>
struct Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914;
// System.Action`2<System.IntPtr,UnityEngine.XR.ARKit.NSError>
struct Action_2_tF10732C74E0C1A51A43D2ADBE57C998FDD67583D;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0D7774CBEE7827744440205CF327276346298BD3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tAE84735071B78277703DB9996DE2E5C4456317C5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E;
// UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay
struct ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8;
// UnityEngine.XR.ARKit.ARKitSessionDelegate
struct ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// ArrowItem
struct ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CheckARSupport
struct CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.XR.ARFoundation.Samples.CustomSessionDelegate
struct CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941;
// UnityEngine.XR.ARKit.DefaultARKitSessionDelegate
struct DefaultARKitSessionDelegate_t7C6D81321CB37E084745A9EEA026C154ED2DB639;
// Define
struct Define_t02E0E01550937A70EF3AF8A3936BFF3CA41B7FC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModelEdit
struct ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScaleValue
struct ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StateManager
struct StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CheckARSupport/<CheckSupport>d__2
struct U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UIManager/<>c
struct U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490;
// UIManager/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0062DFB0FBA6BCB8CABD16BCCE2D4BF81D7520C3;
IL2CPP_EXTERN_C String_t* _stringLiteral077F6F20AAB38174B4A2A17C676D367FF85E641D;
IL2CPP_EXTERN_C String_t* _stringLiteral0A1A55224B7BABBF7047B3E1F3E56812C3ED941D;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7DB288FB14CEF4B5DF769CCA964A340C64F910;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7F2C77435F27665A2EA7D069E4E1308D337AC2;
IL2CPP_EXTERN_C String_t* _stringLiteral0E4AAE57256D86713ECC6CFE1A2224442DE0BECB;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral137570F3A6ECC8688E9B3553681C5E705A92A46C;
IL2CPP_EXTERN_C String_t* _stringLiteral146097AA4F8DC0EC721293607B304B8286AEA537;
IL2CPP_EXTERN_C String_t* _stringLiteral1662BE604729854A5169729ABD7D19B0007533CD;
IL2CPP_EXTERN_C String_t* _stringLiteral16CDB511D09802498D436CB3132D02AF04FA9184;
IL2CPP_EXTERN_C String_t* _stringLiteral19FBA6E57EBD45B56EA79319FF36DDB927E60946;
IL2CPP_EXTERN_C String_t* _stringLiteral1A502556BE6CA915B270385DE5CC53406E174D39;
IL2CPP_EXTERN_C String_t* _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC98656B2789037B2682120B8E7CC32487D487C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC8E605BF3CA94CEA7A28AC19508D015701ABA9;
IL2CPP_EXTERN_C String_t* _stringLiteral2BEDACD35E21E8846037EAC9CF840D78C1ADE5F5;
IL2CPP_EXTERN_C String_t* _stringLiteral31D57CE2DDC429BF626880A229B24D360D25124F;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5554D2C96298C92EA36E03D7CF332614F25966;
IL2CPP_EXTERN_C String_t* _stringLiteral4938B08D1EBF67EBE9B9208A9DB243E2491D7F5F;
IL2CPP_EXTERN_C String_t* _stringLiteral55448740B872166E783A07CA70AF3537FE4B8B69;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1C3520C327880445C7DBECC7435621390A287D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BBCC78A66B54D40A04EE9AACD1696178DCD43A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5FEF44B0C6F57161267A9BEE36DD66F5D18CD28C;
IL2CPP_EXTERN_C String_t* _stringLiteral72F5935670DE2668B63607E8393D222B283DECF7;
IL2CPP_EXTERN_C String_t* _stringLiteral7384B390657904D42964D483855B4C89ECAB1F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral79A8212245E52D448A819079FA8CB570A0EC25A9;
IL2CPP_EXTERN_C String_t* _stringLiteral8CFF0AB18D0D19248FDEB4C81A7045E55C85875F;
IL2CPP_EXTERN_C String_t* _stringLiteral91FDD05440566E36B3E1B08C4E37C920BA1310FB;
IL2CPP_EXTERN_C String_t* _stringLiteral93A443B4826D5D2D7F58B7DF29AE7A41D8629CFF;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6259380F399A842AB1785ACB9D8416F4D1D164;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4D38CEF794B5644CDF61D9E24C50924719DB64;
IL2CPP_EXTERN_C String_t* _stringLiteralC2FF8B140D324DC7BA2D881AEFA7992C3C0742CD;
IL2CPP_EXTERN_C String_t* _stringLiteralD398375464DFD7925879988CF444F0150A80C4F6;
IL2CPP_EXTERN_C String_t* _stringLiteralD43D8C366F728FB5A5394C770DA71D1516F400C4;
IL2CPP_EXTERN_C String_t* _stringLiteralD45B273C49ED1E529617670DD8A7BED60CC0416A;
IL2CPP_EXTERN_C String_t* _stringLiteralD7F2426BB04945D83AA26ACEC47F3F67D3F0E7FE;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52;
IL2CPP_EXTERN_C String_t* _stringLiteralEB95830977BA5AB139F45C0240C7DA7E77FEF939;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5E87A40346887D57AC39ADEE1460FE25E974BD;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m354D58D0B29B40FE6D3A6689590E271D9282323F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitCoachingOverlay_ActivateCoaching_m9E8AB9C2B5864679DB2CF8E2FF286E4493687A0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitCoachingOverlay_DisableCoaching_m2FA5EBF353B1497919DCCE3AECDFC6605CFE3990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6796BE9D895FF15B1048799C0FD81A3AA436796C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2_mF6CC5EE67B706261E3771A64A0BD8EFEA2EEBC8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891_m3289239E336CF5EB91676AD172F5F1B1E35B50F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC8C1096FDE613395828E8F21D280A012AA3EDADF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D_m89AE468155FB553E0D80A6F092021BB807BA1307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m45E5597E9EB970A6935E26EBBF739F8DC469B402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_m8CB2DB08391E9E037FAEDD13211E83868E39BFF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92_m64543E9AD4622349900019CA342BEC34440DC990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779_m96F2CCF9B34D9CFD576352FB03D576078D594DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7F4AACB6FB4C3F4473775872D231627FDA376FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_mFD471F1F0659F2CF80264CB9B862486BBD8DF6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckSupportU3Ed__2_System_Collections_IEnumerator_Reset_mB47333B968322F68D4811131D4D5DCFF66511F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__24_1_mE7997573DA0A7D2D1B193490A5F1434C7C58B4B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CcreatePreviewItemU3Eb__0_mBB7648371ADF109B071BAF8875E392E6BC117B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CAwakeU3Eb__24_0_mE2631E2131393A84D36EFF0DC07934415C7EB080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CAwakeU3Eb__24_2_m04324003068A18D601C42F7CF094551309AE1083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CAwakeU3Eb__24_3_m5F28E85C4D27EE1AAF46F0C5269A2FC36CAA483F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CAwakeU3Eb__24_4_m2AC499083246E61F902BFF2B99CB578496EF9728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CAwakeU3Eb__24_5_m7E42A29FEC83192E28D186F9B2162832DE883D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3CAwakeU3Eb__24_6_mF272246B1A793C28CECFDF77BB9AE73F5F35A2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_clickAddModelButton_mF1E14004F844FBF27C62623FECC6E2CB0CA80451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_onChangeState_m26D4724A89CA6BC53EA5DED1C9DDE5784F7ACC74_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___entries_1)); }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t954984A7FAD7638C56E3980445C36F374F9CC3ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___keys_7)); }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8B43E8504381EBAE726A65E47CF5C58389CCDCD3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ___values_8)); }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3097E4BDF610B6DB0329348D39114BC4584B7B59 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____items_1)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitSessionDelegate
struct ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE  : public RuntimeObject
{
public:

public:
};

struct ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE_StaticFields
{
public:
	// System.Action`2<System.IntPtr,UnityEngine.XR.ARKit.NSError> UnityEngine.XR.ARKit.ARKitSessionDelegate::s_SessionDidFailWithError
	Action_2_tF10732C74E0C1A51A43D2ADBE57C998FDD67583D * ___s_SessionDidFailWithError_0;
	// System.Action`1<System.IntPtr> UnityEngine.XR.ARKit.ARKitSessionDelegate::s_CoachingOverlayViewWillActivate
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___s_CoachingOverlayViewWillActivate_1;
	// System.Action`1<System.IntPtr> UnityEngine.XR.ARKit.ARKitSessionDelegate::s_CoachingOverlayViewDidDeactivate
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___s_CoachingOverlayViewDidDeactivate_2;
	// System.Action`1<System.IntPtr> UnityEngine.XR.ARKit.ARKitSessionDelegate::s_ConfigurationChanged
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___s_ConfigurationChanged_3;

public:
	inline static int32_t get_offset_of_s_SessionDidFailWithError_0() { return static_cast<int32_t>(offsetof(ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE_StaticFields, ___s_SessionDidFailWithError_0)); }
	inline Action_2_tF10732C74E0C1A51A43D2ADBE57C998FDD67583D * get_s_SessionDidFailWithError_0() const { return ___s_SessionDidFailWithError_0; }
	inline Action_2_tF10732C74E0C1A51A43D2ADBE57C998FDD67583D ** get_address_of_s_SessionDidFailWithError_0() { return &___s_SessionDidFailWithError_0; }
	inline void set_s_SessionDidFailWithError_0(Action_2_tF10732C74E0C1A51A43D2ADBE57C998FDD67583D * value)
	{
		___s_SessionDidFailWithError_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SessionDidFailWithError_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CoachingOverlayViewWillActivate_1() { return static_cast<int32_t>(offsetof(ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE_StaticFields, ___s_CoachingOverlayViewWillActivate_1)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_s_CoachingOverlayViewWillActivate_1() const { return ___s_CoachingOverlayViewWillActivate_1; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_s_CoachingOverlayViewWillActivate_1() { return &___s_CoachingOverlayViewWillActivate_1; }
	inline void set_s_CoachingOverlayViewWillActivate_1(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___s_CoachingOverlayViewWillActivate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CoachingOverlayViewWillActivate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_CoachingOverlayViewDidDeactivate_2() { return static_cast<int32_t>(offsetof(ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE_StaticFields, ___s_CoachingOverlayViewDidDeactivate_2)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_s_CoachingOverlayViewDidDeactivate_2() const { return ___s_CoachingOverlayViewDidDeactivate_2; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_s_CoachingOverlayViewDidDeactivate_2() { return &___s_CoachingOverlayViewDidDeactivate_2; }
	inline void set_s_CoachingOverlayViewDidDeactivate_2(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___s_CoachingOverlayViewDidDeactivate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CoachingOverlayViewDidDeactivate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigurationChanged_3() { return static_cast<int32_t>(offsetof(ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE_StaticFields, ___s_ConfigurationChanged_3)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_s_ConfigurationChanged_3() const { return ___s_ConfigurationChanged_3; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_s_ConfigurationChanged_3() { return &___s_ConfigurationChanged_3; }
	inline void set_s_ConfigurationChanged_3(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___s_ConfigurationChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ConfigurationChanged_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// CheckARSupport/<CheckSupport>d__2
struct U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B  : public RuntimeObject
{
public:
	// System.Int32 CheckARSupport/<CheckSupport>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CheckARSupport/<CheckSupport>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CheckARSupport CheckARSupport/<CheckSupport>d__2::<>4__this
	CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B, ___U3CU3E4__this_2)); }
	inline CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UIManager/<>c
struct U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields
{
public:
	// UIManager/<>c UIManager/<>c::<>9
	U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction UIManager/<>c::<>9__24_1
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___U3CU3E9__24_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields, ___U3CU3E9__24_1_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_U3CU3E9__24_1_1() const { return ___U3CU3E9__24_1_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_U3CU3E9__24_1_1() { return &___U3CU3E9__24_1_1; }
	inline void set_U3CU3E9__24_1_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___U3CU3E9__24_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_1), (void*)value);
	}
};


// UIManager/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UIManager/<>c__DisplayClass28_0::item
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item_0;
	// UIManager UIManager/<>c__DisplayClass28_0::<>4__this
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC, ___item_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_item_0() const { return ___item_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC, ___U3CU3E4__this_1)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_t6B93A5A70BFA40A2722C0351B2401EE7375D30D8 
{
public:
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CplaneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CplaneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARPlaneBoundaryChangedEventArgs_t6B93A5A70BFA40A2722C0351B2401EE7375D30D8, ___U3CplaneU3Ek__BackingField_0)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CplaneU3Ek__BackingField_0() const { return ___U3CplaneU3Ek__BackingField_0; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CplaneU3Ek__BackingField_0() { return &___U3CplaneU3Ek__BackingField_0; }
	inline void set_U3CplaneU3Ek__BackingField_0(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CplaneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplaneU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_t6B93A5A70BFA40A2722C0351B2401EE7375D30D8_marshaled_pinvoke
{
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_t6B93A5A70BFA40A2722C0351B2401EE7375D30D8_marshaled_com
{
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CplaneU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.XR.ARKit.DefaultARKitSessionDelegate
struct DefaultARKitSessionDelegate_t7C6D81321CB37E084745A9EEA026C154ED2DB639  : public ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE
{
public:
	// System.Int32 UnityEngine.XR.ARKit.DefaultARKitSessionDelegate::<retriesRemaining>k__BackingField
	int32_t ___U3CretriesRemainingU3Ek__BackingField_4;
	// System.Int32 UnityEngine.XR.ARKit.DefaultARKitSessionDelegate::<maxRetryCount>k__BackingField
	int32_t ___U3CmaxRetryCountU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CretriesRemainingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DefaultARKitSessionDelegate_t7C6D81321CB37E084745A9EEA026C154ED2DB639, ___U3CretriesRemainingU3Ek__BackingField_4)); }
	inline int32_t get_U3CretriesRemainingU3Ek__BackingField_4() const { return ___U3CretriesRemainingU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CretriesRemainingU3Ek__BackingField_4() { return &___U3CretriesRemainingU3Ek__BackingField_4; }
	inline void set_U3CretriesRemainingU3Ek__BackingField_4(int32_t value)
	{
		___U3CretriesRemainingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CmaxRetryCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DefaultARKitSessionDelegate_t7C6D81321CB37E084745A9EEA026C154ED2DB639, ___U3CmaxRetryCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CmaxRetryCountU3Ek__BackingField_5() const { return ___U3CmaxRetryCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CmaxRetryCountU3Ek__BackingField_5() { return &___U3CmaxRetryCountU3Ek__BackingField_5; }
	inline void set_U3CmaxRetryCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CmaxRetryCountU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.ARKit.ARCoachingGoal
struct ARCoachingGoal_t1B0E9451A645B81235667827947BC3196ED1A6AC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARCoachingGoal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCoachingGoal_t1B0E9451A645B81235667827947BC3196ED1A6AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARCoachingOverlayTransition
struct ARCoachingOverlayTransition_tFCB8AFB8BA3D335E98404B8BEE0433F8FCE84449 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARCoachingOverlayTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCoachingOverlayTransition_tFCB8AFB8BA3D335E98404B8BEE0433F8FCE84449, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.ARFoundation.Samples.CustomSessionDelegate
struct CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941  : public DefaultARKitSessionDelegate_t7C6D81321CB37E084745A9EEA026C154ED2DB639
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// EnumState
struct EnumState_tE82AD037021D0C922F99B3AE8F53E844462B7727 
{
public:
	// System.Int32 EnumState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnumState_tE82AD037021D0C922F99B3AE8F53E844462B7727, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay/CoachingGoal
struct CoachingGoal_t22BF3D93F0675D41EB3BE50BDB240A7F43449000 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay/CoachingGoal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoachingGoal_t22BF3D93F0675D41EB3BE50BDB240A7F43449000, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<EnumState>
struct Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdescriptorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CdescriptorU3Ek__BackingField_0)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_U3CdescriptorU3Ek__BackingField_0() const { return ___U3CdescriptorU3Ek__BackingField_0; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_U3CdescriptorU3Ek__BackingField_0() { return &___U3CdescriptorU3Ek__BackingField_0; }
	inline void set_U3CdescriptorU3Ek__BackingField_0(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___U3CdescriptorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfeaturesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CfeaturesU3Ek__BackingField_1)); }
	inline uint64_t get_U3CfeaturesU3Ek__BackingField_1() const { return ___U3CfeaturesU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CfeaturesU3Ek__BackingField_1() { return &___U3CfeaturesU3Ek__BackingField_1; }
	inline void set_U3CfeaturesU3Ek__BackingField_1(uint64_t value)
	{
		___U3CfeaturesU3Ek__BackingField_1 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 
{
public:
	// T System.Nullable`1::value
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___value_0)); }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  get_value_0() const { return ___value_0; }
	inline Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tAE84735071B78277703DB9996DE2E5C4456317C5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t72B11B1FEAB79314490A07F58F757646DADED2C1 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_FeatheredPlaneMaterial_9;

public:
	inline static int32_t get_offset_of_m_FeatheringWidth_4() { return static_cast<int32_t>(offsetof(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E, ___m_FeatheringWidth_4)); }
	inline float get_m_FeatheringWidth_4() const { return ___m_FeatheringWidth_4; }
	inline float* get_address_of_m_FeatheringWidth_4() { return &___m_FeatheringWidth_4; }
	inline void set_m_FeatheringWidth_4(float value)
	{
		___m_FeatheringWidth_4 = value;
	}

	inline static int32_t get_offset_of_m_PlaneMeshVisualizer_7() { return static_cast<int32_t>(offsetof(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E, ___m_PlaneMeshVisualizer_7)); }
	inline ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * get_m_PlaneMeshVisualizer_7() const { return ___m_PlaneMeshVisualizer_7; }
	inline ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 ** get_address_of_m_PlaneMeshVisualizer_7() { return &___m_PlaneMeshVisualizer_7; }
	inline void set_m_PlaneMeshVisualizer_7(ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * value)
	{
		___m_PlaneMeshVisualizer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlaneMeshVisualizer_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Plane_8() { return static_cast<int32_t>(offsetof(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E, ___m_Plane_8)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_m_Plane_8() const { return ___m_Plane_8; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_m_Plane_8() { return &___m_Plane_8; }
	inline void set_m_Plane_8(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___m_Plane_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Plane_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_FeatheredPlaneMaterial_9() { return static_cast<int32_t>(offsetof(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E, ___m_FeatheredPlaneMaterial_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_FeatheredPlaneMaterial_9() const { return ___m_FeatheredPlaneMaterial_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_FeatheredPlaneMaterial_9() { return &___m_FeatheredPlaneMaterial_9; }
	inline void set_m_FeatheredPlaneMaterial_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_FeatheredPlaneMaterial_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FeatheredPlaneMaterial_9), (void*)value);
	}
};

struct ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___s_Vertices_6;

public:
	inline static int32_t get_offset_of_s_FeatheringUVs_5() { return static_cast<int32_t>(offsetof(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields, ___s_FeatheringUVs_5)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_s_FeatheringUVs_5() const { return ___s_FeatheringUVs_5; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_s_FeatheringUVs_5() { return &___s_FeatheringUVs_5; }
	inline void set_s_FeatheringUVs_5(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___s_FeatheringUVs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FeatheringUVs_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Vertices_6() { return static_cast<int32_t>(offsetof(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields, ___s_Vertices_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_s_Vertices_6() const { return ___s_Vertices_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_s_Vertices_6() { return &___s_Vertices_6; }
	inline void set_s_Vertices_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___s_Vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Vertices_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay
struct ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay/CoachingGoal UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::m_Goal
	int32_t ___m_Goal_4;
	// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::m_ActivatesAutomatically
	bool ___m_ActivatesAutomatically_5;

public:
	inline static int32_t get_offset_of_m_Goal_4() { return static_cast<int32_t>(offsetof(ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8, ___m_Goal_4)); }
	inline int32_t get_m_Goal_4() const { return ___m_Goal_4; }
	inline int32_t* get_address_of_m_Goal_4() { return &___m_Goal_4; }
	inline void set_m_Goal_4(int32_t value)
	{
		___m_Goal_4 = value;
	}

	inline static int32_t get_offset_of_m_ActivatesAutomatically_5() { return static_cast<int32_t>(offsetof(ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8, ___m_ActivatesAutomatically_5)); }
	inline bool get_m_ActivatesAutomatically_5() const { return ___m_ActivatesAutomatically_5; }
	inline bool* get_address_of_m_ActivatesAutomatically_5() { return &___m_ActivatesAutomatically_5; }
	inline void set_m_ActivatesAutomatically_5(bool value)
	{
		___m_ActivatesAutomatically_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___m_Plane_8;

public:
	inline static int32_t get_offset_of_U3CmeshU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2, ___U3CmeshU3Ek__BackingField_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CmeshU3Ek__BackingField_4() const { return ___U3CmeshU3Ek__BackingField_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CmeshU3Ek__BackingField_4() { return &___U3CmeshU3Ek__BackingField_4; }
	inline void set_U3CmeshU3Ek__BackingField_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CmeshU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingStateVisibilityThreshold_5() { return static_cast<int32_t>(offsetof(ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2, ___m_TrackingStateVisibilityThreshold_5)); }
	inline int32_t get_m_TrackingStateVisibilityThreshold_5() const { return ___m_TrackingStateVisibilityThreshold_5; }
	inline int32_t* get_address_of_m_TrackingStateVisibilityThreshold_5() { return &___m_TrackingStateVisibilityThreshold_5; }
	inline void set_m_TrackingStateVisibilityThreshold_5(int32_t value)
	{
		___m_TrackingStateVisibilityThreshold_5 = value;
	}

	inline static int32_t get_offset_of_m_HideSubsumed_6() { return static_cast<int32_t>(offsetof(ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2, ___m_HideSubsumed_6)); }
	inline bool get_m_HideSubsumed_6() const { return ___m_HideSubsumed_6; }
	inline bool* get_address_of_m_HideSubsumed_6() { return &___m_HideSubsumed_6; }
	inline void set_m_HideSubsumed_6(bool value)
	{
		___m_HideSubsumed_6 = value;
	}

	inline static int32_t get_offset_of_m_InitialLineWidthMultiplier_7() { return static_cast<int32_t>(offsetof(ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2, ___m_InitialLineWidthMultiplier_7)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_m_InitialLineWidthMultiplier_7() const { return ___m_InitialLineWidthMultiplier_7; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_m_InitialLineWidthMultiplier_7() { return &___m_InitialLineWidthMultiplier_7; }
	inline void set_m_InitialLineWidthMultiplier_7(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___m_InitialLineWidthMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_m_Plane_8() { return static_cast<int32_t>(offsetof(ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2, ___m_Plane_8)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_m_Plane_8() const { return ___m_Plane_8; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_m_Plane_8() { return &___m_Plane_8; }
	inline void set_m_Plane_8(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___m_Plane_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Plane_8), (void*)value);
	}
};


// ARTapToPlaceObject
struct ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ARTapToPlaceObject::<objectToPlace>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CobjectToPlaceU3Ek__BackingField_4;
	// UnityEngine.GameObject ARTapToPlaceObject::<placementIndicator>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CplacementIndicatorU3Ek__BackingField_5;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::m_ARRaycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___m_ARRaycastManager_6;
	// UnityEngine.Pose ARTapToPlaceObject::m_PlacementPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_PlacementPose_7;
	// System.Boolean ARTapToPlaceObject::m_PlacementPoseIsValid
	bool ___m_PlacementPoseIsValid_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ARTapToPlaceObject::m_Hits
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___m_Hits_9;
	// UnityEngine.Vector2 ARTapToPlaceObject::m_ScreenCenter
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ScreenCenter_10;
	// UnityEngine.GameObject ARTapToPlaceObject::m_ArrowPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ArrowPrefab_11;

public:
	inline static int32_t get_offset_of_U3CobjectToPlaceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___U3CobjectToPlaceU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CobjectToPlaceU3Ek__BackingField_4() const { return ___U3CobjectToPlaceU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CobjectToPlaceU3Ek__BackingField_4() { return &___U3CobjectToPlaceU3Ek__BackingField_4; }
	inline void set_U3CobjectToPlaceU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CobjectToPlaceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjectToPlaceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CplacementIndicatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___U3CplacementIndicatorU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CplacementIndicatorU3Ek__BackingField_5() const { return ___U3CplacementIndicatorU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CplacementIndicatorU3Ek__BackingField_5() { return &___U3CplacementIndicatorU3Ek__BackingField_5; }
	inline void set_U3CplacementIndicatorU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CplacementIndicatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIndicatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ARRaycastManager_6() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___m_ARRaycastManager_6)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_m_ARRaycastManager_6() const { return ___m_ARRaycastManager_6; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_m_ARRaycastManager_6() { return &___m_ARRaycastManager_6; }
	inline void set_m_ARRaycastManager_6(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___m_ARRaycastManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ARRaycastManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlacementPose_7() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___m_PlacementPose_7)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_PlacementPose_7() const { return ___m_PlacementPose_7; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_PlacementPose_7() { return &___m_PlacementPose_7; }
	inline void set_m_PlacementPose_7(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_PlacementPose_7 = value;
	}

	inline static int32_t get_offset_of_m_PlacementPoseIsValid_8() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___m_PlacementPoseIsValid_8)); }
	inline bool get_m_PlacementPoseIsValid_8() const { return ___m_PlacementPoseIsValid_8; }
	inline bool* get_address_of_m_PlacementPoseIsValid_8() { return &___m_PlacementPoseIsValid_8; }
	inline void set_m_PlacementPoseIsValid_8(bool value)
	{
		___m_PlacementPoseIsValid_8 = value;
	}

	inline static int32_t get_offset_of_m_Hits_9() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___m_Hits_9)); }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * get_m_Hits_9() const { return ___m_Hits_9; }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D ** get_address_of_m_Hits_9() { return &___m_Hits_9; }
	inline void set_m_Hits_9(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * value)
	{
		___m_Hits_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hits_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScreenCenter_10() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___m_ScreenCenter_10)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ScreenCenter_10() const { return ___m_ScreenCenter_10; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ScreenCenter_10() { return &___m_ScreenCenter_10; }
	inline void set_m_ScreenCenter_10(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ScreenCenter_10 = value;
	}

	inline static int32_t get_offset_of_m_ArrowPrefab_11() { return static_cast<int32_t>(offsetof(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92, ___m_ArrowPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ArrowPrefab_11() const { return ___m_ArrowPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ArrowPrefab_11() { return &___m_ArrowPrefab_11; }
	inline void set_m_ArrowPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ArrowPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArrowPrefab_11), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ArrowItem
struct ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ArrowItem::<arrows>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CarrowsU3Ek__BackingField_4;
	// UnityEngine.Transform ArrowItem::<target>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtargetU3Ek__BackingField_5;
	// UnityEngine.Vector3 ArrowItem::prePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prePos_6;
	// System.Single ArrowItem::checkTime
	float ___checkTime_7;

public:
	inline static int32_t get_offset_of_U3CarrowsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D, ___U3CarrowsU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CarrowsU3Ek__BackingField_4() const { return ___U3CarrowsU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CarrowsU3Ek__BackingField_4() { return &___U3CarrowsU3Ek__BackingField_4; }
	inline void set_U3CarrowsU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CarrowsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CarrowsU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D, ___U3CtargetU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtargetU3Ek__BackingField_5() const { return ___U3CtargetU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtargetU3Ek__BackingField_5() { return &___U3CtargetU3Ek__BackingField_5; }
	inline void set_U3CtargetU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtargetU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_prePos_6() { return static_cast<int32_t>(offsetof(ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D, ___prePos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prePos_6() const { return ___prePos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prePos_6() { return &___prePos_6; }
	inline void set_prePos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prePos_6 = value;
	}

	inline static int32_t get_offset_of_checkTime_7() { return static_cast<int32_t>(offsetof(ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D, ___checkTime_7)); }
	inline float get_checkTime_7() const { return ___checkTime_7; }
	inline float* get_address_of_checkTime_7() { return &___checkTime_7; }
	inline void set_checkTime_7(float value)
	{
		___checkTime_7 = value;
	}
};


// CheckARSupport
struct CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UIManager CheckARSupport::m_UIManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___m_UIManager_4;

public:
	inline static int32_t get_offset_of_m_UIManager_4() { return static_cast<int32_t>(offsetof(CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A, ___m_UIManager_4)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_m_UIManager_4() const { return ___m_UIManager_4; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_m_UIManager_4() { return &___m_UIManager_4; }
	inline void set_m_UIManager_4(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___m_UIManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UIManager_4), (void*)value);
	}
};


// Define
struct Define_t02E0E01550937A70EF3AF8A3936BFF3CA41B7FC3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ModelEdit
struct ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARRaycastManager ModelEdit::m_ARRaycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___m_ARRaycastManager_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> ModelEdit::m_Hits
	List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___m_Hits_5;
	// UnityEngine.Pose ModelEdit::m_PlacementPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_PlacementPose_6;
	// UnityEngine.Camera ModelEdit::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_7;
	// System.Boolean ModelEdit::m_IsTouchModel
	bool ___m_IsTouchModel_8;
	// System.Boolean ModelEdit::m_IsShowUI
	bool ___m_IsShowUI_9;
	// UnityEngine.GameObject ModelEdit::m_SelectedModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_SelectedModel_10;
	// UnityEngine.LayerMask ModelEdit::mask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask_11;

public:
	inline static int32_t get_offset_of_m_ARRaycastManager_4() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_ARRaycastManager_4)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_m_ARRaycastManager_4() const { return ___m_ARRaycastManager_4; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_m_ARRaycastManager_4() { return &___m_ARRaycastManager_4; }
	inline void set_m_ARRaycastManager_4(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___m_ARRaycastManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ARRaycastManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hits_5() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_Hits_5)); }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * get_m_Hits_5() const { return ___m_Hits_5; }
	inline List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D ** get_address_of_m_Hits_5() { return &___m_Hits_5; }
	inline void set_m_Hits_5(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * value)
	{
		___m_Hits_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hits_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlacementPose_6() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_PlacementPose_6)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_PlacementPose_6() const { return ___m_PlacementPose_6; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_PlacementPose_6() { return &___m_PlacementPose_6; }
	inline void set_m_PlacementPose_6(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_PlacementPose_6 = value;
	}

	inline static int32_t get_offset_of_m_Camera_7() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_Camera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_7() const { return ___m_Camera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_7() { return &___m_Camera_7; }
	inline void set_m_Camera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTouchModel_8() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_IsTouchModel_8)); }
	inline bool get_m_IsTouchModel_8() const { return ___m_IsTouchModel_8; }
	inline bool* get_address_of_m_IsTouchModel_8() { return &___m_IsTouchModel_8; }
	inline void set_m_IsTouchModel_8(bool value)
	{
		___m_IsTouchModel_8 = value;
	}

	inline static int32_t get_offset_of_m_IsShowUI_9() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_IsShowUI_9)); }
	inline bool get_m_IsShowUI_9() const { return ___m_IsShowUI_9; }
	inline bool* get_address_of_m_IsShowUI_9() { return &___m_IsShowUI_9; }
	inline void set_m_IsShowUI_9(bool value)
	{
		___m_IsShowUI_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectedModel_10() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___m_SelectedModel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_SelectedModel_10() const { return ___m_SelectedModel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_SelectedModel_10() { return &___m_SelectedModel_10; }
	inline void set_m_SelectedModel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_SelectedModel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedModel_10), (void*)value);
	}

	inline static int32_t get_offset_of_mask_11() { return static_cast<int32_t>(offsetof(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779, ___mask_11)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_mask_11() const { return ___mask_11; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_mask_11() { return &___mask_11; }
	inline void set_mask_11(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___mask_11 = value;
	}
};


// ScaleValue
struct ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<System.Single> ScaleValue::scaleValues
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___scaleValues_4;
	// System.Collections.Generic.List`1<System.String> ScaleValue::showScaleValues
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___showScaleValues_5;
	// System.Int32 ScaleValue::curIndex
	int32_t ___curIndex_6;
	// System.Single ScaleValue::modelScale
	float ___modelScale_7;
	// System.Single ScaleValue::curModelScale
	float ___curModelScale_8;
	// System.Single ScaleValue::sliderModelScale
	float ___sliderModelScale_9;
	// UIManager ScaleValue::m_UIManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___m_UIManager_10;

public:
	inline static int32_t get_offset_of_scaleValues_4() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___scaleValues_4)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_scaleValues_4() const { return ___scaleValues_4; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_scaleValues_4() { return &___scaleValues_4; }
	inline void set_scaleValues_4(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___scaleValues_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleValues_4), (void*)value);
	}

	inline static int32_t get_offset_of_showScaleValues_5() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___showScaleValues_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_showScaleValues_5() const { return ___showScaleValues_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_showScaleValues_5() { return &___showScaleValues_5; }
	inline void set_showScaleValues_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___showScaleValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showScaleValues_5), (void*)value);
	}

	inline static int32_t get_offset_of_curIndex_6() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___curIndex_6)); }
	inline int32_t get_curIndex_6() const { return ___curIndex_6; }
	inline int32_t* get_address_of_curIndex_6() { return &___curIndex_6; }
	inline void set_curIndex_6(int32_t value)
	{
		___curIndex_6 = value;
	}

	inline static int32_t get_offset_of_modelScale_7() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___modelScale_7)); }
	inline float get_modelScale_7() const { return ___modelScale_7; }
	inline float* get_address_of_modelScale_7() { return &___modelScale_7; }
	inline void set_modelScale_7(float value)
	{
		___modelScale_7 = value;
	}

	inline static int32_t get_offset_of_curModelScale_8() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___curModelScale_8)); }
	inline float get_curModelScale_8() const { return ___curModelScale_8; }
	inline float* get_address_of_curModelScale_8() { return &___curModelScale_8; }
	inline void set_curModelScale_8(float value)
	{
		___curModelScale_8 = value;
	}

	inline static int32_t get_offset_of_sliderModelScale_9() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___sliderModelScale_9)); }
	inline float get_sliderModelScale_9() const { return ___sliderModelScale_9; }
	inline float* get_address_of_sliderModelScale_9() { return &___sliderModelScale_9; }
	inline void set_sliderModelScale_9(float value)
	{
		___sliderModelScale_9 = value;
	}

	inline static int32_t get_offset_of_m_UIManager_10() { return static_cast<int32_t>(offsetof(ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7, ___m_UIManager_10)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_m_UIManager_10() const { return ___m_UIManager_10; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_m_UIManager_10() { return &___m_UIManager_10; }
	inline void set_m_UIManager_10(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___m_UIManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UIManager_10), (void*)value);
	}
};


// StateManager
struct StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// EnumState StateManager::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_4;
	// System.Action`1<EnumState> StateManager::onChangeState
	Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * ___onChangeState_5;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47, ___U3CstateU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateU3Ek__BackingField_4() const { return ___U3CstateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateU3Ek__BackingField_4() { return &___U3CstateU3Ek__BackingField_4; }
	inline void set_U3CstateU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_onChangeState_5() { return static_cast<int32_t>(offsetof(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47, ___onChangeState_5)); }
	inline Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * get_onChangeState_5() const { return ___onChangeState_5; }
	inline Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E ** get_address_of_onChangeState_5() { return &___onChangeState_5; }
	inline void set_onChangeState_5(Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * value)
	{
		___onChangeState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onChangeState_5), (void*)value);
	}
};

struct StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_StaticFields
{
public:
	// StateManager StateManager::instance
	StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_StaticFields, ___instance_6)); }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * get_instance_6() const { return ___instance_6; }
	inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ARTapToPlaceObject UIManager::m_ARTapToPlace
	ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * ___m_ARTapToPlace_4;
	// ModelEdit UIManager::m_ModelEdit
	ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * ___m_ModelEdit_5;
	// UnityEngine.GameObject UIManager::m_MainPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_MainPanel_6;
	// UnityEngine.GameObject UIManager::m_SelectModelsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_SelectModelsPanel_7;
	// UnityEngine.GameObject UIManager::m_EditModelPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_EditModelPanel_8;
	// UnityEngine.GameObject UIManager::m_NoticePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_NoticePanel_9;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_DicAllModels
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___m_DicAllModels_10;
	// UnityEngine.UI.Button UIManager::m_CloseSelectModelsPanelButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_CloseSelectModelsPanelButton_11;
	// System.String UIManager::m_ModelsPath
	String_t* ___m_ModelsPath_12;
	// UnityEngine.GameObject UIManager::m_BtnAddModels
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_BtnAddModels_13;
	// UnityEngine.GameObject UIManager::m_PreviewPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PreviewPrefab_14;
	// UnityEngine.Transform UIManager::m_PreviewParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_PreviewParent_15;
	// System.String UIManager::m_PreviewPath
	String_t* ___m_PreviewPath_16;
	// UnityEngine.UI.Button UIManager::m_DeleteSelectedModelButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_DeleteSelectedModelButton_17;
	// UnityEngine.UI.Button UIManager::m_EditCompleteButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_EditCompleteButton_18;
	// UnityEngine.UI.Button UIManager::m_SmallButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_SmallButton_19;
	// UnityEngine.UI.Button UIManager::m_BigButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_BigButton_20;
	// UnityEngine.UI.Button UIManager::m_RecoveryButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_RecoveryButton_21;
	// UnityEngine.UI.Button UIManager::m_SwitchMatButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_SwitchMatButton_22;
	// UnityEngine.UI.Slider UIManager::m_SliderButton
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___m_SliderButton_23;
	// UnityEngine.UI.Slider UIManager::m_LightSliderButton
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___m_LightSliderButton_24;
	// UnityEngine.Transform UIManager::globeLight
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___globeLight_25;
	// UnityEngine.UI.Text UIManager::m_ScaleTipsPanel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ScaleTipsPanel_26;
	// UnityEngine.UI.Text UIManager::m_FocusTipsPanel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_FocusTipsPanel_27;

public:
	inline static int32_t get_offset_of_m_ARTapToPlace_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_ARTapToPlace_4)); }
	inline ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * get_m_ARTapToPlace_4() const { return ___m_ARTapToPlace_4; }
	inline ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 ** get_address_of_m_ARTapToPlace_4() { return &___m_ARTapToPlace_4; }
	inline void set_m_ARTapToPlace_4(ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * value)
	{
		___m_ARTapToPlace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ARTapToPlace_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ModelEdit_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_ModelEdit_5)); }
	inline ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * get_m_ModelEdit_5() const { return ___m_ModelEdit_5; }
	inline ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 ** get_address_of_m_ModelEdit_5() { return &___m_ModelEdit_5; }
	inline void set_m_ModelEdit_5(ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * value)
	{
		___m_ModelEdit_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ModelEdit_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MainPanel_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_MainPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_MainPanel_6() const { return ___m_MainPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_MainPanel_6() { return &___m_MainPanel_6; }
	inline void set_m_MainPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_MainPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MainPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectModelsPanel_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_SelectModelsPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_SelectModelsPanel_7() const { return ___m_SelectModelsPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_SelectModelsPanel_7() { return &___m_SelectModelsPanel_7; }
	inline void set_m_SelectModelsPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_SelectModelsPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectModelsPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_EditModelPanel_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_EditModelPanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_EditModelPanel_8() const { return ___m_EditModelPanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_EditModelPanel_8() { return &___m_EditModelPanel_8; }
	inline void set_m_EditModelPanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_EditModelPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EditModelPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_NoticePanel_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_NoticePanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_NoticePanel_9() const { return ___m_NoticePanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_NoticePanel_9() { return &___m_NoticePanel_9; }
	inline void set_m_NoticePanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_NoticePanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NoticePanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_DicAllModels_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_DicAllModels_10)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_m_DicAllModels_10() const { return ___m_DicAllModels_10; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_m_DicAllModels_10() { return &___m_DicAllModels_10; }
	inline void set_m_DicAllModels_10(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___m_DicAllModels_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DicAllModels_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CloseSelectModelsPanelButton_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_CloseSelectModelsPanelButton_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_CloseSelectModelsPanelButton_11() const { return ___m_CloseSelectModelsPanelButton_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_CloseSelectModelsPanelButton_11() { return &___m_CloseSelectModelsPanelButton_11; }
	inline void set_m_CloseSelectModelsPanelButton_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_CloseSelectModelsPanelButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CloseSelectModelsPanelButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ModelsPath_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_ModelsPath_12)); }
	inline String_t* get_m_ModelsPath_12() const { return ___m_ModelsPath_12; }
	inline String_t** get_address_of_m_ModelsPath_12() { return &___m_ModelsPath_12; }
	inline void set_m_ModelsPath_12(String_t* value)
	{
		___m_ModelsPath_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ModelsPath_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_BtnAddModels_13() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_BtnAddModels_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_BtnAddModels_13() const { return ___m_BtnAddModels_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_BtnAddModels_13() { return &___m_BtnAddModels_13; }
	inline void set_m_BtnAddModels_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_BtnAddModels_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BtnAddModels_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviewPrefab_14() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_PreviewPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PreviewPrefab_14() const { return ___m_PreviewPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PreviewPrefab_14() { return &___m_PreviewPrefab_14; }
	inline void set_m_PreviewPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PreviewPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviewPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviewParent_15() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_PreviewParent_15)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_PreviewParent_15() const { return ___m_PreviewParent_15; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_PreviewParent_15() { return &___m_PreviewParent_15; }
	inline void set_m_PreviewParent_15(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_PreviewParent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviewParent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviewPath_16() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_PreviewPath_16)); }
	inline String_t* get_m_PreviewPath_16() const { return ___m_PreviewPath_16; }
	inline String_t** get_address_of_m_PreviewPath_16() { return &___m_PreviewPath_16; }
	inline void set_m_PreviewPath_16(String_t* value)
	{
		___m_PreviewPath_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviewPath_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeleteSelectedModelButton_17() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_DeleteSelectedModelButton_17)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_DeleteSelectedModelButton_17() const { return ___m_DeleteSelectedModelButton_17; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_DeleteSelectedModelButton_17() { return &___m_DeleteSelectedModelButton_17; }
	inline void set_m_DeleteSelectedModelButton_17(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_DeleteSelectedModelButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeleteSelectedModelButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_EditCompleteButton_18() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_EditCompleteButton_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_EditCompleteButton_18() const { return ___m_EditCompleteButton_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_EditCompleteButton_18() { return &___m_EditCompleteButton_18; }
	inline void set_m_EditCompleteButton_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_EditCompleteButton_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EditCompleteButton_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_SmallButton_19() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_SmallButton_19)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_SmallButton_19() const { return ___m_SmallButton_19; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_SmallButton_19() { return &___m_SmallButton_19; }
	inline void set_m_SmallButton_19(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_SmallButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SmallButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_BigButton_20() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_BigButton_20)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_BigButton_20() const { return ___m_BigButton_20; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_BigButton_20() { return &___m_BigButton_20; }
	inline void set_m_BigButton_20(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_BigButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BigButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_RecoveryButton_21() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_RecoveryButton_21)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_RecoveryButton_21() const { return ___m_RecoveryButton_21; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_RecoveryButton_21() { return &___m_RecoveryButton_21; }
	inline void set_m_RecoveryButton_21(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_RecoveryButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RecoveryButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_SwitchMatButton_22() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_SwitchMatButton_22)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_SwitchMatButton_22() const { return ___m_SwitchMatButton_22; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_SwitchMatButton_22() { return &___m_SwitchMatButton_22; }
	inline void set_m_SwitchMatButton_22(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_SwitchMatButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SwitchMatButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderButton_23() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_SliderButton_23)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_m_SliderButton_23() const { return ___m_SliderButton_23; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_m_SliderButton_23() { return &___m_SliderButton_23; }
	inline void set_m_SliderButton_23(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___m_SliderButton_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderButton_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightSliderButton_24() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_LightSliderButton_24)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_m_LightSliderButton_24() const { return ___m_LightSliderButton_24; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_m_LightSliderButton_24() { return &___m_LightSliderButton_24; }
	inline void set_m_LightSliderButton_24(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___m_LightSliderButton_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightSliderButton_24), (void*)value);
	}

	inline static int32_t get_offset_of_globeLight_25() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___globeLight_25)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_globeLight_25() const { return ___globeLight_25; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_globeLight_25() { return &___globeLight_25; }
	inline void set_globeLight_25(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___globeLight_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globeLight_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleTipsPanel_26() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_ScaleTipsPanel_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ScaleTipsPanel_26() const { return ___m_ScaleTipsPanel_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ScaleTipsPanel_26() { return &___m_ScaleTipsPanel_26; }
	inline void set_m_ScaleTipsPanel_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ScaleTipsPanel_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleTipsPanel_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusTipsPanel_27() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___m_FocusTipsPanel_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_FocusTipsPanel_27() const { return ___m_FocusTipsPanel_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_FocusTipsPanel_27() { return &___m_FocusTipsPanel_27; }
	inline void set_m_FocusTipsPanel_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_FocusTipsPanel_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusTipsPanel_27), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_6;

public:
	inline static int32_t get_offset_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___U3CcurrentConfigurationU3Ek__BackingField_4)); }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  get_U3CcurrentConfigurationU3Ek__BackingField_4() const { return ___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494 * get_address_of_U3CcurrentConfigurationU3Ek__BackingField_4() { return &___U3CcurrentConfigurationU3Ek__BackingField_4; }
	inline void set_U3CcurrentConfigurationU3Ek__BackingField_4(Nullable_1_t0FF36C2ABCA6430FFCD4ED32922F18F36382E494  value)
	{
		___U3CcurrentConfigurationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_5() const { return ___m_DefaultConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_5() { return &___m_DefaultConfigurationChooser_5; }
	inline void set_m_DefaultConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_6() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_6)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_6() const { return ___m_ConfigurationChooser_6; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_6() { return &___m_ConfigurationChooser_6; }
	inline void set_m_ConfigurationChooser_6(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045  : public SubsystemLifecycleManager_3_t0541A12A544D670B641A4F64D8959D69726CCB6D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_Trackables_9)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045, ___m_PendingAdds_10)); }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t1D1E85AC0F638F3FF58F627822C66DECBAE7C06C * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Added_11)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Updated_12)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045_StaticFields, ___s_Removed_13)); }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t75314E6BE9CE5BE892C6B190246D0554A1F77AA7 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216  : public XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::<sessionDelegate>k__BackingField
	ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE * ___U3CsessionDelegateU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CsessionDelegateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216, ___U3CsessionDelegateU3Ek__BackingField_7)); }
	inline ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE * get_U3CsessionDelegateU3Ek__BackingField_7() const { return ___U3CsessionDelegateU3Ek__BackingField_7; }
	inline ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE ** get_address_of_U3CsessionDelegateU3Ek__BackingField_7() { return &___U3CsessionDelegateU3Ek__BackingField_7; }
	inline void set_U3CsessionDelegateU3Ek__BackingField_7(ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE * value)
	{
		___U3CsessionDelegateU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionDelegateU3Ek__BackingField_7), (void*)value);
	}
};

struct ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * ___s_OnAsyncWorldMapCompleted_8;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_8() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_StaticFields, ___s_OnAsyncWorldMapCompleted_8)); }
	inline OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * get_s_OnAsyncWorldMapCompleted_8() const { return ___s_OnAsyncWorldMapCompleted_8; }
	inline OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF ** get_address_of_s_OnAsyncWorldMapCompleted_8() { return &___s_OnAsyncWorldMapCompleted_8; }
	inline void set_s_OnAsyncWorldMapCompleted_8(OnAsyncConversionCompleteDelegate_tFE6205610918E7A87E7867F879A863FD2FE8ECDF * value)
	{
		___s_OnAsyncWorldMapCompleted_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_8), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}

	inline static int32_t get_offset_of_m_VSyncCount_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_VSyncCount_11)); }
	inline int32_t get_m_VSyncCount_11() const { return ___m_VSyncCount_11; }
	inline int32_t* get_address_of_m_VSyncCount_11() { return &___m_VSyncCount_11; }
	inline void set_m_VSyncCount_11(int32_t value)
	{
		___m_VSyncCount_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetFrameRate_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TargetFrameRate_12)); }
	inline int32_t get_m_TargetFrameRate_12() const { return ___m_TargetFrameRate_12; }
	inline int32_t* get_address_of_m_TargetFrameRate_12() { return &___m_TargetFrameRate_12; }
	inline void set_m_TargetFrameRate_12(int32_t value)
	{
		___m_TargetFrameRate_12 = value;
	}

	inline static int32_t get_offset_of_m_WasFrameRateSet_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_WasFrameRateSet_13)); }
	inline bool get_m_WasFrameRateSet_13() const { return ___m_WasFrameRateSet_13; }
	inline bool* get_address_of_m_WasFrameRateSet_13() { return &___m_WasFrameRateSet_13; }
	inline void set_m_WasFrameRateSet_13(bool value)
	{
		___m_WasFrameRateSet_13 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_14() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_14)); }
	inline int32_t get_s_State_14() const { return ___s_State_14; }
	inline int32_t* get_address_of_s_State_14() { return &___s_State_14; }
	inline void set_s_State_14(int32_t value)
	{
		___s_State_14 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_15() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_15)); }
	inline int32_t get_s_NotTrackingReason_15() const { return ___s_NotTrackingReason_15; }
	inline int32_t* get_address_of_s_NotTrackingReason_15() { return &___s_NotTrackingReason_15; }
	inline void set_s_NotTrackingReason_15(int32_t value)
	{
		___s_NotTrackingReason_15 = value;
	}

	inline static int32_t get_offset_of_s_Availability_16() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_16)); }
	inline int32_t get_s_Availability_16() const { return ___s_Availability_16; }
	inline int32_t* get_address_of_s_Availability_16() { return &___s_Availability_16; }
	inline void set_s_Availability_16(int32_t value)
	{
		___s_Availability_16 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891  : public ARTrackable_2_t3B4BDEC1C83B6E52F03E653C10343E488761AF0B
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;

public:
	inline static int32_t get_offset_of_m_VertexChangedThreshold_7() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_VertexChangedThreshold_7)); }
	inline float get_m_VertexChangedThreshold_7() const { return ___m_VertexChangedThreshold_7; }
	inline float* get_address_of_m_VertexChangedThreshold_7() { return &___m_VertexChangedThreshold_7; }
	inline void set_m_VertexChangedThreshold_7(float value)
	{
		___m_VertexChangedThreshold_7 = value;
	}

	inline static int32_t get_offset_of_boundaryChanged_8() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___boundaryChanged_8)); }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * get_boundaryChanged_8() const { return ___boundaryChanged_8; }
	inline Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 ** get_address_of_boundaryChanged_8() { return &___boundaryChanged_8; }
	inline void set_boundaryChanged_8(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * value)
	{
		___boundaryChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsumedByU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___U3CsubsumedByU3Ek__BackingField_9)); }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * get_U3CsubsumedByU3Ek__BackingField_9() const { return ___U3CsubsumedByU3Ek__BackingField_9; }
	inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 ** get_address_of_U3CsubsumedByU3Ek__BackingField_9() { return &___U3CsubsumedByU3Ek__BackingField_9; }
	inline void set_U3CsubsumedByU3Ek__BackingField_9(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * value)
	{
		___U3CsubsumedByU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsumedByU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Boundary_10() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_Boundary_10)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_Boundary_10() const { return ___m_Boundary_10; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_Boundary_10() { return &___m_Boundary_10; }
	inline void set_m_Boundary_10(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_Boundary_10 = value;
	}

	inline static int32_t get_offset_of_m_OldBoundary_11() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_OldBoundary_11)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_OldBoundary_11() const { return ___m_OldBoundary_11; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_OldBoundary_11() { return &___m_OldBoundary_11; }
	inline void set_m_OldBoundary_11(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_OldBoundary_11 = value;
	}

	inline static int32_t get_offset_of_m_HasBoundaryChanged_12() { return static_cast<int32_t>(offsetof(ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891, ___m_HasBoundaryChanged_12)); }
	inline bool get_m_HasBoundaryChanged_12() const { return ___m_HasBoundaryChanged_12; }
	inline bool* get_address_of_m_HasBoundaryChanged_12() { return &___m_HasBoundaryChanged_12; }
	inline void set_m_HasBoundaryChanged_12(bool value)
	{
		___m_HasBoundaryChanged_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F  : public ARTrackableManager_5_t7935FE663E07F7F1A41BC72B99D0E6B3B2C0E045
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * ___m_Raycasters_19;

public:
	inline static int32_t get_offset_of_m_RaycastPrefab_14() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_RaycastPrefab_14() const { return ___m_RaycastPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_RaycastPrefab_14() { return &___m_RaycastPrefab_14; }
	inline void set_m_RaycastPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_RaycastPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_17() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastViewportDelegate_17)); }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * get_m_RaycastViewportDelegate_17() const { return ___m_RaycastViewportDelegate_17; }
	inline Func_4_t0D7774CBEE7827744440205CF327276346298BD3 ** get_address_of_m_RaycastViewportDelegate_17() { return &___m_RaycastViewportDelegate_17; }
	inline void set_m_RaycastViewportDelegate_17(Func_4_t0D7774CBEE7827744440205CF327276346298BD3 * value)
	{
		___m_RaycastViewportDelegate_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_18() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_RaycastRayDelegate_18)); }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * get_m_RaycastRayDelegate_18() const { return ___m_RaycastRayDelegate_18; }
	inline Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 ** get_address_of_m_RaycastRayDelegate_18() { return &___m_RaycastRayDelegate_18; }
	inline void set_m_RaycastRayDelegate_18(Func_4_tA3D41D485BD4C73DB44AAD0202CA90BA777C1197 * value)
	{
		___m_RaycastRayDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_19() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F, ___m_Raycasters_19)); }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * get_m_Raycasters_19() const { return ___m_Raycasters_19; }
	inline List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 ** get_address_of_m_Raycasters_19() { return &___m_Raycasters_19; }
	inline void set_m_Raycasters_19(List_1_t179D10142696C7C113D229AC6E1884F4B19CFE27 * value)
	{
		___m_Raycasters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_19), (void*)value);
	}
};

struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * ___s_NativeRaycastHits_16;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_15() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_RaycastHitComparer_15)); }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * get_s_RaycastHitComparer_15() const { return ___s_RaycastHitComparer_15; }
	inline Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE ** get_address_of_s_RaycastHitComparer_15() { return &___s_RaycastHitComparer_15; }
	inline void set_s_RaycastHitComparer_15(Comparison_1_t2171DE829C4A23A5663A53F71D283C076F5EFCBE * value)
	{
		___s_RaycastHitComparer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_16() { return static_cast<int32_t>(offsetof(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_StaticFields, ___s_NativeRaycastHits_16)); }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * get_s_NativeRaycastHits_16() const { return ___s_NativeRaycastHits_16; }
	inline List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 ** get_address_of_s_NativeRaycastHits_16() { return &___s_NativeRaycastHits_16; }
	inline void set_s_NativeRaycastHits_16(List_1_tAF78E49171E2C987480BE2F36E1E73CEFDA37469 * value)
	{
		___s_NativeRaycastHits_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_16), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  m_Items[1];

public:
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_3), (void*)NULL);
		#endif
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_gshared (Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * Component_GetComponent_TisARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2_mF6CC5EE67B706261E3771A64A0BD8EFEA2EEBC8F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * Component_GetComponent_TisARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891_m3289239E336CF5EB91676AD172F5F1B1E35B50F7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44 (Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m2C6F18F6A876A0CDC182820725A38A534B988BEE (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m806691C95E05CDBCB7637F6070F30860D9BF403B (ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * __this, Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * ___value0, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ARPlaneMeshVisualizer_get_mesh_m7E5CE302636B7C6F9578DBB9D0161CF96F5D7AB4_inline (ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * __this, const RuntimeMethod* method);
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_m241EDA47E1C4DECA8CCBC61D8DF6EC300546CDF0 (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m0AAD92A3D682C1DFC1B5630585550B6CAFBAFE32_inline (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m930BBB168BC46A7D03C0B460E571F3CF1B3D102D (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___channel0, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___uvs1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_m3745185BFF4D9B970DEB23EEB6FD93DCAFFA8C07 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, bool ___markNoLongerReadable0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARSession>()
inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystem()
inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline (SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * (*) (SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARKit.ARCoachingGoal UnityEngine.XR.ARKit.ARKitSessionSubsystem::get_requestedCoachingGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitSessionSubsystem_get_requestedCoachingGoal_mDA3163B6BC082F35E7147856A68B03FC90FA644D (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::get_supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::set_requestedCoachingGoal(UnityEngine.XR.ARKit.ARCoachingGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_set_requestedCoachingGoal_mF2643A11950740D4606EB9CF2D4601BE71C44C28 (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem::get_coachingActivatesAutomatically()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitSessionSubsystem_get_coachingActivatesAutomatically_mB132FC90894AFC9051CD997E0CFCC09B5E072FDA (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::set_coachingActivatesAutomatically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_set_coachingActivatesAutomatically_mF286C8C701D29BF991C00E6BDBE7A895327A3784 (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem::get_coachingOverlaySupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitSessionSubsystem_get_coachingOverlaySupported_mF715BCFDD5A8449E64F3C6474128432596A98346 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.CustomSessionDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSessionDelegate__ctor_m90330193C0F48FF70F11878743F7F11C4BF6FF0A (CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::set_sessionDelegate(UnityEngine.XR.ARKit.ARKitSessionDelegate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_set_sessionDelegate_m80E7DF5EEBCFAEF7C6FE0987DB267579C1EFDFB7_inline (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::ActivateCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_ActivateCoaching_m9E8AB9C2B5864679DB2CF8E2FF286E4493687A0B (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, bool ___animated0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::DisableCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_DisableCoaching_m2FA5EBF353B1497919DCCE3AECDFC6605CFE3990 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, bool ___animated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::SetCoachingActive(System.Boolean,UnityEngine.XR.ARKit.ARCoachingOverlayTransition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_SetCoachingActive_m1CB4555C939532781C30ED2D7AC0C484CE6DBEE6 (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, bool ___active0, int32_t ___transition1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB (const RuntimeMethod* method)
{
	return ((  ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ARTapToPlaceObject::createPlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_createPlacementIndicator_mB33D2B473CADFE469589FA1807A6E14865A985D8 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// System.Boolean ARTapToPlaceObject::isTouchUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_isTouchUI_m12CA9C02ACED139ED1F1E3601A82495EBFFA3051 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// StateManager StateManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A (const RuntimeMethod* method);
// EnumState StateManager::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StateManager_get_state_mBD582F098C1DA2426CC32A327D3A1C3AF2144DCD_inline (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ARTapToPlaceObject::get_objectToPlace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject ARTapToPlaceObject::get_placementIndicator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// System.Void ARTapToPlaceObject::updatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_updatePlacementPose_m69C95AF81BABE1C3FF4ED8D9E5D8931953BCDD32 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// System.Void ARTapToPlaceObject::updatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_updatePlacementIndicator_mB653242939B1624F7F705E3E04580EE92FE82D87 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void ARTapToPlaceObject::placeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_placeObject_m9A0030ED2552EFDD867CDE0D4CC973F07BAAB0A3 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// System.Void ARTapToPlaceObject::set_placementIndicator(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTapToPlaceObject_set_placementIndicator_m172533BFD71EE3B07BB6F0581FC55FDA385B7C32_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToScreenPoint_mE22A3D0085E534EF4D0591439EF15DDDB3181DF8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650 (ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, int32_t, const RuntimeMethod*))List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void ARTapToPlaceObject::addArrow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_addArrow_mEFA4CD62C4F53DD1C3E6B6B95242C23000B28E3B (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___models0, const RuntimeMethod* method);
// System.Void StateManager::ChangeState(EnumState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971 (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, int32_t ___state0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::AddComponent<ArrowItem>()
inline ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * GameObject_AddComponent_TisArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D_m89AE468155FB553E0D80A6F092021BB807BA1307 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void ArrowItem::set_arrows(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowItem_set_arrows_m8C22B10CD56C0D946D3F79FA37E1CA50FFF5073F_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void ArrowItem::set_target(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowItem_set_target_m63982FAE9261ECED699A1A4E91997DC841E4A6EA_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mE7043E54617B8289C81A1C7342FBE0AE448C9E3A (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, int32_t ___pointerId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201 (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *, const RuntimeMethod*))List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_gshared)(__this, method);
}
// UnityEngine.Transform ArrowItem::get_arrows()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method);
// System.Void ArrowItem::SetGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_SetGuid_mD7912258CD9FC86D9AC738B7082DAF73A953597E (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform ArrowItem::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ArrowItem_get_target_m64E11CBB4EE205E8D8AB9538143CC59C21AE5222_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ArrowItem::GetNode(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArrowItem_GetNode_m791CFD9A4C357BA9E941910243FE8D3C387BE218 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startpos1, float ___v2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 ArrowItem::GetNode2(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArrowItem_GetNode2_m7679437B41E674631EACD404D027B594CF87D926 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startpos1, float ___v2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UIManager>()
inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0 (const RuntimeMethod* method)
{
	return ((  UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Collections.IEnumerator CheckARSupport::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckARSupport_CheckSupport_m2A1B0007301D1737282B63A0EC09030C0479BD84 (CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void CheckARSupport/<CheckSupport>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckSupportU3Ed__2__ctor_m4C7A56BAF47B89701BFB3CFF689E2B181C1402E3 (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.DefaultARKitSessionDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultARKitSessionDelegate__ctor_m7DF439BB7CFA1FF95FA25AD6B29EC230A3D4C3F1 (DefaultARKitSessionDelegate_t7C6D81321CB37E084745A9EEA026C154ED2DB639 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean ModelEdit::isTouchUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelEdit_isTouchUI_mB84BC4905F535005451F678F63C72C0111B2B8AA (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Boolean ModelEdit::isClickModel(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelEdit_isClickModel_m76DA3DD3D654F28AF7985EB698E2BD5A885E9124 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector20, const RuntimeMethod* method);
// System.Void ModelEdit::showEditModeUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_showEditModeUI_mBBD3D76462873EC76098E0FAC754EB941C2EBC68 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void ModelEdit::moveModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_moveModel_mC60CC25544E57C7EBD84F5A8F01907B9D1BB2E6F (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void ModelEdit::rotateModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_rotateModel_m16A200B3BBC3D00E25FDDE9CEB6747684826103A (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m46E12070D6996F4C8C91D49ADC27C74AC1D6A3D8 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ScaleValue>()
inline ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ScaleValue::SmallScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_SmallScale_mB8833511147A4216285ACD07F7EB718F6C640C4D (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method);
// System.Void ScaleValue::BigScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_BigScale_m82DD13E4DC72E590415CC39C09A0EB8F32DCDFD6 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method);
// System.Void ScaleValue::Recovery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_Recovery_m3540037E60C51F3F4689D5826751064BC2EE93C0 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, float, const RuntimeMethod*))List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<StateManager>()
inline StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * GameObject_AddComponent_TisStateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_m8CB2DB08391E9E037FAEDD13211E83868E39BFF1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void StateManager::set_state(EnumState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateManager_set_state_mBBEECE4DF569BECCA87927899B9A423D5CCCBAE9_inline (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<EnumState>::Invoke(!0)
inline void Action_1_Invoke_m6796BE9D895FF15B1048799C0FD81A3AA436796C (Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E *, int32_t, const RuntimeMethod*))Action_1_Invoke_m2652E72792A278523D6D8962CBBEA84177BB4556_gshared)(__this, ___obj0, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<ARTapToPlaceObject>()
inline ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * Object_FindObjectOfType_TisARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92_m64543E9AD4622349900019CA342BEC34440DC990 (const RuntimeMethod* method)
{
	return ((  ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<ModelEdit>()
inline ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * Object_FindObjectOfType_TisModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779_m96F2CCF9B34D9CFD576352FB03D576078D594DAA (const RuntimeMethod* method)
{
	return ((  ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void System.Action`1<EnumState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A (Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m5A0949EFB73F1BDBEBE3CB814917A79FBF9B3DEA_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UIManager::loadModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_loadModels_m6820EBE55619AEFFFA61C8326F005A9168C8335E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::createPreviewItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_createPreviewItem_mFC2BE9B21A28AAD2060B400B7154C8673F37E17A (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0[] UnityEngine.Resources::LoadAll<UnityEngine.GameObject>(System.String)
inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* Resources_LoadAll_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7F4AACB6FB4C3F4473775872D231627FDA376FE8 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared)(___path0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78 (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// !!0[] UnityEngine.Resources::LoadAll<UnityEngine.Texture2D>(System.String)
inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* Resources_LoadAll_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_mFD471F1F0659F2CF80264CB9B862486BBD8DF6C9 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared)(___path0, method);
}
// System.Void UIManager/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m67C10507EB4AF9C6F2E7EA20960381B0A14DA056 (U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.RawImage>()
inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_AddComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m45E5597E9EB970A6935E26EBBF739F8DC469B402 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mC8C1096FDE613395828E8F21D280A012AA3EDADF (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, String_t* ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, String_t*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ARTapToPlaceObject::set_objectToPlace(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTapToPlaceObject_set_objectToPlace_m4E8EA3AE93F7D9BCB18DB6B06317CB44E7AA1103_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void ModelEdit::DeleteSelectedModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_DeleteSelectedModel_m3BCC62EC7A7FD8A67BACF2C6A2E01E900D1460AB (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void ModelEdit::EditComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_EditComplete_mBD3CE6B370DD69F00C9777263DE24304E8F9F862 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void ModelEdit::smallModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_smallModel_m5E74AED2A18611855C9D629CE5F79C3E3842B02D (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void ModelEdit::bigModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_bigModel_m83DDAE746D80F3EFACB2F6F69F9575C58ABF1E46 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void ModelEdit::recoveryModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_recoveryModel_m6F740EFAFD80FC0FFB2B8C68F9233F77FEDCCF2E (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_mCC906561CCCE269C11B69D2216C39120563F00FD (const RuntimeMethod* method);
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_mF45AE40F0F8A22E4EEF960BEBD434A7F7591CA67 (const RuntimeMethod* method);
// System.Void UIManager::ShowNotice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowNotice_mCDD5AE9023B32551A712CB694AEC61B62D2294B1 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0A79C1A3BEA9231B3E275AEE65DA7EE93B137E15 (U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * __this, const RuntimeMethod* method);
// System.Void UIManager::selectedModels(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_selectedModels_mA4AA7B90D7B52129335ABB3925267E5CC9EB0C7E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___modelName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m0AAD92A3D682C1DFC1B5630585550B6CAFBAFE32 (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->get_m_FeatheringWidth_4();
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_m4761377095817FA81908BC43FD08EF600F6CC231 (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->set_m_FeatheringWidth_4(L_0);
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_m7FD9AC4C30D2F12A0A30CC3CAD9EC6C17B07C45D (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2_mF6CC5EE67B706261E3771A64A0BD8EFEA2EEBC8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891_m3289239E336CF5EB91676AD172F5F1B1E35B50F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2_mF6CC5EE67B706261E3771A64A0BD8EFEA2EEBC8F(__this, /*hidden argument*/Component_GetComponent_TisARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2_mF6CC5EE67B706261E3771A64A0BD8EFEA2EEBC8F_RuntimeMethod_var);
		__this->set_m_PlaneMeshVisualizer_7(L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m87EEABB28FFB9E9553015DD36B7C6F7C45A7F537_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		__this->set_m_FeatheredPlaneMaterial_9(L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_3;
		L_3 = Component_GetComponent_TisARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891_m3289239E336CF5EB91676AD172F5F1B1E35B50F7(__this, /*hidden argument*/Component_GetComponent_TisARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891_m3289239E336CF5EB91676AD172F5F1B1E35B50F7_RuntimeMethod_var);
		__this->set_m_Plane_8(L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_mEE0AFFC028F876DE841312FEB8CA15FEAD105FE1 (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m354D58D0B29B40FE6D3A6689590E271D9282323F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_0 = __this->get_m_Plane_8();
		Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * L_1 = (Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 *)il2cpp_codegen_object_new(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593_il2cpp_TypeInfo_var);
		Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44(L_1, __this, (intptr_t)((intptr_t)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m354D58D0B29B40FE6D3A6689590E271D9282323F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_RuntimeMethod_var);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m2C6F18F6A876A0CDC182820725A38A534B988BEE(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m51213AC9D2DBD97C93CC41330F65D74661D5DC81 (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m354D58D0B29B40FE6D3A6689590E271D9282323F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_t6336725EC68CE9029844CBE72A7FE7374AD74891 * L_0 = __this->get_m_Plane_8();
		Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 * L_1 = (Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593 *)il2cpp_codegen_object_new(Action_1_tBBDACDE0F7A9CD846DD9E0B8E74D5E0CC3D6B593_il2cpp_TypeInfo_var);
		Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44(L_1, __this, (intptr_t)((intptr_t)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m354D58D0B29B40FE6D3A6689590E271D9282323F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5DD1993504D5D4F4D3440E6921B314BAE6F9DF44_RuntimeMethod_var);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m806691C95E05CDBCB7637F6070F30860D9BF403B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_m354D58D0B29B40FE6D3A6689590E271D9282323F (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, ARPlaneBoundaryChangedEventArgs_t6B93A5A70BFA40A2722C0351B2401EE7375D30D8  ___eventArgs0, const RuntimeMethod* method)
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * L_0 = __this->get_m_PlaneMeshVisualizer_7();
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m7E5CE302636B7C6F9578DBB9D0161CF96F5D7AB4_inline(L_0, /*hidden argument*/NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_m241EDA47E1C4DECA8CCBC61D8DF6EC300546CDF0(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_m241EDA47E1C4DECA8CCBC61D8DF6EC300546CDF0 (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_FeatheringUVs_5();
		NullCheck(L_2);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_2, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_FeatheringUVs_5();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560(L_3, /*hidden argument*/List_1_get_Capacity_mAC418E039767B67FB96CEEB8346318D632B95560_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		IL2CPP_RUNTIME_CLASS_INIT(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_6 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_FeatheringUVs_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD(L_6, L_7, /*hidden argument*/List_1_set_Capacity_mD9E34909DB3F53736021549C8651D0EE8A8E1CFD_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_8 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_9 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_Vertices_6();
		NullCheck(L_8);
		Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015(L_8, L_9, /*hidden argument*/NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_10 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_Vertices_6();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_Vertices_6();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_11, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		IL2CPP_RUNTIME_CLASS_INIT(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_14 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_Vertices_6();
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_17, /*hidden argument*/NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m0AAD92A3D682C1DFC1B5630585550B6CAFBAFE32_inline(__this, /*hidden argument*/NULL);
		float L_21;
		L_21 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)il2cpp_codegen_subtract((float)L_19, (float)L_20)), (0.00100000005f), /*hidden argument*/NULL);
		V_5 = ((float)((float)L_19/(float)L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->set_x_2(L_22);
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		IL2CPP_RUNTIME_CLASS_INIT(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_26 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_FeatheringUVs_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_26, L_27, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_31 = __this->get_m_FeatheredPlaneMaterial_9();
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, /*hidden argument*/NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// s_FeatheringUVs.Add(uv);
		IL2CPP_RUNTIME_CLASS_INIT(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_33 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_FeatheringUVs_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_33, L_34, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_35 = ___mesh0;
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_36 = ((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->get_s_FeatheringUVs_5();
		NullCheck(L_35);
		Mesh_SetUVs_m930BBB168BC46A7D03C0B460E571F3CF1B3D102D(L_35, 1, L_36, /*hidden argument*/NULL);
		// mesh.UploadMeshData(false);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_m3745185BFF4D9B970DEB23EEB6FD93DCAFFA8C07(L_37, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_mA27A238E88D5FBA54D4DDFE588080DD41B449A4C (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method)
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->set_m_FeatheringWidth_4((0.200000003f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_mF5C9F857AC060614B46B9359B3F0859FBC309DF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->set_s_FeatheringUVs_5(L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_1, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E_il2cpp_TypeInfo_var))->set_s_Vertices_6(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARKit.ARCoachingGoal UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::get_goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitCoachingOverlay_get_goal_m2C6FA956DF340A2C4B2185A6BD12C903BB66A7C5 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	{
		// if (GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_0;
		L_0 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_0);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_0, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_1, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return sessionSubsystem.requestedCoachingGoal;
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ARKitSessionSubsystem_get_requestedCoachingGoal_mDA3163B6BC082F35E7147856A68B03FC90FA644D(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001b:
	{
		// return (ARCoachingGoal)m_Goal;
		int32_t L_5 = __this->get_m_Goal_4();
		return (int32_t)(L_5);
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::set_goal(UnityEngine.XR.ARKit.ARCoachingGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_set_goal_m47E45877012A2DFAC383C9C9A1B03644D7B0AD01 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	{
		// m_Goal = (CoachingGoal)value;
		int32_t L_0 = ___value0;
		__this->set_m_Goal_4(L_0);
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_1;
		L_1 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2;
		L_2 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_2);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_3;
		L_3 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_2, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_3, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// sessionSubsystem.requestedCoachingGoal = value;
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_5 = V_0;
		int32_t L_6 = ___value0;
		NullCheck(L_5);
		ARKitSessionSubsystem_set_requestedCoachingGoal_mF2643A11950740D4606EB9CF2D4601BE71C44C28(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::get_activatesAutomatically()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCoachingOverlay_get_activatesAutomatically_mC0C9FDB4BE723C19A55BE8B4E6F80AA7A9460AE5 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	{
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_0;
		L_0 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1;
		L_1 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_1);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_1, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_2, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return sessionSubsystem.coachingActivatesAutomatically;
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = ARKitSessionSubsystem_get_coachingActivatesAutomatically_mB132FC90894AFC9051CD997E0CFCC09B5E072FDA(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0023:
	{
		// return m_ActivatesAutomatically;
		bool L_6 = __this->get_m_ActivatesAutomatically_5();
		return L_6;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::set_activatesAutomatically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_set_activatesAutomatically_mEC8D8B30A1B30E8E0B4CFEA835CC9B8746B0B675 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	{
		// m_ActivatesAutomatically = value;
		bool L_0 = ___value0;
		__this->set_m_ActivatesAutomatically_5(L_0);
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_1;
		L_1 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_2;
		L_2 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_2);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_3;
		L_3 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_2, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_3, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// sessionSubsystem.coachingActivatesAutomatically = value;
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_5 = V_0;
		bool L_6 = ___value0;
		NullCheck(L_5);
		ARKitSessionSubsystem_set_coachingActivatesAutomatically_mF286C8C701D29BF991C00E6BDBE7A895327A3784(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::get_supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ARKitSessionSubsystem.coachingOverlaySupported;
		IL2CPP_RUNTIME_CLASS_INIT(ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ARKitSessionSubsystem_get_coachingOverlaySupported_mF715BCFDD5A8449E64F3C6474128432596A98346(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_OnEnable_m02BF954ED169B30E098223A8EA083057CA80B7DF (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16CDB511D09802498D436CB3132D02AF04FA9184);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	{
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_0;
		L_0 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1;
		L_1 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_1);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_1, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_2, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// sessionSubsystem.requestedCoachingGoal = (ARCoachingGoal)m_Goal;
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_4 = V_0;
		int32_t L_5 = __this->get_m_Goal_4();
		NullCheck(L_4);
		ARKitSessionSubsystem_set_requestedCoachingGoal_mF2643A11950740D4606EB9CF2D4601BE71C44C28(L_4, L_5, /*hidden argument*/NULL);
		// sessionSubsystem.coachingActivatesAutomatically = m_ActivatesAutomatically;
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_6 = V_0;
		bool L_7 = __this->get_m_ActivatesAutomatically_5();
		NullCheck(L_6);
		ARKitSessionSubsystem_set_coachingActivatesAutomatically_mF286C8C701D29BF991C00E6BDBE7A895327A3784(L_6, L_7, /*hidden argument*/NULL);
		// sessionSubsystem.sessionDelegate = new CustomSessionDelegate();
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_8 = V_0;
		CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941 * L_9 = (CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941 *)il2cpp_codegen_object_new(CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941_il2cpp_TypeInfo_var);
		CustomSessionDelegate__ctor_m90330193C0F48FF70F11878743F7F11C4BF6FF0A(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ARKitSessionSubsystem_set_sessionDelegate_m80E7DF5EEBCFAEF7C6FE0987DB267579C1EFDFB7_inline(L_8, L_9, /*hidden argument*/NULL);
		// if (m_ActivatesAutomatically)
		bool L_10 = __this->get_m_ActivatesAutomatically_5();
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// ActivateCoaching(true);
		ARKitCoachingOverlay_ActivateCoaching_m9E8AB9C2B5864679DB2CF8E2FF286E4493687A0B(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004f:
	{
		// Debug.LogError("ARCoachingOverlayView is not supported by this device.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral16CDB511D09802498D436CB3132D02AF04FA9184, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_OnDisable_m09B3B9BB9CDAD5443503D04B36BAE5CEA84CC313 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_0;
		L_0 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1;
		L_1 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_1);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_1, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		if (!((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_2, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		// if (m_ActivatesAutomatically)
		bool L_3 = __this->get_m_ActivatesAutomatically_5();
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// DisableCoaching(false);
		ARKitCoachingOverlay_DisableCoaching_m2FA5EBF353B1497919DCCE3AECDFC6605CFE3990(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::ActivateCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_ActivateCoaching_m9E8AB9C2B5864679DB2CF8E2FF286E4493687A0B (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, bool ___animated0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	int32_t G_B4_0 = 0;
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * G_B5_2 = NULL;
	{
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_0;
		L_0 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1;
		L_1 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_1);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_1, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_2, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// sessionSubsystem.SetCoachingActive(true, animated ? ARCoachingOverlayTransition.Animated : ARCoachingOverlayTransition.Instant);
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_4 = V_0;
		bool L_5 = ___animated0;
		G_B3_0 = 1;
		G_B3_1 = L_4;
		if (L_5)
		{
			G_B4_0 = 1;
			G_B4_1 = L_4;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0025:
	{
		NullCheck(G_B5_2);
		ARKitSessionSubsystem_SetCoachingActive_m1CB4555C939532781C30ED2D7AC0C484CE6DBEE6(G_B5_2, (bool)G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002b:
	{
		// throw new NotSupportedException("ARCoachingOverlay is not supported");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_6 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FC98656B2789037B2682120B8E7CC32487D487C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitCoachingOverlay_ActivateCoaching_m9E8AB9C2B5864679DB2CF8E2FF286E4493687A0B_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::DisableCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_DisableCoaching_m2FA5EBF353B1497919DCCE3AECDFC6605CFE3990 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, bool ___animated0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * V_0 = NULL;
	int32_t G_B4_0 = 0;
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * G_B5_2 = NULL;
	{
		// if (supported && GetComponent<ARSession>().subsystem is ARKitSessionSubsystem sessionSubsystem)
		bool L_0;
		L_0 = ARKitCoachingOverlay_get_supported_m52B7E0992610E6CD4CEA565BC952F23078B8B87E(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * L_1;
		L_1 = Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA(__this, /*hidden argument*/Component_GetComponent_TisARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_m36F585B55F8E63936E0B703C0F482F6A0BAF91FA_RuntimeMethod_var);
		NullCheck(L_1);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_inline(L_1, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m1CB0E048DB33AD44FF6724E80ACE72A0FF211C3E_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 *)IsInstSealed((RuntimeObject*)L_2, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216_il2cpp_TypeInfo_var));
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// sessionSubsystem.SetCoachingActive(false, animated ? ARCoachingOverlayTransition.Animated : ARCoachingOverlayTransition.Instant);
		ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * L_4 = V_0;
		bool L_5 = ___animated0;
		G_B3_0 = 0;
		G_B3_1 = L_4;
		if (L_5)
		{
			G_B4_0 = 0;
			G_B4_1 = L_4;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0025:
	{
		NullCheck(G_B5_2);
		ARKitSessionSubsystem_SetCoachingActive_m1CB4555C939532781C30ED2D7AC0C484CE6DBEE6(G_B5_2, (bool)G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002b:
	{
		// throw new NotSupportedException("ARCoachingOverlay is not supported");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_6 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FC98656B2789037B2682120B8E7CC32487D487C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitCoachingOverlay_DisableCoaching_m2FA5EBF353B1497919DCCE3AECDFC6605CFE3990_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARKitCoachingOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay__ctor_mA4F82369D31535E99798D8BB9C7869B00196F914 (ARKitCoachingOverlay_tB065BCA1AE682917BB39EB4DA90C154756EFF3C8 * __this, const RuntimeMethod* method)
{
	{
		// bool m_ActivatesAutomatically = true;
		__this->set_m_ActivatesAutomatically_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject ARTapToPlaceObject::get_objectToPlace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject objectToPlace { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CobjectToPlaceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ARTapToPlaceObject::set_objectToPlace(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_set_objectToPlace_m4E8EA3AE93F7D9BCB18DB6B06317CB44E7AA1103 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject objectToPlace { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CobjectToPlaceU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.GameObject ARTapToPlaceObject::get_placementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject placementIndicator { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CplacementIndicatorU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ARTapToPlaceObject::set_placementIndicator(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_set_placementIndicator_m172533BFD71EE3B07BB6F0581FC55FDA385B7C32 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject placementIndicator { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CplacementIndicatorU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ARTapToPlaceObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Awake_m50B743B0437E9C8D2F23AF9D5D8C2AE6619264BA (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FEF44B0C6F57161267A9BEE36DD66F5D18CD28C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7384B390657904D42964D483855B4C89ECAB1F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4D38CEF794B5644CDF61D9E24C50924719DB64);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B3_0 = NULL;
	Type_t * G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// m_ArrowPrefab = GameObject.Find("UIManager").transform.Find("ArrowItem").gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralBF4D38CEF794B5644CDF61D9E24C50924719DB64, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral7384B390657904D42964D483855B4C89ECAB1F1B, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		__this->set_m_ArrowPrefab_11(L_3);
		// m_ArrowPrefab.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_ArrowPrefab_11();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// m_ARRaycastManager = FindObjectOfType<ARRaycastManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_5;
		L_5 = Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB(/*hidden argument*/Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var);
		__this->set_m_ARRaycastManager_6(L_5);
		// if (m_ARRaycastManager == null)
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_6 = __this->get_m_ARRaycastManager_6();
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.LogError(GetType() + "/Awake()/ ARSessionOrigin is null");
		Type_t * L_8;
		L_8 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0056;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_005b;
	}

IL_0056:
	{
		NullCheck(G_B3_0);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_10;
	}

IL_005b:
	{
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B4_0, _stringLiteral5FEF44B0C6F57161267A9BEE36DD66F5D18CD28C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_11, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// createPlacementIndicator();
		ARTapToPlaceObject_createPlacementIndicator_mB33D2B473CADFE469589FA1807A6E14865A985D8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9ABD816A6568BAD4B448D99BAE9660B8E9446B33 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	{
		// if (isTouchUI()) return;
		bool L_0;
		L_0 = ARTapToPlaceObject_isTouchUI_m12CA9C02ACED139ED1F1E3601A82495EBFFA3051(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isTouchUI()) return;
		return;
	}

IL_0009:
	{
		// if (StateManager.Instance.state != EnumState.CreateModel || objectToPlace == null)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_1;
		L_1 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = StateManager_get_state_mBD582F098C1DA2426CC32A327D3A1C3AF2144DCD_inline(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}

IL_0024:
	{
		// placementIndicator?.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		NullCheck(G_B6_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B6_0, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0036:
	{
		// updatePlacementPose();
		ARTapToPlaceObject_updatePlacementPose_m69C95AF81BABE1C3FF4ED8D9E5D8931953BCDD32(__this, /*hidden argument*/NULL);
		// updatePlacementIndicator();
		ARTapToPlaceObject_updatePlacementIndicator_mB653242939B1624F7F705E3E04580EE92FE82D87(__this, /*hidden argument*/NULL);
		// if (m_PlacementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		bool L_7 = __this->get_m_PlacementPoseIsValid_8();
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8;
		L_8 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_9;
		L_9 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0068;
		}
	}
	{
		// placeObject();
		ARTapToPlaceObject_placeObject_m9A0030ED2552EFDD867CDE0D4CC973F07BAAB0A3(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::createPlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_createPlacementIndicator_mB33D2B473CADFE469589FA1807A6E14865A985D8 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55448740B872166E783A07CA70AF3537FE4B8B69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BBCC78A66B54D40A04EE9AACD1696178DCD43A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// placementIndicator = Instantiate(Resources.Load("Prefabs/Placement Indicator")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral5BBCC78A66B54D40A04EE9AACD1696178DCD43A9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_0, /*hidden argument*/NULL);
		ARTapToPlaceObject_set_placementIndicator_m172533BFD71EE3B07BB6F0581FC55FDA385B7C32_inline(__this, ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// placementIndicator.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// placementIndicator.name = "PlacementIndicator";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_3, _stringLiteral55448740B872166E783A07CA70AF3537FE4B8B69, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::updatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_updatePlacementPose_m69C95AF81BABE1C3FF4ED8D9E5D8931953BCDD32 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// m_ScreenCenter = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ViewportToScreenPoint_mE22A3D0085E534EF4D0591439EF15DDDB3181DF8(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		__this->set_m_ScreenCenter_10(L_3);
		// m_ARRaycastManager.Raycast(m_ScreenCenter, m_Hits, TrackableType.Planes);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_4 = __this->get_m_ARRaycastManager_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_m_ScreenCenter_10();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_6 = __this->get_m_Hits_9();
		NullCheck(L_4);
		bool L_7;
		L_7 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_4, L_5, L_6, ((int32_t)15), /*hidden argument*/NULL);
		// m_PlacementPoseIsValid = m_Hits.Count > 0;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_8 = __this->get_m_Hits_9();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline(L_8, /*hidden argument*/List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		__this->set_m_PlacementPoseIsValid_8((bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0));
		// if (m_PlacementPoseIsValid)
		bool L_10 = __this->get_m_PlacementPoseIsValid_8();
		if (!L_10)
		{
			goto IL_00b4;
		}
	}
	{
		// m_PlacementPose = m_Hits[0].pose;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_11 = __this->get_m_Hits_9();
		NullCheck(L_11);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_12;
		L_12 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_11, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_2 = L_12;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_13;
		L_13 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_2), /*hidden argument*/NULL);
		__this->set_m_PlacementPose_7(L_13);
		// var cameraForward = Camera.main.transform.forward;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
		L_14 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		float L_18 = L_17.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_18, (0.0f), L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_1 = L_22;
		// m_PlacementPose.rotation = Quaternion.LookRotation(cameraBearing);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_23 = __this->get_address_of_m_PlacementPose_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_24, /*hidden argument*/NULL);
		L_23->set_rotation_1(L_25);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::updatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_updatePlacementIndicator_mB653242939B1624F7F705E3E04580EE92FE82D87 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	{
		// placementIndicator?.SetActive(m_PlacementPoseIsValid);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0017;
	}

IL_000c:
	{
		bool L_2 = __this->get_m_PlacementPoseIsValid_8();
		NullCheck(G_B2_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B2_0, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// if(m_PlacementPoseIsValid)
		bool L_3 = __this->get_m_PlacementPoseIsValid_8();
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// placementIndicator.transform.SetPositionAndRotation(m_PlacementPose.position, m_PlacementPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_6 = __this->get_address_of_m_PlacementPose_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_8 = __this->get_address_of_m_PlacementPose_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8->get_rotation_1();
		NullCheck(L_5);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_5, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::placeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_placeObject_m9A0030ED2552EFDD867CDE0D4CC973F07BAAB0A3 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (objectToPlace == null) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (objectToPlace == null) return;
		return;
	}

IL_000f:
	{
		// GameObject item = Instantiate(objectToPlace, m_PlacementPose.position, m_PlacementPose.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B_inline(__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_3 = __this->get_address_of_m_PlacementPose_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_5 = __this->get_address_of_m_PlacementPose_7();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = L_5->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_4, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_7;
		// item.name = objectToPlace.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_10, /*hidden argument*/NULL);
		// addArrow(item);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		ARTapToPlaceObject_addArrow_mEFA4CD62C4F53DD1C3E6B6B95242C23000B28E3B(__this, L_11, /*hidden argument*/NULL);
		// StateManager.Instance.ChangeState(EnumState.Main);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_12;
		L_12 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_12);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_12, 0, /*hidden argument*/NULL);
		// placementIndicator.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::addArrow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_addArrow_mEFA4CD62C4F53DD1C3E6B6B95242C23000B28E3B (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___models0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D_m89AE468155FB553E0D80A6F092021BB807BA1307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject item= Instantiate(m_ArrowPrefab, m_ArrowPrefab.transform.parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_ArrowPrefab_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_ArrowPrefab_11();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_4;
		// ArrowItem arrowItem = models.AddComponent<ArrowItem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___models0;
		NullCheck(L_5);
		ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * L_6;
		L_6 = GameObject_AddComponent_TisArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D_m89AE468155FB553E0D80A6F092021BB807BA1307(L_5, /*hidden argument*/GameObject_AddComponent_TisArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D_m89AE468155FB553E0D80A6F092021BB807BA1307_RuntimeMethod_var);
		// arrowItem.arrows = item.transform;
		ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrowItem_set_arrows_m8C22B10CD56C0D946D3F79FA37E1CA50FFF5073F_inline(L_7, L_9, /*hidden argument*/NULL);
		// arrowItem.target = models.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ___models0;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrowItem_set_target_m63982FAE9261ECED699A1A4E91997DC841E4A6EA_inline(L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean ARTapToPlaceObject::isTouchUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTapToPlaceObject_isTouchUI_m12CA9C02ACED139ED1F1E3601A82495EBFFA3051 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0037;
		}
	}

IL_0011:
	{
		// if (Input.touchCount < 1) return false;
		int32_t L_2;
		L_2 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		// if (Input.touchCount < 1) return false;
		return (bool)0;
	}

IL_001b:
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return true;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_3;
		L_3 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = EventSystem_IsPointerOverGameObject_mE7043E54617B8289C81A1C7342FBE0AE448C9E3A(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return true;
		return (bool)1;
	}

IL_0037:
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject()) return true;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7;
		L_7 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject()) return true;
		return (bool)1;
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_mA8BB040C86A0EAB6CCA4A2BDA1E84E2FD9864556 (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> m_Hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_0 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_0, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		__this->set_m_Hits_9(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform ArrowItem::get_arrows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// public Transform arrows { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CarrowsU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ArrowItem::set_arrows(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_set_arrows_m8C22B10CD56C0D946D3F79FA37E1CA50FFF5073F (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform arrows { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CarrowsU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Transform ArrowItem::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ArrowItem_get_target_m64E11CBB4EE205E8D8AB9538143CC59C21AE5222 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// public Transform target { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CtargetU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ArrowItem::set_target(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_set_target_m63982FAE9261ECED699A1A4E91997DC841E4A6EA (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform target { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CtargetU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ArrowItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_Start_m3B4E7CB590238A696A02A7B3BA13E6975142735C (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// arrows.gameObject.SetActive(false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArrowItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_Update_m3142940A3F9B49DD5FFB6B29E0BF23FBAAAD3A40 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// SetGuid();
		ArrowItem_SetGuid_mD7912258CD9FC86D9AC738B7082DAF73A953597E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArrowItem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_OnDestroy_m974F60F45C278C0F3A9390DFA257A4853D63B8EB (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (arrows != null) Destroy(arrows.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (arrows != null) Destroy(arrows.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ArrowItem::SetGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem_SetGuid_mD7912258CD9FC86D9AC738B7082DAF73A953597E (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// if (target)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = ArrowItem_get_target_m64E11CBB4EE205E8D8AB9538143CC59C21AE5222_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0222;
		}
	}
	{
		// var pos = Camera.main.WorldToScreenPoint(target.transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = ArrowItem_get_target_m64E11CBB4EE205E8D8AB9538143CC59C21AE5222_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// var distance = Vector3.Distance(prePos, pos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_prePos_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9;
		L_9 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_7, L_8, /*hidden argument*/NULL);
		// if (distance < 1) {return; };
		if ((!(((float)L_9) < ((float)(1.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// if (distance < 1) {return; };
		return;
	}

IL_003f:
	{
		// prePos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		__this->set_prePos_6(L_10);
		// if (0 < pos.x && pos.x < Screen.width && pos.y > 0 && pos.y < Screen.height && pos.z > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_x_2();
		if ((!(((float)(0.0f)) < ((float)L_12))))
		{
			goto IL_009b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_x_2();
		int32_t L_15;
		L_15 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((!(((float)L_14) < ((float)((float)((float)L_15))))))
		{
			goto IL_009b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		float L_17 = L_16.get_y_3();
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		float L_19 = L_18.get_y_3();
		int32_t L_20;
		L_20 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		if ((!(((float)L_19) < ((float)((float)((float)L_20))))))
		{
			goto IL_009b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		float L_22 = L_21.get_z_4();
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// arrows.gameObject.SetActive(false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_009b:
	{
		// arrows.gameObject.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		// if (pos.z < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		float L_28 = L_27.get_z_4();
		if ((!(((float)L_28) < ((float)(0.0f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// pos = pos * -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, (-1.0f), /*hidden argument*/NULL);
		V_0 = L_30;
	}

IL_00c5:
	{
		// var startpos = new Vector3(Screen.width / 2f, Screen.height / 2f, 0);
		int32_t L_31;
		L_31 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_32;
		L_32 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)((float)((float)((float)L_31))/(float)(2.0f))), ((float)((float)((float)((float)L_32))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		// var dir = pos - startpos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		// float radians = Mathf.Atan2(dir.y, dir.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_2;
		float L_37 = L_36.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
		float L_39 = L_38.get_x_2();
		float L_40;
		L_40 = atan2f(L_37, L_39);
		// float angle = radians * Mathf.Rad2Deg;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_40, (float)(57.2957802f)));
		// arrows.localEulerAngles = new Vector3(0, 0, angle);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		float L_42 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_43), (0.0f), (0.0f), L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_41, L_43, /*hidden argument*/NULL);
		// float sereenangle = (float)Screen.height / (float)Screen.width;
		int32_t L_44;
		L_44 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_45;
		L_45 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_4 = ((float)((float)((float)((float)L_44))/(float)((float)((float)L_45))));
		// var va = System.Math.Abs(dir.y / dir.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_2;
		float L_47 = L_46.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_2;
		float L_49 = L_48.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_50;
		L_50 = fabsf(((float)((float)L_47/(float)L_49)));
		// if (va <= sereenangle)
		float L_51 = V_4;
		if ((!(((float)L_50) <= ((float)L_51))))
		{
			goto IL_01b6;
		}
	}
	{
		// var length = arrows.GetComponent<RectTransform>().sizeDelta.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_53;
		L_53 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_52, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_53);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54;
		L_54 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_x_0();
		V_5 = L_55;
		// if (pos.x < 0) arrows.transform.position = GetNode(pos, startpos, length * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_0;
		float L_57 = L_56.get_x_2();
		if ((!(((float)L_57) < ((float)(0.0f)))))
		{
			goto IL_018e;
		}
	}
	{
		// if (pos.x < 0) arrows.transform.position = GetNode(pos, startpos, length * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_58, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61 = V_1;
		float L_62 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = ArrowItem_GetNode_m791CFD9A4C357BA9E941910243FE8D3C387BE218(__this, L_60, L_61, ((float)il2cpp_codegen_multiply((float)L_62, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_59, L_63, /*hidden argument*/NULL);
		return;
	}

IL_018e:
	{
		// else arrows.transform.position = GetNode(pos, startpos, Screen.width - length * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_64, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_1;
		int32_t L_68;
		L_68 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_69 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = ArrowItem_GetNode_m791CFD9A4C357BA9E941910243FE8D3C387BE218(__this, L_66, L_67, ((float)il2cpp_codegen_subtract((float)((float)((float)L_68)), (float)((float)il2cpp_codegen_multiply((float)L_69, (float)(0.5f))))), /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_65, L_70, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01b6:
	{
		// var length = arrows.GetComponent<RectTransform>().sizeDelta.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_72;
		L_72 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_71, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_72);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73;
		L_73 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_x_0();
		V_6 = L_74;
		// if (pos.y < 0) arrows.transform.position = GetNode2(pos, startpos, length * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_0;
		float L_76 = L_75.get_y_3();
		if ((!(((float)L_76) < ((float)(0.0f)))))
		{
			goto IL_01fb;
		}
	}
	{
		// if (pos.y < 0) arrows.transform.position = GetNode2(pos, startpos, length * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_77, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_1;
		float L_81 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = ArrowItem_GetNode2_m7679437B41E674631EACD404D027B594CF87D926(__this, L_79, L_80, ((float)il2cpp_codegen_multiply((float)L_81, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_78, L_82, /*hidden argument*/NULL);
		return;
	}

IL_01fb:
	{
		// else arrows.transform.position = GetNode2(pos, startpos, Screen.height - length * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_83);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_83, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = V_1;
		int32_t L_87;
		L_87 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_88 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = ArrowItem_GetNode2_m7679437B41E674631EACD404D027B594CF87D926(__this, L_85, L_86, ((float)il2cpp_codegen_subtract((float)((float)((float)L_87)), (float)((float)il2cpp_codegen_multiply((float)L_88, (float)(0.5f))))), /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_84, L_89, /*hidden argument*/NULL);
	}

IL_0222:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ArrowItem::GetNode2(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArrowItem_GetNode2_m7679437B41E674631EACD404D027B594CF87D926 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startpos1, float ___v2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pos = new Vector3(pos.x, pos.y, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___pos0;
		float L_3 = L_2.get_y_3();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___pos0), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		// Vector3 ab = pos - startpos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___pos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___startpos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_5, /*hidden argument*/NULL);
		// Vector3 am = ab * (Mathf.Abs(startpos.y - v) / Mathf.Abs(pos.y - startpos.y));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___startpos1;
		float L_8 = L_7.get_y_3();
		float L_9 = ___v2;
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___pos0;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___startpos1;
		float L_14 = L_13.get_y_3();
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, ((float)((float)L_10/(float)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		// Vector3 om = startpos + am;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___startpos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		// return om;
		return L_19;
	}
}
// UnityEngine.Vector3 ArrowItem::GetNode(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ArrowItem_GetNode_m791CFD9A4C357BA9E941910243FE8D3C387BE218 (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startpos1, float ___v2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pos = new Vector3(pos.x, pos.y, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___pos0;
		float L_3 = L_2.get_y_3();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___pos0), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		// Vector3 ab = pos - startpos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___pos0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___startpos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_4, L_5, /*hidden argument*/NULL);
		// Vector3 am = ab * (Mathf.Abs(startpos.x - v) / Mathf.Abs(pos.x - startpos.x));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___startpos1;
		float L_8 = L_7.get_x_2();
		float L_9 = ___v2;
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___pos0;
		float L_12 = L_11.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___startpos1;
		float L_14 = L_13.get_x_2();
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, ((float)((float)L_10/(float)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		// Vector3 om = startpos + am;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___startpos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		// return om;
		return L_19;
	}
}
// System.Void ArrowItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowItem__ctor_m2E56642AEC6E8EC56866A9F784CF5E7B34C5015C (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// Vector3 prePos = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_prePos_6(L_0);
		// private float checkTime = 0.01f;
		__this->set_checkTime_7((0.00999999978f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CheckARSupport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckARSupport_Awake_mDDB8D1A99FDACB46F9E073877E9AD5706BF3FC89 (CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UIManager = FindObjectOfType<UIManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0;
		L_0 = Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0(/*hidden argument*/Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0_RuntimeMethod_var);
		__this->set_m_UIManager_4(L_0);
		// StartCoroutine(CheckSupport());
		RuntimeObject* L_1;
		L_1 = CheckARSupport_CheckSupport_m2A1B0007301D1737282B63A0EC09030C0479BD84(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CheckARSupport::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CheckARSupport_CheckSupport_m2A1B0007301D1737282B63A0EC09030C0479BD84 (CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * L_0 = (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B *)il2cpp_codegen_object_new(U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B_il2cpp_TypeInfo_var);
		U3CCheckSupportU3Ed__2__ctor_m4C7A56BAF47B89701BFB3CFF689E2B181C1402E3(L_0, 0, /*hidden argument*/NULL);
		U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void CheckARSupport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckARSupport__ctor_m3C5BB16F47CEE474D3975CB7678F4BA769EBEC62 (CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.Samples.CustomSessionDelegate::OnCoachingOverlayViewWillActivate(UnityEngine.XR.ARKit.ARKitSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSessionDelegate_OnCoachingOverlayViewWillActivate_m9D19F21C445FCBAB5F4F519344A483829297652C (CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941 * __this, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * ___sessionSubsystem0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CustomSessionDelegate::OnCoachingOverlayViewDidDeactivate(UnityEngine.XR.ARKit.ARKitSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSessionDelegate_OnCoachingOverlayViewDidDeactivate_m589A5E8ABFEA7121E31B51B2C1FA556B4BC0E813 (CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941 * __this, ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * ___sessionSubsystem0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.CustomSessionDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomSessionDelegate__ctor_m90330193C0F48FF70F11878743F7F11C4BF6FF0A (CustomSessionDelegate_t6C464319C1E71DDD47D0BDD1AD715FA994536941 * __this, const RuntimeMethod* method)
{
	{
		DefaultARKitSessionDelegate__ctor_m7DF439BB7CFA1FF95FA25AD6B29EC230A3D4C3F1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Define::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Define__ctor_m1F262655C800BB31FC6C1B2F80252497A69C1133 (Define_t02E0E01550937A70EF3AF8A3936BFF3CA41B7FC3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ModelEdit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_Awake_m75E2B29567561A60375095A7F33C0983A8CA971F (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ARRaycastManager = FindObjectOfType<ARRaycastManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_0;
		L_0 = Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB(/*hidden argument*/Object_FindObjectOfType_TisARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F_m00277159B601DCDCE9A6944F2B53AD5B228523CB_RuntimeMethod_var);
		__this->set_m_ARRaycastManager_4(L_0);
		// m_Camera = GameObject.Find("AR Camera").GetComponent<Camera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE3DB1B6CF792E1BF1AED62392910B83816D9FC52, /*hidden argument*/NULL);
		NullCheck(L_1);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_1, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		__this->set_m_Camera_7(L_2);
		// }
		return;
	}
}
// System.Void ModelEdit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_Update_m7047B2295B83AB2F0F44A8C999BA991B2EC60333 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	{
		// if (isTouchUI()) return;
		bool L_0;
		L_0 = ModelEdit_isTouchUI_mB84BC4905F535005451F678F63C72C0111B2B8AA(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isTouchUI()) return;
		return;
	}

IL_0009:
	{
		// if (StateManager.Instance.state != EnumState.Main && StateManager.Instance.state != EnumState.EditModel) return;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_1;
		L_1 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = StateManager_get_state_mBD582F098C1DA2426CC32A327D3A1C3AF2144DCD_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3;
		L_3 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = StateManager_get_state_mBD582F098C1DA2426CC32A327D3A1C3AF2144DCD_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0023;
		}
	}
	{
		// if (StateManager.Instance.state != EnumState.Main && StateManager.Instance.state != EnumState.EditModel) return;
		return;
	}

IL_0023:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// m_IsTouchModel = isClickModel(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = ModelEdit_isClickModel_m76DA3DD3D654F28AF7985EB698E2BD5A885E9124(__this, L_7, /*hidden argument*/NULL);
		__this->set_m_IsTouchModel_8(L_8);
		// if (m_IsTouchModel) showEditModeUI();
		bool L_9 = __this->get_m_IsTouchModel_8();
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		// if (m_IsTouchModel) showEditModeUI();
		ModelEdit_showEditModeUI_mBBD3D76462873EC76098E0FAC754EB941C2EBC68(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// if (Input.touchCount == 1&& m_IsTouchModel) moveModel();
		int32_t L_10;
		L_10 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		bool L_11 = __this->get_m_IsTouchModel_8();
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// if (Input.touchCount == 1&& m_IsTouchModel) moveModel();
		ModelEdit_moveModel_mC60CC25544E57C7EBD84F5A8F01907B9D1BB2E6F(__this, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// if (Input.touchCount >= 2) rotateModel();
		int32_t L_12;
		L_12 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0073;
		}
	}
	{
		// if (Input.touchCount >= 2) rotateModel();
		ModelEdit_rotateModel_m16A200B3BBC3D00E25FDDE9CEB6747684826103A(__this, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void ModelEdit::DeleteSelectedModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_DeleteSelectedModel_m3BCC62EC7A7FD8A67BACF2C6A2E01E900D1460AB (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_IsShowUI = false;
		__this->set_m_IsShowUI_9((bool)0);
		// if (m_SelectedModel != null) Destroy(m_SelectedModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (m_SelectedModel != null) Destroy(m_SelectedModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// StateManager.Instance.ChangeState(EnumState.Main);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3;
		L_3 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_3);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_3, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ModelEdit::EditComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_EditComplete_mBD3CE6B370DD69F00C9777263DE24304E8F9F862 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_IsShowUI = false;
		__this->set_m_IsShowUI_9((bool)0);
		// if (m_SelectedModel != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// m_SelectedModel = null;
		__this->set_m_SelectedModel_10((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_001c:
	{
		// StateManager.Instance.ChangeState(EnumState.Main);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_2;
		L_2 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_2);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_2, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean ModelEdit::isClickModel(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelEdit_isClickModel_m76DA3DD3D654F28AF7985EB698E2BD5A885E9124 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	bool G_B4_0 = false;
	bool G_B1_0 = false;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	{
		// Ray ray = m_Camera.ScreenPointToRay(vector2);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___vector20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		L_3 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_0, L_2, /*hidden argument*/NULL);
		// bool isCollider = Physics.Raycast(ray, out hitInfo, 1000, mask);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_mask_11();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Physics_Raycast_m46E12070D6996F4C8C91D49ADC27C74AC1D6A3D8(L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (1000.0f), L_5, /*hidden argument*/NULL);
		// if (isCollider)
		bool L_7 = L_6;
		G_B1_0 = L_7;
		if (!L_7)
		{
			G_B4_0 = L_7;
			goto IL_005a;
		}
	}
	{
		// GameObject selectedModel = hitInfo.transform.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (m_SelectedModel!=null&& m_SelectedModel!= selectedModel)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_11)
		{
			G_B3_0 = G_B1_0;
			goto IL_0053;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_m_SelectedModel_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, L_13, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
	}

IL_0053:
	{
		// m_SelectedModel = selectedModel;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_1;
		__this->set_m_SelectedModel_10(L_15);
		G_B4_0 = G_B3_0;
	}

IL_005a:
	{
		// return isCollider;
		return G_B4_0;
	}
}
// System.Boolean ModelEdit::isTouchUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelEdit_isTouchUI_mB84BC4905F535005451F678F63C72C0111B2B8AA (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0037;
		}
	}

IL_0011:
	{
		// if (Input.touchCount < 1) return false;
		int32_t L_2;
		L_2 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		// if (Input.touchCount < 1) return false;
		return (bool)0;
	}

IL_001b:
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return true;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_3;
		L_3 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_4;
		L_4 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_fingerId_mCED0E66949120E69BFE9294DC0A11A6F9FDBD129((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = EventSystem_IsPointerOverGameObject_mE7043E54617B8289C81A1C7342FBE0AE448C9E3A(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return true;
		return (bool)1;
	}

IL_0037:
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject()) return true;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7;
		L_7 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = EventSystem_IsPointerOverGameObject_m49888E0F63763086DCD74D5A6C5C5705A96F88EB(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject()) return true;
		return (bool)1;
	}

IL_0045:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ModelEdit::showEditModeUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_showEditModeUI_mBBD3D76462873EC76098E0FAC754EB941C2EBC68 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	{
		// if (m_IsShowUI) return;
		bool L_0 = __this->get_m_IsShowUI_9();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (m_IsShowUI) return;
		return;
	}

IL_0009:
	{
		// StateManager.Instance.ChangeState(EnumState.EditModel);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_1;
		L_1 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_1);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_1, 3, /*hidden argument*/NULL);
		// m_IsShowUI = true;
		__this->set_m_IsShowUI_9((bool)1);
		// }
		return;
	}
}
// System.Void ModelEdit::moveModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_moveModel_mC60CC25544E57C7EBD84F5A8F01907B9D1BB2E6F (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.touchCount == 0 || m_ARRaycastManager == null|| m_SelectedModel==null) return;
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_1 = __this->get_m_ARRaycastManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}

IL_0023:
	{
		// if (Input.touchCount == 0 || m_ARRaycastManager == null|| m_SelectedModel==null) return;
		return;
	}

IL_0024:
	{
		// var touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_5;
		L_5 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_5;
		// m_ARRaycastManager.Raycast(touch.position, m_Hits, TrackableType.Planes);
		ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * L_6 = __this->get_m_ARRaycastManager_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_8 = __this->get_m_Hits_5();
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mCC2851DAC2542C59528FCE21242231DFAF024650(L_6, L_7, L_8, ((int32_t)15), /*hidden argument*/NULL);
		// if (m_Hits.Count > 0)
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_10 = __this->get_m_Hits_5();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_inline(L_10, /*hidden argument*/List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		// m_PlacementPose = m_Hits[0].pose;
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_12 = __this->get_m_Hits_5();
		NullCheck(L_12);
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_13;
		L_13 = List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_inline(L_12, 0, /*hidden argument*/List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_RuntimeMethod_var);
		V_1 = L_13;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_14;
		L_14 = ARRaycastHit_get_pose_mB4D8BC45F23D9F2C2C8DCAFA88DB1221D76EF02B((ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E *)(&V_1), /*hidden argument*/NULL);
		__this->set_m_PlacementPose_6(L_14);
		// m_SelectedModel.transform.position = m_PlacementPose.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_m_SelectedModel_10();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_17 = __this->get_address_of_m_PlacementPose_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17->get_position_0();
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_18, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void ModelEdit::rotateModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_rotateModel_m16A200B3BBC3D00E25FDDE9CEB6747684826103A (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_SelectedModel == null) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_SelectedModel == null) return;
		return;
	}

IL_000f:
	{
		// oneFingerTouch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (oneFingerTouch.phase == TouchPhase.Moved)
		int32_t L_3;
		L_3 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		// Vector2 deltaPos = oneFingerTouch.deltaPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Touch_get_deltaPosition_mF9D60C253E41DC4E4F832F88A1041BE8A9E7C0FB((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// m_SelectedModel.transform.Rotate(new Vector3(0, deltaPos.x * 0.2f, 0), Space.World);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_m_SelectedModel_10();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_1;
		float L_8 = L_7.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (0.0f), ((float)il2cpp_codegen_multiply((float)L_8, (float)(0.200000003f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_6, L_9, 0, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void ModelEdit::smallModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_smallModel_m5E74AED2A18611855C9D629CE5F79C3E3842B02D (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SelectedModel == null) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_SelectedModel == null) return;
		return;
	}

IL_000f:
	{
		// m_SelectedModel.GetComponent<ScaleValue>().SmallScale();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_SelectedModel_10();
		NullCheck(L_2);
		ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * L_3;
		L_3 = GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4(L_2, /*hidden argument*/GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var);
		NullCheck(L_3);
		ScaleValue_SmallScale_mB8833511147A4216285ACD07F7EB718F6C640C4D(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ModelEdit::bigModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_bigModel_m83DDAE746D80F3EFACB2F6F69F9575C58ABF1E46 (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SelectedModel == null) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_SelectedModel == null) return;
		return;
	}

IL_000f:
	{
		// m_SelectedModel.GetComponent<ScaleValue>().BigScale();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_SelectedModel_10();
		NullCheck(L_2);
		ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * L_3;
		L_3 = GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4(L_2, /*hidden argument*/GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var);
		NullCheck(L_3);
		ScaleValue_BigScale_m82DD13E4DC72E590415CC39C09A0EB8F32DCDFD6(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ModelEdit::recoveryModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit_recoveryModel_m6F740EFAFD80FC0FFB2B8C68F9233F77FEDCCF2E (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SelectedModel == null) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_SelectedModel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_SelectedModel == null) return;
		return;
	}

IL_000f:
	{
		// m_SelectedModel.GetComponent<ScaleValue>().Recovery();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_SelectedModel_10();
		NullCheck(L_2);
		ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * L_3;
		L_3 = GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4(L_2, /*hidden argument*/GameObject_GetComponent_TisScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7_m3DC5679A8B2C48EE5EFDBB079A8A6CAACD8801F4_RuntimeMethod_var);
		NullCheck(L_3);
		ScaleValue_Recovery_m3540037E60C51F3F4689D5826751064BC2EE93C0(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ModelEdit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelEdit__ctor_m9A9A86D1ECA39445E9892968EEDBAFBFC71A60FA (ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> m_Hits = new List<ARRaycastHit>();
		List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * L_0 = (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D *)il2cpp_codegen_object_new(List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D_il2cpp_TypeInfo_var);
		List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201(L_0, /*hidden argument*/List_1__ctor_mC26889C0423CCF594A8C363532AC63BB0DB25201_RuntimeMethod_var);
		__this->set_m_Hits_5(L_0);
		// private LayerMask mask = 1 << 8;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(((int32_t)256), /*hidden argument*/NULL);
		__this->set_mask_11(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScaleValue::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_Start_mE6DDA9D8C99954C213D8B821A9582F760EBE59B8 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7DB288FB14CEF4B5DF769CCA964A340C64F910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A7F2C77435F27665A2EA7D069E4E1308D337AC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137570F3A6ECC8688E9B3553681C5E705A92A46C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral146097AA4F8DC0EC721293607B304B8286AEA537);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19FBA6E57EBD45B56EA79319FF36DDB927E60946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A502556BE6CA915B270385DE5CC53406E174D39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CFF0AB18D0D19248FDEB4C81A7045E55C85875F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2FF8B140D324DC7BA2D881AEFA7992C3C0742CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD398375464DFD7925879988CF444F0150A80C4F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UIManager = FindObjectOfType<UIManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0;
		L_0 = Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0(/*hidden argument*/Object_FindObjectOfType_TisUIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_m38487DBB2E23046B1BA76401E4AE7A8EA55F3CC0_RuntimeMethod_var);
		__this->set_m_UIManager_10(L_0);
		// scaleValues = new List<float>() { 0.2f, 0.25f, 0.5f, 0.625f, 1f, 1.25f, 2.5f, 5f, 10f };
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_1 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C(L_1, /*hidden argument*/List_1__ctor_m893CC03BA01C82718A6ED996182C83EA91A0E74C_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_2, (0.200000003f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_3, (0.25f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_4, (0.5f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_5, (0.625f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_6, (1.0f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_7, (1.25f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_8, (2.5f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_9, (5.0f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A(L_10, (10.0f), /*hidden argument*/List_1_Add_m0968C6D3DE1DE9278833352DD095B9ABCE91CD0A_RuntimeMethod_var);
		__this->set_scaleValues_4(L_10);
		// showScaleValues = new List<string>() { "-- 1:25 --", "-- 1:20 --", "-- 1:10 --", "-- 1:8 --", "-- 1:5 --", "-- 1:4 --", "-- 1:2 --", "-- 1:1 --", "-- 2:1 --"};
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_11, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_12, _stringLiteral8CFF0AB18D0D19248FDEB4C81A7045E55C85875F, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_13, _stringLiteralD398375464DFD7925879988CF444F0150A80C4F6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = L_13;
		NullCheck(L_14);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_14, _stringLiteral0A7F2C77435F27665A2EA7D069E4E1308D337AC2, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = L_14;
		NullCheck(L_15);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_15, _stringLiteral0A7DB288FB14CEF4B5DF769CCA964A340C64F910, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = L_15;
		NullCheck(L_16);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_16, _stringLiteral1A502556BE6CA915B270385DE5CC53406E174D39, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_17, _stringLiteral19FBA6E57EBD45B56EA79319FF36DDB927E60946, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_18, _stringLiteralC2FF8B140D324DC7BA2D881AEFA7992C3C0742CD, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_19 = L_18;
		NullCheck(L_19);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_19, _stringLiteral146097AA4F8DC0EC721293607B304B8286AEA537, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_20, _stringLiteral137570F3A6ECC8688E9B3553681C5E705A92A46C, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		__this->set_showScaleValues_5(L_20);
		// curIndex = 4;
		__this->set_curIndex_6(4);
		// }
		return;
	}
}
// System.Void ScaleValue::SmallScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_SmallScale_mB8833511147A4216285ACD07F7EB718F6C640C4D (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (curIndex >= 1)
		int32_t L_0 = __this->get_curIndex_6();
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0074;
		}
	}
	{
		// curIndex--;
		int32_t L_1 = __this->get_curIndex_6();
		__this->set_curIndex_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// float v = scaleValues[curIndex];
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_2 = __this->get_scaleValues_4();
		int32_t L_3 = __this->get_curIndex_6();
		NullCheck(L_2);
		float L_4;
		L_4 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		V_0 = L_4;
		// transform.localScale =  new Vector3(modelScale, modelScale, modelScale) * v;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_6 = __this->get_modelScale_7();
		float L_7 = __this->get_modelScale_7();
		float L_8 = __this->get_modelScale_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_11, /*hidden argument*/NULL);
		// curModelScale = modelScale * v;
		float L_12 = __this->get_modelScale_7();
		float L_13 = V_0;
		__this->set_curModelScale_8(((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)));
		// Debug.Log(transform.localScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15;
		RuntimeObject * L_17 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void ScaleValue::BigScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_BigScale_m82DD13E4DC72E590415CC39C09A0EB8F32DCDFD6 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (curIndex <= 7)
		int32_t L_0 = __this->get_curIndex_6();
		if ((((int32_t)L_0) > ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		// curIndex++;
		int32_t L_1 = __this->get_curIndex_6();
		__this->set_curIndex_6(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// float v = scaleValues[curIndex];
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_2 = __this->get_scaleValues_4();
		int32_t L_3 = __this->get_curIndex_6();
		NullCheck(L_2);
		float L_4;
		L_4 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		V_0 = L_4;
		// transform.localScale = new Vector3(modelScale, modelScale, modelScale) * v;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_6 = __this->get_modelScale_7();
		float L_7 = __this->get_modelScale_7();
		float L_8 = __this->get_modelScale_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_11, /*hidden argument*/NULL);
		// curModelScale = modelScale * v;
		float L_12 = __this->get_modelScale_7();
		float L_13 = V_0;
		__this->set_curModelScale_8(((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void ScaleValue::Recovery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_Recovery_m3540037E60C51F3F4689D5826751064BC2EE93C0 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method)
{
	{
		// modelScale = 1;
		__this->set_modelScale_7((1.0f));
		// curModelScale = 1;
		__this->set_curModelScale_8((1.0f));
		// transform.localScale = new Vector3(1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// curIndex = 4;
		__this->set_curIndex_6(4);
		// }
		return;
	}
}
// System.Void ScaleValue::ChangeModelScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue_ChangeModelScale_mBCDAC6BAC0257BF2085A573B916DE7C59FACECE7 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, float ___v0, const RuntimeMethod* method)
{
	{
		// transform.localScale = new Vector3(curModelScale, curModelScale, curModelScale) * v;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_curModelScale_8();
		float L_2 = __this->get_curModelScale_8();
		float L_3 = __this->get_curModelScale_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = ___v0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScaleValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleValue__ctor_m0516D6D2F46701C527C2E876306F01E75CB48959 (ScaleValue_tA06560EB3A622B164B8573C748F1B6A4E0929BC7 * __this, const RuntimeMethod* method)
{
	{
		// private float modelScale = 1;
		__this->set_modelScale_7((1.0f));
		// private float curModelScale = 1;
		__this->set_curModelScale_8((1.0f));
		// private float sliderModelScale = 1;
		__this->set_sliderModelScale_9((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// EnumState StateManager::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_get_state_mBD582F098C1DA2426CC32A327D3A1C3AF2144DCD (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, const RuntimeMethod* method)
{
	{
		// public EnumState state { get; private set; } = EnumState.SelectModel;
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void StateManager::set_state(EnumState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager_set_state_mBBEECE4DF569BECCA87927899B9A423D5CCCBAE9 (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public EnumState state { get; private set; } = EnumState.SelectModel;
		int32_t L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_4(L_0);
		return;
	}
}
// StateManager StateManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_m8CB2DB08391E9E037FAEDD13211E83868E39BFF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43D8C366F728FB5A5394C770DA71D1516F400C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0 = ((StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// instance = new GameObject("_StateManager").AddComponent<StateManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteralD43D8C366F728FB5A5394C770DA71D1516F400C4, /*hidden argument*/NULL);
		NullCheck(L_2);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3;
		L_3 = GameObject_AddComponent_TisStateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_m8CB2DB08391E9E037FAEDD13211E83868E39BFF1(L_2, /*hidden argument*/GameObject_AddComponent_TisStateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_m8CB2DB08391E9E037FAEDD13211E83868E39BFF1_RuntimeMethod_var);
		((StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_il2cpp_TypeInfo_var))->set_instance_6(L_3);
	}

IL_0021:
	{
		// return instance;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_4 = ((StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47_il2cpp_TypeInfo_var))->get_instance_6();
		return L_4;
	}
}
// System.Void StateManager::ChangeState(EnumState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971 (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6796BE9D895FF15B1048799C0FD81A3AA436796C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.state = state;
		int32_t L_0 = ___state0;
		StateManager_set_state_mBBEECE4DF569BECCA87927899B9A423D5CCCBAE9_inline(__this, L_0, /*hidden argument*/NULL);
		// if (onChangeState != null) onChangeState(state);
		Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * L_1 = __this->get_onChangeState_5();
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (onChangeState != null) onChangeState(state);
		Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * L_2 = __this->get_onChangeState_5();
		int32_t L_3 = ___state0;
		NullCheck(L_2);
		Action_1_Invoke_m6796BE9D895FF15B1048799C0FD81A3AA436796C(L_2, L_3, /*hidden argument*/Action_1_Invoke_m6796BE9D895FF15B1048799C0FD81A3AA436796C_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void StateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager__ctor_m4A246D6AB96FF1FF10BF145B75F8EFEB1FB2CAC1 (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, const RuntimeMethod* method)
{
	{
		// public EnumState state { get; private set; } = EnumState.SelectModel;
		__this->set_U3CstateU3Ek__BackingField_4(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mCED93604270B1E209B4E0D32F6A26DDC5AB06E30 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92_m64543E9AD4622349900019CA342BEC34440DC990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779_m96F2CCF9B34D9CFD576352FB03D576078D594DAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__24_1_mE7997573DA0A7D2D1B193490A5F1434C7C58B4B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CAwakeU3Eb__24_0_mE2631E2131393A84D36EFF0DC07934415C7EB080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CAwakeU3Eb__24_2_m04324003068A18D601C42F7CF094551309AE1083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CAwakeU3Eb__24_3_m5F28E85C4D27EE1AAF46F0C5269A2FC36CAA483F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CAwakeU3Eb__24_4_m2AC499083246E61F902BFF2B99CB578496EF9728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CAwakeU3Eb__24_5_m7E42A29FEC83192E28D186F9B2162832DE883D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3CAwakeU3Eb__24_6_mF272246B1A793C28CECFDF77BB9AE73F5F35A2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_clickAddModelButton_mF1E14004F844FBF27C62623FECC6E2CB0CA80451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_onChangeState_m26D4724A89CA6BC53EA5DED1C9DDE5784F7ACC74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0062DFB0FBA6BCB8CABD16BCCE2D4BF81D7520C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E4AAE57256D86713ECC6CFE1A2224442DE0BECB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC8E605BF3CA94CEA7A28AC19508D015701ABA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BEDACD35E21E8846037EAC9CF840D78C1ADE5F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D57CE2DDC429BF626880A229B24D360D25124F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5554D2C96298C92EA36E03D7CF332614F25966);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4938B08D1EBF67EBE9B9208A9DB243E2491D7F5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79A8212245E52D448A819079FA8CB570A0EC25A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91FDD05440566E36B3E1B08C4E37C920BA1310FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93A443B4826D5D2D7F58B7DF29AE7A41D8629CFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6259380F399A842AB1785ACB9D8416F4D1D164);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7F2426BB04945D83AA26ACEC47F3F67D3F0E7FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB95830977BA5AB139F45C0240C7DA7E77FEF939);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B2_0 = NULL;
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * G_B2_1 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * G_B1_0 = NULL;
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * G_B1_1 = NULL;
	{
		// m_ARTapToPlace = FindObjectOfType<ARTapToPlaceObject>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * L_0;
		L_0 = Object_FindObjectOfType_TisARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92_m64543E9AD4622349900019CA342BEC34440DC990(/*hidden argument*/Object_FindObjectOfType_TisARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92_m64543E9AD4622349900019CA342BEC34440DC990_RuntimeMethod_var);
		__this->set_m_ARTapToPlace_4(L_0);
		// m_ModelEdit = FindObjectOfType<ModelEdit>();
		ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * L_1;
		L_1 = Object_FindObjectOfType_TisModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779_m96F2CCF9B34D9CFD576352FB03D576078D594DAA(/*hidden argument*/Object_FindObjectOfType_TisModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779_m96F2CCF9B34D9CFD576352FB03D576078D594DAA_RuntimeMethod_var);
		__this->set_m_ModelEdit_5(L_1);
		// StateManager.Instance.onChangeState += onChangeState;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_2;
		L_2 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_3 = L_2;
		NullCheck(L_3);
		Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * L_4 = L_3->get_onChangeState_5();
		Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * L_5 = (Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E *)il2cpp_codegen_object_new(Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var);
		Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A(L_5, __this, (intptr_t)((intptr_t)UIManager_onChangeState_m26D4724A89CA6BC53EA5DED1C9DDE5784F7ACC74_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A_RuntimeMethod_var);
		Delegate_t * L_6;
		L_6 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_onChangeState_5(((Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E *)CastclassSealed((RuntimeObject*)L_6, Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var)));
		// m_MainPanel = transform.Find("MainPanel").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_7, _stringLiteral2BC8E605BF3CA94CEA7A28AC19508D015701ABA9, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		__this->set_m_MainPanel_6(L_9);
		// m_SelectModelsPanel = transform.Find("SelectModelsPanel").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_10, _stringLiteralEB95830977BA5AB139F45C0240C7DA7E77FEF939, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		__this->set_m_SelectModelsPanel_7(L_12);
		// m_EditModelPanel= transform.Find("EditModelPanel").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_13, _stringLiteral0062DFB0FBA6BCB8CABD16BCCE2D4BF81D7520C3, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		__this->set_m_EditModelPanel_8(L_15);
		// m_NoticePanel= transform.Find("NoticePanel").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_16, _stringLiteral3B5554D2C96298C92EA36E03D7CF332614F25966, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		__this->set_m_NoticePanel_9(L_18);
		// m_NoticePanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_m_NoticePanel_9();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
		// m_NoticePanel.GetComponent<Button>().onClick.AddListener(() => { m_NoticePanel.SetActive(false); });
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_m_NoticePanel_9();
		NullCheck(L_20);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_21;
		L_21 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_20, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_21);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_22;
		L_22 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_21, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)UIManager_U3CAwakeU3Eb__24_0_mE2631E2131393A84D36EFF0DC07934415C7EB080_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_22, L_23, /*hidden argument*/NULL);
		// m_PreviewPrefab = m_SelectModelsPanel.transform.Find("ScrollRect/Item").gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_m_SelectModelsPanel_7();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_25, _stringLiteral93A443B4826D5D2D7F58B7DF29AE7A41D8629CFF, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_26, /*hidden argument*/NULL);
		__this->set_m_PreviewPrefab_14(L_27);
		// m_PreviewParent = m_SelectModelsPanel.transform.Find("ScrollRect/Viewport");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_m_SelectModelsPanel_7();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_29, _stringLiteralD7F2426BB04945D83AA26ACEC47F3F67D3F0E7FE, /*hidden argument*/NULL);
		__this->set_m_PreviewParent_15(L_30);
		// m_PreviewPrefab.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_m_PreviewPrefab_14();
		NullCheck(L_31);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)0, /*hidden argument*/NULL);
		// m_CloseSelectModelsPanelButton = m_SelectModelsPanel.transform.Find("BtnCloseSelectModelsPanel").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_m_SelectModelsPanel_7();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_33, _stringLiteral4938B08D1EBF67EBE9B9208A9DB243E2491D7F5F, /*hidden argument*/NULL);
		NullCheck(L_34);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_35;
		L_35 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_34, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_m_CloseSelectModelsPanelButton_11(L_35);
		// m_CloseSelectModelsPanelButton.onClick.AddListener(() => { StateManager.Instance.ChangeState(EnumState.Main);});
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_36 = __this->get_m_CloseSelectModelsPanelButton_11();
		NullCheck(L_36);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_37;
		L_37 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_38 = ((U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var))->get_U3CU3E9__24_1_1();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_39 = L_38;
		G_B1_0 = L_39;
		G_B1_1 = L_37;
		if (L_39)
		{
			G_B2_0 = L_39;
			G_B2_1 = L_37;
			goto IL_0166;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var);
		U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * L_40 = ((U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_41 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_41, L_40, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__24_1_mE7997573DA0A7D2D1B193490A5F1434C7C58B4B5_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_42 = L_41;
		((U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var))->set_U3CU3E9__24_1_1(L_42);
		G_B2_0 = L_42;
		G_B2_1 = G_B1_1;
	}

IL_0166:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// m_BtnAddModels = transform.Find("MainPanel/BtnAddModels").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_43, _stringLiteral2BEDACD35E21E8846037EAC9CF840D78C1ADE5F5, /*hidden argument*/NULL);
		NullCheck(L_44);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_44, /*hidden argument*/NULL);
		__this->set_m_BtnAddModels_13(L_45);
		// m_BtnAddModels.GetComponent<Button>().onClick.AddListener(clickAddModelButton);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_m_BtnAddModels_13();
		NullCheck(L_46);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_47;
		L_47 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_46, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_47);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_48;
		L_48 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_47, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_49 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_49, __this, (intptr_t)((intptr_t)UIManager_clickAddModelButton_mF1E14004F844FBF27C62623FECC6E2CB0CA80451_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_48, L_49, /*hidden argument*/NULL);
		// m_DeleteSelectedModelButton = m_EditModelPanel.transform.Find("BtnDelete").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_m_EditModelPanel_8();
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_51, _stringLiteral79A8212245E52D448A819079FA8CB570A0EC25A9, /*hidden argument*/NULL);
		NullCheck(L_52);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_53;
		L_53 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_52, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_m_DeleteSelectedModelButton_17(L_53);
		// m_DeleteSelectedModelButton.onClick.AddListener(() => { m_ModelEdit.DeleteSelectedModel(); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_54 = __this->get_m_DeleteSelectedModelButton_17();
		NullCheck(L_54);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_55;
		L_55 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_54, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_56 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_56, __this, (intptr_t)((intptr_t)UIManager_U3CAwakeU3Eb__24_2_m04324003068A18D601C42F7CF094551309AE1083_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_55);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_55, L_56, /*hidden argument*/NULL);
		// m_EditCompleteButton = m_EditModelPanel.transform.Find("BtnConfirm").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_m_EditModelPanel_8();
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_58, _stringLiteralBC6259380F399A842AB1785ACB9D8416F4D1D164, /*hidden argument*/NULL);
		NullCheck(L_59);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_60;
		L_60 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_59, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_m_EditCompleteButton_18(L_60);
		// m_EditCompleteButton.onClick.AddListener(() => { m_ModelEdit.EditComplete(); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_61 = __this->get_m_EditCompleteButton_18();
		NullCheck(L_61);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_62;
		L_62 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_61, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_63 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_63, __this, (intptr_t)((intptr_t)UIManager_U3CAwakeU3Eb__24_3_m5F28E85C4D27EE1AAF46F0C5269A2FC36CAA483F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_62);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_62, L_63, /*hidden argument*/NULL);
		// m_SmallButton = m_EditModelPanel.transform.Find("BtnSmall").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_m_EditModelPanel_8();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_65, _stringLiteral31D57CE2DDC429BF626880A229B24D360D25124F, /*hidden argument*/NULL);
		NullCheck(L_66);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_67;
		L_67 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_66, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_m_SmallButton_19(L_67);
		// m_SmallButton.onClick.AddListener(() => { m_ModelEdit.smallModel(); m_SliderButton.value = 1; });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_68 = __this->get_m_SmallButton_19();
		NullCheck(L_68);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_69;
		L_69 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_68, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_70 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_70, __this, (intptr_t)((intptr_t)UIManager_U3CAwakeU3Eb__24_4_m2AC499083246E61F902BFF2B99CB578496EF9728_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_69);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_69, L_70, /*hidden argument*/NULL);
		// m_BigButton = m_EditModelPanel.transform.Find("BtnBig").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_m_EditModelPanel_8();
		NullCheck(L_71);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_72, _stringLiteral91FDD05440566E36B3E1B08C4E37C920BA1310FB, /*hidden argument*/NULL);
		NullCheck(L_73);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_74;
		L_74 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_73, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_m_BigButton_20(L_74);
		// m_BigButton.onClick.AddListener(() => { m_ModelEdit.bigModel(); m_SliderButton.value = 1; });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_75 = __this->get_m_BigButton_20();
		NullCheck(L_75);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_76;
		L_76 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_75, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_77 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_77, __this, (intptr_t)((intptr_t)UIManager_U3CAwakeU3Eb__24_5_m7E42A29FEC83192E28D186F9B2162832DE883D42_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_76);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_76, L_77, /*hidden argument*/NULL);
		// m_RecoveryButton = m_EditModelPanel.transform.Find("BtnRecovery").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = __this->get_m_EditModelPanel_8();
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_79, _stringLiteral0E4AAE57256D86713ECC6CFE1A2224442DE0BECB, /*hidden argument*/NULL);
		NullCheck(L_80);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_81;
		L_81 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_80, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_m_RecoveryButton_21(L_81);
		// m_RecoveryButton.onClick.AddListener(() => { m_ModelEdit.recoveryModel(); m_SliderButton.value = 1; });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_82 = __this->get_m_RecoveryButton_21();
		NullCheck(L_82);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_83;
		L_83 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_82, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_84 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_84, __this, (intptr_t)((intptr_t)UIManager_U3CAwakeU3Eb__24_6_mF272246B1A793C28CECFDF77BB9AE73F5F35A2C2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_83);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_83, L_84, /*hidden argument*/NULL);
		// loadModels();
		UIManager_loadModels_m6820EBE55619AEFFFA61C8326F005A9168C8335E(__this, /*hidden argument*/NULL);
		// createPreviewItem();
		UIManager_createPreviewItem_mFC2BE9B21A28AAD2060B400B7154C8673F37E17A(__this, /*hidden argument*/NULL);
		// StateManager.Instance.ChangeState(EnumState.SelectModel);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_85;
		L_85 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_85);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_85, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnDestroy_mB62A44EF5F87D2417F0583D2040CF6105A413EBA (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_onChangeState_m26D4724A89CA6BC53EA5DED1C9DDE5784F7ACC74_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StateManager.Instance.onChangeState -= onChangeState;
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0;
		L_0 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_1 = L_0;
		NullCheck(L_1);
		Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * L_2 = L_1->get_onChangeState_5();
		Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E * L_3 = (Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E *)il2cpp_codegen_object_new(Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var);
		Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A(L_3, __this, (intptr_t)((intptr_t)UIManager_onChangeState_m26D4724A89CA6BC53EA5DED1C9DDE5784F7ACC74_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m73B5A7430625A27084303B5D131FCB7A78274B1A_RuntimeMethod_var);
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_onChangeState_5(((Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E *)CastclassSealed((RuntimeObject*)L_4, Action_1_t3A5F3655492B359130465BFB1420DA09D950C39E_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UIManager::ShowNotice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowNotice_mCDD5AE9023B32551A712CB694AEC61B62D2294B1 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NoticePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_NoticePanel_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// m_NoticePanel.transform.Find("Text").GetComponent<Text>().text = text;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_NoticePanel_9();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_2, _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_3, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_5 = ___text0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void UIManager::loadModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_loadModels_m6820EBE55619AEFFFA61C8326F005A9168C8335E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7F4AACB6FB4C3F4473775872D231627FDA376FE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject[] modelsArr = Resources.LoadAll<GameObject>(m_ModelsPath);
		String_t* L_0 = __this->get_m_ModelsPath_12();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = Resources_LoadAll_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7F4AACB6FB4C3F4473775872D231627FDA376FE8(L_0, /*hidden argument*/Resources_LoadAll_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7F4AACB6FB4C3F4473775872D231627FDA376FE8_RuntimeMethod_var);
		V_0 = L_1;
		// for(int i=0;i< modelsArr.Length;i++)
		V_1 = 0;
		goto IL_003f;
	}

IL_0010:
	{
		// if (m_DicAllModels.ContainsKey(modelsArr[i].name)) continue;
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_2 = __this->get_m_DicAllModels_10();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C(L_2, L_7, /*hidden argument*/Dictionary_2_ContainsKey_m62B37289BF3434591BB1A47FA360C286A6F5399C_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		// m_DicAllModels.Add(modelsArr[i].name, modelsArr[i]);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_9 = __this->get_m_DicAllModels_10();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_9);
		Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78(L_9, L_14, L_18, /*hidden argument*/Dictionary_2_Add_m6D23729A58240291FAD0B2A484D107C5D06B8A78_RuntimeMethod_var);
	}

IL_003b:
	{
		// for(int i=0;i< modelsArr.Length;i++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_003f:
	{
		// for(int i=0;i< modelsArr.Length;i++)
		int32_t L_20 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::createPreviewItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_createPreviewItem_mFC2BE9B21A28AAD2060B400B7154C8673F37E17A (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m45E5597E9EB970A6935E26EBBF739F8DC469B402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_mFD471F1F0659F2CF80264CB9B862486BBD8DF6C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CcreatePreviewItemU3Eb__0_mBB7648371ADF109B071BAF8875E392E6BC117B1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * V_2 = NULL;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_3 = NULL;
	{
		// Texture2D[] texturesArr = Resources.LoadAll<Texture2D>(m_PreviewPath);
		String_t* L_0 = __this->get_m_PreviewPath_16();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_1;
		L_1 = Resources_LoadAll_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_mFD471F1F0659F2CF80264CB9B862486BBD8DF6C9(L_0, /*hidden argument*/Resources_LoadAll_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_mFD471F1F0659F2CF80264CB9B862486BBD8DF6C9_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < texturesArr.Length; i++)
		V_1 = 0;
		goto IL_00a5;
	}

IL_0013:
	{
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_2 = (U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass28_0__ctor_m67C10507EB4AF9C6F2E7EA20960381B0A14DA056(L_2, /*hidden argument*/NULL);
		V_2 = L_2;
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_3 = V_2;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_1(__this);
		// GameObject item = Instantiate(m_PreviewPrefab, m_PreviewParent);
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_4 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_m_PreviewPrefab_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_m_PreviewParent_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_item_0(L_7);
		// item.name = texturesArr[i].name;
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_8 = V_2;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_item_0();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_9, L_14, /*hidden argument*/NULL);
		// item.SetActive(true);
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_15 = V_2;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_item_0();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// item.GetComponent<RawImage>().texture = texturesArr[i];
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_17 = V_2;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_item_0();
		NullCheck(L_18);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_19;
		L_19 = GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7(L_18, /*hidden argument*/GameObject_GetComponent_TisRawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A_mDA64083A6BE0DE214BBF4660B7E7B7B571EBE4F7_RuntimeMethod_var);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_19, L_23, /*hidden argument*/NULL);
		// Button button = item.GetComponent<Button>();
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_24 = V_2;
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_item_0();
		NullCheck(L_25);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_26;
		L_26 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_25, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		V_3 = L_26;
		// if (button == null) button = item.AddComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_27 = V_3;
		bool L_28;
		L_28 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_008a;
		}
	}
	{
		// if (button == null) button = item.AddComponent<Button>();
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_29 = V_2;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29->get_item_0();
		NullCheck(L_30);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_31;
		L_31 = GameObject_AddComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m45E5597E9EB970A6935E26EBBF739F8DC469B402(L_30, /*hidden argument*/GameObject_AddComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m45E5597E9EB970A6935E26EBBF739F8DC469B402_RuntimeMethod_var);
		V_3 = L_31;
	}

IL_008a:
	{
		// button.onClick.AddListener(() => { selectedModels(item.name); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_32 = V_3;
		NullCheck(L_32);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_33;
		L_33 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_32, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * L_34 = V_2;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_35 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_35, L_34, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass28_0_U3CcreatePreviewItemU3Eb__0_mBB7648371ADF109B071BAF8875E392E6BC117B1E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_33);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_33, L_35, /*hidden argument*/NULL);
		// for (int i = 0; i < texturesArr.Length; i++)
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00a5:
	{
		// for (int i = 0; i < texturesArr.Length; i++)
		int32_t L_37 = V_1;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_38 = V_0;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::clickAddModelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_clickAddModelButton_mF1E14004F844FBF27C62623FECC6E2CB0CA80451 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// StateManager.Instance.ChangeState(EnumState.SelectModel);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0;
		L_0 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::selectedModels(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_selectedModels_mA4AA7B90D7B52129335ABB3925267E5CC9EB0C7E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___modelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC8C1096FDE613395828E8F21D280A012AA3EDADF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject obj = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// m_DicAllModels.TryGetValue(modelName, out obj);
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_0 = __this->get_m_DicAllModels_10();
		String_t* L_1 = ___modelName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC8C1096FDE613395828E8F21D280A012AA3EDADF(L_0, L_1, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC8C1096FDE613395828E8F21D280A012AA3EDADF_RuntimeMethod_var);
		// if(obj!=null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// m_ARTapToPlace.objectToPlace = obj;
		ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * L_5 = __this->get_m_ARTapToPlace_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_5);
		ARTapToPlaceObject_set_objectToPlace_m4E8EA3AE93F7D9BCB18DB6B06317CB44E7AA1103_inline(L_5, L_6, /*hidden argument*/NULL);
		// StateManager.Instance.ChangeState(EnumState.CreateModel);
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_7;
		L_7 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_7);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_7, 2, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UIManager::onChangeState(EnumState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_onChangeState_m26D4724A89CA6BC53EA5DED1C9DDE5784F7ACC74 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_1 = NULL;
	{
		// m_MainPanel.SetActive(state == EnumState.Main || state == EnumState.CreateModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_MainPanel_6();
		int32_t L_1 = ___state0;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = ___state0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// m_SelectModelsPanel.SetActive(state == EnumState.SelectModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_m_SelectModelsPanel_7();
		int32_t L_4 = ___state0;
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0), /*hidden argument*/NULL);
		// m_EditModelPanel.SetActive(state == EnumState.EditModel);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_m_EditModelPanel_8();
		int32_t L_6 = ___state0;
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077F6F20AAB38174B4A2A17C676D367FF85E641D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A1A55224B7BABBF7047B3E1F3E56812C3ED941D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, GameObject> m_DicAllModels = new Dictionary<string, GameObject>();
		Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * L_0 = (Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C *)il2cpp_codegen_object_new(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A(L_0, /*hidden argument*/Dictionary_2__ctor_m627A706D7F24292D51368C749EB140EFE869376A_RuntimeMethod_var);
		__this->set_m_DicAllModels_10(L_0);
		// private string m_ModelsPath = "Models";
		__this->set_m_ModelsPath_12(_stringLiteral077F6F20AAB38174B4A2A17C676D367FF85E641D);
		// private string m_PreviewPath = "Preview";
		__this->set_m_PreviewPath_16(_stringLiteral0A1A55224B7BABBF7047B3E1F3E56812C3ED941D);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::<Awake>b__24_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CAwakeU3Eb__24_0_mE2631E2131393A84D36EFF0DC07934415C7EB080 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// m_NoticePanel.GetComponent<Button>().onClick.AddListener(() => { m_NoticePanel.SetActive(false); });
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_NoticePanel_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// m_NoticePanel.GetComponent<Button>().onClick.AddListener(() => { m_NoticePanel.SetActive(false); });
		return;
	}
}
// System.Void UIManager::<Awake>b__24_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CAwakeU3Eb__24_2_m04324003068A18D601C42F7CF094551309AE1083 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// m_DeleteSelectedModelButton.onClick.AddListener(() => { m_ModelEdit.DeleteSelectedModel(); });
		ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * L_0 = __this->get_m_ModelEdit_5();
		NullCheck(L_0);
		ModelEdit_DeleteSelectedModel_m3BCC62EC7A7FD8A67BACF2C6A2E01E900D1460AB(L_0, /*hidden argument*/NULL);
		// m_DeleteSelectedModelButton.onClick.AddListener(() => { m_ModelEdit.DeleteSelectedModel(); });
		return;
	}
}
// System.Void UIManager::<Awake>b__24_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CAwakeU3Eb__24_3_m5F28E85C4D27EE1AAF46F0C5269A2FC36CAA483F (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// m_EditCompleteButton.onClick.AddListener(() => { m_ModelEdit.EditComplete(); });
		ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * L_0 = __this->get_m_ModelEdit_5();
		NullCheck(L_0);
		ModelEdit_EditComplete_mBD3CE6B370DD69F00C9777263DE24304E8F9F862(L_0, /*hidden argument*/NULL);
		// m_EditCompleteButton.onClick.AddListener(() => { m_ModelEdit.EditComplete(); });
		return;
	}
}
// System.Void UIManager::<Awake>b__24_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CAwakeU3Eb__24_4_m2AC499083246E61F902BFF2B99CB578496EF9728 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// m_SmallButton.onClick.AddListener(() => { m_ModelEdit.smallModel(); m_SliderButton.value = 1; });
		ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * L_0 = __this->get_m_ModelEdit_5();
		NullCheck(L_0);
		ModelEdit_smallModel_m5E74AED2A18611855C9D629CE5F79C3E3842B02D(L_0, /*hidden argument*/NULL);
		// m_SmallButton.onClick.AddListener(() => { m_ModelEdit.smallModel(); m_SliderButton.value = 1; });
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_m_SliderButton_23();
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (1.0f));
		// m_SmallButton.onClick.AddListener(() => { m_ModelEdit.smallModel(); m_SliderButton.value = 1; });
		return;
	}
}
// System.Void UIManager::<Awake>b__24_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CAwakeU3Eb__24_5_m7E42A29FEC83192E28D186F9B2162832DE883D42 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// m_BigButton.onClick.AddListener(() => { m_ModelEdit.bigModel(); m_SliderButton.value = 1; });
		ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * L_0 = __this->get_m_ModelEdit_5();
		NullCheck(L_0);
		ModelEdit_bigModel_m83DDAE746D80F3EFACB2F6F69F9575C58ABF1E46(L_0, /*hidden argument*/NULL);
		// m_BigButton.onClick.AddListener(() => { m_ModelEdit.bigModel(); m_SliderButton.value = 1; });
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_m_SliderButton_23();
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (1.0f));
		// m_BigButton.onClick.AddListener(() => { m_ModelEdit.bigModel(); m_SliderButton.value = 1; });
		return;
	}
}
// System.Void UIManager::<Awake>b__24_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3CAwakeU3Eb__24_6_mF272246B1A793C28CECFDF77BB9AE73F5F35A2C2 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// m_RecoveryButton.onClick.AddListener(() => { m_ModelEdit.recoveryModel(); m_SliderButton.value = 1; });
		ModelEdit_tF23F1AE2D4CE2D18EB64F62A6F10FFD024070779 * L_0 = __this->get_m_ModelEdit_5();
		NullCheck(L_0);
		ModelEdit_recoveryModel_m6F740EFAFD80FC0FFB2B8C68F9233F77FEDCCF2E(L_0, /*hidden argument*/NULL);
		// m_RecoveryButton.onClick.AddListener(() => { m_ModelEdit.recoveryModel(); m_SliderButton.value = 1; });
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_m_SliderButton_23();
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (1.0f));
		// m_RecoveryButton.onClick.AddListener(() => { m_ModelEdit.recoveryModel(); m_SliderButton.value = 1; });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CheckARSupport/<CheckSupport>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckSupportU3Ed__2__ctor_m4C7A56BAF47B89701BFB3CFF689E2B181C1402E3 (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CheckARSupport/<CheckSupport>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckSupportU3Ed__2_System_IDisposable_Dispose_m341D9DE4082704999070A4285460CC0408682515 (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CheckARSupport/<CheckSupport>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckSupportU3Ed__2_MoveNext_mB0863D572E37AC0E1A92D3D462FA59482BD7E5B7 (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1662BE604729854A5169729ABD7D19B0007533CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1C3520C327880445C7DBECC7435621390A287D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72F5935670DE2668B63607E8393D222B283DECF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD45B273C49ED1E529617670DD8A7BED60CC0416A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF5E87A40346887D57AC39ADEE1460FE25E974BD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * G_B13_0 = NULL;
	Type_t * G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_006a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return ARSession.CheckAvailability();
		RuntimeObject* L_3;
		L_3 = ARSession_CheckAvailability_mCC906561CCCE269C11B69D2216C39120563F00FD(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (ARSession.state == ARSessionState.NeedsInstall)
		int32_t L_4;
		L_4 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0071;
		}
	}
	{
		// Debug.Log("当前设备支持AR，但是AR支持需要安装其他软件!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral72F5935670DE2668B63607E8393D222B283DECF7, /*hidden argument*/NULL);
		// yield return ARSession.Install();
		RuntimeObject* L_5;
		L_5 = ARSession_Install_mF45AE40F0F8A22E4EEF960BEBD434A7F7591CA67(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0071:
	{
		// if (ARSession.state == ARSessionState.Ready)
		int32_t L_6;
		L_6 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0085;
		}
	}
	{
		// Debug.Log("AR已支持并准备就绪!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5A1C3520C327880445C7DBECC7435621390A287D, /*hidden argument*/NULL);
		// }
		goto IL_00d2;
	}

IL_0085:
	{
		// switch (ARSession.state)
		int32_t L_7;
		L_7 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00d2;
	}

IL_0095:
	{
		// m_UIManager.ShowNotice("当前设备不支持AR功能！");
		CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * L_10 = V_1;
		NullCheck(L_10);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_11 = L_10->get_m_UIManager_4();
		NullCheck(L_11);
		UIManager_ShowNotice_mCDD5AE9023B32551A712CB694AEC61B62D2294B1(L_11, _stringLiteral1662BE604729854A5169729ABD7D19B0007533CD, /*hidden argument*/NULL);
		// Debug.LogWarning(GetType() + "/CheckSupport()/当前设备不支持AR功能！");
		CheckARSupport_t85382716302BF877FA40B3AA944D9DF576154B2A * L_12 = V_1;
		NullCheck(L_12);
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_12, /*hidden argument*/NULL);
		Type_t * L_14 = L_13;
		G_B12_0 = L_14;
		if (L_14)
		{
			G_B13_0 = L_14;
			goto IL_00b2;
		}
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		goto IL_00b7;
	}

IL_00b2:
	{
		NullCheck(G_B13_0);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
		G_B14_0 = L_15;
	}

IL_00b7:
	{
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B14_0, _stringLiteralEF5E87A40346887D57AC39ADEE1460FE25E974BD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_16, /*hidden argument*/NULL);
		// break;
		goto IL_00d2;
	}

IL_00c8:
	{
		// Debug.Log("当前设备支持AR，但是AR支持需要安装其他软件！");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD45B273C49ED1E529617670DD8A7BED60CC0416A, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return (bool)0;
	}
}
// System.Object CheckARSupport/<CheckSupport>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckSupportU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD9D15115FA3CF2CD28CDD6275A785740C803F1DE (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CheckARSupport/<CheckSupport>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckSupportU3Ed__2_System_Collections_IEnumerator_Reset_mB47333B968322F68D4811131D4D5DCFF66511F4F (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckSupportU3Ed__2_System_Collections_IEnumerator_Reset_mB47333B968322F68D4811131D4D5DCFF66511F4F_RuntimeMethod_var)));
	}
}
// System.Object CheckARSupport/<CheckSupport>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckSupportU3Ed__2_System_Collections_IEnumerator_get_Current_mCEB52393D04FCCDF16503AA963C21923B330314C (U3CCheckSupportU3Ed__2_t734A4128CAD6E32E157ED4C44B7A3A8D372FB17B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBA5A8E7D4C803C8F80B71126C81B4760B987AD2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * L_0 = (U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 *)il2cpp_codegen_object_new(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0A79C1A3BEA9231B3E275AEE65DA7EE93B137E15(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0A79C1A3BEA9231B3E275AEE65DA7EE93B137E15 (U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager/<>c::<Awake>b__24_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__24_1_mE7997573DA0A7D2D1B193490A5F1434C7C58B4B5 (U3CU3Ec_tF3B5E6F42A0418BAF09788FA0CE0E381B0383490 * __this, const RuntimeMethod* method)
{
	{
		// m_CloseSelectModelsPanelButton.onClick.AddListener(() => { StateManager.Instance.ChangeState(EnumState.Main);});
		StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * L_0;
		L_0 = StateManager_get_Instance_mAEC5BF7BFE27C14C4325ADCB688BB74CC040227A(/*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_ChangeState_m3D1B62F85FC0847E10D9EE302A180C5C95827971(L_0, 0, /*hidden argument*/NULL);
		// m_CloseSelectModelsPanelButton.onClick.AddListener(() => { StateManager.Instance.ChangeState(EnumState.Main);});
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m67C10507EB4AF9C6F2E7EA20960381B0A14DA056 (U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager/<>c__DisplayClass28_0::<createPreviewItem>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CcreatePreviewItemU3Eb__0_mBB7648371ADF109B071BAF8875E392E6BC117B1E (U3CU3Ec__DisplayClass28_0_t1B328DA0C29BAB26EC5F63BD2DACD7A09BF116FC * __this, const RuntimeMethod* method)
{
	{
		// button.onClick.AddListener(() => { selectedModels(item.name); });
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = __this->get_U3CU3E4__this_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_item_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UIManager_selectedModels_mA4AA7B90D7B52129335ABB3925267E5CC9EB0C7E(L_0, L_2, /*hidden argument*/NULL);
		// button.onClick.AddListener(() => { selectedModels(item.name); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ARPlaneMeshVisualizer_get_mesh_m7E5CE302636B7C6F9578DBB9D0161CF96F5D7AB4_inline (ARPlaneMeshVisualizer_t4C981AECE943267AD0363C57F2F3D32273E932F2 * __this, const RuntimeMethod* method)
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_U3CmeshU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m0AAD92A3D682C1DFC1B5630585550B6CAFBAFE32_inline (ARFeatheredPlaneMeshVisualizer_t7B2E22615047B9FDFC4D5015F59BFE2A17E3140E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->get_m_FeatheringWidth_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	{
		float L_0 = ___newX0;
		__this->set_x_2(L_0);
		float L_1 = ___newY1;
		__this->set_y_3(L_1);
		float L_2 = ___newZ2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_set_sessionDelegate_m80E7DF5EEBCFAEF7C6FE0987DB267579C1EFDFB7_inline (ARKitSessionSubsystem_tABA1BA2FE3CF0CECDDC519C4B545236FC8B9E216 * __this, ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE * ___value0, const RuntimeMethod* method)
{
	{
		// public ARKitSessionDelegate sessionDelegate { get; set; } = new DefaultARKitSessionDelegate();
		ARKitSessionDelegate_t476836DF28F3F6F2F59CF206FC59B72F052489FE * L_0 = ___value0;
		__this->set_U3CsessionDelegateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StateManager_get_state_mBD582F098C1DA2426CC32A327D3A1C3AF2144DCD_inline (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, const RuntimeMethod* method)
{
	{
		// public EnumState state { get; private set; } = EnumState.SelectModel;
		int32_t L_0 = __this->get_U3CstateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARTapToPlaceObject_get_objectToPlace_m247CA35CF15454432F03ADECCA67850EEF31062B_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject objectToPlace { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CobjectToPlaceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ARTapToPlaceObject_get_placementIndicator_mA00F158B8A67CA9692CEE5E91C16576C0099875B_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject placementIndicator { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CplacementIndicatorU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTapToPlaceObject_set_placementIndicator_m172533BFD71EE3B07BB6F0581FC55FDA385B7C32_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject placementIndicator { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CplacementIndicatorU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowItem_set_arrows_m8C22B10CD56C0D946D3F79FA37E1CA50FFF5073F_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform arrows { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CarrowsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArrowItem_set_target_m63982FAE9261ECED699A1A4E91997DC841E4A6EA_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform target { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CtargetU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ArrowItem_get_arrows_m5B849351A2EB97E893C6D8B0312E52F6F7E770C0_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// public Transform arrows { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CarrowsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ArrowItem_get_target_m64E11CBB4EE205E8D8AB9538143CC59C21AE5222_inline (ArrowItem_tF2482AE40F54E3EC29A30FD071E7A9E533C9DB9D * __this, const RuntimeMethod* method)
{
	{
		// public Transform target { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CtargetU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateManager_set_state_mBBEECE4DF569BECCA87927899B9A423D5CCCBAE9_inline (StateManager_tDAE60D3E07D8A34DE82EF3FC439FB2968C4ACB47 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public EnumState state { get; private set; } = EnumState.SelectModel;
		int32_t L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTapToPlaceObject_set_objectToPlace_m4E8EA3AE93F7D9BCB18DB6B06317CB44E7AA1103_inline (ARTapToPlaceObject_t4AEF1FFB0B93137ED84C1BB7ACC914E5A472FB92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject objectToPlace { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CobjectToPlaceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var))->get_s_State_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB10F8A78245EBB2F22DD22E5AC8CA7D5FDE70B88_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  List_1_get_Item_m200A6C390D1FAEF2378D70230BD6E96D492ABE04_gshared_inline (List_1_tDA68EC1B5CE9809C8709C1E58A7D0F4ACBB1252D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA* L_2 = (ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t8F4AFCC32363485FEBCE484011A5C258676441CA*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return (float)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
