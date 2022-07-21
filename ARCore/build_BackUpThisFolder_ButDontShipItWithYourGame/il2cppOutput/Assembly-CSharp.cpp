#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>
struct Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudUpdatedEventArgs>
struct Action_1_tFF9FBBC78056CAB219CE4F7E7B45D09506B3A6E4;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPointCloud>
struct Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud>
struct List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29;
// ARLocation[]
struct ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ARLocation
struct ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692;
// ARLocationsLoader
struct ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1;
// UnityEngine.XR.ARFoundation.ARPointCloud
struct ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2;
// UnityEngine.XR.ARFoundation.ARPointCloudManager
struct ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// AnimationButton
struct AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CharacterRotator
struct CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// KeepRotationZero
struct KeepRotationZero_tB04DD1AACF44E031F88AA9E8537B8F29F60555F2;
// Location
struct Location_t6A399324ECDBEB431CC175FE628C20681C5EE277;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// MapController
struct MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E;
// MapSC
struct MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpenCamSc
struct OpenCamSc_t70DCB4FF578553B8C1A0C36F2F37603929250501;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlaceOnPlane
struct PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TrackedImages
struct TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WebCamTexture
struct WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t61DE8363378DC9991027C95E31303A3F1BC32E48;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Location/<GPSLoc>d__12
struct U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96;
// MapSC/<Location>d__6
struct U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlaceOnPlane/<RemoveExplainButtonForTime>d__53
struct U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____82F7307FBA0D023903EAA5641E46424592119DD4BC34B87461F9C9173694EE39_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0307334F90535192FF2D835A8CCEEBD343EAA07C;
IL2CPP_EXTERN_C String_t* _stringLiteral04F619E53FF25AE1ECAED76D71FA7B76A5E41476;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2FD7F24E92EA095727378E3E8B475DF18D502CE4;
IL2CPP_EXTERN_C String_t* _stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral3D91A5F9B5EFBD3B7B4605DA132D67D6CE783D63;
IL2CPP_EXTERN_C String_t* _stringLiteral555C07B6FA78F958F86C7E2DD5DA479F8D287FE5;
IL2CPP_EXTERN_C String_t* _stringLiteral631CB151C08E6727A6009F81F2ED6808146362CC;
IL2CPP_EXTERN_C String_t* _stringLiteral689399F194BB2C34A0B22988A80D007D815CFDB9;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral95C2FD44161D8CBC1E72E119B31535FBC9C137AE;
IL2CPP_EXTERN_C String_t* _stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40;
IL2CPP_EXTERN_C String_t* _stringLiteralB29863D97935F87245759F48D47366B206A87A11;
IL2CPP_EXTERN_C String_t* _stringLiteralBF6084F5698C98174E21E34D3F7776AAA5FA1783;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE9A0B1763DE24637DC6B4FB7A133DD78FD8A10;
IL2CPP_EXTERN_C String_t* _stringLiteralD2AE4A51EB1C3C257F49B63EF2585194C61333B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD2B96F21044F3481E9B23CBA72FEF3E3D57774F;
IL2CPP_EXTERN_C String_t* _stringLiteralE0A3E45019C55A856A0DD60E8E9AFB977BCD0708;
IL2CPP_EXTERN_C String_t* _stringLiteralE1942594976EC2ADEF8679BB07B5F7154C572045;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1AB536CD71D83CF5EABD1DCF6A5A11899ADDA6;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationButton_OnClick_m639E83910E2463E7988894AD07421C9FD9B531CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F_m8D17A3B55E96C174B6672ABA4522E855BACAEBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2_m0F5060891BA490B8D2AD3BEBF17F6DE1E97796F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLocation_t6A399324ECDBEB431CC175FE628C20681C5EE277_m427F9033FEBCE218DC52AEA2CCEC099E04E75891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_m943D12ED47A5A0E2420C35664CEBBF78D4448E6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m829CCE6BDD834452B9B0FDACB8EDCE2EB29DED87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mDEBC5FE6087B0AD2CFB4F716C0D40151C979C4DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedImages_OnTrackedImageChanged_m51AFECDBE30A47999349BAD656ABBAF13E7C2721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGPSLocU3Ed__12_System_Collections_IEnumerator_Reset_m9E747619D6F9F98BDFF1CE7D4B4FF80EE2D7891F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLocationU3Ed__6_System_Collections_IEnumerator_Reset_mFC29CDC51A039C61CC74F406F76123BBDEF3C05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRemoveExplainButtonForTimeU3Ed__53_System_Collections_IEnumerator_Reset_m00179F55971C5E65BD645F4FB1CED324168A0BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA;
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____dictionary_0;
};

// ARLocation
struct ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692  : public RuntimeObject
{
	// System.String ARLocation::name
	String_t* ___name_0;
	// System.Single ARLocation::lon
	float ___lon_1;
	// System.Single ARLocation::lat
	float ___lat_2;
	// UnityEngine.GameObject ARLocation::arModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arModel_3;
	// UnityEngine.AudioClip ARLocation::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_5;
	// System.String ARLocation::animationName
	String_t* ___animationName_6;
};

struct ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_StaticFields
{
	// System.String ARLocation::distances
	String_t* ___distances_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02  : public RuntimeObject
{
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
struct Il2CppArrayBounds;

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Location/<GPSLoc>d__12
struct U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96  : public RuntimeObject
{
	// System.Int32 Location/<GPSLoc>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Location/<GPSLoc>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Location Location/<GPSLoc>d__12::<>4__this
	Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* ___U3CU3E4__this_2;
	// System.Int32 Location/<GPSLoc>d__12::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;
};

// MapSC/<Location>d__6
struct U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861  : public RuntimeObject
{
	// System.Int32 MapSC/<Location>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MapSC/<Location>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MapSC MapSC/<Location>d__6::<>4__this
	MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* ___U3CU3E4__this_2;
	// System.Int32 MapSC/<Location>d__6::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;
};

// PlaceOnPlane/<RemoveExplainButtonForTime>d__53
struct U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85  : public RuntimeObject
{
	// System.Int32 PlaceOnPlane/<RemoveExplainButtonForTime>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlaceOnPlane/<RemoveExplainButtonForTime>d__53::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single PlaceOnPlane/<RemoveExplainButtonForTime>d__53::time
	float ___time_2;
	// PlaceOnPlane PlaceOnPlane/<RemoveExplainButtonForTime>d__53::<>4__this
	PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* ___U3CU3E4__this_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>
struct Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____currentValue_3;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_t38FD8BCE7DBF33FCFABA6823EC6C9368D958290D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t38FD8BCE7DBF33FCFABA6823EC6C9368D958290D__padding[6];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::82F7307FBA0D023903EAA5641E46424592119DD4BC34B87461F9C9173694EE39
	__StaticArrayInitTypeSizeU3D6_t38FD8BCE7DBF33FCFABA6823EC6C9368D958290D ___82F7307FBA0D023903EAA5641E46424592119DD4BC34B87461F9C9173694EE39_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
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
};

// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Identifiers_2;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;
};

struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRDepthSubsystem_t61DE8363378DC9991027C95E31303A3F1BC32E48* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// ARLocationsLoader
struct ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ARLocation[] ARLocationsLoader::aRLocations
	ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* ___aRLocations_4;
	// System.Int32 ARLocationsLoader::size
	int32_t ___size_5;
	// System.Boolean ARLocationsLoader::unzipped
	bool ___unzipped_6;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARTapToPlaceObject::placementIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementIndicator_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin ARTapToPlaceObject::arOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___arOrigin_5;
	// UnityEngine.Pose ARTapToPlaceObject::placementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___placementPose_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::aRRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___aRRaycastManager_7;
	// System.Boolean ARTapToPlaceObject::placementPoseIsValid
	bool ___placementPoseIsValid_8;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AnimationButton
struct AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator AnimationButton::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_4;
	// System.String AnimationButton::_name
	String_t* ____name_5;
	// UnityEngine.AnimatorControllerParameterType AnimationButton::_type
	int32_t ____type_6;
	// System.Single AnimationButton::_value
	float ____value_7;
	// UnityEngine.UI.Button AnimationButton::<Button>k__BackingField
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___U3CButtonU3Ek__BackingField_8;
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AudioManager::sound1
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sound1_5;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::Instance
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___Instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CharacterRotator
struct CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CharacterRotator::_character
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____character_4;
	// System.Single CharacterRotator::_rotationSpeed
	float ____rotationSpeed_5;
	// System.Boolean CharacterRotator::_isRotating
	bool ____isRotating_6;
	// UnityEngine.Vector3 CharacterRotator::_targetPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____targetPoint_7;
};

// KeepRotationZero
struct KeepRotationZero_tB04DD1AACF44E031F88AA9E8537B8F29F60555F2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform KeepRotationZero::thisRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___thisRectTrans_4;
};

// Location
struct Location_t6A399324ECDBEB431CC175FE628C20681C5EE277  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Location::locationtext
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___locationtext_4;
	// System.Single Location::timer
	float ___timer_5;
	// System.Single Location::getLocationTimer
	float ___getLocationTimer_6;
	// System.Double Location::lon
	double ___lon_7;
	// System.Double Location::lat
	double ___lat_8;
	// System.Boolean Location::lookingForLocation
	bool ___lookingForLocation_9;
	// ARLocation[] Location::arLocations
	ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* ___arLocations_10;
	// UnityEngine.GameObject Location::closestARModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___closestARModel_11;
	// PlaceOnPlane Location::PlaceOnPlaneSC
	PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* ___PlaceOnPlaneSC_12;
	// UnityEngine.UI.Text Location::distancesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___distancesText_13;
};

// MapController
struct MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MapController::user
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___user_4;
	// System.Single MapController::lon
	float ___lon_5;
	// System.Single MapController::lat
	float ___lat_6;
	// UnityEngine.Vector2 MapController::bottomRight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRight_7;
	// UnityEngine.Vector2 MapController::topLeft
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeft_8;
	// UnityEngine.Vector2 MapController::bottomLeft
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeft_9;
	// UnityEngine.Vector2 MapController::topRight
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRight_10;
	// UnityEngine.RectTransform MapController::userRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___userRectTrans_11;
};

// MapSC
struct MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MapSC::locationText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___locationText_4;
	// System.Single MapSC::lon
	float ___lon_5;
	// System.Single MapSC::lat
	float ___lat_6;
	// System.Boolean MapSC::once
	bool ___once_7;
};

// OpenCamSc
struct OpenCamSc_t70DCB4FF578553B8C1A0C36F2F37603929250501  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PlaceOnPlane
struct PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlaceOnPlane::m_PlacedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlacedPrefab_4;
	// UnityEngine.Events.UnityEvent PlaceOnPlane::placementUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___placementUpdate_5;
	// System.Boolean PlaceOnPlane::isModelLocked
	bool ___isModelLocked_6;
	// UnityEngine.GameObject PlaceOnPlane::resetButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resetButton_7;
	// UnityEngine.GameObject PlaceOnPlane::lockButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lockButton_8;
	// UnityEngine.GameObject PlaceOnPlane::explainButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explainButton_9;
	// UnityEngine.Camera PlaceOnPlane::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_10;
	// UnityEngine.Renderer PlaceOnPlane::renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_11;
	// UnityEngine.WebCamTexture PlaceOnPlane::_webCamTexture
	WebCamTexture_t2021D179149C925AA6D73E6F1898C8D46521C749* ____webCamTexture_12;
	// UnityEngine.XR.ARFoundation.ARPointCloud PlaceOnPlane::arPointCloud
	ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* ___arPointCloud_13;
	// UnityEngine.XR.ARFoundation.ARPointCloudManager PlaceOnPlane::arPointCloudManager
	ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* ___arPointCloudManager_14;
	// UnityEngine.UI.Text PlaceOnPlane::closestLocationText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___closestLocationText_15;
	// UnityEngine.GameObject PlaceOnPlane::placeButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeButton_16;
	// UnityEngine.GameObject PlaceOnPlane::redCircle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___redCircle_17;
	// UnityEngine.UI.Text PlaceOnPlane::state
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___state_18;
	// System.Boolean PlaceOnPlane::clickedPlace
	bool ___clickedPlace_19;
	// System.Boolean PlaceOnPlane::playingAnimation
	bool ___playingAnimation_20;
	// UnityEngine.GameObject PlaceOnPlane::spinner
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spinner_21;
	// UnityEngine.GameObject PlaceOnPlane::prompt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prompt_22;
	// UnityEngine.GameObject PlaceOnPlane::<spawnedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CspawnedObjectU3Ek__BackingField_23;
	// UnityEngine.GameObject PlaceOnPlane::<spawnedRedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CspawnedRedObjectU3Ek__BackingField_24;
	// System.Object PlaceOnPlane::<detectorParameters>k__BackingField
	RuntimeObject* ___U3CdetectorParametersU3Ek__BackingField_25;
	// UnityEngine.AudioClip PlaceOnPlane::clipForThisLocation
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clipForThisLocation_26;
	// System.String PlaceOnPlane::animationName
	String_t* ___animationName_27;
	// UnityEngine.Animator PlaceOnPlane::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_28;
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlaceOnPlane::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_30;
};

struct PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> PlaceOnPlane::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_29;
};

// TrackedImages
struct TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] TrackedImages::arObjectsToPlace
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___arObjectsToPlace_4;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager TrackedImages::m_TrackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___m_TrackedImageManager_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> TrackedImages::arObjects
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ___arObjects_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352  : public SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackable_2_tE6DB09F8573C1CC6CE82F1938E80F9EFF50F3BBE  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARPointCloud
struct ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2  : public ARTrackable_2_tE6DB09F8573C1CC6CE82F1938E80F9EFF50F3BBE
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARPointCloud::updated
	Action_1_tFF9FBBC78056CAB219CE4F7E7B45D09506B3A6E4* ___updated_7;
	// UnityEngine.XR.ARSubsystems.XRPointCloudData UnityEngine.XR.ARFoundation.ARPointCloud::m_Data
	XRPointCloudData_t06BF6FA78C7ED8CBDCAAAFAC6548A309860E7C5B ___m_Data_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPointCloud::m_PointsUpdated
	bool ___m_PointsUpdated_9;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager
struct ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F  : public ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPointCloudManager::m_PointCloudPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointCloudPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs> UnityEngine.XR.ARFoundation.ARPointCloudManager::pointCloudsChanged
	Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* ___pointCloudsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2  : public ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___U3CreferenceImageU3Ek__BackingField_7;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// ARLocation[]
struct ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA  : public RuntimeArray
{
	ALIGN_FIELD (8) ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* m_Items[1];

	inline ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* m_Items[1];

	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_LoadAll_TisRuntimeObject_m0729D4449C742FB5D6A31C299881BAC4E90D7FE9_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void ARLocationsLoader::LoadFromResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocationsLoader_LoadFromResources_m47F932483213E01A787B8233BA871AFE1452710C (ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::LoadAll<UnityEngine.GameObject>(System.String)
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Resources_LoadAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mDEBC5FE6087B0AD2CFB4F716C0D40151C979C4DC (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m0729D4449C742FB5D6A31C299881BAC4E90D7FE9_gshared)(___path0, method);
}
// T[] UnityEngine.Resources::LoadAll<UnityEngine.AudioClip>(System.String)
inline AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* Resources_LoadAll_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m829CCE6BDD834452B9B0FDACB8EDCE2EB29DED87 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* (*) (String_t*, const RuntimeMethod*))Resources_LoadAll_TisRuntimeObject_m0729D4449C742FB5D6A31C299881BAC4E90D7FE9_gshared)(___path0, method);
}
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void ARLocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocation__ctor_mA714E1D6B7E9FF275E87E6A263EEEC221585CC41 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Location>()
inline Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* Object_FindObjectOfType_TisLocation_t6A399324ECDBEB431CC175FE628C20681C5EE277_m427F9033FEBCE218DC52AEA2CCEC099E04E75891 (const RuntimeMethod* method)
{
	return ((  Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC (const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A (const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void ARTapToPlaceObject::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// System.Void ARTapToPlaceObject::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m6D76274A65CF75DD2AE6CAC2A1DDADB39C184C66 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.ARPointCloud>()
inline ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* GameObject_GetComponent_TisARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2_m0F5060891BA490B8D2AD3BEBF17F6DE1E97796F2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.ARPointCloudManager>()
inline ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* GameObject_GetComponent_TisARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F_m8D17A3B55E96C174B6672ABA4522E855BACAEBFC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::FindMarkerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_FindMarkerPoint_m6F782BBBDCF6BD76D3C1EA214AE15D39711BCD83 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::PlaceRedCircleOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_PlaceRedCircleOnGround_m70D46045765C315B9B18A6AD0D1E1B63B35C96A0 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject PlaceOnPlane::get_spawnedRedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void PlaceOnPlane::set_spawnedRedObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedRedObject_m10436517E881B750C0551E401D5E6ED5F716F66B_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.GameObject PlaceOnPlane::get_spawnedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::set_spawnedObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedObject_m39E973C6D81170BB2AB71D250DF76942F24FF149_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::RemovePlaneIndicators()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_RemovePlaneIndicators_mF9B3105C5D451EC364977E0CCA5F4E61D91AD98D (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySound_m6241E619F7A13A8639E02FCFBD4B26F84DA52B1E (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::PlayAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_PlayAnimation_mA6AD2BC0A0150A44CEEDB44B6E79F991EA3FDF13 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::RemoveExplainButton(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_RemoveExplainButton_m5DD77A40709773D21311F099583BEA99527009D0 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, float ___time0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlaceOnPlane::RemoveExplainButtonForTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlaceOnPlane_RemoveExplainButtonForTime_mE6CA531E71943703F364EAE7F190D16AF6D0FBB2 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane/<RemoveExplainButtonForTime>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveExplainButtonForTimeU3Ed__53__ctor_m98808057713CEB83E30A6C29888DE663D78FBD7D (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957 (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B (*) (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void TrackedImages::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_UpdateImage_m08F41E332B88D70167C4D10FB63B31370C3967B8 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___image0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_trackingState()
inline int32_t ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A*, const RuntimeMethod*))ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Void TrackedImages::AssignGameObject(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_AssignGameObject_mFF5B9D6927B1F550BF0A9E83F17D313CABCF3A5C (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___image0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
inline ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921 (ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 (*) (ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_inline (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134 (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Single ARLocation::DegToRad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_DegToRad_m8122317AE7A8751DBBFA3F81640C000A244FEB4F (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___deg0, const RuntimeMethod* method) ;
// System.Single ARLocation::Distance_x(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Distance_x_mB51EFECAE2FC5C2939AD5F28AB6F1758B1AB5F88 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___lon_a0, float ___lon_b1, float ___lat_a2, float ___lat_b3, const RuntimeMethod* method) ;
// System.Single ARLocation::Distance_y(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Distance_y_mBB9DDB9D8AED34356C126A74FBE29FB3E144EDC9 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___lat_a0, float ___lat_b1, const RuntimeMethod* method) ;
// System.Single ARLocation::Final_distance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Final_distance_mB1566D1D2F754EF3A00EC99C1543435DD7A68BAC (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Single ARLocation::getDistance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_getDistance_mD02543EA2B5513E02B3E9BEBF93CCFDA458A4DEC (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___long_a0, float ___lat_a1, float ___long_b2, float ___lat_b3, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Location::GPSLoc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Location_GPSLoc_mC35528E5FBE8C544452477556346804B686D2A97 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void Location/<GPSLoc>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPSLocU3Ed__12__ctor_mAF6DB9E1EE25F31F9EBD42D1CA9EFADCFBE44CC9 (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void PlaceOnPlane::set_placedPrefab(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_placedPrefab_m286C0CB5F322B832CFEAE30AA17AED16C038FA5F_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// ARLocation ARLocation::closest(ARLocation[],System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* ARLocation_closest_mFE0F0C57E1608FBA15D9F15390D335E9C3FB745D (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* ___locations0, float ___mylon1, float ___mylat2, const RuntimeMethod* method) ;
// System.Void Location::<GPSLoc>g__SetModelForDisplaying|12_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_U3CGPSLocU3Eg__SetModelForDisplayingU7C12_0_m9094553740DE97B0FB900D018A6D6BCCAC217833 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// System.Void Location::<GPSLoc>g__SetSoundForPlaying|12_1(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_U3CGPSLocU3Eg__SetSoundForPlayingU7C12_1_m2F1C17C2EB781DE3954D40855C1912E87A916A08 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void Location::<GPSLoc>g__SetAnimationNameForPlaying|12_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_U3CGPSLocU3Eg__SetAnimationNameForPlayingU7C12_2_m40096110E48D490F68278A5F1DF93CEA79B92AB1 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MapController::PlaceUserOnMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_PlaceUserOnMap_m25D8D989C933752CBFF83D73E12840A0FA30F995 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MapSC::Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapSC_Location_m89029A2CA5830A9CFE9AF375416FB8F4893CE543 (MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* __this, const RuntimeMethod* method) ;
// System.Void MapSC/<Location>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocationU3Ed__6__ctor_m596A918A6605738C0C67DBCFE65D3ABBC8B49F5F (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_horizontalAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.LocationInfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<MapController>()
inline MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* Object_FindObjectOfType_TisMapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_m943D12ED47A5A0E2420C35664CEBBF78D4448E6C (const RuntimeMethod* method)
{
	return ((  MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void MapController::updateUserLocation(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_updateUserLocation_m28906E0CD5473B0086DB02A3085BFBBCCFADD1B7 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, float ___longi0, float ___lati1, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AnimationButton::set_Button(UnityEngine.UI.Button)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimationButton_set_Button_m662873E0FE20B02FE977115098AC0B6F961A30FF_inline (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button AnimationButton::get_Button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* AnimationButton_get_Button_mB727C1069165ADFB14EADD23BD985BE76DC8DDD0_inline (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void AnimationButton::ResetTriggers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_ResetTriggers_m859BE17B6EDBEADE2448382052D88AB0425C995F (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) ;
// System.Void AnimationButton::InvokeTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_InvokeTrigger_m8E66B33D00DC5E0EAA6C06684AEB209FAAEF934B (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_type_mACEB110E346B27168F177E7A909CFB8586A2B966 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void CharacterRotator::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRotator_Rotate_m28278B053BB6447E8EE65D637B8676B75A93EB8D (CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void ARLocationsLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocationsLoader_Start_m38D2B3FC8BA14E29BD99182A3F8021FE118BE537 (ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1* __this, const RuntimeMethod* method) 
{
	{
		// LoadFromResources();
		ARLocationsLoader_LoadFromResources_m47F932483213E01A787B8233BA871AFE1452710C(__this, NULL);
		// }
		return;
	}
}
// System.Void ARLocationsLoader::LoadFromResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocationsLoader_LoadFromResources_m47F932483213E01A787B8233BA871AFE1452710C (ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLocation_t6A399324ECDBEB431CC175FE628C20681C5EE277_m427F9033FEBCE218DC52AEA2CCEC099E04E75891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m829CCE6BDD834452B9B0FDACB8EDCE2EB29DED87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mDEBC5FE6087B0AD2CFB4F716C0D40151C979C4DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____82F7307FBA0D023903EAA5641E46424592119DD4BC34B87461F9C9173694EE39_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C2FD44161D8CBC1E72E119B31535FBC9C137AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD2B96F21044F3481E9B23CBA72FEF3E3D57774F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0A3E45019C55A856A0DD60E8E9AFB977BCD0708);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_11 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_12 = NULL;
	int32_t V_13 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_14 = NULL;
	int32_t V_15 = 0;
	{
		// GameObject[] allPrefabs = Resources.LoadAll<GameObject>("zip/prefabs");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = Resources_LoadAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mDEBC5FE6087B0AD2CFB4F716C0D40151C979C4DC(_stringLiteralE0A3E45019C55A856A0DD60E8E9AFB977BCD0708, Resources_LoadAll_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mDEBC5FE6087B0AD2CFB4F716C0D40151C979C4DC_RuntimeMethod_var);
		V_0 = L_0;
		// AudioClip[] allAudio = Resources.LoadAll<AudioClip>("zip/audio");
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1;
		L_1 = Resources_LoadAll_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m829CCE6BDD834452B9B0FDACB8EDCE2EB29DED87(_stringLiteral95C2FD44161D8CBC1E72E119B31535FBC9C137AE, Resources_LoadAll_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m829CCE6BDD834452B9B0FDACB8EDCE2EB29DED87_RuntimeMethod_var);
		V_1 = L_1;
		// TextAsset df = Resources.Load<TextAsset>("zip/info");
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_2;
		L_2 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A(_stringLiteralDD2B96F21044F3481E9B23CBA72FEF3E3D57774F, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		// string dftext = df.text;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_2, NULL);
		// string[] rows = dftext.Split('\n');
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)10), 0, NULL);
		V_2 = L_4;
		// size = rows.Length - 2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_2;
		NullCheck(L_5);
		__this->___size_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 2));
		// aRLocations = new ARLocation[size];
		int32_t L_6 = __this->___size_5;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_7 = (ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA*)(ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA*)SZArrayNew(ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___aRLocations_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRLocations_4), (void*)L_7);
		// for (int i = 0; i < size; i++)
		V_3 = 0;
		goto IL_005f;
	}

IL_004e:
	{
		// aRLocations[i] = new ARLocation();
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_8 = __this->___aRLocations_4;
		int32_t L_9 = V_3;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_10 = (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692*)il2cpp_codegen_object_new(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ARLocation__ctor_mA714E1D6B7E9FF275E87E6A263EEEC221585CC41(L_10, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692*)L_10);
		// for (int i = 0; i < size; i++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005f:
	{
		// for (int i = 0; i < size; i++)
		int32_t L_12 = V_3;
		int32_t L_13 = __this->___size_5;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_004e;
		}
	}
	{
		// for (int x = 1; x < rows.Length - 1; x++)
		V_4 = 1;
		goto IL_01d3;
	}

IL_0070:
	{
		// string[] cells = rows[x].Split(",");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_2;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_17, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		V_5 = L_18;
		// string model = "";
		V_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string sound = "";
		V_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int rowNum = x - 1;
		int32_t L_19 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		// for (int j = 0; j < cells.Length; j++)
		V_9 = 0;
		goto IL_0141;
	}

IL_009d:
	{
		// string cellInfo = cells[j];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_5;
		int32_t L_21 = V_9;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_10 = L_23;
		int32_t L_24 = V_9;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00c5;
			}
			case 1:
			{
				goto IL_00d7;
			}
			case 2:
			{
				goto IL_00ee;
			}
			case 3:
			{
				goto IL_0105;
			}
			case 4:
			{
				goto IL_010b;
			}
			case 5:
			{
				goto IL_011d;
			}
		}
	}
	{
		goto IL_013b;
	}

IL_00c5:
	{
		// aRLocations[rowNum].name = cellInfo;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_25 = __this->___aRLocations_4;
		int32_t L_26 = V_8;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		String_t* L_29 = V_10;
		NullCheck(L_28);
		L_28->___name_0 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___name_0), (void*)L_29);
		// break;
		goto IL_013b;
	}

IL_00d7:
	{
		// aRLocations[rowNum].lon = float.Parse(cellInfo);
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_30 = __this->___aRLocations_4;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		String_t* L_34 = V_10;
		float L_35;
		L_35 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_34, NULL);
		NullCheck(L_33);
		L_33->___lon_1 = L_35;
		// break;
		goto IL_013b;
	}

IL_00ee:
	{
		// aRLocations[rowNum].lat = float.Parse(cellInfo);
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_36 = __this->___aRLocations_4;
		int32_t L_37 = V_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		String_t* L_40 = V_10;
		float L_41;
		L_41 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_40, NULL);
		NullCheck(L_39);
		L_39->___lat_2 = L_41;
		// break;
		goto IL_013b;
	}

IL_0105:
	{
		// model = cellInfo;
		String_t* L_42 = V_10;
		V_6 = L_42;
		// break;
		goto IL_013b;
	}

IL_010b:
	{
		// aRLocations[rowNum].animationName = cellInfo;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_43 = __this->___aRLocations_4;
		int32_t L_44 = V_8;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		String_t* L_47 = V_10;
		NullCheck(L_46);
		L_46->___animationName_6 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___animationName_6), (void*)L_47);
		// break;
		goto IL_013b;
	}

IL_011d:
	{
		// char[] charsToTrim = { '*', ' ', '\'' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = L_48;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_50 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____82F7307FBA0D023903EAA5641E46424592119DD4BC34B87461F9C9173694EE39_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_49, L_50, NULL);
		V_11 = L_49;
		// sound = cellInfo.Trim(charsToTrim);
		String_t* L_51 = V_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_52 = V_11;
		NullCheck(L_51);
		String_t* L_53;
		L_53 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_51, L_52, NULL);
		V_7 = L_53;
	}

IL_013b:
	{
		// for (int j = 0; j < cells.Length; j++)
		int32_t L_54 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0141:
	{
		// for (int j = 0; j < cells.Length; j++)
		int32_t L_55 = V_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = V_5;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_009d;
		}
	}
	{
		// foreach (GameObject go in allPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_57 = V_0;
		V_12 = L_57;
		V_13 = 0;
		goto IL_0183;
	}

IL_0154:
	{
		// foreach (GameObject go in allPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_58 = V_12;
		int32_t L_59 = V_13;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_14 = L_61;
		// if (go.name == model)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_14;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_62, NULL);
		String_t* L_64 = V_6;
		bool L_65;
		L_65 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_63, L_64, NULL);
		if (!L_65)
		{
			goto IL_017d;
		}
	}
	{
		// aRLocations[rowNum].arModel = go;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_66 = __this->___aRLocations_4;
		int32_t L_67 = V_8;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = V_14;
		NullCheck(L_69);
		L_69->___arModel_3 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___arModel_3), (void*)L_70);
		// break;
		goto IL_018b;
	}

IL_017d:
	{
		int32_t L_71 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0183:
	{
		// foreach (GameObject go in allPrefabs)
		int32_t L_72 = V_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_73 = V_12;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))
		{
			goto IL_0154;
		}
	}

IL_018b:
	{
		// for (int i = 0; i < allAudio.Length; i++)
		V_15 = 0;
		goto IL_01c6;
	}

IL_0190:
	{
		// if (allAudio[i].name.Trim() == sound.Trim())
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_74 = V_1;
		int32_t L_75 = V_15;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		String_t* L_78;
		L_78 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_77, NULL);
		NullCheck(L_78);
		String_t* L_79;
		L_79 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_78, NULL);
		String_t* L_80 = V_7;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_80, NULL);
		bool L_82;
		L_82 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_79, L_81, NULL);
		if (!L_82)
		{
			goto IL_01c0;
		}
	}
	{
		// aRLocations[rowNum].clip = allAudio[i];
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_83 = __this->___aRLocations_4;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_87 = V_1;
		int32_t L_88 = V_15;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_86);
		L_86->___clip_5 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&L_86->___clip_5), (void*)L_90);
		// break;
		goto IL_01cd;
	}

IL_01c0:
	{
		// for (int i = 0; i < allAudio.Length; i++)
		int32_t L_91 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_01c6:
	{
		// for (int i = 0; i < allAudio.Length; i++)
		int32_t L_92 = V_15;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_93 = V_1;
		NullCheck(L_93);
		if ((((int32_t)L_92) < ((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))
		{
			goto IL_0190;
		}
	}

IL_01cd:
	{
		// for (int x = 1; x < rows.Length - 1; x++)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01d3:
	{
		// for (int x = 1; x < rows.Length - 1; x++)
		int32_t L_95 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = V_2;
		NullCheck(L_96);
		if ((((int32_t)L_95) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_96)->max_length)), 1)))))
		{
			goto IL_0070;
		}
	}
	{
		// Location location = FindObjectOfType<Location>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_97;
		L_97 = Object_FindObjectOfType_TisLocation_t6A399324ECDBEB431CC175FE628C20681C5EE277_m427F9033FEBCE218DC52AEA2CCEC099E04E75891(Object_FindObjectOfType_TisLocation_t6A399324ECDBEB431CC175FE628C20681C5EE277_m427F9033FEBCE218DC52AEA2CCEC099E04E75891_RuntimeMethod_var);
		// location.arLocations = aRLocations;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_98 = __this->___aRLocations_4;
		NullCheck(L_97);
		L_97->___arLocations_10 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_97->___arLocations_10), (void*)L_98);
		// }
		return;
	}
}
// System.Void ARLocationsLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocationsLoader_Update_m0B3EF29684FD6065F55A06C9D79D54D0C5B2C89C (ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARLocationsLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocationsLoader__ctor_m54167A374B661381B26E7328F8D3D83DE4366FA9 (ARLocationsLoader_t3B418C115BA8F90821ED45CDDCD62F3C5C9EC3D1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARTapToPlaceObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Start_m4A8A22AA04062DE0229C41BC767914F2C04F3020 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arOrigin = FindObjectOfType<ARSessionOrigin>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0;
		L_0 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC(Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		__this->___arOrigin_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arOrigin_5), (void*)L_0);
		// aRRaycastManager = FindObjectOfType<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_1;
		L_1 = Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A(Object_FindObjectOfType_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m679574C59C3822BC7B6B36E6DBFA4C7AAF77620A_RuntimeMethod_var);
		__this->___aRRaycastManager_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRRaycastManager_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9B0A45DCE03CA35CFA8CF6CAB12F0369A1C1BAF4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePlacementPose();
		ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230(__this, NULL);
		// UpdatePlacementIndicator();
		ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57(__this, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m6D76274A65CF75DD2AE6CAC2A1DDADB39C184C66(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_1, NULL);
		V_0 = L_2;
		// var hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// aRRaycastManager.Raycast(screenCenter, hits, TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_4 = __this->___aRRaycastManager_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_4, L_6, L_7, ((int32_t)15), NULL);
		// if (placementPoseIsValid)
		bool L_9 = __this->___placementPoseIsValid_8;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// placementPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = V_1;
		NullCheck(L_10);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_11;
		L_11 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_10, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		__this->___placementPose_6 = L_12;
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// if (placementPoseIsValid) {
		bool L_0 = __this->___placementPoseIsValid_8;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// placementIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placementIndicator_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// placementIndicator.transform.SetPositionAndRotation(placementPose.position , placementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placementIndicator_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___placementPose_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->___placementPose_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		NullCheck(L_3);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_3, L_5, L_7, NULL);
		return;
	}

IL_003b:
	{
		// placementIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___placementIndicator_4;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_m835E4B900ABF4C300EE8938022D18FA3FDD16884 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySound_m6241E619F7A13A8639E02FCFBD4B26F84DA52B1E (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		// sound1.PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sound1_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void KeepRotationZero::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeepRotationZero_Start_m37BDADB058D9DC4F4A8A19AFB975F266BA73085F (KeepRotationZero_tB04DD1AACF44E031F88AA9E8537B8F29F60555F2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KeepRotationZero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeepRotationZero_Update_m38F3F95BE960D91D77E841B11FFC309D2211F899 (KeepRotationZero_tB04DD1AACF44E031F88AA9E8537B8F29F60555F2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KeepRotationZero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeepRotationZero__ctor_m357AE79F96963BE2CF89E082AFFC7912A35BD615 (KeepRotationZero_tB04DD1AACF44E031F88AA9E8537B8F29F60555F2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.GameObject PlaceOnPlane::get_placedPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_placedPrefab_m3AFFB08BCC49A452422415B169739F6EB08C210B (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PlacedPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PlacedPrefab_4;
		return L_0;
	}
}
// System.Void PlaceOnPlane::set_placedPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_set_placedPrefab_m286C0CB5F322B832CFEAE30AA17AED16C038FA5F (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_PlacedPrefab = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_PlacedPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlacedPrefab_4), (void*)L_0);
		// set { m_PlacedPrefab = value; }
		return;
	}
}
// UnityEngine.GameObject PlaceOnPlane::get_spawnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedObjectU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void PlaceOnPlane::set_spawnedObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedObject_m39E973C6D81170BB2AB71D250DF76942F24FF149 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CspawnedObjectU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedObjectU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject PlaceOnPlane::get_spawnedRedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedRedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedRedObjectU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void PlaceOnPlane::set_spawnedRedObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedRedObject_m10436517E881B750C0551E401D5E6ED5F716F66B (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedRedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CspawnedRedObjectU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedRedObjectU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
// System.Object PlaceOnPlane::get_detectorParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlaceOnPlane_get_detectorParameters_m54EEE743E8D08B910E509A120F1347F1CE454B5F (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// public object detectorParameters { get; private set; }
		RuntimeObject* L_0 = __this->___U3CdetectorParametersU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void PlaceOnPlane::set_detectorParameters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_set_detectorParameters_mADE66948113326AAB5359DD57255894279297B10 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object detectorParameters { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CdetectorParametersU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdetectorParametersU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Void PlaceOnPlane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Start_mAB5B71328132068292CC9339EAE5F8DD40249822 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F_m8D17A3B55E96C174B6672ABA4522E855BACAEBFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2_m0F5060891BA490B8D2AD3BEBF17F6DE1E97796F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FD7F24E92EA095727378E3E8B475DF18D502CE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF6084F5698C98174E21E34D3F7776AAA5FA1783);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___cam_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_10), (void*)L_0);
		// arPointCloud = gameObject.GetComponent<ARPointCloud>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_2;
		L_2 = GameObject_GetComponent_TisARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2_m0F5060891BA490B8D2AD3BEBF17F6DE1E97796F2(L_1, GameObject_GetComponent_TisARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2_m0F5060891BA490B8D2AD3BEBF17F6DE1E97796F2_RuntimeMethod_var);
		__this->___arPointCloud_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arPointCloud_13), (void*)L_2);
		// arPointCloudManager = gameObject.GetComponent<ARPointCloudManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_4;
		L_4 = GameObject_GetComponent_TisARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F_m8D17A3B55E96C174B6672ABA4522E855BACAEBFC(L_3, GameObject_GetComponent_TisARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F_m8D17A3B55E96C174B6672ABA4522E855BACAEBFC_RuntimeMethod_var);
		__this->___arPointCloudManager_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arPointCloudManager_14), (void*)L_4);
		// spinner = GameObject.Find("Spinner");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral2FD7F24E92EA095727378E3E8B475DF18D502CE4, NULL);
		__this->___spinner_21 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spinner_21), (void*)L_5);
		// prompt = GameObject.Find("Prompt");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralBF6084F5698C98174E21E34D3F7776AAA5FA1783, NULL);
		__this->___prompt_22 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prompt_22), (void*)L_6);
		// closestLocationText.text = "?";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___closestLocationText_15;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		// clickedPlace = false;
		__this->___clickedPlace_19 = (bool)0;
		// explainButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___explainButton_9;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// playingAnimation = false;
		__this->___playingAnimation_20 = (bool)0;
		// }
		return;
	}
}
// System.Void PlaceOnPlane::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Awake_m6C1DE9914CD75B0D522422F16A4EEB1269582753 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_30), (void*)L_0);
		// if (placementUpdate == null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___placementUpdate_5;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// placementUpdate = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->___placementUpdate_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placementUpdate_5), (void*)L_2);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Boolean PlaceOnPlane::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceOnPlane_TryGetTouchPosition_m0A65A861CB2C303E210558A7B6A5B125D5F89CCC (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___touchPosition0, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___touchPosition0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_3;
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___touchPosition0;
		il2cpp_codegen_initobj(L_4, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}
}
// System.Void PlaceOnPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Update_m4BAC7B0437CB4CB61EF9C23849AC096E5EE7C2B7 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// FindMarkerPoint();
		PlaceOnPlane_FindMarkerPoint_m6F782BBBDCF6BD76D3C1EA214AE15D39711BCD83(__this, NULL);
		// if (!clickedPlace) {
		bool L_0 = __this->___clickedPlace_19;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// PlaceRedCircleOnGround();
		PlaceOnPlane_PlaceRedCircleOnGround_m70D46045765C315B9B18A6AD0D1E1B63B35C96A0(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::PlaceRedCircleOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_PlaceRedCircleOnGround_m70D46045765C315B9B18A6AD0D1E1B63B35C96A0 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689399F194BB2C34A0B22988A80D007D815CFDB9);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 screenPos = new Vector2(Screen.width / 2, Screen.height / 2);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)((int32_t)(L_0/2))), ((float)((int32_t)(L_1/2))), NULL);
		// if (m_RaycastManager.Raycast(screenPos, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_2 = __this->___m_RaycastManager_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_4 = ((PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var))->___s_Hits_29;
		NullCheck(L_2);
		bool L_5;
		L_5 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_2, L_3, L_4, 1, NULL);
		if (!L_5)
		{
			goto IL_0184;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_6 = ((PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var))->___s_Hits_29;
		NullCheck(L_6);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_7;
		L_7 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_6, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		V_1 = L_8;
		// if (spawnedRedObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0100;
		}
	}
	{
		// spawnedRedObject = Instantiate(redCircle, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___redCircle_17;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_11, L_13, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		PlaceOnPlane_set_spawnedRedObject_m10436517E881B750C0551E401D5E6ED5F716F66B_inline(__this, L_16, NULL);
		// spawnedRedObject.transform.LookAt(cam.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = __this->___cam_10;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		NullCheck(L_18);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_18, L_21, NULL);
		// spawnedRedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, hitPose.rotation.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24.___rotation_1;
		float L_26 = L_25.___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		V_3 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_30 = L_29.___y_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_31 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = L_31.___rotation_1;
		float L_33 = L_32.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_26, L_30, L_33, NULL);
		NullCheck(L_23);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_23, L_34, NULL);
		// state.text = "PLACE THE X DIRECTLY ON THE RED CIRCLE ON THE GROUND.\nTHEN TAP 'PLACE'!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___state_18;
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, _stringLiteral689399F194BB2C34A0B22988A80D007D815CFDB9);
		// if (spinner) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___spinner_21;
		bool L_37;
		L_37 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_36, NULL);
		if (!L_37)
		{
			goto IL_0179;
		}
	}
	{
		// Destroy(spinner);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___spinner_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_38, NULL);
		goto IL_0179;
	}

IL_0100:
	{
		// spawnedRedObject.transform.position = hitPose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_41 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41.___position_0;
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_42, NULL);
		// spawnedRedObject.transform.LookAt(cam.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45 = __this->___cam_10;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		NullCheck(L_44);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_44, L_47, NULL);
		// spawnedRedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, hitPose.rotation.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_50 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = L_50.___rotation_1;
		float L_52 = L_51.___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_53);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_53, NULL);
		V_3 = L_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_56 = L_55.___y_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_57 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = L_57.___rotation_1;
		float L_59 = L_58.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_52, L_56, L_59, NULL);
		NullCheck(L_49);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_49, L_60, NULL);
	}

IL_0179:
	{
		// placementUpdate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_61 = __this->___placementUpdate_5;
		NullCheck(L_61);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_61, NULL);
	}

IL_0184:
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::RemovePlaneIndicators()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_RemovePlaneIndicators_mF9B3105C5D451EC364977E0CCA5F4E61D91AD98D (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// arPointCloud.enabled = !arPointCloud.enabled;
		ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_0 = __this->___arPointCloud_13;
		ARPointCloud_t884F66E095A8DEA1E8207FBF9E15F98D7C75B1F2* L_1 = __this->___arPointCloud_13;
		NullCheck(L_1);
		bool L_2;
		L_2 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_1, NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// arPointCloudManager.enabled = !arPointCloudManager.enabled;
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_3 = __this->___arPointCloudManager_14;
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_4 = __this->___arPointCloudManager_14;
		NullCheck(L_4);
		bool L_5;
		L_5 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_4, NULL);
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::DiableVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_DiableVisual_mBF497DCF1C45334EAEDC48EF12E18015079ED6CE (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::LockModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_LockModel_mCA824DFD8D1F1436D035B8AD2C351957E6DE8120 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// isModelLocked = true;
		__this->___isModelLocked_6 = (bool)1;
		// }
		return;
	}
}
// System.Void PlaceOnPlane::ResetScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_ResetScene_m1C584836CDF8706BEB93771B92748E21468D30BD (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::FindMarkerPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_FindMarkerPoint_m6F782BBBDCF6BD76D3C1EA214AE15D39711BCD83 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::PlaceARObjectInTheMiddle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_PlaceARObjectInTheMiddle_m2D211788B00DF6C3E8290A93D5E65A8A1E09C959 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 screenPos = new Vector2(Screen.width / 2, Screen.height / 2);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)((int32_t)(L_0/2))), ((float)((int32_t)(L_1/2))), NULL);
		// if (m_RaycastManager.Raycast(screenPos, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_2 = __this->___m_RaycastManager_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_4 = ((PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var))->___s_Hits_29;
		NullCheck(L_2);
		bool L_5;
		L_5 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_2, L_3, L_4, 1, NULL);
		if (!L_5)
		{
			goto IL_0138;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_6 = ((PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var))->___s_Hits_29;
		NullCheck(L_6);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_7;
		L_7 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_6, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		V_1 = L_8;
		// if (spawnedObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		// clickedPlace = true;
		__this->___clickedPlace_19 = (bool)1;
		// spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_PlacedPrefab_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = L_14.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_11, L_13, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		PlaceOnPlane_set_spawnedObject_m39E973C6D81170BB2AB71D250DF76942F24FF149_inline(__this, L_16, NULL);
		// RemovePlaneIndicators();
		PlaceOnPlane_RemovePlaneIndicators_mF9B3105C5D451EC364977E0CCA5F4E61D91AD98D(__this, NULL);
		// explainButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___explainButton_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		goto IL_0117;
	}

IL_008b:
	{
		// spawnedObject.transform.position = hitPose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28_inline(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20.___position_0;
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_21, NULL);
		// spawnedObject.transform.LookAt(cam.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28_inline(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___cam_10;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		NullCheck(L_23);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_23, L_26, NULL);
		// spawnedObject.transform.rotation = Quaternion.Euler(hitPose.rotation.x, transform.rotation.eulerAngles.y, transform.rotation.eulerAngles.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28_inline(__this, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29.___rotation_1;
		float L_31 = L_30.___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		V_3 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_35 = L_34.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_36, NULL);
		V_3 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		float L_39 = L_38.___z_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_31, L_35, L_39, NULL);
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_40, NULL);
		// RemovePlaneIndicators();
		PlaceOnPlane_RemovePlaneIndicators_mF9B3105C5D451EC364977E0CCA5F4E61D91AD98D(__this, NULL);
	}

IL_0117:
	{
		// Destroy(placeButton);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___placeButton_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_41, NULL);
		// Destroy(spawnedRedObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_42, NULL);
		// placementUpdate.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_43 = __this->___placementUpdate_5;
		NullCheck(L_43);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_43, NULL);
	}

IL_0138:
	{
		// }
		return;
	}
}
// System.Void PlaceOnPlane::ExplainButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_ExplainButton_mF7310BC7B82604213F6DD447CCC7367CCDCD1272 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// explainButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___explainButton_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// AudioManager.Instance.PlaySound(clipForThisLocation);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_1 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___Instance_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___clipForThisLocation_26;
		NullCheck(L_1);
		AudioManager_PlaySound_m6241E619F7A13A8639E02FCFBD4B26F84DA52B1E(L_1, L_2, NULL);
		// PlayAnimation();
		PlaceOnPlane_PlayAnimation_mA6AD2BC0A0150A44CEEDB44B6E79F991EA3FDF13(__this, NULL);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::PlayAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_PlayAnimation_mA6AD2BC0A0150A44CEEDB44B6E79F991EA3FDF13 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D91A5F9B5EFBD3B7B4605DA132D67D6CE783D63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GameObject.FindGameObjectWithTag("ARModel").GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteral3D91A5F9B5EFBD3B7B4605DA132D67D6CE783D63, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_28), (void*)L_1);
		// animator.Play(animationName);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_28;
		String_t* L_3 = __this->___animationName_27;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, L_3, NULL);
		// RemoveExplainButton(clipForThisLocation.length);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___clipForThisLocation_26;
		NullCheck(L_4);
		float L_5;
		L_5 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_4, NULL);
		PlaceOnPlane_RemoveExplainButton_m5DD77A40709773D21311F099583BEA99527009D0(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::RemoveExplainButton(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_RemoveExplainButton_m5DD77A40709773D21311F099583BEA99527009D0 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(RemoveExplainButtonForTime(time));
		float L_0 = ___time0;
		RuntimeObject* L_1;
		L_1 = PlaceOnPlane_RemoveExplainButtonForTime_mE6CA531E71943703F364EAE7F190D16AF6D0FBB2(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlaceOnPlane::RemoveExplainButtonForTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlaceOnPlane_RemoveExplainButtonForTime_mE6CA531E71943703F364EAE7F190D16AF6D0FBB2 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* L_0 = (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85*)il2cpp_codegen_object_new(U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRemoveExplainButtonForTimeU3Ed__53__ctor_m98808057713CEB83E30A6C29888DE663D78FBD7D(L_0, 0, NULL);
		U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->___time_2 = L_3;
		return L_2;
	}
}
// System.Void PlaceOnPlane::Yes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Yes_m1C5BF077A62003A196BCD33EBFF5F8EA48081508 (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(prompt);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___prompt_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlaceOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane__ctor_mEAC8D0276C9BC36A8A633F162E3F8EBF96D6255C (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE9A0B1763DE24637DC6B4FB7A133DD78FD8A10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string animationName = "arm_npc_1|A";
		__this->___animationName_27 = _stringLiteralCDE9A0B1763DE24637DC6B4FB7A133DD78FD8A10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animationName_27), (void*)_stringLiteralCDE9A0B1763DE24637DC6B4FB7A133DD78FD8A10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlaceOnPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane__cctor_m5C6838410D7CCB2006F0E34B9FFDDADD2274C50F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var))->___s_Hits_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3_il2cpp_TypeInfo_var))->___s_Hits_29), (void*)L_0);
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
// System.Void PlaceOnPlane/<RemoveExplainButtonForTime>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveExplainButtonForTimeU3Ed__53__ctor_m98808057713CEB83E30A6C29888DE663D78FBD7D (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlaceOnPlane/<RemoveExplainButtonForTime>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveExplainButtonForTimeU3Ed__53_System_IDisposable_Dispose_m6CB1DAB31D7D1E854A4C37D8290B71211D4B840B (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlaceOnPlane/<RemoveExplainButtonForTime>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRemoveExplainButtonForTimeU3Ed__53_MoveNext_m179C233ADCF44C890310DE10A1571B01F7F3C62F (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(time);
		float L_4 = __this->___time_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// explainButton.SetActive(true);
		PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___explainButton_9;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlaceOnPlane/<RemoveExplainButtonForTime>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRemoveExplainButtonForTimeU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3BFABB5091141DBF2B94EEF1DED66906FDB00AF (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlaceOnPlane/<RemoveExplainButtonForTime>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveExplainButtonForTimeU3Ed__53_System_Collections_IEnumerator_Reset_m00179F55971C5E65BD645F4FB1CED324168A0BF0 (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRemoveExplainButtonForTimeU3Ed__53_System_Collections_IEnumerator_Reset_m00179F55971C5E65BD645F4FB1CED324168A0BF0_RuntimeMethod_var)));
	}
}
// System.Object PlaceOnPlane/<RemoveExplainButtonForTime>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRemoveExplainButtonForTimeU3Ed__53_System_Collections_IEnumerator_get_Current_mE73D61B13D5496F087122F7E6D4BCE02040E4C85 (U3CRemoveExplainButtonForTimeU3Ed__53_tA64CE7F918AB7F070DD8DB15152BF1173D11BA85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void TrackedImages::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_Awake_m5C192AFCC40A684780ED5E65FB3B5E158754C008 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// m_TrackedImageManager = GetComponent<ARTrackedImageManager>();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0;
		L_0 = Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683(__this, Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		__this->___m_TrackedImageManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackedImageManager_5), (void*)L_0);
		// foreach (GameObject arObject in arObjectsToPlace) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___arObjectsToPlace_4;
		V_0 = L_1;
		V_1 = 0;
		goto IL_005b;
	}

IL_001d:
	{
		// foreach (GameObject arObject in arObjectsToPlace) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// GameObject newObject = Instantiate(arObject, Vector3.zero, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_3 = L_9;
		// newObject.name = arObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, L_12, NULL);
		// arObjects.Add(arObject.name, newObject);
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_13 = __this->___arObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF(L_13, L_15, L_16, Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var);
		// newObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_3;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005b:
	{
		// foreach (GameObject arObject in arObjectsToPlace) {
		int32_t L_19 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TrackedImages::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_OnEnable_m6E5ECCF6A0BF9F98CF6FB73091ACF812AFFD9F19 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedImages_OnTrackedImageChanged_m51AFECDBE30A47999349BAD656ABBAF13E7C2721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackedImageManager.trackedImagesChanged += OnTrackedImageChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_5;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)TrackedImages_OnTrackedImageChanged_m51AFECDBE30A47999349BAD656ABBAF13E7C2721_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TrackedImages::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_OnDisable_m5E1498788CAD82E4C3AE00F4F180F49AEE9A5E16 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedImages_OnTrackedImageChanged_m51AFECDBE30A47999349BAD656ABBAF13E7C2721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackedImageManager.trackedImagesChanged -= OnTrackedImageChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_5;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)TrackedImages_OnTrackedImageChanged_m51AFECDBE30A47999349BAD656ABBAF13E7C2721_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TrackedImages::OnTrackedImageChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_OnTrackedImageChanged_m51AFECDBE30A47999349BAD656ABBAF13E7C2721 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_1 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_2 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_3;
	memset((&V_3), 0, sizeof(V_3));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_4 = NULL;
	{
		// foreach (ARTrackedImage image in args.added) {
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___args0), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001e_1;
			}

IL_000f_1:
			{
				// foreach (ARTrackedImage image in args.added) {
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_1 = L_2;
				// UpdateImage(image);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = V_1;
				TrackedImages_UpdateImage_m08F41E332B88D70167C4D10FB63B31370C3967B8(__this, L_3, NULL);
			}

IL_001e_1:
			{
				// foreach (ARTrackedImage image in args.added) {
				bool L_4;
				L_4 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// foreach (ARTrackedImage image in args.updated)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_5;
		L_5 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___args0), NULL);
		NullCheck(L_5);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_6;
		L_6 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_5, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007f_1;
			}

IL_0046_1:
			{
				// foreach (ARTrackedImage image in args.updated)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_7;
				L_7 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_2 = L_7;
				// if (image.trackingState == TrackingState.Tracking)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_8 = V_2;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF(L_8, ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
				if ((!(((uint32_t)L_9) == ((uint32_t)2))))
				{
					goto IL_0060_1;
				}
			}
			{
				// UpdateImage(image);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_10 = V_2;
				TrackedImages_UpdateImage_m08F41E332B88D70167C4D10FB63B31370C3967B8(__this, L_10, NULL);
				goto IL_007f_1;
			}

IL_0060_1:
			{
				// arObjects[image.referenceImage.name].SetActive(false);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_11 = __this->___arObjects_6;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_12 = V_2;
				NullCheck(L_12);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_13;
				L_13 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_12, NULL);
				V_3 = L_13;
				String_t* L_14;
				L_14 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_11, L_14, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
			}

IL_007f_1:
			{
				// foreach (ARTrackedImage image in args.updated)
				bool L_16;
				L_16 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// foreach (ARTrackedImage image in args.removed)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_17;
		L_17 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline((&___args0), NULL);
		NullCheck(L_17);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_18;
		L_18 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_17, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00db:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d0_1;
			}

IL_00a7_1:
			{
				// foreach (ARTrackedImage image in args.removed)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_19;
				L_19 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_4 = L_19;
				// arObjects[image.referenceImage.name].SetActive(false);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_20 = __this->___arObjects_6;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_21 = V_4;
				NullCheck(L_21);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_22;
				L_22 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_21, NULL);
				V_3 = L_22;
				String_t* L_23;
				L_23 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_3), NULL);
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
				L_24 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_20, L_23, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
				NullCheck(L_24);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
			}

IL_00d0_1:
			{
				// foreach (ARTrackedImage image in args.removed)
				bool L_25;
				L_25 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_00e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void TrackedImages::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_UpdateImage_m08F41E332B88D70167C4D10FB63B31370C3967B8 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___image0, const RuntimeMethod* method) 
{
	{
		// AssignGameObject(image);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_0 = ___image0;
		TrackedImages_AssignGameObject_mFF5B9D6927B1F550BF0A9E83F17D313CABCF3A5C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TrackedImages::AssignGameObject(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages_AssignGameObject_mFF5B9D6927B1F550BF0A9E83F17D313CABCF3A5C (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___image0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// GameObject prefab = arObjects[image.referenceImage.name];
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_0 = __this->___arObjects_6;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_1 = ___image0;
		NullCheck(L_1);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_2;
		L_2 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_0), NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_0, L_3, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		// prefab.transform.position = image.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_7 = ___image0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_9, NULL);
		// prefab.transform.rotation = image.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_12 = ___image0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_14, NULL);
		// prefab.SetActive(true);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// foreach (GameObject go in arObjects.Values) {
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_15 = __this->___arObjects_6;
		NullCheck(L_15);
		ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* L_16;
		L_16 = Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F(L_15, Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F_RuntimeMethod_var);
		NullCheck(L_16);
		Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 L_17;
		L_17 = ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921(L_16, ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921_RuntimeMethod_var);
		V_1 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF((&V_1), Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_005e_1:
			{
				// foreach (GameObject go in arObjects.Values) {
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
				L_18 = Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_inline((&V_1), Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_RuntimeMethod_var);
				V_2 = L_18;
				// if (go.name != image.referenceImage.name) {
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
				NullCheck(L_19);
				String_t* L_20;
				L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_21 = ___image0;
				NullCheck(L_21);
				XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_22;
				L_22 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_21, NULL);
				V_0 = L_22;
				String_t* L_23;
				L_23 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_0), NULL);
				bool L_24;
				L_24 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_20, L_23, NULL);
				if (!L_24)
				{
					goto IL_0088_1;
				}
			}
			{
				// go.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
				NullCheck(L_25);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
			}

IL_0088_1:
			{
				// foreach (GameObject go in arObjects.Values) {
				bool L_26;
				L_26 = Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134((&V_1), Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_00a1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void TrackedImages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedImages__ctor_mF7C2A7EF5BC64A0B55011B09F6704B6E5C5C8B54 (TrackedImages_t02C0068752CF9E2B01A4C5649CF653253E572484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string , GameObject> arObjects = new Dictionary<string, GameObject>();
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_0 = (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*)il2cpp_codegen_object_new(Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B(L_0, Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		__this->___arObjects_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arObjects_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARLocation::.ctor(System.Single,System.Single,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocation__ctor_m3AD29CAD78082645C9E095327AA1AF14304216C1 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___lo0, float ___la1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m2, const RuntimeMethod* method) 
{
	{
		// public ARLocation(float lo, float la, GameObject m)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// lon = lo;
		float L_0 = ___lo0;
		__this->___lon_1 = L_0;
		// lat = la;
		float L_1 = ___la1;
		__this->___lat_2 = L_1;
		// arModel = m;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___m2;
		__this->___arModel_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arModel_3), (void*)L_2);
		// }
		return;
	}
}
// System.Void ARLocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocation__ctor_mA714E1D6B7E9FF275E87E6A263EEEC221585CC41 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, const RuntimeMethod* method) 
{
	{
		// public ARLocation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// lon = 0;
		__this->___lon_1 = (0.0f);
		// lat = 0;
		__this->___lat_2 = (0.0f);
		// arModel = null;
		__this->___arModel_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arModel_3), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Single ARLocation::DegToRad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_DegToRad_m8122317AE7A8751DBBFA3F81640C000A244FEB4F (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___deg0, const RuntimeMethod* method) 
{
	{
		// temp = (deg * Mathf.PI ) / 180.0f;
		float L_0 = ___deg0;
		// temp = Mathf.Tan(temp);
		float L_1;
		L_1 = tanf(((float)(((float)il2cpp_codegen_multiply(L_0, (3.14159274f)))/(180.0f))));
		// return temp;
		return L_1;
	}
}
// System.Single ARLocation::Distance_x(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Distance_x_mB51EFECAE2FC5C2939AD5F28AB6F1758B1AB5F88 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___lon_a0, float ___lon_b1, float ___lat_a2, float ___lat_b3, const RuntimeMethod* method) 
{
	{
		// temp = (lat_b - lat_a);
		float L_0 = ___lat_b3;
		float L_1 = ___lat_a2;
		// c = Mathf.Abs(temp * Mathf.Cos((lat_a + lat_b)) / 2);
		float L_2 = ___lat_a2;
		float L_3 = ___lat_b3;
		float L_4;
		L_4 = cosf(((float)il2cpp_codegen_add(L_2, L_3)));
		float L_5;
		L_5 = fabsf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), L_4))/(2.0f))));
		// return c;
		return L_5;
	}
}
// System.Single ARLocation::Distance_y(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Distance_y_mBB9DDB9D8AED34356C126A74FBE29FB3E144EDC9 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___lat_a0, float ___lat_b1, const RuntimeMethod* method) 
{
	{
		// c = (lat_b - lat_a);
		float L_0 = ___lat_b1;
		float L_1 = ___lat_a0;
		// return c;
		return ((float)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Single ARLocation::Final_distance(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Final_distance_mB1566D1D2F754EF3A00EC99C1543435DD7A68BAC (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// c = Mathf.Abs(Mathf.Sqrt(Mathf.Pow(x, 2f) + Mathf.Pow(y, 2f))) * 6371;
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(L_0, (2.0f));
		float L_2 = ___y1;
		float L_3;
		L_3 = powf(L_2, (2.0f));
		float L_4;
		L_4 = sqrtf(((float)il2cpp_codegen_add(L_1, L_3)));
		float L_5;
		L_5 = fabsf(L_4);
		// return c;
		return ((float)il2cpp_codegen_multiply(L_5, (6371.0f)));
	}
}
// System.Single ARLocation::Calculate_Distance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_Calculate_Distance_m87B9907CE5788F0FADA49D35A45D64744D5F67A4 (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___long_a0, float ___lat_a1, float ___long_b2, float ___lat_b3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// a_long_r = DegToRad(long_a);
		float L_0 = ___long_a0;
		float L_1;
		L_1 = ARLocation_DegToRad_m8122317AE7A8751DBBFA3F81640C000A244FEB4F(__this, L_0, NULL);
		V_0 = L_1;
		// a_lat_r = DegToRad(lat_a);
		float L_2 = ___lat_a1;
		float L_3;
		L_3 = ARLocation_DegToRad_m8122317AE7A8751DBBFA3F81640C000A244FEB4F(__this, L_2, NULL);
		V_1 = L_3;
		// p_long_r = DegToRad(long_b);
		float L_4 = ___long_b2;
		float L_5;
		L_5 = ARLocation_DegToRad_m8122317AE7A8751DBBFA3F81640C000A244FEB4F(__this, L_4, NULL);
		V_2 = L_5;
		// p_lat_r = DegToRad(lat_b);
		float L_6 = ___lat_b3;
		float L_7;
		L_7 = ARLocation_DegToRad_m8122317AE7A8751DBBFA3F81640C000A244FEB4F(__this, L_6, NULL);
		V_3 = L_7;
		// dist_x = Distance_x(a_long_r, p_long_r, a_lat_r, p_lat_r);
		float L_8 = V_0;
		float L_9 = V_2;
		float L_10 = V_1;
		float L_11 = V_3;
		float L_12;
		L_12 = ARLocation_Distance_x_mB51EFECAE2FC5C2939AD5F28AB6F1758B1AB5F88(__this, L_8, L_9, L_10, L_11, NULL);
		V_4 = L_12;
		// dist_y = Distance_y(a_lat_r, p_lat_r);
		float L_13 = V_1;
		float L_14 = V_3;
		float L_15;
		L_15 = ARLocation_Distance_y_mBB9DDB9D8AED34356C126A74FBE29FB3E144EDC9(__this, L_13, L_14, NULL);
		V_5 = L_15;
		// total_dist = Final_distance(dist_x, dist_y);
		float L_16 = V_4;
		float L_17 = V_5;
		float L_18;
		L_18 = ARLocation_Final_distance_mB1566D1D2F754EF3A00EC99C1543435DD7A68BAC(__this, L_16, L_17, NULL);
		// return total_dist;
		return L_18;
	}
}
// System.Single ARLocation::getDistance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARLocation_getDistance_mD02543EA2B5513E02B3E9BEBF93CCFDA458A4DEC (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, float ___long_a0, float ___lat_a1, float ___long_b2, float ___lat_b3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (float)Math.Sqrt((Math.Pow(long_a - long_b, 2) + Math.Pow(lat_a - lat_b, 2)));
		float L_0 = ___long_a0;
		float L_1 = ___long_b2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)((float)il2cpp_codegen_subtract(L_0, L_1))), (2.0), NULL);
		float L_3 = ___lat_a1;
		float L_4 = ___lat_b3;
		double L_5;
		L_5 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)((float)il2cpp_codegen_subtract(L_3, L_4))), (2.0), NULL);
		double L_6;
		L_6 = sqrt(((double)il2cpp_codegen_add(L_2, L_5)));
		return ((float)L_6);
	}
}
// ARLocation ARLocation::closest(ARLocation[],System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* ARLocation_closest_mFE0F0C57E1608FBA15D9F15390D335E9C3FB745D (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* __this, ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* ___locations0, float ___mylon1, float ___mylat2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* V_0 = NULL;
	double V_1 = 0.0;
	String_t* V_2 = NULL;
	ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* V_3 = NULL;
	int32_t V_4 = 0;
	ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* V_5 = NULL;
	float V_6 = 0.0f;
	{
		// ARLocation closest = locations[0];
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_0 = ___locations0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// double shortest = getDistance(mylon, mylat, locations[0].lon, locations[0].lat);
		float L_3 = ___mylon1;
		float L_4 = ___mylat2;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_5 = ___locations0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		float L_8 = L_7->___lon_1;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_9 = ___locations0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		float L_12 = L_11->___lat_2;
		float L_13;
		L_13 = ARLocation_getDistance_mD02543EA2B5513E02B3E9BEBF93CCFDA458A4DEC(__this, L_3, L_4, L_8, L_12, NULL);
		V_1 = ((double)L_13);
		// string temp = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (ARLocation loc in locations)
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_14 = ___locations0;
		V_3 = L_14;
		V_4 = 0;
		goto IL_0095;
	}

IL_002b:
	{
		// foreach (ARLocation loc in locations)
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_15 = V_3;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		// float distance = getDistance(mylon, mylat, loc.lon, loc.lat);
		float L_19 = ___mylon1;
		float L_20 = ___mylat2;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_21 = V_5;
		NullCheck(L_21);
		float L_22 = L_21->___lon_1;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_23 = V_5;
		NullCheck(L_23);
		float L_24 = L_23->___lat_2;
		float L_25;
		L_25 = ARLocation_getDistance_mD02543EA2B5513E02B3E9BEBF93CCFDA458A4DEC(__this, L_19, L_20, L_22, L_24, NULL);
		V_6 = L_25;
		// temp += loc.arModel.name + ":" + distance + "\n";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		String_t* L_28 = V_2;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_27;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_30 = V_5;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = L_30->___arModel_3;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_31, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_29;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		String_t* L_35;
		L_35 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_6), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_37;
		L_37 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_36, NULL);
		V_2 = L_37;
		// if (distance < shortest)
		float L_38 = V_6;
		double L_39 = V_1;
		if ((!(((double)((double)L_38)) < ((double)L_39))))
		{
			goto IL_008f;
		}
	}
	{
		// shortest = distance;
		float L_40 = V_6;
		V_1 = ((double)L_40);
		// closest = loc;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_41 = V_5;
		V_0 = L_41;
	}

IL_008f:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0095:
	{
		// foreach (ARLocation loc in locations)
		int32_t L_43 = V_4;
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_44 = V_3;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// distances = temp;
		String_t* L_45 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		((ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_StaticFields*)il2cpp_codegen_static_fields_for(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var))->___distances_4 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_StaticFields*)il2cpp_codegen_static_fields_for(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var))->___distances_4), (void*)L_45);
		// return closest;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_46 = V_0;
		return L_46;
	}
}
// System.Void ARLocation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARLocation__cctor_m6CF75C94700581B7BE566DA2D4DFB594F2B6B5BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string distances = "";
		((ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_StaticFields*)il2cpp_codegen_static_fields_for(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var))->___distances_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_StaticFields*)il2cpp_codegen_static_fields_for(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var))->___distances_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Location::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_Start_m35F083C6E98FC9042C7768A3B15135E23E3C6C76 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29863D97935F87245759F48D47366B206A87A11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lon = 0;
		__this->___lon_7 = (0.0);
		// lat = 0;
		__this->___lat_8 = (0.0);
		// timer = getLocationTimer;
		float L_0 = __this->___getLocationTimer_6;
		__this->___timer_5 = L_0;
		// lookingForLocation = true;
		__this->___lookingForLocation_9 = (bool)1;
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_1;
		L_1 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// Permission.RequestUserPermission(Permission.CoarseLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteralB29863D97935F87245759F48D47366B206A87A11, NULL);
	}

IL_0051:
	{
		// StartCoroutine(GPSLoc());
		RuntimeObject* L_2;
		L_2 = Location_GPSLoc_mC35528E5FBE8C544452477556346804B686D2A97(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Location::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_FixedUpdate_m0DEC46411B4A5E753A02268DE77D0E2DA8E1CAE4 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, const RuntimeMethod* method) 
{
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->___timer_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timer_5 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (timer <= 0) {
		float L_2 = __this->___timer_5;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// timer = getLocationTimer;
		float L_3 = __this->___getLocationTimer_6;
		__this->___timer_5 = L_3;
		// if (lookingForLocation == false) {
		bool L_4 = __this->___lookingForLocation_9;
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		// StartCoroutine(GPSLoc());
		RuntimeObject* L_5;
		L_5 = Location_GPSLoc_mC35528E5FBE8C544452477556346804B686D2A97(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// lookingForLocation = true;
		__this->___lookingForLocation_9 = (bool)1;
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Location::GPSLoc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Location_GPSLoc_mC35528E5FBE8C544452477556346804B686D2A97 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* L_0 = (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96*)il2cpp_codegen_object_new(U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGPSLocU3Ed__12__ctor_mAF6DB9E1EE25F31F9EBD42D1CA9EFADCFBE44CC9(L_0, 0, NULL);
		U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Location::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location__ctor_m1C169FD561DFA1947355E545CAC7D0712CA90C96 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, const RuntimeMethod* method) 
{
	{
		// public float timer , getLocationTimer = 1;
		__this->___getLocationTimer_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Location::<GPSLoc>g__SetModelForDisplaying|12_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_U3CGPSLocU3Eg__SetModelForDisplayingU7C12_0_m9094553740DE97B0FB900D018A6D6BCCAC217833 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaceOnPlaneSC.placedPrefab = go;
		PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* L_0 = __this->___PlaceOnPlaneSC_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___go0;
		NullCheck(L_0);
		PlaceOnPlane_set_placedPrefab_m286C0CB5F322B832CFEAE30AA17AED16C038FA5F_inline(L_0, L_1, NULL);
		// PlaceOnPlaneSC.closestLocationText.text = go.name;
		PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* L_2 = __this->___PlaceOnPlaneSC_12;
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = L_2->___closestLocationText_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// distancesText.text = ARLocation.distances;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___distancesText_13;
		il2cpp_codegen_runtime_class_init_inline(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		String_t* L_7 = ((ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_StaticFields*)il2cpp_codegen_static_fields_for(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var))->___distances_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void Location::<GPSLoc>g__SetSoundForPlaying|12_1(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_U3CGPSLocU3Eg__SetSoundForPlayingU7C12_1_m2F1C17C2EB781DE3954D40855C1912E87A916A08 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	{
		// PlaceOnPlaneSC.clipForThisLocation = clip;
		PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* L_0 = __this->___PlaceOnPlaneSC_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		NullCheck(L_0);
		L_0->___clipForThisLocation_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___clipForThisLocation_26), (void*)L_1);
		// }
		return;
	}
}
// System.Void Location::<GPSLoc>g__SetAnimationNameForPlaying|12_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_U3CGPSLocU3Eg__SetAnimationNameForPlayingU7C12_2_m40096110E48D490F68278A5F1DF93CEA79B92AB1 (Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// PlaceOnPlaneSC.animationName = name;
		PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* L_0 = __this->___PlaceOnPlaneSC_12;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		L_0->___animationName_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___animationName_27), (void*)L_1);
		// }
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
// System.Void Location/<GPSLoc>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPSLocU3Ed__12__ctor_mAF6DB9E1EE25F31F9EBD42D1CA9EFADCFBE44CC9 (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Location/<GPSLoc>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPSLocU3Ed__12_System_IDisposable_Dispose_mA3313D6A180A56DB7C4D8CE10DAE208BA2DDAD9D (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Location/<GPSLoc>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGPSLocU3Ed__12_MoveNext_m43A68C54390818F94A5A8D5CCA81815768F198A7 (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2AE4A51EB1C3C257F49B63EF2585194C61333B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1942594976EC2ADEF8679BB07B5F7154C572045);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1AB536CD71D83CF5EABD1DCF6A5A11899ADDA6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* V_1 = NULL;
	int32_t V_2 = 0;
	ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* V_3 = NULL;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_4;
		L_4 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_4, NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}
	{
		// locationtext.text = "Turn on location services!";
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_6 = V_1;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___locationtext_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralE1942594976EC2ADEF8679BB07B5F7154C572045);
		// yield break;
		return (bool)0;
	}

IL_003c:
	{
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_8;
		L_8 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_8);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_8, NULL);
		// int maxWait = 3;
		__this->___U3CmaxWaitU3E5__2_3 = 3;
		goto IL_007f;
	}

IL_004f:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0068:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// maxWait--;
		int32_t L_10 = __this->___U3CmaxWaitU3E5__2_3;
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_007f:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_14 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}

IL_0095:
	{
		// if (maxWait < 1)
		int32_t L_15 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_15) >= ((int32_t)1)))
		{
			goto IL_00c1;
		}
	}
	{
		// print("Timed out");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40, NULL);
		// locationtext.text = "Timed out";
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_16 = V_1;
		NullCheck(L_16);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = L_16->___locationtext_4;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40);
		// lookingForLocation = false;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_18 = V_1;
		NullCheck(L_18);
		L_18->___lookingForLocation_9 = (bool)0;
		// yield break;
		return (bool)0;
	}

IL_00c1:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_19;
		L_19 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_00f1;
		}
	}
	{
		// print("Unable to determine device location");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB, NULL);
		// locationtext.text = "Unable to determine device location";
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_21 = V_1;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = L_21->___locationtext_4;
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		// lookingForLocation = false;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_23 = V_1;
		NullCheck(L_23);
		L_23->___lookingForLocation_9 = (bool)0;
		// yield break;
		return (bool)0;
	}

IL_00f1:
	{
		// lat = Input.location.lastData.latitude;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_24 = V_1;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_25;
		L_25 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_25);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_26;
		L_26 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_25, NULL);
		V_4 = L_26;
		float L_27;
		L_27 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_4), NULL);
		NullCheck(L_24);
		L_24->___lat_8 = ((double)L_27);
		// lon = Input.location.lastData.longitude;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_28 = V_1;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_29;
		L_29 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_29);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_30;
		L_30 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_29, NULL);
		V_4 = L_30;
		float L_31;
		L_31 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_4), NULL);
		NullCheck(L_28);
		L_28->___lon_7 = ((double)L_31);
		// locationtext.text = "LAT: " + lat + "\nLON: " + lon;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_32 = V_1;
		NullCheck(L_32);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = L_32->___locationtext_4;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_34 = V_1;
		NullCheck(L_34);
		double* L_35 = (&L_34->___lat_8);
		String_t* L_36;
		L_36 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_35, NULL);
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_37 = V_1;
		NullCheck(L_37);
		double* L_38 = (&L_37->___lon_7);
		String_t* L_39;
		L_39 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_38, NULL);
		String_t* L_40;
		L_40 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralEE1AB536CD71D83CF5EABD1DCF6A5A11899ADDA6, L_36, _stringLiteralD2AE4A51EB1C3C257F49B63EF2585194C61333B7, L_39, NULL);
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_40);
		// ARLocation arloc = new ARLocation();
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_41 = (ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692*)il2cpp_codegen_object_new(ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		ARLocation__ctor_mA714E1D6B7E9FF275E87E6A263EEEC221585CC41(L_41, NULL);
		// ARLocation closestAR = arloc.closest(arLocations, (float)lon, (float)lat);
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_42 = V_1;
		NullCheck(L_42);
		ARLocationU5BU5D_tE258D686F61057E02C608983E1365E8F47629CDA* L_43 = L_42->___arLocations_10;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_44 = V_1;
		NullCheck(L_44);
		double L_45 = L_44->___lon_7;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_46 = V_1;
		NullCheck(L_46);
		double L_47 = L_46->___lat_8;
		NullCheck(L_41);
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_48;
		L_48 = ARLocation_closest_mFE0F0C57E1608FBA15D9F15390D335E9C3FB745D(L_41, L_43, ((float)L_45), ((float)L_47), NULL);
		V_3 = L_48;
		// SetModelForDisplaying(closestAR.arModel);
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_49 = V_1;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_50 = V_3;
		NullCheck(L_50);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = L_50->___arModel_3;
		NullCheck(L_49);
		Location_U3CGPSLocU3Eg__SetModelForDisplayingU7C12_0_m9094553740DE97B0FB900D018A6D6BCCAC217833(L_49, L_51, NULL);
		// SetSoundForPlaying(closestAR.clip);
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_52 = V_1;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_53 = V_3;
		NullCheck(L_53);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_54 = L_53->___clip_5;
		NullCheck(L_52);
		Location_U3CGPSLocU3Eg__SetSoundForPlayingU7C12_1_m2F1C17C2EB781DE3954D40855C1912E87A916A08(L_52, L_54, NULL);
		// SetAnimationNameForPlaying(closestAR.animationName);
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_55 = V_1;
		ARLocation_tF844EDEE7035C2E62A2E9D89019C08EDAEAB5692* L_56 = V_3;
		NullCheck(L_56);
		String_t* L_57 = L_56->___animationName_6;
		NullCheck(L_55);
		Location_U3CGPSLocU3Eg__SetAnimationNameForPlayingU7C12_2_m40096110E48D490F68278A5F1DF93CEA79B92AB1(L_55, L_57, NULL);
		// lookingForLocation = false;
		Location_t6A399324ECDBEB431CC175FE628C20681C5EE277* L_58 = V_1;
		NullCheck(L_58);
		L_58->___lookingForLocation_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Location/<GPSLoc>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGPSLocU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB4FC0F8FC6299DAF4C80D1D6268FB924EEF1EF8B (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Location/<GPSLoc>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGPSLocU3Ed__12_System_Collections_IEnumerator_Reset_m9E747619D6F9F98BDFF1CE7D4B4FF80EE2D7891F (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGPSLocU3Ed__12_System_Collections_IEnumerator_Reset_m9E747619D6F9F98BDFF1CE7D4B4FF80EE2D7891F_RuntimeMethod_var)));
	}
}
// System.Object Location/<GPSLoc>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGPSLocU3Ed__12_System_Collections_IEnumerator_get_Current_m3640017743A12F6F44AAC5BB2FC002DD401A5561 (U3CGPSLocU3Ed__12_t751C9DC92B802CF5B6AAB5039FA2A74CD0D99B96* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MapController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Start_m06F8596FE8E28CF3A47CA2B2AEE3031A7946FB32 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// user = GameObject.Find("User");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral3D4887776042D73AD182766CDE2B5AE68B794B7D, NULL);
		__this->___user_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___user_4), (void*)L_0);
		// if (user) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___user_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// user.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___user_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// userRectTrans = user.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___user_4;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_4, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___userRectTrans_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userRectTrans_11), (void*)L_5);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void MapController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_Update_m456861AC51F11BC72FCAAF5A3CF3E81CEE8CFFC8 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MapController::updateUserLocation(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_updateUserLocation_m28906E0CD5473B0086DB02A3085BFBBCCFADD1B7 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, float ___longi0, float ___lati1, const RuntimeMethod* method) 
{
	{
		// user.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___user_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// lon = longi;
		float L_1 = ___longi0;
		__this->___lon_5 = L_1;
		// lat = lati;
		float L_2 = ___lati1;
		__this->___lat_6 = L_2;
		// PlaceUserOnMap();
		MapController_PlaceUserOnMap_m25D8D989C933752CBFF83D73E12840A0FA30F995(__this, NULL);
		// }
		return;
	}
}
// System.Void MapController::PlaceUserOnMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController_PlaceUserOnMap_m25D8D989C933752CBFF83D73E12840A0FA30F995 (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// Vector3 pos = userRectTrans.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___userRectTrans_11;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_1, NULL);
		V_0 = L_2;
		// float width = topRight.x - topLeft.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___topRight_10);
		float L_4 = L_3->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___topLeft_8);
		float L_6 = L_5->___x_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_4, L_6));
		// float distanceFronLeft = lon - topLeft.x;
		float L_7 = __this->___lon_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___topLeft_8);
		float L_9 = L_8->___x_0;
		// float xPos = (distanceFronLeft / width) * 453;
		float L_10 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_7, L_9))/L_10)), (453.0f)));
		// float templat = lat;
		float L_11 = __this->___lat_6;
		// float height = topLeft.y - bottomLeft.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___topLeft_8);
		float L_13 = L_12->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___bottomLeft_9);
		float L_15 = L_14->___y_1;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		// float distanceFromBottom = templat - bottomRight.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&__this->___bottomRight_7);
		float L_17 = L_16->___y_1;
		// float yPos = (distanceFromBottom / height) * 555;
		float L_18 = ((float)il2cpp_codegen_subtract(L_11, L_17));
		float L_19 = V_3;
		V_4 = ((float)il2cpp_codegen_multiply(((float)(L_18/L_19)), (555.0f)));
		// print(height);
		float L_20 = V_3;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_22, NULL);
		// print(distanceFromBottom);
		float L_23 = L_18;
		RuntimeObject* L_24 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_23);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_24, NULL);
		// print(yPos);
		float L_25 = V_4;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_27, NULL);
		// pos.x = xPos;
		float L_28 = V_2;
		(&V_0)->___x_2 = L_28;
		// pos.y = yPos;
		float L_29 = V_4;
		(&V_0)->___y_3 = L_29;
		// userRectTrans.anchoredPosition = pos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->___userRectTrans_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_31, NULL);
		NullCheck(L_30);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_30, L_32, NULL);
		// }
		return;
	}
}
// System.Void MapController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapController__ctor_m00E8FD02C6C4C34F39E2AE09EDB82BD51066766E (MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MapSC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapSC_Start_mAA4A190D6EC34C275BA1E385C37F55567B3F75A5 (MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29863D97935F87245759F48D47366B206A87A11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// once = false;
		__this->___once_7 = (bool)0;
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_0;
		L_0 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// Permission.RequestUserPermission(Permission.CoarseLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteralB29863D97935F87245759F48D47366B206A87A11, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void MapSC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapSC_Update_m9D81070E24DCB3C6923D419E997E9A81EB23EFB6 (MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!once && Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_0 = __this->___once_7;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1;
		L_1 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// once = true;
		__this->___once_7 = (bool)1;
		// StartCoroutine(Location());
		RuntimeObject* L_2;
		L_2 = MapSC_Location_m89029A2CA5830A9CFE9AF375416FB8F4893CE543(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MapSC::Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapSC_Location_m89029A2CA5830A9CFE9AF375416FB8F4893CE543 (MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* L_0 = (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861*)il2cpp_codegen_object_new(U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLocationU3Ed__6__ctor_m596A918A6605738C0C67DBCFE65D3ABBC8B49F5F(L_0, 0, NULL);
		U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MapSC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapSC__ctor_mF14228E6D4F86ED8D6364A2470FEC993EB0D2982 (MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MapSC/<Location>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocationU3Ed__6__ctor_m596A918A6605738C0C67DBCFE65D3ABBC8B49F5F (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MapSC/<Location>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocationU3Ed__6_System_IDisposable_Dispose_mAF1FE46DCB1C52206A8224A6FE3B2515176FD5CC (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MapSC/<Location>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLocationU3Ed__6_MoveNext_mDF2EA06A90CD1D56647C5BECBBA118DEA2163CF8 (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_m943D12ED47A5A0E2420C35664CEBBF78D4448E6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0307334F90535192FF2D835A8CCEEBD343EAA07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F619E53FF25AE1ECAED76D71FA7B76A5E41476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral555C07B6FA78F958F86C7E2DD5DA479F8D287FE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* V_1 = NULL;
	int32_t V_2 = 0;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	double V_5 = 0.0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_4;
		L_4 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002c:
	{
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_6;
		L_6 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_6);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_6, NULL);
		// int maxWait = 20;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)20);
		goto IL_0070;
	}

IL_0040:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0059:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// maxWait--;
		int32_t L_8 = __this->___U3CmaxWaitU3E5__2_3;
		V_2 = L_8;
		int32_t L_9 = V_2;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0070:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_10;
		L_10 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_12 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_0086:
	{
		// if (maxWait < 1)
		int32_t L_13 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_009b;
		}
	}
	{
		// print("Timed out");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral9DB2115B51E0C5B47AC89B0FFD65E4F3497E1C40, NULL);
		// yield break;
		return (bool)0;
	}

IL_009b:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_14;
		L_14 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00b4;
		}
	}
	{
		// print("Unable to determine device location");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB, NULL);
		// yield break;
		return (bool)0;
	}

IL_00b4:
	{
		// print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral0307334F90535192FF2D835A8CCEEBD343EAA07C);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0307334F90535192FF2D835A8CCEEBD343EAA07C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_19;
		L_19 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_19);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_20;
		L_20 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_19, NULL);
		V_3 = L_20;
		float L_21;
		L_21 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_3), NULL);
		V_4 = L_21;
		String_t* L_22;
		L_22 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_18;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_25;
		L_25 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_25);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_26;
		L_26 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_25, NULL);
		V_3 = L_26;
		float L_27;
		L_27 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_3), NULL);
		V_4 = L_27;
		String_t* L_28;
		L_28 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_31;
		L_31 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_31);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_32;
		L_32 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_31, NULL);
		V_3 = L_32;
		float L_33;
		L_33 = LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0((&V_3), NULL);
		V_4 = L_33;
		String_t* L_34;
		L_34 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_30;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_37;
		L_37 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_37);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_38;
		L_38 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_37, NULL);
		V_3 = L_38;
		float L_39;
		L_39 = LocationInfo_get_horizontalAccuracy_m3178154DD5F4F72B8743665F33CCAE5BEC6296F4((&V_3), NULL);
		V_4 = L_39;
		String_t* L_40;
		L_40 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_40);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_36;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_43;
		L_43 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_43);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_44;
		L_44 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_43, NULL);
		V_3 = L_44;
		double L_45;
		L_45 = LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F((&V_3), NULL);
		V_5 = L_45;
		String_t* L_46;
		L_46 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_5), NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_46);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_46);
		String_t* L_47;
		L_47 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_42, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_47, NULL);
		// lon = Input.location.lastData.longitude;
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_48 = V_1;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_49;
		L_49 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_49);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_50;
		L_50 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_49, NULL);
		V_3 = L_50;
		float L_51;
		L_51 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_3), NULL);
		NullCheck(L_48);
		L_48->___lon_5 = L_51;
		// lat = Input.location.lastData.latitude;
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_52 = V_1;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_53;
		L_53 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_53);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_54;
		L_54 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_53, NULL);
		V_3 = L_54;
		float L_55;
		L_55 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_3), NULL);
		NullCheck(L_52);
		L_52->___lat_6 = L_55;
		// locationText.text =
		//     "LON: " +lon+
		//     "\nLAT: "+lat;
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_56 = V_1;
		NullCheck(L_56);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = L_56->___locationText_4;
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_58 = V_1;
		NullCheck(L_58);
		float* L_59 = (&L_58->___lon_5);
		String_t* L_60;
		L_60 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_59, NULL);
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_61 = V_1;
		NullCheck(L_61);
		float* L_62 = (&L_61->___lat_6);
		String_t* L_63;
		L_63 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_62, NULL);
		String_t* L_64;
		L_64 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral555C07B6FA78F958F86C7E2DD5DA479F8D287FE5, L_60, _stringLiteral04F619E53FF25AE1ECAED76D71FA7B76A5E41476, L_63, NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_64);
		// FindObjectOfType<MapController>().updateUserLocation((float)lon, (float)lat);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E* L_65;
		L_65 = Object_FindObjectOfType_TisMapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_m943D12ED47A5A0E2420C35664CEBBF78D4448E6C(Object_FindObjectOfType_TisMapController_tCB783F79CE662E0DDA177BA5AC30A8B2B0F6D16E_m943D12ED47A5A0E2420C35664CEBBF78D4448E6C_RuntimeMethod_var);
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_66 = V_1;
		NullCheck(L_66);
		float L_67 = L_66->___lon_5;
		MapSC_t3E01A2140864E82357E288B29C99F08FFCB87931* L_68 = V_1;
		NullCheck(L_68);
		float L_69 = L_68->___lat_6;
		NullCheck(L_65);
		MapController_updateUserLocation_m28906E0CD5473B0086DB02A3085BFBBCCFADD1B7(L_65, ((float)L_67), ((float)L_69), NULL);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_70;
		L_70 = Input_get_location_m6F753D9369213F07EC556FF6240D723DCF3C689D(NULL);
		NullCheck(L_70);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_70, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MapSC/<Location>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLocationU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D66CC75DB9CB4E9FADF5B07ACC447936B60D9E6 (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MapSC/<Location>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLocationU3Ed__6_System_Collections_IEnumerator_Reset_mFC29CDC51A039C61CC74F406F76123BBDEF3C05D (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLocationU3Ed__6_System_Collections_IEnumerator_Reset_mFC29CDC51A039C61CC74F406F76123BBDEF3C05D_RuntimeMethod_var)));
	}
}
// System.Object MapSC/<Location>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLocationU3Ed__6_System_Collections_IEnumerator_get_Current_mD4F86E17517376816AE6B071C1D7EB6094F98EF7 (U3CLocationU3Ed__6_tD18486FEBE497C669F2193FC7A3DEE06DA201861* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void OpenCamSc::OpenCameraScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCamSc_OpenCameraScene_m9107BF82A65D3F701F8691FD3BAF10E4F161232A (OpenCamSc_t70DCB4FF578553B8C1A0C36F2F37603929250501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral631CB151C08E6727A6009F81F2ED6808146362CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ARScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral631CB151C08E6727A6009F81F2ED6808146362CC, NULL);
		// }
		return;
	}
}
// System.Void OpenCamSc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCamSc__ctor_mDACAD942205E5924F1DF113E05B11CE51FD0A7BE (OpenCamSc_t70DCB4FF578553B8C1A0C36F2F37603929250501* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.UI.Button AnimationButton::get_Button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* AnimationButton_get_Button_mB727C1069165ADFB14EADD23BD985BE76DC8DDD0 (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	{
		// public Button Button { get; private set; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___U3CButtonU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void AnimationButton::set_Button(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_set_Button_m662873E0FE20B02FE977115098AC0B6F961A30FF (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// public Button Button { get; private set; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___U3CButtonU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CButtonU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void AnimationButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_Awake_m5318EEEF42577EE1C7F233A169F6690211435C70 (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		AnimationButton_set_Button_m662873E0FE20B02FE977115098AC0B6F961A30FF_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void AnimationButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_Start_m19EACF1E7ED566FF375B297F2345F45071E39AE3 (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationButton_OnClick_m639E83910E2463E7988894AD07421C9FD9B531CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Button.onClick.AddListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = AnimationButton_get_Button_mB727C1069165ADFB14EADD23BD985BE76DC8DDD0_inline(__this, NULL);
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)AnimationButton_OnClick_m639E83910E2463E7988894AD07421C9FD9B531CC_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		return;
	}
}
// System.Void AnimationButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_OnClick_m639E83910E2463E7988894AD07421C9FD9B531CC (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	{
		// ResetTriggers();
		AnimationButton_ResetTriggers_m859BE17B6EDBEADE2448382052D88AB0425C995F(__this, NULL);
		// InvokeTrigger();
		AnimationButton_InvokeTrigger_m8E66B33D00DC5E0EAA6C06684AEB209FAAEF934B(__this, NULL);
		// }
		return;
	}
}
// System.Void AnimationButton::InvokeTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_InvokeTrigger_m8E66B33D00DC5E0EAA6C06684AEB209FAAEF934B (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (_type)
		int32_t L_0 = __this->____type_6;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0039;
		}
	}
	{
		// _animator.SetTrigger(_name);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_4;
		String_t* L_4 = __this->____name_5;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, L_4, NULL);
		// break;
		return;
	}

IL_0022:
	{
		// _animator.SetFloat(_name, _value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_4;
		String_t* L_6 = __this->____name_5;
		float L_7 = __this->____value_7;
		NullCheck(L_5);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_5, L_6, L_7, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void AnimationButton::ResetTriggers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton_ResetTriggers_m859BE17B6EDBEADE2448382052D88AB0425C995F (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* V_0 = NULL;
	int32_t V_1 = 0;
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// foreach (var parameter in _animator.parameters)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_4;
		NullCheck(L_0);
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_1;
		L_1 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0051;
	}

IL_0010:
	{
		// foreach (var parameter in _animator.parameters)
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// switch (parameter.type)
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = AnimatorControllerParameter_get_type_mACEB110E346B27168F177E7A909CFB8586A2B966(L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004d;
		}
	}
	{
		// _animator.ResetTrigger(parameter.name);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->____animator_4;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E(L_11, NULL);
		NullCheck(L_10);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_10, L_12, NULL);
		// break;
		goto IL_004d;
	}

IL_0037:
	{
		// _animator.SetFloat(parameter.name, 0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->____animator_4;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E(L_14, NULL);
		NullCheck(L_13);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_13, L_15, (0.0f), NULL);
	}

IL_004d:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0051:
	{
		// foreach (var parameter in _animator.parameters)
		int32_t L_17 = V_1;
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AnimationButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationButton__ctor_mBE2BC08FA7C79D5C875A5D2872C253DE7D3A9818 (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CharacterRotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRotator_Update_m038854B1E7C57219AA99673B9C2388032E1B0B8F (CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3* __this, const RuntimeMethod* method) 
{
	{
		// if (_isRotating)
		bool L_0 = __this->____isRotating_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Rotate();
		CharacterRotator_Rotate_m28278B053BB6447E8EE65D637B8676B75A93EB8D(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void CharacterRotator::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRotator_OnPointerDown_m17D9E440D6859D94586C007B15F41CA9DFB5FE9D (CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ____0, const RuntimeMethod* method) 
{
	{
		// _targetPoint = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		__this->____targetPoint_7 = L_0;
		// _isRotating = true;
		__this->____isRotating_6 = (bool)1;
		// }
		return;
	}
}
// System.Void CharacterRotator::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRotator_OnPointerUp_mF4E245C2F58C1151B92F1BC94ECBC61A6306ACB8 (CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ____0, const RuntimeMethod* method) 
{
	{
		// _isRotating = false;
		__this->____isRotating_6 = (bool)0;
		return;
	}
}
// System.Void CharacterRotator::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRotator_Rotate_m28278B053BB6447E8EE65D637B8676B75A93EB8D (CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!_character)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____character_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var targetPoint = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_0 = L_2;
		// _character.Rotate(Vector3.up * (_rotationSpeed * (_targetPoint - targetPoint).x * Time.deltaTime));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____character_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_5 = __this->____rotationSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____targetPoint_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_9)), L_10)), NULL);
		NullCheck(L_3);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_3, L_11, NULL);
		// _targetPoint = targetPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		__this->____targetPoint_7 = L_12;
		// }
		return;
	}
}
// System.Void CharacterRotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRotator__ctor_mC257A19EF852DFA9BBC461DDCF53A1F128619E35 (CharacterRotator_tB27B7B9BE4B35A49B853AADAF16BD9F4BB09ADD3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedRedObject_mA604E8E10FC701C74F3D95B1862EBDF1867D3AFA_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedRedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedRedObjectU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedRedObject_m10436517E881B750C0551E401D5E6ED5F716F66B_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedRedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CspawnedRedObjectU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedRedObjectU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedObject_mAA20D8F050E5D19FEE1ABA90E472A52615CE1E28_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedObjectU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedObject_m39E973C6D81170BB2AB71D250DF76942F24FF149_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CspawnedObjectU3Ek__BackingField_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedObjectU3Ek__BackingField_23), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = __this->___U3CreferenceImageU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) 
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->___m_Name_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CremovedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_placedPrefab_m286C0CB5F322B832CFEAE30AA17AED16C038FA5F_inline (PlaceOnPlane_t717C58662DC565F29819D900A31C0F3649A406E3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_PlacedPrefab = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_PlacedPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlacedPrefab_4), (void*)L_0);
		// set { m_PlacedPrefab = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimationButton_set_Button_m662873E0FE20B02FE977115098AC0B6F961A30FF_inline (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// public Button Button { get; private set; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___U3CButtonU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CButtonU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* AnimationButton_get_Button_mB727C1069165ADFB14EADD23BD985BE76DC8DDD0_inline (AnimationButton_tC80BE1BA46D2FC5EE00440CB1482E1F4106B8008* __this, const RuntimeMethod* method) 
{
	{
		// public Button Button { get; private set; }
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___U3CButtonU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
