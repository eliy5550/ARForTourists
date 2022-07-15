﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>
struct Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70;
// System.Action`3<System.Int32Enum,System.Object,System.Object>
struct Action_3_tA5A4D30182F8B9F2378721FD07FDDF032927E7EF;
// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>
struct Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85;
// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String>
struct Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01;
// System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>
struct Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9;
// System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,System.Object,System.String>
struct Action_3_tE07DCCB3D3409E951B413B09C998FE1282D1433C;
// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575;
// System.Collections.Generic.Dictionary`2<Gpm.Common.Compress.CompressFormat,System.String>
struct Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>
struct Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t9503DE0744217071D554CC415B2890C454070024;
// System.Collections.Generic.IDictionary`2<System.String,Gpm.Common.ThirdParty.LitJson.JsonData>
struct IDictionary_2_tDBF3BA2A1A0916CA4E02EBBC981C8627105BA1BC;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ImporterFunc>>
struct IDictionary_2_t8B935B614EE0F24F1F3A2E55A03BD5312E4AD5AF;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tE7FFBD71D86A280E4B101DF2F8E59C9FFFAA4C29;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<Gpm.Common.ThirdParty.LitJson.PropertyMetadata>>
struct IDictionary_2_t78688799D7848DA337FD90C43635E7F896F8676B;
// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ArrayMetadata>
struct IDictionary_2_t1EAAF7F70A3936A0A0F7AE080CFC9E20B57E0C6B;
// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ExporterFunc>
struct IDictionary_2_t7909F288834CF58F89AE48D22CBC7D56E54AD615;
// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ObjectMetadata>
struct IDictionary_2_t0C06666C307CA727889BAF42DE3367F1E0DC7F5C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<Gpm.Common.Compress.CompressFormat>
struct IEqualityComparer_1_t05CADD5428EC5EFA369BB3C2E99F204DBC82D3A4;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Gpm.Common.ThirdParty.LitJson.JsonData>>
struct IList_1_t644195417F6755BFA446E86534B5EDF625125E2A;
// System.Collections.Generic.IList`1<Gpm.Common.ThirdParty.LitJson.JsonData>
struct IList_1_t8BD3014A90F6055DB806E3BF3D41A2C941BCF603;
// System.Collections.Generic.Dictionary`2/KeyCollection<Gpm.Common.Compress.CompressFormat,System.String>
struct KeyCollection_t41FD88890DD1234E772D0A37BF7251BCBA31EE0E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>
struct KeyCollection_t0C345C7F9049D3F0F17E931AE54AE0612B19E5BD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>
struct List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem>
struct Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B;
// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>
struct Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1;
// System.Collections.Generic.Dictionary`2/ValueCollection<Gpm.Common.Compress.CompressFormat,System.String>
struct ValueCollection_tBE434EC4745D208E0BC186E264E948731B1C48E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>
struct ValueCollection_t40C99AF3313423EBB1D11F636CF6834625E448DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<Gpm.Common.Compress.CompressFormat,System.String>[]
struct EntryU5BU5D_t0C5B7A4DD75B20992D15B3AC8A46782F9391E27A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>[]
struct EntryU5BU5D_t0F0AD6C71DF9E986243A846B83C4F9BAE5AA714E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Globalization.CultureInfo[]
struct CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Gpm.Common.Indicator.Internal.QueueItem[]
struct QueueItemU5BU5D_t52C57EC95756A9B5CCE4ED0794D29996C0EECAD0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Gpm.Common.ThirdParty.LitJson.WriterContext[]
struct WriterContextU5BU5D_tD7EF72AE3CA44A660A9D5071E76FCD120820936A;
// System.Xml.XmlElement[]
struct XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87;
// Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E;
// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData[]
struct StringDataU5BU5D_tF4501DBE78CB311BB11AA8201F4BE5307B5254AA;
// Gpm.Common.ThirdParty.SharpCompress.Common.ArchiveEncoding
struct ArchiveEncoding_tFDD00F8AB852F4C36D35C6D1C75C8E5EA28F488C;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Gpm.Common.Indicator.Internal.BaseIndicator
struct BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// Gpm.Common.Util.EditorCoroutine
struct EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3;
// Gpm.Common.Indicator.Internal.EditorIndicator
struct EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// Gpm.Common.ThirdParty.LitJson.ExporterFunc
struct ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708;
// Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions
struct ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Gpm.Common.ThirdParty.LitJson.FsmContext
struct FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gpm.Common.Indicator.GpmIndicator
struct GpmIndicator_t697502353ACB41524764EC769DE6E1D11A0732FA;
// Gpm.Common.Indicator.GpmIndicatorData
struct GpmIndicatorData_tC00240A425B2CA8633970A63E684ECFC1ACAC6A0;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Gpm.Common.ThirdParty.LitJson.IJsonWrapper
struct IJsonWrapper_tE4EE4980FC0801C71A23FCE4707FA8C2D9EE1413;
// Gpm.Common.ThirdParty.SharpCompress.Readers.IReader
struct IReader_tC108EB5494E74CC186C9D8FF322AF9F25185B257;
// Gpm.Common.ThirdParty.LitJson.ImporterFunc
struct ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8;
// Gpm.Common.Indicator.Internal.InAppIndicator
struct InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1;
// Gpm.Common.Indicator.Internal.IndicatorImplementation
struct IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03;
// Gpm.Common.ThirdParty.LitJson.JsonData
struct JsonData_t1DAE956C6245006539F5238C9208868AB54EC900;
// Gpm.Common.ThirdParty.LitJson.JsonException
struct JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC;
// Gpm.Common.ThirdParty.LitJson.JsonMockWrapper
struct JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17;
// Gpm.Common.ThirdParty.LitJson.JsonReader
struct JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193;
// Gpm.Common.ThirdParty.LitJson.JsonWriter
struct JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5;
// Gpm.Common.Indicator.Internal.LaunchingInfo
struct LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85;
// Gpm.Common.ThirdParty.LitJson.Lexer
struct Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Gpm.Common.Multilanguage.MultilanguageCallback
struct MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60;
// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation
struct MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09;
// Gpm.Common.Multilanguage.Internal.MultilanguageLoader
struct MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65;
// Gpm.Common.Multilanguage.Internal.MultilanguageServiceData
struct MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826;
// Gpm.Common.Multilanguage.Internal.MultilanguageXml
struct MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Gpm.Common.Indicator.Internal.QueueItem
struct QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7;
// Gpm.Common.ThirdParty.SharpCompress.Readers.ReaderOptions
struct ReaderOptions_tDC88644B122F479513775DA7C7A22F05437D78F2;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Security.SecureString
struct SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// Gpm.Common.UnityWebRequestHelper
struct UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Gpm.Common.ThirdParty.LitJson.WrapperFactory
struct WrapperFactory_tE76265F25EAB1DBC1B4EFDB2F0D835726C963050;
// Gpm.Common.ThirdParty.LitJson.WriterContext
struct WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0;
// System.Xml.XmlElement
struct XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C;
// System.Xml.XmlName
struct XmlName_t0704430D24D202146901D342E34D878246E14F33;
// Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10
struct U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35;
// Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F;
// Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions/SymbolicLinkWriterDelegate
struct SymbolicLinkWriterDelegate_t3C98E35E7ECAD625ACAFBEBFEB73F5099499444A;
// Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67;
// Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c
struct U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2;
// Gpm.Common.Indicator.Internal.LaunchingInfo/Header
struct Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35;
// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching
struct Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C;
// Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler
struct StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081;
// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B;
// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D;
// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296;
// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C;
// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8
struct U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32;
// Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData
struct DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B;
// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList
struct StringList_t2969F038B1A9485BAEDCA5E0CB427E1CF0C8BABF;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;
// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator
struct Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB;
// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData
struct StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E;
// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone
struct Zone_t76B26AE62FED398A6097396AEF841999ACEF0224;
// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData/LanguageList
struct LanguageList_tC269096175850288B705566782B705D3E26C3433;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectContainer_t98441798C4266C204E2770FC565ABBA3E337C1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GpmCommon_t5C2F5AAC633B2E45F214203250C3216B55E2661A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEntry_t36C084EC57955EEAB7AAD0461B770EA404BD404C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReader_tC108EB5494E74CC186C9D8FF322AF9F25185B257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultilanguageResultCode_t2354F4D1E560AC81AB56E44991B64DDC15825A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Zone_t76B26AE62FED398A6097396AEF841999ACEF0224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_25_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_27_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_63_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_65_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_79_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_95_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral00ED444101CADBDD612603B145DC44E57F6FCA22;
IL2CPP_EXTERN_C String_t* _stringLiteral03E309CFFE499B97855B290FFFE52403ECB9BE95;
IL2CPP_EXTERN_C String_t* _stringLiteral04799565CD60A911F9CBB57805A3592363822500;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6C2B4495BC14692B8D7379F083BECF2BA5BB91;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral10ACE5EEB0F9BB58BAAC876209B9EADB3CBD2F9A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral127F2A40B8E374463C614253E4FD926E564AA678;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral16137CBB869A7DAC6C21145B4435F930BC61766A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A39551FDCDB08A29A9FC3E9C07811D9A4F38ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C571F80CA4151F46F7D600186B2E65B8A777DB5;
IL2CPP_EXTERN_C String_t* _stringLiteral2CC60B2EEB4FE43FBA101EF6BFAE98F87126F7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral3599345A0FEDD2EF5AAF4892F6566185AFD17D53;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3;
IL2CPP_EXTERN_C String_t* _stringLiteral42A2B7C862EEDE734C180E8F89B1C631BA7507A3;
IL2CPP_EXTERN_C String_t* _stringLiteral480882A527C376248599F1E500A62504DB0D8C43;
IL2CPP_EXTERN_C String_t* _stringLiteral4B71A87394CAD84F09025E1851C5E0A0C8C3BF2D;
IL2CPP_EXTERN_C String_t* _stringLiteral4C158E48956F9C2362D4B3F4240B46A9C7C489D7;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral520625740DAAAA312839FA6347FCA8DD2FA9A82C;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5CD28DC90C9BD6C10176E53CA6C9C1F3C7ACC7;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5CCC2400681F29FDC6F6EAC9AB15460D390B3326;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral6744F91A974C9FF8FF05BB66F5E510A9B8375A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral7F713ACFFD6CE1669A5EE550E00610042893CA48;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDA117E9483975E45F43555614838F830502645;
IL2CPP_EXTERN_C String_t* _stringLiteral824A9D9A2BAC4D0020E78F328C3A5908C950B369;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral855A5866749ED4E2C7D22CD00B10E47F7527D506;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8B1D786203FDE1F9AB54748545FE2017AD124B33;
IL2CPP_EXTERN_C String_t* _stringLiteral8C4EE7194B38152F433BF4ED66C1BB382ED817CA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9080B41A18F32815CD5D19C48AFB34202EDE4CCF;
IL2CPP_EXTERN_C String_t* _stringLiteral995425C6205B49314F8CCEB8EA6A491DF223FE00;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1CAFC8F253100CFDDDA63EFBA6437CA7EFCB3E;
IL2CPP_EXTERN_C String_t* _stringLiteral9C13E73639856F799F682DDAB93967312F44069F;
IL2CPP_EXTERN_C String_t* _stringLiteral9F76824A826CC71973134D804A7E05416DA829C8;
IL2CPP_EXTERN_C String_t* _stringLiteralA19AA44CF7E852EDD061B7F2A098BC202378784E;
IL2CPP_EXTERN_C String_t* _stringLiteralA25DD75EB593DB9A5C39874652119C6A8238CD0C;
IL2CPP_EXTERN_C String_t* _stringLiteralA40509BBE8A99A655A4164497A3B003DA8756527;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A;
IL2CPP_EXTERN_C String_t* _stringLiteralA69E07BD9EAB61841462BDF6652EA3678DFE2523;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC88B7268310CF55E1332901267EC9623937285;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBFFE556F7CC5A872AFD8DD5F0E974020A23AF585;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC492DE3237AB9080A354FA91692BDE1180611256;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD2389976ACD146B0B4790CB392DDCAAABB4A8177;
IL2CPP_EXTERN_C String_t* _stringLiteralD563997CDCF40B1A5AB801C16C2FEE93606C69BA;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDED9589A5F13CEA61E6C3D8009CFC78F17B585F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16F7FF1D5E01911E2BEE361FB60B0955752A86C;
IL2CPP_EXTERN_C String_t* _stringLiteralEC21D9DB6AA9057C43C4B739FC5C20032135E65D;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE82A088C30684FF43A61A3B8E6E80DF46E0086;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E234DB0BB6DA5424061E6FF869CA2A24E9E8EE;
IL2CPP_EXTERN_C String_t* _stringLiteralF3063325FD751AEC72966430C6537525730A5E9C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF693F62AB0874DBC323119F427407DA87F53FA58;
IL2CPP_EXTERN_C String_t* _stringLiteralF7FD74AAD8C679A71C76D4A93F871E2D07BDCBC3;
IL2CPP_EXTERN_C const RuntimeMethod* BaseIndicator_U3CInitializeU3Eb__8_0_m45632DAFDFD3DED9AD572FA7DC58D2A64942939A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9FA145C01395EEF4C6E093C519C01F3DAB6C6474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m37821FBC2C9EEF3EA90756C9909AF8FEDA6EB04C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB25C69F92D696B6DD215671832368171A458FCFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEBD4E8744EE43F506F4A331C5FC6209DD99ECF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m54E1746131031E236AF76571378E6C616F8F27B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisString_t_mCDF27EFB046C1D9D445531CEFD458BE572781D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBDADB03FB8B5DF72330546D069C8319D3B2B9DFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF8E168352806394C311DFECF95C71E60B676B92A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB3035E08F7DD498B66E72E263710BA35D6EBF5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InAppIndicator_U3CSendLogNCrashU3Eb__4_0_m22E1743CB5D613B5983C8A52F2F5B6BF937FF9C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_m4611FCD8AAEED570B0303059BB9C54C80D6E7D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_m692665453D88EA9DAE7F3C0A7E9D6CC3614D34DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m61C651BAE23D32DC33D213437614758F8633D558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m0450608C24DDBAAE4F91FB406F3F4361E555D9AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_m213559E9184F7B5968CC5142BC5E213712D49A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_m5A35FACECF0D8D35695619A34E9C6D423720E75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m21B6FCE9024AB687E6CEBE3009340C6D4C6CE395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_mF01E4DADFEC51BF5D409ABCC51771DEB81007477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_m44E699D3533E61EE36ADEE78E6D7300CA6E1BEF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_m862C9B6CEC33B69BA84FC0748EFF27293F383ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_mC0B0CAC5FCF282178596652C22503DEC76975406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_m95B54BDA0C13E72BC6A98EF491F2077079E9F728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_mDDE63C673351272C3881E11345940B56D8AC7724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_mB2DB9193965B74ACA7E95679CC3DAC3AC8457F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_m2293E9BA99E5F5DD4BD8631E5D3C6F0557881E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_mD09C6B01FE45CC222C1743A92035CF4E23DE5312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_m37B8EC0F80459FFD65930D13A3FA8E23A1265F8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_m0B62037A6F04FD1E540308389AD83B37DF406BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_m709EF564374159CF0327AE4812BE46A169E15FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_mE3B8D3ADB8FC563E0FC9B4FF623F23C5686AD68C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_mF67D282823C6A1909774FCB72C33BCA0EFA4E96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_m90B5FD82147DCFF6BA050D798B2F41A5B8C05602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_m9EDB8DF2DF8B1B9C079EFC10AFE181D5EA92D433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_m715D1DDDFF6263D40E11348DC1F40533E56F06E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_mF4CEF94C53606B9505003828F51FDF6613DD6611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_m5950971A4A532A55F35F994AC6A2FA2820C165C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_m37D220B9A3CB6BDA71DEF07677550AA4ACC6F00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_m64B25604A7B8911B934FE4237F26F9C7FA16C36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_mA839B83EEE259A1F2B65043D27CC7EC68AE6F567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_m1331CC6EB80EEDC6A064409649A7B6596354309B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_m7EC6CBD4DB8FD474298AAF3B7041DF45F2B5FA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_mE7325EE166994707F239DA9CF9CD836CFC3DBC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0E9FB7275B6F8219B89E8081BBB8AB8E72073165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mA9D9D62D1807BF3A4DE62C18139ABDCCE79EADAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m29956665B4B7F8E7CDDD2CD11453087E220A941C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mB2EE77B91ECAE4455F3D5E26FCBF0CB9DD2A560F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD9EA2A512F795D6707E0CAAFD5CC3046AAEDCACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m79D7594E6CA3DA793A8474B6BB2160010F90A870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mEDBD4DF62EB1CF8C26898FDD232786AA881E7ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadFileU3Ed__8_System_Collections_IEnumerator_Reset_m6219A91AEC76F08E5F400720D3D192544F9921EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteQueueU3Ed__10_System_Collections_IEnumerator_Reset_mCF34163EEF77C69F9F0BC692C346A941BFDAB7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CGetLaunchingInfoU3Eb__0_mC59AEC36EE74347502713FFB9124BED02E1AE339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetLaunchingInfoU3Eb__0_mA66761921588899F46673494308BA3E60C7ED811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CLoadLocalFileU3Eb__0_m30A265313BC27A26901C16731556E690E1B8BAC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CLoadU3Eb__0_m814122CF052257F07D946FCDB4BFE4B43604F967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CLoadResourceAssetU3Eb__0_m1BC2CF7424800C730E590CF6991469C2278940CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__0_mFD7AB3E95BCEDD703866583D735E98DBC06EF574_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__1_mB550A99644C2C501D71D7D76A7A624FD6D395667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlHelper_LoadXmlFromFile_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_m906D987FED0AD45259D04BF433762B46E13A84DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87;
struct StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Gpm.Common.Compress.CompressFormat,System.String>
struct Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0C5B7A4DD75B20992D15B3AC8A46782F9391E27A* ____entries_1;
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
	KeyCollection_t41FD88890DD1234E772D0A37BF7251BCBA31EE0E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBE434EC4745D208E0BC186E264E948731B1C48E0* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDFD4E62BB3F1C0F3B7819DAEE99FF5E659B06D91* ____entries_1;
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
	KeyCollection_tE8399140098D3D8028A8D5FB2CBF88B0965541B7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28FD47FCC4F1763B936C9A4BB2A8B2276E633FEF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE39FFA41A51BE829EA4A822560291EDF5752730D* ____entries_1;
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
	KeyCollection_tC542A7519E04306FF4830698FC8A485843209C5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6D44D0A2B65933FB953BE36FD019130BBA243B59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFA685976D596A475477D8288ED93C3310B644095* ____entries_1;
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
	KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64E898E0B72E520E1E88680D2FFF4E0997AC8D66* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>
struct Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0F0AD6C71DF9E986243A846B83C4F9BAE5AA714E* ____entries_1;
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
	KeyCollection_t0C345C7F9049D3F0F17E931AE54AE0612B19E5BD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t40C99AF3313423EBB1D11F636CF6834625E448DB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>
struct List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringDataU5BU5D_tF4501DBE78CB311BB11AA8201F4BE5307B5254AA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringDataU5BU5D_tF4501DBE78CB311BB11AA8201F4BE5307B5254AA* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem>
struct Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	QueueItemU5BU5D_t52C57EC95756A9B5CCE4ED0794D29996C0EECAD0* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>
struct Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_tD7EF72AE3CA44A660A9D5071E76FCD120820936A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// Gpm.Common.Indicator.Internal.BaseIndicator
struct BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone Gpm.Common.Indicator.Internal.BaseIndicator::indicatorInfo
	Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* ___indicatorInfo_0;
	// System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem> Gpm.Common.Indicator.Internal.BaseIndicator::queue
	Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* ___queue_1;
	// Gpm.Common.Indicator.Internal.QueueItem Gpm.Common.Indicator.Internal.BaseIndicator::queueItem
	QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* ___queueItem_2;
};

// Gpm.Common.Compress.Internal.CompressImplementation
struct CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87  : public RuntimeObject
{
};

struct CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_StaticFields
{
	// System.String Gpm.Common.Compress.Internal.CompressImplementation::COMPRESS_PROGRAM_PATH
	String_t* ___COMPRESS_PROGRAM_PATH_0;
	// System.Collections.Generic.Dictionary`2<Gpm.Common.Compress.CompressFormat,System.String> Gpm.Common.Compress.Internal.CompressImplementation::formatExtensions
	Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* ___formatExtensions_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Gpm.Common.Util.EditorCoroutine
struct EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3  : public RuntimeObject
{
	// System.Collections.IEnumerator Gpm.Common.Util.EditorCoroutine::routine
	RuntimeObject* ___routine_0;
	// System.Object Gpm.Common.Util.EditorCoroutine::current
	RuntimeObject* ___current_1;
	// System.Boolean Gpm.Common.Util.EditorCoroutine::IsDone
	bool ___IsDone_2;
};

struct EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_StaticFields
{
	// System.Collections.Generic.Stack`1<System.Collections.IEnumerator> Gpm.Common.Util.EditorCoroutine::enumeratorStack
	Stack_1_tCCF0E342E1E3E67D3A5E29186184FCC97134D9AB* ___enumeratorStack_3;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions
struct ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1  : public RuntimeObject
{
	// System.Boolean Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::<Overwrite>k__BackingField
	bool ___U3COverwriteU3Ek__BackingField_0;
	// System.Boolean Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::<ExtractFullPath>k__BackingField
	bool ___U3CExtractFullPathU3Ek__BackingField_1;
	// System.Boolean Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::<PreserveFileTime>k__BackingField
	bool ___U3CPreserveFileTimeU3Ek__BackingField_2;
	// System.Boolean Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::<PreserveAttributes>k__BackingField
	bool ___U3CPreserveAttributesU3Ek__BackingField_3;
	// Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions/SymbolicLinkWriterDelegate Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::WriteSymbolicLink
	SymbolicLinkWriterDelegate_t3C98E35E7ECAD625ACAFBEBFEB73F5099499444A* ___WriteSymbolicLink_4;
};

// Gpm.Common.ThirdParty.LitJson.FsmContext
struct FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B  : public RuntimeObject
{
	// System.Boolean Gpm.Common.ThirdParty.LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// Gpm.Common.ThirdParty.LitJson.Lexer Gpm.Common.ThirdParty.LitJson.FsmContext::L
	Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* ___L_2;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;
};

// Gpm.Common.GpmCommon
struct GpmCommon_t5C2F5AAC633B2E45F214203250C3216B55E2661A  : public RuntimeObject
{
};

struct GpmCommon_t5C2F5AAC633B2E45F214203250C3216B55E2661A_StaticFields
{
	// System.Boolean Gpm.Common.GpmCommon::<DebugLogEnabled>k__BackingField
	bool ___U3CDebugLogEnabledU3Ek__BackingField_1;
};

// Gpm.Common.Compress.GpmCompress
struct GpmCompress_t818F6FD77C8EA12408032FD93D6D738E361CE3AA  : public RuntimeObject
{
};

// Gpm.Common.Indicator.GpmIndicator
struct GpmIndicator_t697502353ACB41524764EC769DE6E1D11A0732FA  : public RuntimeObject
{
};

// Gpm.Common.Indicator.GpmIndicatorData
struct GpmIndicatorData_tC00240A425B2CA8633970A63E684ECFC1ACAC6A0  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Gpm.Common.Indicator.GpmIndicatorData::dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary_2;
	// System.Int32 Gpm.Common.Indicator.GpmIndicatorData::index
	int32_t ___index_3;
};

// Gpm.Common.Log.GpmLogger
struct GpmLogger_t45C408F11F058EBBF165FD9E405EA5E9764F0741  : public RuntimeObject
{
};

// Gpm.Common.Multilanguage.GpmMultilanguage
struct GpmMultilanguage_t9956FFFC0B9BAE020BC9D4916F147DD20D07D4CC  : public RuntimeObject
{
};

// Gpm.Common.Indicator.Internal.IndicatorField
struct IndicatorField_t152C241714984D85230281CE63B04289345BFA9F  : public RuntimeObject
{
};

// Gpm.Common.Indicator.Internal.IndicatorImplementation
struct IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.InAppIndicator Gpm.Common.Indicator.Internal.IndicatorImplementation::inAppInstance
	InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* ___inAppInstance_1;
	// Gpm.Common.Indicator.Internal.EditorIndicator Gpm.Common.Indicator.Internal.IndicatorImplementation::editorInstance
	EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* ___editorInstance_2;
};

struct IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_StaticFields
{
	// Gpm.Common.Indicator.Internal.IndicatorImplementation Gpm.Common.Indicator.Internal.IndicatorImplementation::instance
	IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* ___instance_0;
};

// Gpm.Common.ThirdParty.LitJson.JsonData
struct JsonData_t1DAE956C6245006539F5238C9208868AB54EC900  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Gpm.Common.ThirdParty.LitJson.JsonData> Gpm.Common.ThirdParty.LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double Gpm.Common.ThirdParty.LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 Gpm.Common.ThirdParty.LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,Gpm.Common.ThirdParty.LitJson.JsonData> Gpm.Common.ThirdParty.LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String Gpm.Common.ThirdParty.LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String Gpm.Common.ThirdParty.LitJson.JsonData::json
	String_t* ___json_7;
	// Gpm.Common.ThirdParty.LitJson.JsonType Gpm.Common.ThirdParty.LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,Gpm.Common.ThirdParty.LitJson.JsonData>> Gpm.Common.ThirdParty.LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;
};

// Gpm.Common.ThirdParty.LitJson.JsonMapper
struct JsonMapper_t935A558737137B954F48FF67008D14BE990ED441  : public RuntimeObject
{
};

struct JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_StaticFields
{
	// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider Gpm.Common.ThirdParty.LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ExporterFunc> Gpm.Common.ThirdParty.LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ExporterFunc> Gpm.Common.ThirdParty.LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ImporterFunc>> Gpm.Common.ThirdParty.LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ImporterFunc>> Gpm.Common.ThirdParty.LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ArrayMetadata> Gpm.Common.ThirdParty.LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper::array_metadata_lock
	RuntimeObject* ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> Gpm.Common.ThirdParty.LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper::conv_ops_lock
	RuntimeObject* ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,Gpm.Common.ThirdParty.LitJson.ObjectMetadata> Gpm.Common.ThirdParty.LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper::object_metadata_lock
	RuntimeObject* ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<Gpm.Common.ThirdParty.LitJson.PropertyMetadata>> Gpm.Common.ThirdParty.LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper::type_properties_lock
	RuntimeObject* ___type_properties_lock_13;
	// Gpm.Common.ThirdParty.LitJson.JsonWriter Gpm.Common.ThirdParty.LitJson.JsonMapper::static_writer
	JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___static_writer_14;
	// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper::static_writer_lock
	RuntimeObject* ___static_writer_lock_15;
};

// Gpm.Common.ThirdParty.LitJson.JsonMockWrapper
struct JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17  : public RuntimeObject
{
};

// Gpm.Common.ThirdParty.LitJson.JsonReader
struct JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<System.Int32> Gpm.Common.ThirdParty.LitJson.JsonReader::automaton_stack
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___automaton_stack_1;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// Gpm.Common.ThirdParty.LitJson.Lexer Gpm.Common.ThirdParty.LitJson.JsonReader::lexer
	Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* ___lexer_6;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader Gpm.Common.ThirdParty.LitJson.JsonReader::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_10;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::skip_non_members
	bool ___skip_non_members_12;
	// System.Object Gpm.Common.ThirdParty.LitJson.JsonReader::token_value
	RuntimeObject* ___token_value_13;
	// Gpm.Common.ThirdParty.LitJson.JsonToken Gpm.Common.ThirdParty.LitJson.JsonReader::token
	int32_t ___token_14;
};

struct JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> Gpm.Common.ThirdParty.LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;
};

// Gpm.Common.ThirdParty.LitJson.JsonWriter
struct JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5  : public RuntimeObject
{
	// Gpm.Common.ThirdParty.LitJson.WriterContext Gpm.Common.ThirdParty.LitJson.JsonWriter::context
	WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* ___context_1;
	// System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext> Gpm.Common.ThirdParty.LitJson.JsonWriter::ctx_stack
	Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* ___ctx_stack_2;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] Gpm.Common.ThirdParty.LitJson.JsonWriter::hex_seq
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex_seq_4;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder Gpm.Common.ThirdParty.LitJson.JsonWriter::inst_string_builder
	StringBuilder_t* ___inst_string_builder_7;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::lower_case_properties
	bool ___lower_case_properties_10;
	// System.IO.TextWriter Gpm.Common.ThirdParty.LitJson.JsonWriter::writer
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer_11;
};

struct JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields
{
	// System.Globalization.NumberFormatInfo Gpm.Common.ThirdParty.LitJson.JsonWriter::number_format
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___number_format_0;
};

// Gpm.Common.Indicator.Internal.Launching
struct Launching_tC45B05623259548483256C98C16A67FAAC7F6222  : public RuntimeObject
{
};

// Gpm.Common.Indicator.Internal.LaunchingInfo
struct LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.LaunchingInfo/Header Gpm.Common.Indicator.Internal.LaunchingInfo::header
	Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35* ___header_0;
	// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching Gpm.Common.Indicator.Internal.LaunchingInfo::launching
	Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C* ___launching_1;
};

// Gpm.Common.ThirdParty.LitJson.Lexer
struct Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351  : public RuntimeObject
{
	// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// Gpm.Common.ThirdParty.LitJson.FsmContext Gpm.Common.ThirdParty.LitJson.Lexer::fsm_context
	FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___fsm_context_5;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader Gpm.Common.ThirdParty.LitJson.Lexer::reader
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader_8;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder Gpm.Common.ThirdParty.LitJson.Lexer::string_buffer
	StringBuilder_t* ___string_buffer_10;
	// System.String Gpm.Common.ThirdParty.LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::unichar
	int32_t ___unichar_13;
};

struct Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_StaticFields
{
	// System.Int32[] Gpm.Common.ThirdParty.LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fsm_return_table_0;
	// Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler[] Gpm.Common.ThirdParty.LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* ___fsm_handler_table_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation
struct MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData> Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::services
	Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* ___services_1;
	// Gpm.Common.Multilanguage.Internal.MultilanguageLoader Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::loader
	MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* ___loader_2;
};

struct MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_StaticFields
{
	// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::instance
	MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* ___instance_0;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageLoader
struct MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65  : public RuntimeObject
{
	// UnityEngine.MonoBehaviour Gpm.Common.Multilanguage.Internal.MultilanguageLoader::monoObject
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoObject_2;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageServiceData
struct MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826  : public RuntimeObject
{
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::serviceName
	String_t* ___serviceName_1;
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::selectLanguage
	String_t* ___selectLanguage_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::selectLanguageStrings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___selectLanguageStrings_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>> Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::languagePacks
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ___languagePacks_4;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageUtil
struct MultilanguageUtil_tA6B0278583A87D0B167EDB11D06E652891484057  : public RuntimeObject
{
};

// Gpm.Common.Multilanguage.Internal.MultilanguageXml
struct MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B  : public RuntimeObject
{
	// Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData Gpm.Common.Multilanguage.Internal.MultilanguageXml::defaultData
	DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* ___defaultData_0;
	// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList Gpm.Common.Multilanguage.Internal.MultilanguageXml::stringList
	StringList_t2969F038B1A9485BAEDCA5E0CB427E1CF0C8BABF* ___stringList_1;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// Gpm.Common.ThirdParty.SharpCompress.Common.OptionsBase
struct OptionsBase_t06E48266D5B853F21F56A15671F65DE3CB6648CC  : public RuntimeObject
{
	// System.Boolean Gpm.Common.ThirdParty.SharpCompress.Common.OptionsBase::<LeaveStreamOpen>k__BackingField
	bool ___U3CLeaveStreamOpenU3Ek__BackingField_0;
	// Gpm.Common.ThirdParty.SharpCompress.Common.ArchiveEncoding Gpm.Common.ThirdParty.SharpCompress.Common.OptionsBase::<ArchiveEncoding>k__BackingField
	ArchiveEncoding_tFDD00F8AB852F4C36D35C6D1C75C8E5EA28F488C* ___U3CArchiveEncodingU3Ek__BackingField_1;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// Gpm.Common.Indicator.Internal.QueueItem
struct QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7  : public RuntimeObject
{
	// System.String Gpm.Common.Indicator.Internal.QueueItem::serviceName
	String_t* ___serviceName_0;
	// System.String Gpm.Common.Indicator.Internal.QueueItem::serviceVersion
	String_t* ___serviceVersion_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Gpm.Common.Indicator.Internal.QueueItem::customData
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData_2;
	// System.Boolean Gpm.Common.Indicator.Internal.QueueItem::ignoreActivation
	bool ___ignoreActivation_3;
	// System.Boolean Gpm.Common.Indicator.Internal.QueueItem::isRunning
	bool ___isRunning_4;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Gpm.Common.UnityWebRequestHelper
struct UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311  : public RuntimeObject
{
	// UnityEngine.Networking.UnityWebRequest Gpm.Common.UnityWebRequestHelper::request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request_4;
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

// Gpm.Common.ThirdParty.LitJson.WriterContext
struct WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B  : public RuntimeObject
{
	// System.Int32 Gpm.Common.ThirdParty.LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean Gpm.Common.ThirdParty.LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 Gpm.Common.ThirdParty.LitJson.WriterContext::Padding
	int32_t ___Padding_4;
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___parentNode_0;
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

// Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10
struct U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35  : public RuntimeObject
{
	// System.Int32 Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Gpm.Common.Indicator.Internal.BaseIndicator Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::<>4__this
	BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* ___U3CU3E4__this_2;
};

// Gpm.Common.Compress.Internal.CompressImplementation/UnityPackage
struct UnityPackage_tB350A3CE6EA47E2800251C6E583186F7814CAB40  : public RuntimeObject
{
};

// Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.EditorIndicator Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0::<>4__this
	EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* ___U3CU3E4__this_0;
	// System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo> Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0::callback
	Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* ___callback_1;
};

// Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.InAppIndicator Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0::<>4__this
	InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* ___U3CU3E4__this_0;
	// System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo> Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0::callback
	Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* ___callback_1;
};

// Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c
struct U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2  : public RuntimeObject
{
};

struct U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_StaticFields
{
	// Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9
	U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* ___U3CU3E9_0;
	// Gpm.Common.ThirdParty.LitJson.WrapperFactory Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__23_0
	WrapperFactory_tE76265F25EAB1DBC1B4EFDB2F0D835726C963050* ___U3CU3E9__23_0_1;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_0
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_0_2;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_1
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_1_3;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_2
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_2_4;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_3
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_3_5;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_4
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_4_6;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_5
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_5_7;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_6
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_6_8;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_7
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_7_9;
	// Gpm.Common.ThirdParty.LitJson.ExporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__24_8
	ExporterFunc_t5D8CC8ACB2CA4689083DB30371D0F24B2F214708* ___U3CU3E9__24_8_10;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_0
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_0_11;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_1
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_1_12;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_2
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_2_13;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_3
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_3_14;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_4
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_4_15;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_5
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_5_16;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_6
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_6_17;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_7
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_7_18;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_8
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_8_19;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_9
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_9_20;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_10
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_10_21;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_11
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_11_22;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_12
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_12_23;
	// Gpm.Common.ThirdParty.LitJson.ImporterFunc Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__25_13
	ImporterFunc_t646A78A18A73A02662451EF03CD7A7F5BBC2C5F8* ___U3CU3E9__25_13_24;
	// Gpm.Common.ThirdParty.LitJson.WrapperFactory Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__30_0
	WrapperFactory_tE76265F25EAB1DBC1B4EFDB2F0D835726C963050* ___U3CU3E9__30_0_25;
	// Gpm.Common.ThirdParty.LitJson.WrapperFactory Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__31_0
	WrapperFactory_tE76265F25EAB1DBC1B4EFDB2F0D835726C963050* ___U3CU3E9__31_0_26;
	// Gpm.Common.ThirdParty.LitJson.WrapperFactory Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<>9__32_0
	WrapperFactory_tE76265F25EAB1DBC1B4EFDB2F0D835726C963050* ___U3CU3E9__32_0_27;
};

// Gpm.Common.Indicator.Internal.LaunchingInfo/Header
struct Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35  : public RuntimeObject
{
	// System.Boolean Gpm.Common.Indicator.Internal.LaunchingInfo/Header::isSuccessful
	bool ___isSuccessful_0;
	// System.Int32 Gpm.Common.Indicator.Internal.LaunchingInfo/Header::resultCode
	int32_t ___resultCode_1;
	// System.String Gpm.Common.Indicator.Internal.LaunchingInfo/Header::resultMessage
	String_t* ___resultMessage_2;
};

// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching
struct Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator Gpm.Common.Indicator.Internal.LaunchingInfo/Launching::indicator
	Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB* ___indicator_0;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B  : public RuntimeObject
{
	// Gpm.Common.Multilanguage.MultilanguageCallback Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0::callback
	MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback_0;
	// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0::<>4__this
	MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* ___U3CU3E4__this_1;
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0::serviceName
	String_t* ___serviceName_2;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D  : public RuntimeObject
{
	// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String> Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0::callback
	Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback_0;
	// Gpm.Common.Multilanguage.Internal.MultilanguageLoader Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0::<>4__this
	MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* ___U3CU3E4__this_1;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296  : public RuntimeObject
{
	// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String> Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0::callback
	Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback_0;
	// Gpm.Common.Multilanguage.Internal.MultilanguageLoader Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0::<>4__this
	MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* ___U3CU3E4__this_1;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C  : public RuntimeObject
{
	// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String> Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::callback
	Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback_0;
	// Gpm.Common.Multilanguage.Internal.MultilanguageLoader Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::<>4__this
	MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* ___U3CU3E4__this_1;
	// System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String> Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::<>9__1
	Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* ___U3CU3E9__1_2;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8
struct U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32  : public RuntimeObject
{
	// System.Int32 Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::url
	String_t* ___url_2;
	// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String> Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::callback
	Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* ___callback_3;
	// UnityEngine.Networking.UnityWebRequest Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_4;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData
struct DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B  : public RuntimeObject
{
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData::language
	String_t* ___language_0;
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData::text
	String_t* ___text_1;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList
struct StringList_t2969F038B1A9485BAEDCA5E0CB427E1CF0C8BABF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData> Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList::list
	List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD* ___list_0;
};

// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator
struct Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB  : public RuntimeObject
{
	// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator::alpha
	Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* ___alpha_0;
	// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator::real
	Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* ___real_1;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData
struct StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E  : public RuntimeObject
{
	// System.String Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData::key
	String_t* ___key_0;
	// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData/LanguageList Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData::language
	LanguageList_tC269096175850288B705566782B705D3E26C3433* ___language_1;
};

// Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone
struct Zone_t76B26AE62FED398A6097396AEF841999ACEF0224  : public RuntimeObject
{
	// System.String Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone::logVersion
	String_t* ___logVersion_0;
	// System.String Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone::appKey
	String_t* ___appKey_1;
	// System.String Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone::url
	String_t* ___url_2;
	// System.String Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone::activation
	String_t* ___activation_3;
};

// Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData/LanguageList
struct LanguageList_tC269096175850288B705566782B705D3E26C3433  : public RuntimeObject
{
	// System.Xml.XmlElement[] Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData/LanguageList::list
	XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87* ___list_0;
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

// System.Collections.Generic.List`1/Enumerator<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>
struct Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Gpm.Common.Indicator.Internal.EditorIndicator
struct EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D  : public BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Gpm.Common.Indicator.Internal.InAppIndicator
struct InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1  : public BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D
{
	// UnityEngine.MonoBehaviour Gpm.Common.Indicator.Internal.InAppIndicator::monoObject
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___monoObject_3;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Gpm.Common.ThirdParty.SharpCompress.Readers.ReaderOptions
struct ReaderOptions_tDC88644B122F479513775DA7C7A22F05437D78F2  : public OptionsBase_t06E48266D5B853F21F56A15671F65DE3CB6648CC
{
	// System.Boolean Gpm.Common.ThirdParty.SharpCompress.Readers.ReaderOptions::<LookForHeader>k__BackingField
	bool ___U3CLookForHeaderU3Ek__BackingField_2;
	// System.String Gpm.Common.ThirdParty.SharpCompress.Readers.ReaderOptions::<Password>k__BackingField
	String_t* ___U3CPasswordU3Ek__BackingField_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
};

struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
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

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C  : public XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF
{
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___next_1;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_t46507B21922F4A2BF102BF8DF7FFE275F2AF79A5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t46507B21922F4A2BF102BF8DF7FFE275F2AF79A5__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_t4E19842F5BE235F2EAA0A45624119720B90DC426 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t4E19842F5BE235F2EAA0A45624119720B90DC426__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1152
struct __StaticArrayInitTypeSizeU3D1152_t32B9D263A8710FEC5E9FF5D64EA5AC87E59A9826 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1152_t32B9D263A8710FEC5E9FF5D64EA5AC87E59A9826__padding[1152];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
struct __StaticArrayInitTypeSizeU3D116_t28246A6E0DCD99A0CA8638DDF9C0438A01C0164D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t28246A6E0DCD99A0CA8638DDF9C0438A01C0164D__padding[116];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_t4CCE3CD675A2C1B3ACEC3ACE1024616534E6D012 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t4CCE3CD675A2C1B3ACEC3ACE1024616534E6D012__padding[120];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
struct __StaticArrayInitTypeSizeU3D124_t374ED30C270A3B1B9DD766EEEAE727C9B2724A6A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t374ED30C270A3B1B9DD766EEEAE727C9B2724A6A__padding[124];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t39DA9685B80650BFBF52C6149BBE2038471D440A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t39DA9685B80650BFBF52C6149BBE2038471D440A__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tE9FD3063076F493954BA8AAEB3BC80E1E2CA8C8B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tE9FD3063076F493954BA8AAEB3BC80E1E2CA8C8B__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
struct __StaticArrayInitTypeSizeU3D19_tD5B68494D7257F9C6A5E46BEB83AD8EA04F3D7ED 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_tD5B68494D7257F9C6A5E46BEB83AD8EA04F3D7ED__padding[19];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_t77C3008F9B9E01A14D292908C14D1A76817B0379 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t77C3008F9B9E01A14D292908C14D1A76817B0379__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct __StaticArrayInitTypeSizeU3D2048_t5111E722500D173EE12A35BFB5F717B07087EA4F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t5111E722500D173EE12A35BFB5F717B07087EA4F__padding[2048];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052
struct __StaticArrayInitTypeSizeU3D2052_t7316B348ED782D93C5B7A6B338DB5ADD2ACCE5B8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2052_t7316B348ED782D93C5B7A6B338DB5ADD2ACCE5B8__padding[2052];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t81485A3AAB1EE1C99B0E41A0AE54D4B7DAC31561 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t81485A3AAB1EE1C99B0E41A0AE54D4B7DAC31561__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tF497D17379A2E8EF5DE6453B138B62A41EE81B99 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tF497D17379A2E8EF5DE6453B138B62A41EE81B99__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t91E5C04B630B4D0800E7D4FC526E004A4315EB6C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t91E5C04B630B4D0800E7D4FC526E004A4315EB6C__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29
struct __StaticArrayInitTypeSizeU3D29_t31346269337D9782116A3142B3F6D3ADD0B0880F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D29_t31346269337D9782116A3142B3F6D3ADD0B0880F__padding[29];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30
struct __StaticArrayInitTypeSizeU3D30_tABF60464921F43CD3910D9C0008BCE2CB7EAD5D2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30_tABF60464921F43CD3910D9C0008BCE2CB7EAD5D2__padding[30];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t7035DEF8E23AB65E59CADDB6A9D3B8899ACE64F1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t7035DEF8E23AB65E59CADDB6A9D3B8899ACE64F1__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=384
struct __StaticArrayInitTypeSizeU3D384_t2A183102BDE2669765E330146C244FF0D1E73B01 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_t2A183102BDE2669765E330146C244FF0D1E73B01__padding[384];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t548F14E357238E8D9DFF45229E1267528EF3D553 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t548F14E357238E8D9DFF45229E1267528EF3D553__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct __StaticArrayInitTypeSizeU3D44_t5CFF469B942D68A4259A779C6B1DBD465E201A77 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t5CFF469B942D68A4259A779C6B1DBD465E201A77__padding[44];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_t42D2E6AFE68A6BF8D77E2EBD549C319FC3FD3A0B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t42D2E6AFE68A6BF8D77E2EBD549C319FC3FD3A0B__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=511
struct __StaticArrayInitTypeSizeU3D511_t240339430F9EDA20E64FF5419146E1BCCFEFC124 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D511_t240339430F9EDA20E64FF5419146E1BCCFEFC124__padding[511];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct __StaticArrayInitTypeSizeU3D512_t8A94AAB7F9A4A81C2A3CC87F1E4F67399BA27253 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t8A94AAB7F9A4A81C2A3CC87F1E4F67399BA27253__padding[512];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_t9F31B8C7A4116DDE431AC82751DAC8A81FD4C623 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t9F31B8C7A4116DDE431AC82751DAC8A81FD4C623__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_t478D9F33E1C0B41A8152614D9046502E9F4275C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t478D9F33E1C0B41A8152614D9046502E9F4275C2__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60
struct __StaticArrayInitTypeSizeU3D60_t91D66BF2547321D7E4140C383CC9FB7FD75317EF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D60_t91D66BF2547321D7E4140C383CC9FB7FD75317EF__padding[60];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6144
struct __StaticArrayInitTypeSizeU3D6144_t039522506B05F07D2E5C578251FE47570A962821 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6144_t039522506B05F07D2E5C578251FE47570A962821__padding[6144];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t737B1114AE4DEAFCE9252376BAA9B9673D15CD50 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t737B1114AE4DEAFCE9252376BAA9B9673D15CD50__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_tF168394F9A9C4F3CAA135DD6DE2C662C125EDF2F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_tF168394F9A9C4F3CAA135DD6DE2C662C125EDF2F__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_tED275C137A397C81DE47D36304C1A16D3A62D722 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_tED275C137A397C81DE47D36304C1A16D3A62D722__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98
struct __StaticArrayInitTypeSizeU3D98_tE9F977FCAE5AD7FF9EF4F5011507D91A4F7F0B07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D98_tE9F977FCAE5AD7FF9EF4F5011507D91A4F7F0B07__padding[98];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::0053F121CDCAF9F510A940BA891FB2BCCD41487953C5A4C0048C4A3CCDEC782E
	__StaticArrayInitTypeSizeU3D1024_t46507B21922F4A2BF102BF8DF7FFE275F2AF79A5 ___0053F121CDCAF9F510A940BA891FB2BCCD41487953C5A4C0048C4A3CCDEC782E_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::03492A5DDBBF3A44E4EB84BD2A458DA34D02AD09D1A3EFC17255A384272A7F2B
	__StaticArrayInitTypeSizeU3D64_t737B1114AE4DEAFCE9252376BAA9B9673D15CD50 ___03492A5DDBBF3A44E4EB84BD2A458DA34D02AD09D1A3EFC17255A384272A7F2B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::05E5E51D244C9E87A725F19597A423DA450AE8D80F2FFBDD6D681EF884DE0AB1
	__StaticArrayInitTypeSizeU3D6_t478D9F33E1C0B41A8152614D9046502E9F4275C2 ___05E5E51D244C9E87A725F19597A423DA450AE8D80F2FFBDD6D681EF884DE0AB1_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::10E478F251A48FA19A372CC4A2FD9703CABDD89CC59A2F0A5B4280DD3E919C34
	__StaticArrayInitTypeSizeU3D192_t77C3008F9B9E01A14D292908C14D1A76817B0379 ___10E478F251A48FA19A372CC4A2FD9703CABDD89CC59A2F0A5B4280DD3E919C34_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15
	__StaticArrayInitTypeSizeU3D19_tD5B68494D7257F9C6A5E46BEB83AD8EA04F3D7ED ___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::1393F2A23AD9AB2269D93C2075E3D062D52F91D83FB724B997B1018E153BEB01
	__StaticArrayInitTypeSizeU3D60_t91D66BF2547321D7E4140C383CC9FB7FD75317EF ___1393F2A23AD9AB2269D93C2075E3D062D52F91D83FB724B997B1018E153BEB01_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::16355CB850048923C949B4BA32F3B976D2E6E84EA49D527B040CA2F174C45274
	__StaticArrayInitTypeSizeU3D6_t478D9F33E1C0B41A8152614D9046502E9F4275C2 ___16355CB850048923C949B4BA32F3B976D2E6E84EA49D527B040CA2F174C45274_6;
	// System.Int32 <PrivateImplementationDetails>::21B0817029E06E75D6C5BE22BC57089FD89B468AA7C549604EB9483F978CAD5B
	int32_t ___21B0817029E06E75D6C5BE22BC57089FD89B468AA7C549604EB9483F978CAD5B_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::27C36B8C06C0271A973E583417426E79BA840E2D887711B48754EECCA5504698
	__StaticArrayInitTypeSizeU3D64_t737B1114AE4DEAFCE9252376BAA9B9673D15CD50 ___27C36B8C06C0271A973E583417426E79BA840E2D887711B48754EECCA5504698_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::28EC9AEFC189B143A02817E444DC61AA86CF939A3E35E74BB33E7A77BA45A7FA
	__StaticArrayInitTypeSizeU3D48_t42D2E6AFE68A6BF8D77E2EBD549C319FC3FD3A0B ___28EC9AEFC189B143A02817E444DC61AA86CF939A3E35E74BB33E7A77BA45A7FA_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::296892D5D3D94CABE12856DDAAE2A17CCB363CB7D952BE4056E582470A3AC90C
	__StaticArrayInitTypeSizeU3D64_t737B1114AE4DEAFCE9252376BAA9B9673D15CD50 ___296892D5D3D94CABE12856DDAAE2A17CCB363CB7D952BE4056E582470A3AC90C_10;
	// System.Int64 <PrivateImplementationDetails>::2DC8C82FC0E4F3730307F193D9F1114C0CB520D6B71672CCD3BA8D3B2E7D4BC2
	int64_t ___2DC8C82FC0E4F3730307F193D9F1114C0CB520D6B71672CCD3BA8D3B2E7D4BC2_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::31218D62361AA8B0AB684DB54E2CAB1ACFB4129CB919613FE3B82944C9C54D04
	__StaticArrayInitTypeSizeU3D16_tE9FD3063076F493954BA8AAEB3BC80E1E2CA8C8B ___31218D62361AA8B0AB684DB54E2CAB1ACFB4129CB919613FE3B82944C9C54D04_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::3139BE08694381EAB0BD085D643FB0E6324A0E45C254B609FB28D5BEAEF2F52D
	__StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C ___3139BE08694381EAB0BD085D643FB0E6324A0E45C254B609FB28D5BEAEF2F52D_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::325BFEE33A593E28E54E20F8520E5DFEE122F719EF08FFE096A2AD31C4DC316F
	__StaticArrayInitTypeSizeU3D256_tF497D17379A2E8EF5DE6453B138B62A41EE81B99 ___325BFEE33A593E28E54E20F8520E5DFEE122F719EF08FFE096A2AD31C4DC316F_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=511 <PrivateImplementationDetails>::360294D82A77697405846183BBB96E548B586D0710C5E2322E2CEF23E88C4122
	__StaticArrayInitTypeSizeU3D511_t240339430F9EDA20E64FF5419146E1BCCFEFC124 ___360294D82A77697405846183BBB96E548B586D0710C5E2322E2CEF23E88C4122_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1152 <PrivateImplementationDetails>::36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38
	__StaticArrayInitTypeSizeU3D1152_t32B9D263A8710FEC5E9FF5D64EA5AC87E59A9826 ___36B8FDA0BFB1D93A07326EE7CAC8EB99FF1AF237D234FFA3210F64D3EB774C38_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::38BE3B36456F766C92D95079CC9C05B36A9556E7B2FD21FC9CD10E327B0FB546
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___38BE3B36456F766C92D95079CC9C05B36A9556E7B2FD21FC9CD10E327B0FB546_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3BF2DBC6390D84FDC10568CDECD626F475EA66D0D2050BBB7F325BD1509E60EB
	__StaticArrayInitTypeSizeU3D16_tE9FD3063076F493954BA8AAEB3BC80E1E2CA8C8B ___3BF2DBC6390D84FDC10568CDECD626F475EA66D0D2050BBB7F325BD1509E60EB_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A
	__StaticArrayInitTypeSizeU3D512_t8A94AAB7F9A4A81C2A3CC87F1E4F67399BA27253 ___3E4FB5FE52BF269D6EE955711016291D6D327A4AAC39B2464C53C6BD0D73242A_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::4043F14C32AA403B8DB20A25FBB32C9FA2A61F473D50196C76FDB5BDFDE6F4FF
	__StaticArrayInitTypeSizeU3D28_t91E5C04B630B4D0800E7D4FC526E004A4315EB6C ___4043F14C32AA403B8DB20A25FBB32C9FA2A61F473D50196C76FDB5BDFDE6F4FF_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::498EA8706CFE631810DF0AFA6DEF736ECC52DEF5819F7009CA00E68D884670E0
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___498EA8706CFE631810DF0AFA6DEF736ECC52DEF5819F7009CA00E68D884670E0_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::4D6CDAF9F2D9C643D2730C03A4124F4748A4266F378BBB993139B61CDD3B815C
	__StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C ___4D6CDAF9F2D9C643D2730C03A4124F4748A4266F378BBB993139B61CDD3B815C_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::57453022D58FC326C113C3A734ACE5B20ECF190F4CEB75A49F9E48C81CD2682A
	__StaticArrayInitTypeSizeU3D24_t81485A3AAB1EE1C99B0E41A0AE54D4B7DAC31561 ___57453022D58FC326C113C3A734ACE5B20ECF190F4CEB75A49F9E48C81CD2682A_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6
	__StaticArrayInitTypeSizeU3D120_t4CCE3CD675A2C1B3ACEC3ACE1024616534E6D012 ___5961BF1FCF83803CE7775E15E9DB8D21AF741539B85CCFDD643F9E22CC7820D6_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_25;
	// System.Int64 <PrivateImplementationDetails>::5A78883BF0689B754BD27C194CD3EA09D6D3FD740542C928ED2F40FEEFBE2100
	int64_t ___5A78883BF0689B754BD27C194CD3EA09D6D3FD740542C928ED2F40FEEFBE2100_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=384 <PrivateImplementationDetails>::5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7
	__StaticArrayInitTypeSizeU3D384_t2A183102BDE2669765E330146C244FF0D1E73B01 ___5D34088B4ABB1F3FE88DCF84DD5C145EFD5EA01DF1B05BB8FEAD12305B0979B7_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD
	__StaticArrayInitTypeSizeU3D124_t374ED30C270A3B1B9DD766EEEAE727C9B2724A6A ___5D6878AD6E68B2CCB04A7CD7942BE07C15F947CCA8824203021DD465D90712AD_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___6116ACF9BA29EF61E63AF05766A8CCBC05D3DF52FE07AE0DBCD10FF1065B6938_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1
	__StaticArrayInitTypeSizeU3D124_t374ED30C270A3B1B9DD766EEEAE727C9B2724A6A ___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::66FA59E8D4A03861706E6197B6189EB9C7FA6A47A23DA2A69AAA6EB6260182FF
	__StaticArrayInitTypeSizeU3D6_t478D9F33E1C0B41A8152614D9046502E9F4275C2 ___66FA59E8D4A03861706E6197B6189EB9C7FA6A47A23DA2A69AAA6EB6260182FF_32;
	// System.Int64 <PrivateImplementationDetails>::682BA4DFB8D7B3CC0E2FA80B0472F9AB580BF5D70A5B19683B3A69568958F75A
	int64_t ___682BA4DFB8D7B3CC0E2FA80B0472F9AB580BF5D70A5B19683B3A69568958F75A_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::694472596DD7AD955A7F32136F7591D09D59CB8F74E93447B9DC73C442FE5647
	__StaticArrayInitTypeSizeU3D112_t4E19842F5BE235F2EAA0A45624119720B90DC426 ___694472596DD7AD955A7F32136F7591D09D59CB8F74E93447B9DC73C442FE5647_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::695290BC788DE7B0FC85A8CAB598F1E2381E1F966A38EEC050674E4F2B54149A
	__StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C ___695290BC788DE7B0FC85A8CAB598F1E2381E1F966A38EEC050674E4F2B54149A_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::6E1812F3F28F9664C814D9F31417576204DC332FB8F6AF2BB74B53D5568F1ABF
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___6E1812F3F28F9664C814D9F31417576204DC332FB8F6AF2BB74B53D5568F1ABF_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::716634FAB4B024E5813665D5EB872A734128EA4AC26247E8ED31AF5A42996E4B
	__StaticArrayInitTypeSizeU3D28_t91E5C04B630B4D0800E7D4FC526E004A4315EB6C ___716634FAB4B024E5813665D5EB872A734128EA4AC26247E8ED31AF5A42996E4B_37;
	// System.Int32 <PrivateImplementationDetails>::72B8B8D3A6D4A8C2F9364B2F944B36201C7D8A2B43DBF558D1A09883E969D74D
	int32_t ___72B8B8D3A6D4A8C2F9364B2F944B36201C7D8A2B43DBF558D1A09883E969D74D_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29 <PrivateImplementationDetails>::73AA5A9F081C8049AA00AE8CEF554E85A334986D1E0AF7AF996F0F17F7AA0BAD
	__StaticArrayInitTypeSizeU3D29_t31346269337D9782116A3142B3F6D3ADD0B0880F ___73AA5A9F081C8049AA00AE8CEF554E85A334986D1E0AF7AF996F0F17F7AA0BAD_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::759CDC92E03D570F1B7160BDAD604EB59E8F488910386052A1F631041AF265DF
	__StaticArrayInitTypeSizeU3D60_t91D66BF2547321D7E4140C383CC9FB7FD75317EF ___759CDC92E03D570F1B7160BDAD604EB59E8F488910386052A1F631041AF265DF_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30 <PrivateImplementationDetails>::7C97C06F982D2F598F71BCF85A27244685EC039BC414EB391EC3EC449A619F37
	__StaticArrayInitTypeSizeU3D30_tABF60464921F43CD3910D9C0008BCE2CB7EAD5D2 ___7C97C06F982D2F598F71BCF85A27244685EC039BC414EB391EC3EC449A619F37_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D
	__StaticArrayInitTypeSizeU3D116_t28246A6E0DCD99A0CA8638DDF9C0438A01C0164D ___7DDF88204E7E265240211841F0AB290A5E77EE4F9223EB2E39F9B89C30C41B9D_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7F1FA929A12BF6B21DC7BCC2154FB844F8268A2BB7539F31B818BBA4FE6E6080
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___7F1FA929A12BF6B21DC7BCC2154FB844F8268A2BB7539F31B818BBA4FE6E6080_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::806F69A401CAE6F45F13A20B362575DD1746015E3021A692D34EE8F7C70D5C40
	__StaticArrayInitTypeSizeU3D40_t548F14E357238E8D9DFF45229E1267528EF3D553 ___806F69A401CAE6F45F13A20B362575DD1746015E3021A692D34EE8F7C70D5C40_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::85F902FC25B01D62E00C2B48C0246DC27425600C06C44D60365C5BF9C566F2BF
	__StaticArrayInitTypeSizeU3D128_t39DA9685B80650BFBF52C6149BBE2038471D440A ___85F902FC25B01D62E00C2B48C0246DC27425600C06C44D60365C5BF9C566F2BF_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6144 <PrivateImplementationDetails>::8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095
	__StaticArrayInitTypeSizeU3D6144_t039522506B05F07D2E5C578251FE47570A962821 ___8AE83CF30C3CEAC5F4B9F025200D65EFAEC851DE0098817DB69F0E547407C095_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8BFE10199DAB2C68E3B375BDB2D47B17B98A319D57CC6E00E154F04EF485C61A
	__StaticArrayInitTypeSizeU3D40_t548F14E357238E8D9DFF45229E1267528EF3D553 ___8BFE10199DAB2C68E3B375BDB2D47B17B98A319D57CC6E00E154F04EF485C61A_48;
	// System.Int32 <PrivateImplementationDetails>::8DE58994BA1BCCA412DBAD0B7F71CC1C77CFA1303F3224FA5371B5BE8A27AB5E
	int32_t ___8DE58994BA1BCCA412DBAD0B7F71CC1C77CFA1303F3224FA5371B5BE8A27AB5E_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::8DECDB10AEFDB828B1325DD76119F2587EA785882269C22B7818DF39260394A9
	__StaticArrayInitTypeSizeU3D56_t9F31B8C7A4116DDE431AC82751DAC8A81FD4C623 ___8DECDB10AEFDB828B1325DD76119F2587EA785882269C22B7818DF39260394A9_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8F100097E02217A5C2030C7031E9FA4C475BDD67795C372ABB20A8A1B2ECAF6A
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___8F100097E02217A5C2030C7031E9FA4C475BDD67795C372ABB20A8A1B2ECAF6A_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E
	__StaticArrayInitTypeSizeU3D76_tED275C137A397C81DE47D36304C1A16D3A62D722 ___8FC498A953A183E1FE81A183AE59047435BB9B33D657C625FAB03D38BE19F92E_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9080225FCB9D5D86B2C87273D8681B64112AED1463BD71DA0136FFC33C4C271F
	__StaticArrayInitTypeSizeU3D28_t91E5C04B630B4D0800E7D4FC526E004A4315EB6C ___9080225FCB9D5D86B2C87273D8681B64112AED1463BD71DA0136FFC33C4C271F_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::91DFFC2718404C700C73393B1810B4379BC90C5F6F691D4EDDA8736CFBCBDA52
	__StaticArrayInitTypeSizeU3D76_tED275C137A397C81DE47D36304C1A16D3A62D722 ___91DFFC2718404C700C73393B1810B4379BC90C5F6F691D4EDDA8736CFBCBDA52_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::93631B0726F6FE6629DAA743EE51B49F4477ED07391B68EEEA0672A4A90018AA
	__StaticArrayInitTypeSizeU3D256_tF497D17379A2E8EF5DE6453B138B62A41EE81B99 ___93631B0726F6FE6629DAA743EE51B49F4477ED07391B68EEEA0672A4A90018AA_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503
	__StaticArrayInitTypeSizeU3D120_t4CCE3CD675A2C1B3ACEC3ACE1024616534E6D012 ___9476220840D3CE82203B4A722E278773B1DA458A22F49FCB9FC45B851DF7D503_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9688EAFBF4BADD48315761882E5D26DBCF93E032B75798EFCEE2FC036850228C
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___9688EAFBF4BADD48315761882E5D26DBCF93E032B75798EFCEE2FC036850228C_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::9904D3EECE4D6804EE8E8FB77D26027A711E53D12137176433B94661389DE511
	__StaticArrayInitTypeSizeU3D116_t28246A6E0DCD99A0CA8638DDF9C0438A01C0164D ___9904D3EECE4D6804EE8E8FB77D26027A711E53D12137176433B94661389DE511_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::A0BE449D4E9030F702D23FD01708C8914201A50DD1C5530F8462448E3CE2B2F4
	__StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C ___A0BE449D4E9030F702D23FD01708C8914201A50DD1C5530F8462448E3CE2B2F4_59;
	// System.Int64 <PrivateImplementationDetails>::A8E7965ED3ECE3EEC2792792AA84C05711ECB81CA05100766489F52C0A6483B8
	int64_t ___A8E7965ED3ECE3EEC2792792AA84C05711ECB81CA05100766489F52C0A6483B8_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::B1D3DD4D8884910CA56D86DEE9B5FD7716FF3E5E81F67A7BFF8683ECD9A84118
	__StaticArrayInitTypeSizeU3D64_t737B1114AE4DEAFCE9252376BAA9B9673D15CD50 ___B1D3DD4D8884910CA56D86DEE9B5FD7716FF3E5E81F67A7BFF8683ECD9A84118_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114
	__StaticArrayInitTypeSizeU3D120_t4CCE3CD675A2C1B3ACEC3ACE1024616534E6D012 ___B23D510F520CB4BA8AFA847F8A40E757C40CB6A55B237EFA1AC6D3984911B114_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29 <PrivateImplementationDetails>::B672541D472D0DF45EA7ADFD9CBBEEF9C1EBA5995647FEBC9C983D5B4190B36B
	__StaticArrayInitTypeSizeU3D29_t31346269337D9782116A3142B3F6D3ADD0B0880F ___B672541D472D0DF45EA7ADFD9CBBEEF9C1EBA5995647FEBC9C983D5B4190B36B_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_65;
	// System.Int32 <PrivateImplementationDetails>::B8A899AEBE8BCC739D363C17DD8CA885653263A59843BF7B7C85DE4DB10A9C92
	int32_t ___B8A899AEBE8BCC739D363C17DD8CA885653263A59843BF7B7C85DE4DB10A9C92_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B8E85B9CF5A7912BB02F1CF93F5F7FEBAC206CF473FC768F8D541FF3F4D0C00E
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___B8E85B9CF5A7912BB02F1CF93F5F7FEBAC206CF473FC768F8D541FF3F4D0C00E_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4
	__StaticArrayInitTypeSizeU3D256_tF497D17379A2E8EF5DE6453B138B62A41EE81B99 ___B9D4AF390AFC6A0F149B843D651CFEBC1C4EC496A0263B72207836F9C525E1C4_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::BA5DDECCF08DCED93F4CD2E949DD3C677C1B0ED36A5E7CE4617B187669D1504B
	__StaticArrayInitTypeSizeU3D98_tE9F977FCAE5AD7FF9EF4F5011507D91A4F7F0B07 ___BA5DDECCF08DCED93F4CD2E949DD3C677C1B0ED36A5E7CE4617B187669D1504B_69;
	// System.Int32 <PrivateImplementationDetails>::BAAD10E40DF6B5D52A22FCCE498BBD641EBB2377BB7DA4FE04EE26F084647F69
	int32_t ___BAAD10E40DF6B5D52A22FCCE498BBD641EBB2377BB7DA4FE04EE26F084647F69_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BCA1F4DD2369D7C1DE31300F563FDEB0CCA13A7022628C63708D1B9DA08E466A
	__StaticArrayInitTypeSizeU3D36_t7035DEF8E23AB65E59CADDB6A9D3B8899ACE64F1 ___BCA1F4DD2369D7C1DE31300F563FDEB0CCA13A7022628C63708D1B9DA08E466A_71;
	// System.Int32 <PrivateImplementationDetails>::BDB11C99D6418180156EEA47B9EB755F8736055603C19E57F9DFB4CDFFCF8C3A
	int32_t ___BDB11C99D6418180156EEA47B9EB755F8736055603C19E57F9DFB4CDFFCF8C3A_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::BDB61707A5140D23D045E0FC7D7B6ED4C1ADDCB48EA8F004400ECD9F0EB190D0
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___BDB61707A5140D23D045E0FC7D7B6ED4C1ADDCB48EA8F004400ECD9F0EB190D0_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B
	__StaticArrayInitTypeSizeU3D76_tED275C137A397C81DE47D36304C1A16D3A62D722 ___C133E473E5E653C5C4AEDB8BCC1C1A3A44D384FC0B6C0FCF04672B1B325EC01B_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::C267D4987FDC6B820E3DE539450A37A4F2017D977A06EAB159939CF971F538C5
	__StaticArrayInitTypeSizeU3D128_t39DA9685B80650BFBF52C6149BBE2038471D440A ___C267D4987FDC6B820E3DE539450A37A4F2017D977A06EAB159939CF971F538C5_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2
	__StaticArrayInitTypeSizeU3D256_tF497D17379A2E8EF5DE6453B138B62A41EE81B99 ___C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::C2E5E05EAC0B7DBBD623008DDE67325395F5F4E2B275201B59B409DE0E22CC66
	__StaticArrayInitTypeSizeU3D98_tE9F977FCAE5AD7FF9EF4F5011507D91A4F7F0B07 ___C2E5E05EAC0B7DBBD623008DDE67325395F5F4E2B275201B59B409DE0E22CC66_77;
	// System.Int32 <PrivateImplementationDetails>::C71C8ED7041ABE0B7FD161D726857C18705285A9F1B478A006310909B4A6D900
	int32_t ___C71C8ED7041ABE0B7FD161D726857C18705285A9F1B478A006310909B4A6D900_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_t4E19842F5BE235F2EAA0A45624119720B90DC426 ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C88A5FD712C368135DFC00B43FD6EB1D8EC948B243FA4ACE7BC0709A59863639
	__StaticArrayInitTypeSizeU3D32_tC1F6278CF9F9F7D374E020121074F7D3B5DAD16E ___C88A5FD712C368135DFC00B43FD6EB1D8EC948B243FA4ACE7BC0709A59863639_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::CB7BDC55F96D46E6ED672C6AEFAEAF56306BCB834426D9F983C6EF887CB0DCC3
	__StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C ___CB7BDC55F96D46E6ED672C6AEFAEAF56306BCB834426D9F983C6EF887CB0DCC3_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C
	__StaticArrayInitTypeSizeU3D68_tF168394F9A9C4F3CAA135DD6DE2C662C125EDF2F ___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::D46A4CD27A096EFCF9BB8F499122BDE06CBA537F031BF3FA691188F4D1EBA5A6
	__StaticArrayInitTypeSizeU3D192_t77C3008F9B9E01A14D292908C14D1A76817B0379 ___D46A4CD27A096EFCF9BB8F499122BDE06CBA537F031BF3FA691188F4D1EBA5A6_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D4C9B3D892B379769DE73AF1CD78969858C8AD888C8DC222F6C44E6A5F949153
	__StaticArrayInitTypeSizeU3D16_tE9FD3063076F493954BA8AAEB3BC80E1E2CA8C8B ___D4C9B3D892B379769DE73AF1CD78969858C8AD888C8DC222F6C44E6A5F949153_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::D5D4C61B03FCEE1B0876F0A0B7E8FE7700CB4CFBBE33FF203A11F384F5DFE382
	__StaticArrayInitTypeSizeU3D6_t478D9F33E1C0B41A8152614D9046502E9F4275C2 ___D5D4C61B03FCEE1B0876F0A0B7E8FE7700CB4CFBBE33FF203A11F384F5DFE382_85;
	// System.Int32 <PrivateImplementationDetails>::DE422551A0E0EF2710E43824DEFE8B2204F5FB76F83D7A496BA3F8D7D66569EB
	int32_t ___DE422551A0E0EF2710E43824DEFE8B2204F5FB76F83D7A496BA3F8D7D66569EB_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::E1707FD6EC744A85897DFD531498A5321688D3F8C74DEA86A11EEE53F8A19116
	__StaticArrayInitTypeSizeU3D44_t5CFF469B942D68A4259A779C6B1DBD465E201A77 ___E1707FD6EC744A85897DFD531498A5321688D3F8C74DEA86A11EEE53F8A19116_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052 <PrivateImplementationDetails>::E4B61E8996D29E5E5CA72544AF61F6FA97A3FD90F3A722451D54A08C6933C76E
	__StaticArrayInitTypeSizeU3D2052_t7316B348ED782D93C5B7A6B338DB5ADD2ACCE5B8 ___E4B61E8996D29E5E5CA72544AF61F6FA97A3FD90F3A722451D54A08C6933C76E_88;
	// System.Int32 <PrivateImplementationDetails>::EB6B70CC36DAA15B37C45E6D0AE3CB7E8A9B1BA69E6BC44762F886192C725A5A
	int32_t ___EB6B70CC36DAA15B37C45E6D0AE3CB7E8A9B1BA69E6BC44762F886192C725A5A_89;
	// System.Int64 <PrivateImplementationDetails>::F18366628A466F286AC60A27D59CADD5FD347730C9D55E04CE70FFDA96CB236F
	int64_t ___F18366628A466F286AC60A27D59CADD5FD347730C9D55E04CE70FFDA96CB236F_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::F82291271223987BEF2EF56E7C78DA70164C86C219BEDD1240FADDC38F5A6405
	__StaticArrayInitTypeSizeU3D52_t275072A3B227E2AE640D374E936899CD7AE5B90C ___F82291271223987BEF2EF56E7C78DA70164C86C219BEDD1240FADDC38F5A6405_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842
	__StaticArrayInitTypeSizeU3D116_t28246A6E0DCD99A0CA8638DDF9C0438A01C0164D ___F8D7861760C88CC514F66095AF0AED47ECBA063ADB65F47125ED07BCC2CF9842_92;
	// System.Int32 <PrivateImplementationDetails>::F9CD20F9BE4EBA8920C22293BAF9687E83B65C0DD5D44641A905FC535BC053B1
	int32_t ___F9CD20F9BE4EBA8920C22293BAF9687E83B65C0DD5D44641A905FC535BC053B1_93;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951
	__StaticArrayInitTypeSizeU3D2048_t5111E722500D173EE12A35BFB5F717B07087EA4F ___FA6F7D5596F6084EE582060B76239C49C1BF8567F7EA556E2D83971C75E26951_94;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_tA48B23DFAE6F25144E2A9E38C50BA6249B6886E9 ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_95;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3
	__StaticArrayInitTypeSizeU3D120_t4CCE3CD675A2C1B3ACEC3ACE1024616534E6D012 ___FC216F5C5AE2947D800794ECD5F752EE8381073C2E5D0D095FDA040F541702F3_96;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
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

// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
};

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C  : public RuntimeObject
{
	// System.String System.Diagnostics.ProcessStartInfo::fileName
	String_t* ___fileName_0;
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_1;
	// System.String System.Diagnostics.ProcessStartInfo::directory
	String_t* ___directory_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.Diagnostics.ProcessWindowStyle System.Diagnostics.ProcessStartInfo::windowStyle
	int32_t ___windowStyle_4;
	// System.Boolean System.Diagnostics.ProcessStartInfo::errorDialog
	bool ___errorDialog_5;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::errorDialogParentHandle
	intptr_t ___errorDialogParentHandle_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::useShellExecute
	bool ___useShellExecute_7;
	// System.String System.Diagnostics.ProcessStartInfo::userName
	String_t* ___userName_8;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_9;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	// System.String System.Diagnostics.ProcessStartInfo::passwordInClearText
	String_t* ___passwordInClearText_11;
	// System.Boolean System.Diagnostics.ProcessStartInfo::loadUserProfile
	bool ___loadUserProfile_12;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardInput
	bool ___redirectStandardInput_13;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardOutput
	bool ___redirectStandardOutput_14;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardError
	bool ___redirectStandardError_15;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardOutputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardErrorEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	// System.Boolean System.Diagnostics.ProcessStartInfo::createNoWindow
	bool ___createNoWindow_18;
	// System.WeakReference System.Diagnostics.ProcessStartInfo::weakParentProcess
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::environmentVariables
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	// System.Collections.ObjectModel.Collection`1<System.String> System.Diagnostics.ProcessStartInfo::_argumentList
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Diagnostics.ProcessStartInfo::environment
	RuntimeObject* ___environment_23;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::<StandardInputEncoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};

struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_StaticFields
{
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___empty_21;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_pinvoke
{
	char* ___fileName_0;
	char* ___arguments_1;
	char* ___directory_2;
	char* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	char* ___userName_8;
	char* ___domain_9;
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	char* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	RuntimeObject* ___environment_23;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};
// Native definition for COM marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_com
{
	Il2CppChar* ___fileName_0;
	Il2CppChar* ___arguments_1;
	Il2CppChar* ___directory_2;
	Il2CppChar* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	Il2CppChar* ___userName_8;
	Il2CppChar* ___domain_9;
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	Il2CppChar* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	RuntimeObject* ___environment_23;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_7;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_8;
};

struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_StaticFields
{
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___m_encoding_6;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Xml.XmlElement
struct XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1  : public XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C
{
	// System.Xml.XmlName System.Xml.XmlElement::name
	XmlName_t0704430D24D202146901D342E34D878246E14F33* ___name_2;
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_tB0BA25B3C7E8D4BCF487C7107A9019632A7D85C0* ___attributes_3;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastChild
	XmlLinkedNode_t640BF5D3FDAF0606665C3BAE565988A5014F1B9C* ___lastChild_4;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>
struct Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70  : public MulticastDelegate_t
{
};

// System.Action`3<System.Int32Enum,System.Object,System.Object>
struct Action_3_tA5A4D30182F8B9F2378721FD07FDDF032927E7EF  : public MulticastDelegate_t
{
};

// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>
struct Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85  : public MulticastDelegate_t
{
};

// System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String>
struct Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01  : public MulticastDelegate_t
{
};

// System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>
struct Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// Gpm.Common.ThirdParty.LitJson.JsonException
struct JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Gpm.Common.Multilanguage.MultilanguageCallback
struct MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler
struct StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
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
// Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E  : public RuntimeArray
{
	ALIGN_FIELD (8) StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* m_Items[1];

	inline StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
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
// System.Globalization.CultureInfo[]
struct CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F  : public RuntimeArray
{
	ALIGN_FIELD (8) CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* m_Items[1];

	inline CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.XmlElement[]
struct XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87  : public RuntimeArray
{
	ALIGN_FIELD (8) XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* m_Items[1];

	inline XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953  : public RuntimeArray
{
	ALIGN_FIELD (8) DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* m_Items[1];

	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32Enum,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m3DBBB43C60FAF98BDE113E892231BDA2EAB60CD1_gshared (Action_3_tA5A4D30182F8B9F2378721FD07FDDF032927E7EF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Util.XmlHelper::LoadXmlFromFile<System.Object>(System.String,System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,T,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlHelper_LoadXmlFromFile_TisRuntimeObject_m14B2E8C47D3815AAF90C14B5F8AC38A60FDD67B3_gshared (String_t* ___path0, Action_3_tE07DCCB3D3409E951B413B09C998FE1282D1433C* ___callback1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32Enum,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mB80AB2A94EE181B8A717E9D27E7F338C32EA8A17_gshared_inline (Action_3_tA5A4D30182F8B9F2378721FD07FDDF032927E7EF* __this, int32_t ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Util.XmlHelper::LoadXmlFromText<System.Object>(System.String,System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,T,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlHelper_LoadXmlFromText_TisRuntimeObject_m89EF5FF7CD182532831847BCA0EA3076A3708575_gshared (String_t* ___text0, Action_3_tE07DCCB3D3409E951B413B09C998FE1282D1433C* ___callback1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T Gpm.Common.Util.GpmJsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GpmJsonMapper_ToObject_TisRuntimeObject_m207C16E6C920D966C187AED82EE8DC144C003754_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FA38F388E3220B1367130CEFBA5B8F0DAF0A112 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper__ctor_m1FCA4218F728DC1DC3293BD71085FEEF520B4CC1 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD6F4F8BC8041480EBBF52F8CA11D1386A5EE019D (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mDEE2639CA335C6DF11093B1DEC70DEA2BCEBFA9E (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m58C791495049866C9E7439FBF2A14A402F1C81B6 (Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC1C5A212C893A12099FD9AAF0C3956889A196B0F (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m0AB90DC9AD2EF0AA0A6146013665DC60A8C52702 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m233C533BC9144DF3AAB6A0F6DDC006827DB756B9 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___number0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m14B15FFD8B821CBF1EB2641AAEF7CB00157D9B8E (int8_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mFE6E311A5AE91912673E6C7026A4A5C19C2C0F9B (int16_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCB03F1E460F2D07CB009ACAFDB2DB0D9B5D97B2B (uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mFBB976BA9AB1A83325F642219BF1D8F04030768D (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA916F68CED3032A9BB9C19E988D0A383F3CCEF65 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, uint64_t ___number0, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mFF10E9758B7414E9C187C95ECB27FB1DFD7904B2 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7899B63591257E56EC9B6BFB19396C3890F41233 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m1F3173B70669A0F9B101B4AF6A2D0DFD4D95F8D6 (int32_t ___value0, const RuntimeMethod* method) ;
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m48FEC408BB749C81B91BAB51AC744EF05C7B1B25 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m01293E1E7E09858C74DE663E5EE1819A5D75FADB (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m574A6C8E905EEADA4FC733AE24C6DFCB8CAB0017 (int32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m7E15E7E39C7E0835A13F3D3D54CB1723D7BF17E3 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mB562D40271078F5561C203FB30E15B8913667C2C (int32_t ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mD35A1BDDC7FE214E53E1B57C867B50B6BB5E61B9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m0817E542B617E7D00740EBA8687EA52092CED34C (double ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m9F3F4B62B8DA5A3EDC7FDD1A9893259C745DABE6 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF72D47BC87DE73EFF5A7F04046BFAF064FEB0100 (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_m0CD0FAC3FF3ED01FFEA1264742D5E4BDAC79EA4A (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 DateTimeOffset_Parse_mA7C7DA922F5487C66B12E87559DC89C3E053992C (String_t* ___input0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_mA55F42D1789AF728C13AFDC3C6E9D47AB0212C73 (JsonData_t1DAE956C6245006539F5238C9208868AB54EC900* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::get_AllowComments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m325B98287CACC43EBC3EFB0379D0E7C190005824_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m78A275A69B54D2C267816320446CB377F3316916_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_mD542F6261D90984562827CCD6CC7C627DF0E1CD8_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_m880094F6CE12F2534FFDADAEB8AEA7D5B2A8FA74_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> Gpm.Common.ThirdParty.LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_PopulateParseTable_mDD24F561610BBCEC668D3FE839373459D09CC598 (const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m692665453D88EA9DAE7F3C0A7E9D6CC3614D34DB (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, bool ___owned1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___item0, method);
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m61E18BEDFF1D196FCD3B53FE2AC5CC756AFEF1E8 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0 (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::TableAddRow(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,Gpm.Common.ThirdParty.LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C (RuntimeObject* ___parse_table0, int32_t ___rule1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::TableAddCol(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,Gpm.Common.ThirdParty.LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3 (RuntimeObject* ___parse_table0, int32_t ___row1, int32_t ___col2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___symbols3, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m3CB3A8252B2254BF929D207AFA9F2CD4DA3E3F79 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_mFF6D2B2F9EFC729CB42EDC35E105CFADBD254819 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method) ;
// System.String Gpm.Common.ThirdParty.LitJson.Lexer::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mB4BCDAADD419C4C30941FDC1B276CB921C3C6B43_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mC50513A4EC0FA94271AD3AF04719AC96967801B1 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, String_t* ___number0, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m0450608C24DDBAAE4F91FB406F3F4361E555D9AE (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::get_EndOfInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m1BD7789DB9E9DE3F1DF4BCBD0FBE36BF297EBD85_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m90FAFA3027A3BBB160C8C1F30D9A0BB190E16AC0 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mB14E9920EA6AEC43860CA259859011DBB4D9B5A9_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared)(__this, method);
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m538B17D4C8D37759B7A2C26310A51A70D565562E (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_mA3C2DCB7F35187CA8931CB93A24B8BE19D918D51 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonException::.ctor(Gpm.Common.ThirdParty.LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mE98C412DA61318CF96E1D06FA4458E073BF38064 (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* __this, int32_t ___token0, Exception_t* ___inner_exception1, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m08BD3BFBBBE015F2EDCF6DE969ACFB327E453621 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8 (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m68A87A85E9810281EE1CA434612BC96659E7744C (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m61C651BAE23D32DC33D213437614758F8633D558 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_mEDBD4DF62EB1CF8C26898FDD232786AA881E7ED7 (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void Gpm.Common.ThirdParty.LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m11F9BABB11C77169A440A11B9650EE9DE9BEC366 (WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>::Push(T)
inline void Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89 (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* __this, WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*, WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m311618455FE296312013A7D9B94D1C142DA2C3F7 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, bool ___add_comma0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mF2F7E43853FE96A695D827F7CA83085510147C97 (int32_t ___n0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_m79D7594E6CA3DA793A8474B6BB2160010F90A870 (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::DoValidation(Gpm.Common.ThirdParty.LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, int32_t ___cond0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m968749D791BDDE9D6ECB2D71DDE205221B27953D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7E8CB36CAB0CAC9E6E8D7C3CA8238A6A2D8E8D06 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mF003FE14E8D6095D655814A1DB1CA3D8C43DCF56 (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m5240E682E510ED56C0EE617D2BDEEF181B7B4607 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC566A684B01894703BF5DD80425842A7B1DF6C (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>::Pop()
inline WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899 (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* (*) (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_inline (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<Gpm.Common.ThirdParty.LitJson.WriterContext>::Peek()
inline WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624 (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* (*) (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m3129A0224939BFC045202DDD126E3D498DD85A5F (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m1465A8458318860526F48A963DAD332E7AFD8E62 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::PopulateFsmTables(Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mBD2315D5069A2DCD11004F081BB6468E9DB83CBF (StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E** ___fsm_handler_table0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___fsm_return_table1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m86626B7D17A7352023025C3C3CBF1F4C7D854B8F (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011 (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Char Gpm.Common.ThirdParty.LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mD22E0FBC9CF7B5A8FE9A960ADCC969D463E1A841 (int32_t ___esc_char0, const RuntimeMethod* method) ;
// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m62BD979D29C42376A0905584939C19CA649AE86B (int32_t ___digit0, const RuntimeMethod* method) ;
// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mF95624CEF6B9774246BD65E8F96E2FCEC8212372 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler::Invoke(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_inline (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mE5808C2CD34708ABDAA760ABDF055B3B18B81F83 (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* __this, int32_t ___c0, const RuntimeMethod* method) ;
// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67 (const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::Load(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_Load_m9C6084C3ADE6CD89F3FB3DC3564D309820D4BBA2 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___languagePath1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::Unload(System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_Unload_m2137E31B9968AB5AEF38D4495A060EBB86A062D1 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::SelectLangaugeByCode(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_SelectLangaugeByCode_m5F7E5BE7345A930E55493D369C73145A9A267C51 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___languageCode1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::SelectLanguageByNativeName(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_SelectLanguageByNativeName_m03A7C8C5520BB691EC1ECB3F6F179CA6ACA36E99 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___nativeName1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) ;
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageImplementation_GetString_mD31DA4791558D3077C39F2A3E49516900683B368 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___stringKey1, const RuntimeMethod* method) ;
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetSelectLanguage(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageImplementation_GetSelectLanguage_m3DB6546060CA5DB2FC76BB5FF5C2884EE38DB567 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, bool ___isNativeName1, const RuntimeMethod* method) ;
// System.String[] Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetSupportLanguages(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MultilanguageImplementation_GetSupportLanguages_m049DD1CB491D0572F1C8793E4CC1FC18BE0EC0B9 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, bool ___isNativeName1, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::IsLoadService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultilanguageImplementation_IsLoadService_m7D52473002E10E1D06BDABB819C868F7E45FFDAE (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, const RuntimeMethod* method) ;
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageUtil::GetSystemLanguage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageUtil_GetSystemLanguage_m8DE7E55A4B5FC39A50DEDEE2D98A76487944C0EA (bool ___isNativeName0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation__ctor_m8FABDF9637057E77C76D4BBDBE8F22329ABD3E77 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m42995361D0496C0FD5FE91E4C26E1AEEC08B26FB (U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273 (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void Gpm.Common.Multilanguage.MultilanguageCallback::Invoke(Gpm.Common.Multilanguage.MultilanguageResultCode,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method) ;
// System.Void System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mE58DE62C438CF8A7D5892E6A404C0174C5FE1CFA (Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m3DBBB43C60FAF98BDE113E892231BDA2EAB60CD1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::Load(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_Load_m1F73DCDB28C74DFDD9538DCBCE9E67E5E177C03B (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___filepath0, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>::Remove(TKey)
inline bool Dictionary_2_Remove_m37821FBC2C9EEF3EA90756C9909AF8FEDA6EB04C (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3 (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* __this, String_t* ___key0, MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30*, String_t*, MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::SelectLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageServiceData_SelectLanguage_mF2F0936CD642134F518C467B50864666FA36191E (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___languageCode0, const RuntimeMethod* method) ;
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetLanguageCodeByNativeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageImplementation_GetLanguageCodeByNativeName_mE78E4C185915C0A87F7BDE38667F8AFE281FA0B8 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___nativeName0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageServiceData_GetString_m3609B598E26F9D66C6298747089C74072E68977B (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___stringKey0, const RuntimeMethod* method) ;
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::GetSelectLanguage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MultilanguageServiceData_GetSelectLanguage_m54B7D339E7B25D9CF5B405C278F512563D7BB428_inline (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::GetCultureInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_GetCultureInfo_m81DD5F9FC8266E13474181FC339738F52746C0F0 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Log.GpmLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::GetSupportLanguages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultilanguageServiceData_GetSupportLanguages_m0C9FC3F142797746ACD79EC3BA4F94DFE5F05876 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Gpm.Common.Log.GpmLogger::Debug(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmLogger_Debug_m89CA3B3C9DFE6B12D0EE134721C4A3A62E40F64C (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo[] System.Globalization.CultureInfo::GetCultures(System.Globalization.CultureTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* CultureInfo_GetCultures_mBE611636F9A8147B8FADF38495713F146814E38B (int32_t ___types0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageServiceData__ctor_mB981E6EE3844213B1F9F22A655CDD4494C90514C (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___serviceName0, const RuntimeMethod* method) ;
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::Initialize(Gpm.Common.Multilanguage.Internal.MultilanguageXml)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageServiceData_Initialize_m54A51ADE58994FA8493D59BAF2BFA1BF15367A81 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___languageXml0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9FA145C01395EEF4C6E093C519C01F3DAB6C6474 (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* __this, String_t* ___key0, MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30*, String_t*, MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Common.Multilanguage.Internal.MultilanguageServiceData>::.ctor()
inline void Dictionary_2__ctor_mB25C69F92D696B6DD215671832368171A458FCFC (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader__ctor_mD5B5BD364A303CD2A36E2D07A14F72C3D8877D6E (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, const RuntimeMethod* method) ;
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::InitializeService(System.String,Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageImplementation_InitializeService_m2B6FC847D933CB460A965E1C5E312B07D94BD7E1 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, int32_t ___resultCode1, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___xmlData2, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageLoader::IsWebPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultilanguageLoader_IsWebPath_mCFF75BA07D0A52816D791DB83A10980EB78793B8 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m436B3CDFB93031C7D7710274C092EE52CEAF419F (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::TrimStart(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m210863A5E84BC22EC0487A1543D3680979DD87EE (String_t* __this, Il2CppChar ___trimChar0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::LoadLocalFile(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_LoadLocalFile_m07B31FE4E3811FDAB4F4D415176CEDB072B071B2 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___localPath0, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::LoadDownloadFile(System.String,System.Boolean,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_LoadDownloadFile_mA4585F847811BF6B1F87BB42A2A1013CAFD197FA (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___url0, bool ___isStreamingAsset1, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback2, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::LoadResourceAsset(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_LoadResourceAsset_m05D9AF82DA6294F25AFD5EB169B6F8B4610D6FFE (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___assetName0, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5F70A8CE9C70DBB03E0F1B6DF1331CD73753D88B (U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mB59AFF8DE99B26F342D0A168F0B90D60BA4D2AB7 (Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m3DBBB43C60FAF98BDE113E892231BDA2EAB60CD1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Gpm.Common.Util.XmlHelper::LoadXmlFromFile<Gpm.Common.Multilanguage.Internal.MultilanguageXml>(System.String,System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,T,System.String>)
inline void XmlHelper_LoadXmlFromFile_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_m906D987FED0AD45259D04BF433762B46E13A84DB (String_t* ___path0, Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* ___callback1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9*, const RuntimeMethod*))XmlHelper_LoadXmlFromFile_TisRuntimeObject_m14B2E8C47D3815AAF90C14B5F8AC38A60FDD67B3_gshared)(___path0, ___callback1, method);
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mF312D20807F5AD4CE3F178E77809AD740B99F713 (U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline (Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* __this, int32_t ___arg10, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85*, int32_t, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B*, String_t*, const RuntimeMethod*))Action_3_Invoke_mB80AB2A94EE181B8A717E9D27E7F338C32EA8A17_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Util.XmlHelper::LoadXmlFromText<Gpm.Common.Multilanguage.Internal.MultilanguageXml>(System.String,System.Action`3<Gpm.Common.Util.XmlHelper/ResponseCode,T,System.String>)
inline void XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C (String_t* ___text0, Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* ___callback1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9*, const RuntimeMethod*))XmlHelper_LoadXmlFromText_TisRuntimeObject_m89EF5FF7CD182532831847BCA0EA3076A3708575_gshared)(___text0, ___callback1, method);
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m2F1CD533E1B8E8CF524422CF5DC287DDA9649E27 (U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mEDF25404A5FA527BFEEE7FA582C85C127925BC09 (Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m3DBBB43C60FAF98BDE113E892231BDA2EAB60CD1_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator Gpm.Common.Multilanguage.Internal.MultilanguageLoader::DownloadFile(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultilanguageLoader_DownloadFile_mC17B21EB5A1ECEE450764F0D34D85A1AC2D7AFC6 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___url0, Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* ___callback1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Gpm.Common.Util.GameObjectContainer::GetGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectContainer_GetGameObject_mF9FEAAB7CDD93A8D3248A0DFD743112DEF4986AD (String_t* ___gameObjectName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MonoBehaviour>()
inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8__ctor_mE5AF930518457C7ADC4D211804472562A41A947E (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageLoader::GetResultCode(Gpm.Common.Util.XmlHelper/ResponseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageLoader_GetResultCode_m91277E97E83CD75CA795240F4ED0AD74E4EDD276 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, int32_t ___xmlResponseCode0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8_U3CU3Em__Finally1_m657280B99C567191ACD8411CF1EB02F1FFF60AE6 (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8_System_IDisposable_Dispose_mD73FD6E4E635EF0D62049032ACCC68B13E412345 (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.UnityWebRequestHelper::IsSuccess(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestHelper_IsSuccess_mC0A5F79C93DB3E4E5333CB818126EEB6DA9C2F8A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m0466CC62837E99552C75B069FAC01839ADAE5673_inline (Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* __this, int32_t ___arg10, String_t* ___arg21, String_t* ___arg32, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01*, int32_t, String_t*, String_t*, const RuntimeMethod*))Action_3_Invoke_mB80AB2A94EE181B8A717E9D27E7F338C32EA8A17_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, method);
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>::GetEnumerator()
inline Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF List_1_GetEnumerator_m0E9FB7275B6F8219B89E8081BBB8AB8E72073165 (List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF (*) (List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>::Dispose()
inline void Enumerator_Dispose_mBDADB03FB8B5DF72330546D069C8319D3B2B9DFA (Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>::get_Current()
inline StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E* Enumerator_get_Current_mB3035E08F7DD498B66E72E263710BA35D6EBF5A0_inline (Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF* __this, const RuntimeMethod* method)
{
	return ((  StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E* (*) (Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___key0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___key0, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void Gpm.Common.Log.GpmLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmLogger_Warn_mDFE30DB31AE948F08D28DD3ED1C7129D77066058 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData>::MoveNext()
inline bool Enumerator_MoveNext_mF8E168352806394C311DFECF95C71E60B676B92A (Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::InitializeLanguageCode(Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageServiceData_InitializeLanguageCode_mF1FFA409F1A3F86F49DAD51B67CE6CBD8E4A5EBB (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* ___defaultData0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Item(TKey)
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Dictionary_2_get_Item_m54E1746131031E236AF76571378E6C616F8F27B2 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Keys()
inline KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::IsSupportLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultilanguageServiceData_IsSupportLanguage_m5DEF9F12DEC7ADEB5941C9376B454468850E7C18 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___languageCode0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Count()
inline int32_t Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534 (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::GetEnumerator()
inline Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58 (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B (*) (KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::Dispose()
inline void Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::get_Current()
inline String_t* Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_inline (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// UnityEngine.SystemLanguage UnityEngine.Application::get_systemLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_systemLanguage_mF0C8FBE854F7B58315A61087619DD10CB53A9AFF (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.GpmCommon::get_DebugLogEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GpmCommon_get_DebugLogEnabled_mC90D9030EE080873B786C1B5916913298508354A_inline (const RuntimeMethod* method) ;
// System.String Gpm.Common.Log.GpmLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmLogger_MakeLog_mBC57175168836B450171EB3DEBD6ABFE9AF71BA1 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Gpm.Common.Indicator.Internal.IndicatorImplementation Gpm.Common.Indicator.Internal.IndicatorImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* IndicatorImplementation_get_Instance_m316351A61B8DF03DA8CBA4C92795927E06E8030F_inline (const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.IndicatorImplementation::Send(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndicatorImplementation_Send_m96D05D955242921811ED6BDD175EC53A45C8E7CD (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem>::.ctor()
inline void Queue_1__ctor_mB2EE77B91ECAE4455F3D5E26FCBF0CB9DD2A560F (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void Gpm.Common.Indicator.Internal.QueueItem::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueItem__ctor_mB8428D5BC78CEB02D27F6F65C93132EAC5E95C4B (QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* __this, String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem>::Enqueue(T)
inline void Queue_1_Enqueue_m29956665B4B7F8E7CDDD2CD11453087E220A941C (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* __this, QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B*, QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.UnityWebRequestHelper::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestHelper__ctor_m7C150EE29F67AB282A52C777479E82B6B21CBB28 (UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF6075D01AF2256DC2E7E138D05D0EF86AB3E0451 (Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteQueueU3Ed__10__ctor_m34BEB0B1DE1EE4AEF7EA9A152E765D032310803E (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem>::get_Count()
inline int32_t Queue_1_get_Count_mD9EA2A512F795D6707E0CAAFD5CC3046AAEDCACF_inline (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::IsWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_IsWaiting_m40878113CBFF87E7BDBFA5BF3545F4BD13EF7534 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Gpm.Common.Indicator.Internal.QueueItem>::Dequeue()
inline QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* Queue_1_Dequeue_mA9D9D62D1807BF3A4DE62C18139ABDCCE79EADAD (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* __this, const RuntimeMethod* method)
{
	return ((  QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* (*) (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::CanExecutable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_CanExecutable_m9F63EFE0994E2A3EEC3E6E12C9BF751292C1C55E (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, bool ___ignoreActivation0, const RuntimeMethod* method) ;
// System.Byte[] Gpm.Common.Indicator.Internal.IndicatorField::CreateSendData(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IndicatorField_CreateSendData_m5F1DC374251EC0D1C7C534CC74748BF05E4EDFD9 (String_t* ___appKey0, String_t* ___logVersion1, String_t* ___serviceName2, String_t* ___serviceVersion3, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData4, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Put_m83C23CEC1BD3493EAA6DC35D34B93369C0D09C03 (String_t* ___uri0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyData1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator__ctor_m26214A08675F9D2F685CD4584C181B9B2E96EFC0 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_Initialize_m295DDDBF9C84B6A75F9FC1DFB0DFA0CD8B2F2038 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m696D9A381ED534897BDF73E633C37DC45C0898CF (U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76 (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator Gpm.Common.UnityWebRequestHelper::SendWebRequest(System.Action`1<UnityEngine.Networking.UnityWebRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestHelper_SendWebRequest_mB5E436FC9F87B85FD2E361783F3F29BBD41149F1 (UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* __this, Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___callback0, const RuntimeMethod* method) ;
// Gpm.Common.Util.EditorCoroutine Gpm.Common.Util.EditorCoroutine::Start(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3* EditorCoroutine_Start_m9ED0B319582EEC545A46E41D0CC8D148DBC4C9A6 (RuntimeObject* ___enumerator0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Gpm.Common.Indicator.Internal.BaseIndicator::ExecuteQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseIndicator_ExecuteQueue_m5FCCDCE8CA9BFD8308D2ED46BB4DBF403977A30C (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::CheckInvalidResult(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_CheckInvalidResult_m57EA8CFCB53DBED1ABEB306C6605B01D0FC03B73 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___result0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>::Invoke(T)
inline void Action_1_Invoke_m239104A1101EB4850D85EA0B859D2799B9C735A1_inline (Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* __this, LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A*, LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// T Gpm.Common.Util.GpmJsonMapper::ToObject<Gpm.Common.Indicator.Internal.LaunchingInfo>(System.String)
inline LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* (*) (String_t*, const RuntimeMethod*))GpmJsonMapper_ToObject_TisRuntimeObject_m207C16E6C920D966C187AED82EE8DC144C003754_gshared)(___json0, method);
}
// Gpm.Common.Indicator.Internal.BaseIndicator Gpm.Common.Indicator.Internal.IndicatorImplementation::GetIndicatorInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* IndicatorImplementation_GetIndicatorInstance_mE85E7E8A7B0FAC103F7982F4AD1C8F5506360520 (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, const RuntimeMethod* method) ;
// Gpm.Common.Indicator.Internal.BaseIndicator Gpm.Common.Indicator.Internal.IndicatorImplementation::get_Indicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* IndicatorImplementation_get_Indicator_mE3E29EF5836789E4D6850CDFB76E591D85C68B41 (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::Send(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_Send_m9A9717D21ACF999BE8FDE34251560BDDD7E951BE (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator__ctor_m7A99A3EF42252687FAD33963EAD53BA8130A38A8 (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorIndicator__ctor_m21A983C03DA609DD45E1C51A168933E97B4FD56F (EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.IndicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndicatorImplementation__ctor_mC40989ABD4CC1FBBE181E3D9C6221AD56B21BA43 (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mED386876E4B142A354FA73A37081EB92CA186CEB (U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Byte[] Gpm.Common.Indicator.Internal.IndicatorField::Encoding(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IndicatorField_Encoding_m823D6C35D9137FF5EBAB20A2DEB3DF5AE7D7B45B (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.String Gpm.Common.Util.GpmJsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmJsonMapper_ToJson_m3582B60E60FCC4B0467CE1A62755A56715FF8937 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Header::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m0E3A393400985401FE1DB2B9A0F5E4BE718F69E7 (Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Launching::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Launching__ctor_m38B32B145116AA1F29B611B31C5409191F19F4AB (Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indicator__ctor_mE57E6B81DE0777C758DDEC157479125B7A9DB050 (Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone__ctor_m6F73598B68714F0EA141323E330843CE4206C80F (Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* __this, const RuntimeMethod* method) ;
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.Internal.CompressImplementation::Extract(System.String,System.String,Gpm.Common.Compress.CompressFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressImplementation_Extract_m6C52D58E716F26EC1893F4DBCBC92703CC85CD62 (String_t* ___filePath0, String_t* ___outputPath1, int32_t ___format2, const RuntimeMethod* method) ;
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.Internal.CompressImplementation/UnityPackage::Unpack(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityPackage_Unpack_m92A5ED72907985ACF4DFE3756977B53917167FE8 (String_t* ___packagePath0, String_t* ___tempPath1, String_t* ___resultPath2, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Delete_m6CB0FB437D90EE5C377796BE03DA6A9FE509A04E (String_t* ___path0, bool ___recursive1, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50 (String_t* ___path0, const RuntimeMethod* method) ;
// Gpm.Common.ThirdParty.SharpCompress.Readers.IReader Gpm.Common.ThirdParty.SharpCompress.Readers.ReaderFactory::Open(System.IO.Stream,Gpm.Common.ThirdParty.SharpCompress.Readers.ReaderOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderFactory_Open_m368A7679B96D00D75FCD175477CAAE9C22C883B4 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, ReaderOptions_tDC88644B122F479513775DA7C7A22F05437D78F2* ___options1, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractionOptions__ctor_mAB224F0BC930E067212296600FD2FE40F2680762 (ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::set_ExtractFullPath(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtractionOptions_set_ExtractFullPath_m0306B1E380BE44362BDA3F8DFE2D7B9AEF911EA4_inline (ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions::set_Overwrite(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtractionOptions_set_Overwrite_m1F914B5A31330EDDA914D6A76A7B55779286496B_inline (ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Common.ThirdParty.SharpCompress.Readers.IReaderExtensions::WriteEntryToDirectory(Gpm.Common.ThirdParty.SharpCompress.Readers.IReader,System.String,Gpm.Common.ThirdParty.SharpCompress.Common.ExtractionOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IReaderExtensions_WriteEntryToDirectory_mA60EE9DC00BAA57BB98FBA1D343A11DBACBD85DD (RuntimeObject* ___reader0, String_t* ___destinationDirectory1, ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* ___options2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Common.Compress.CompressFormat,System.String>::.ctor()
inline void Dictionary_2__ctor_mEBD4E8744EE43F506F4A331C5FC6209DD99ECF9D (Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Common.Compress.CompressFormat,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E (Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B*, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.String Gpm.Common.Util.GpmPathUtil::Combine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmPathUtil_Combine_mA5A272366437911876E332BF43AFE5FEE88DE2E1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___path0, const RuntimeMethod* method) ;
// System.String[] System.IO.File::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* File_ReadAllLines_m562C333C151F3023033AF86CFD57AD0125C7D5FC (String_t* ___path0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_First_TisString_t_mCDF27EFB046C1D9D445531CEFD458BE572781D1C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Void Gpm.Common.Util.GpmFileUtil::MoveFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmFileUtil_MoveFile_mF1E6E1281CF480698ACAE700950088B9D72DDCA1 (String_t* ___source0, String_t* ___dest1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFEF7CE30541F18AEDDA399D672D1E02B7F274145 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* L_0 = (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2*)il2cpp_codegen_object_new(U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9FA38F388E3220B1367130CEFBA5B8F0DAF0A112(L_0, NULL);
		((U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9FA38F388E3220B1367130CEFBA5B8F0DAF0A112 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Gpm.Common.ThirdParty.LitJson.IJsonWrapper Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<ReadSkip>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CReadSkipU3Eb__23_0_mE9B6C3084A8F8A94D8D7030A1CBA5754F895F5A6 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonMockWrapper (); }, reader);
		JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* L_0 = (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17*)il2cpp_codegen_object_new(JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonMockWrapper__ctor_m1FCA4218F728DC1DC3293BD71085FEEF520B4CC1(L_0, NULL);
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_0(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m6064EFB0396C42F5EC01D03D1611184F3D158279 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((byte) obj));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mD6F4F8BC8041480EBBF52F8CA11D1386A5EE019D(((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mDEE2639CA335C6DF11093B1DEC70DEA2BCEBFA9E(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_1(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m8A58A618045892543B41D429D3FEF403E666B9CB (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToString ((char) obj));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m58C791495049866C9E7439FBF2A14A402F1C81B6(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_1, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC1C5A212C893A12099FD9AAF0C3956889A196B0F(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_2(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_m1184833B33453E92C274F7A1CF1778937D32BE54 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToString ((DateTime) obj,
		//                                 datetime_format));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_m0AB90DC9AD2EF0AA0A6146013665DC60A8C52702(((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))), L_2, NULL);
		NullCheck(L_0);
		JsonWriter_Write_mC1C5A212C893A12099FD9AAF0C3956889A196B0F(L_0, L_3, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_3(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_mEE8FBAFD3C37FDB0C9095CFD26F5CAC8169FFF54 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write ((decimal) obj);
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m233C533BC9144DF3AAB6A0F6DDC006827DB756B9(L_0, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_4(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mF5C70FDC612A81A11A905AA8BB8B5CFE5CE437D4 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((sbyte) obj));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m14B15FFD8B821CBF1EB2641AAEF7CB00157D9B8E(((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_1, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mDEE2639CA335C6DF11093B1DEC70DEA2BCEBFA9E(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_5(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_mF21FA3630F4435D0809BE67AF7CE05F59ADD6768 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((short) obj));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mFE6E311A5AE91912673E6C7026A4A5C19C2C0F9B(((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_1, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mDEE2639CA335C6DF11093B1DEC70DEA2BCEBFA9E(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_6(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mB73FC81C3B2BF6118468E37AC06A9B1FE6AE1290 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToInt32 ((ushort) obj));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCB03F1E460F2D07CB009ACAFDB2DB0D9B5D97B2B(((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_1, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mDEE2639CA335C6DF11093B1DEC70DEA2BCEBFA9E(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_7(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m4E427578FA97B874A55FE2390E066D6866182D87 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write (Convert.ToUInt64 ((uint) obj));
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_mFBB976BA9AB1A83325F642219BF1D8F04030768D(((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_0);
		JsonWriter_Write_mA916F68CED3032A9BB9C19E988D0A383F3CCEF65(L_0, L_2, NULL);
		// };
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_8(System.Object,Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m4F24988E2C00984A666C6FFBF594D118346FDD5A (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___obj0, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// writer.Write ((ulong) obj);
		JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* L_0 = ___writer1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mA916F68CED3032A9BB9C19E988D0A383F3CCEF65(L_0, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_1, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		// };
		return;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_m84AD21C1A55658D38516A396B18C7B0599C42CA9 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToByte ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mFF10E9758B7414E9C187C95ECB27FB1DFD7904B2(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_mBDBBFD730F2949AFA6A7BE53B127C11B8E1177D7 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt64 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m7899B63591257E56EC9B6BFB19396C3890F41233(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_mE7C590103C83EAFAB82A260D2AD3485D0B562130 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToInt64((int)input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = Convert_ToInt64_m1F3173B70669A0F9B101B4AF6A2D0DFD4D95F8D6(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m0618E7C2FC6166B436056390D285A34384D47086 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToSByte ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m48FEC408BB749C81B91BAB51AC744EF05C7B1B25(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_mD584098B98587779BB4E7590586486664E9AD93B (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToInt16 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m01293E1E7E09858C74DE663E5EE1819A5D75FADB(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m2EFD2AC50B2C8D8E42FFBD66DFBE21C098BA45F1 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt16 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_m574A6C8E905EEADA4FC733AE24C6DFCB8CAB0017(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_mF8DDF8569709719E5D2548F1874BADB35D1591D7 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt32 ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m7E15E7E39C7E0835A13F3D3D54CB1723D7BF17E3(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_7(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_mA9D7E24C1C37D6A30C93F12EA2D31DC9D69F445E (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToSingle ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_mB562D40271078F5561C203FB30E15B8913667C2C(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_8(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m25AC2515547C154BC6AC3170FDDF5F22DAE42A7D (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDouble ((int) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_mD35A1BDDC7FE214E53E1B57C867B50B6BB5E61B9(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mD62F8C0A18490EAB21AECB79CE2538C2FA4F5ED5 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDecimal ((double) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Convert_ToDecimal_m0817E542B617E7D00740EBA8687EA52092CED34C(((*(double*)((double*)(double*)UnBox(L_0, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m57E24A2DEA7F7187F7498C2AA27027D26F20515D (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToUInt32 ((long) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_m9F3F4B62B8DA5A3EDC7FDD1A9893259C745DABE6(((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_0, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m95ADE09170D2F4D51ADE4AA2F761131415E44CFA (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar ((string) input);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mF72D47BC87DE73EFF5A7F04046BFAF064FEB0100(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject* L_3 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m58346BB093D96F3D03D132B6F450BE62382E8ACB (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToDateTime ((string) input, datetime_format);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = Convert_ToDateTime_m0CD0FAC3FF3ED01FFEA1264742D5E4BDAC79EA4A(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = L_2;
		RuntimeObject* L_4 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m136A6DBB92934B91F53B3914F835442F73640F9E (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DateTimeOffset.Parse((string)input, datetime_format);
		RuntimeObject* L_0 = ___input0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var))->___datetime_format_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_2;
		L_2 = DateTimeOffset_Parse_mA7C7DA922F5487C66B12E87559DC89C3E053992C(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_3 = L_2;
		RuntimeObject* L_4 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// Gpm.Common.ThirdParty.LitJson.IJsonWrapper Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<ToObject>b__30_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__30_0_m1EB6203EE6A2B98089A5365D43EB1AA4CF63235B (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonData (); }, reader);
		JsonData_t1DAE956C6245006539F5238C9208868AB54EC900* L_0 = (JsonData_t1DAE956C6245006539F5238C9208868AB54EC900*)il2cpp_codegen_object_new(JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_mA55F42D1789AF728C13AFDC3C6E9D47AB0212C73(L_0, NULL);
		return L_0;
	}
}
// Gpm.Common.ThirdParty.LitJson.IJsonWrapper Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<ToObject>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__31_0_mC4444BE24A792AE90549A52372ED3A85AFA19BA1 (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonData (); }, json_reader);
		JsonData_t1DAE956C6245006539F5238C9208868AB54EC900* L_0 = (JsonData_t1DAE956C6245006539F5238C9208868AB54EC900*)il2cpp_codegen_object_new(JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_mA55F42D1789AF728C13AFDC3C6E9D47AB0212C73(L_0, NULL);
		return L_0;
	}
}
// Gpm.Common.ThirdParty.LitJson.IJsonWrapper Gpm.Common.ThirdParty.LitJson.JsonMapper/<>c::<ToObject>b__32_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__32_0_mD8A5317FDBE186360BA60427795F46C05BEA709A (U3CU3Ec_t1159D7A603875CC69D752545D354D09F071998B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// delegate { return new JsonData (); }, json);
		JsonData_t1DAE956C6245006539F5238C9208868AB54EC900* L_0 = (JsonData_t1DAE956C6245006539F5238C9208868AB54EC900*)il2cpp_codegen_object_new(JsonData_t1DAE956C6245006539F5238C9208868AB54EC900_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonData__ctor_mA55F42D1789AF728C13AFDC3C6E9D47AB0212C73(L_0, NULL);
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
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsArray_mD0F40E079DCC7E7642513A9CE4FDF6A73E981997 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsArray   { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsBoolean_m519CD46AF5C4FE78267B2D5A3EA55EB574066C4A (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBoolean { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsDouble_mB3D44C4E825A91712FA02D1FCF22167B47831E8D (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDouble  { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsInt_mFED2624346303B0F3FEB52434896AEA9FA6BE3C2 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInt     { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsLong_mA3E25EECF383A967428C9582DBC1C1304152A3FA (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLong    { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsObject_m4164228AD8D275F99B31763E81F234BC10F66421 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsObject  { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_get_IsString_m83AC008423A29806F4B970A20CE478C97B75EF35 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsString  { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_GetBoolean_m80EF2485AFB966A7DA593575CC9FBDEB31F651C9 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public bool     GetBoolean ()  { return false; }
		return (bool)0;
	}
}
// System.Double Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonMockWrapper_GetDouble_m34FCBFB57BC444748D99A4BDA90E035B8023B249 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public double   GetDouble ()   { return 0.0; }
		return (0.0);
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_GetInt_m617E1E0AA9DFF4BAB74068A7B240A179F3716782 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public int      GetInt ()      { return 0; }
		return 0;
	}
}
// Gpm.Common.ThirdParty.LitJson.JsonType Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::GetJsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_GetJsonType_mAF57564D2A85E02CB5D09D4D3778772A1DD16EED (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public JsonType GetJsonType () { return JsonType.None; }
		return (int32_t)(0);
	}
}
// System.Int64 Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonMockWrapper_GetLong_mE85FB67A7B49A69AAFC62DBB3C91D7F0A57FE70D (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// public long     GetLong ()     { return 0L; }
		return ((int64_t)0);
	}
}
// System.String Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMockWrapper_GetString_m98BFD003A4711B7F7A76D85B1B2A451FFF588468 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string   GetString ()   { return ""; }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetBoolean_m9038D799B25242176F1D67F7C86082A4C65F7F41 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetBoolean  (bool val)      {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetDouble_m94ECB96B7A225F1D53A0B9A343BA54E5AB3BE0CC (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, double ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetDouble   (double val)    {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetInt_mD52EA6B8C29376530105E2EF1F5C170CDF38E96C (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetInt      (int val)       {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::SetJsonType(Gpm.Common.ThirdParty.LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetJsonType_m494AD7AD0C71DB4B75B059515806993886DEE3D9 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// public void SetJsonType (JsonType type) {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetLong_m217A981578C4B4F26F334DE0AA1B65CA9441E18D (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int64_t ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetLong     (long val)      {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetString_mE0B7ED9A73481E349C84CB057A6EE5B1E10742F6 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, String_t* ___val0, const RuntimeMethod* method) 
{
	{
		// public void SetString   (string val)    {}
		return;
	}
}
// System.String Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMockWrapper_ToJson_m0AC8170FA3619BCEB8628F1CDEF5EBBFD84B18E4 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ToJson ()                  { return ""; }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::ToJson(Gpm.Common.ThirdParty.LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_ToJson_m8DF852339988EE3C1933C268559ACC31947D72C2 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* ___writer0, const RuntimeMethod* method) 
{
	{
		// public void   ToJson (JsonWriter writer) {}
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_get_IsFixedSize_m3E61BFBD29BE964B8B8A19449FEF3ACB26D695EC (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// bool IList.IsFixedSize { get { return true; } }
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_get_IsReadOnly_m2173AD295726C1A9EC6C62F4F9AA730D5EA6990A (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// bool IList.IsReadOnly  { get { return true; } }
		return (bool)1;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IList_get_Item_mD0516573F7CB80493A90113BF2B50E657E527779 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get { return null; }
		return NULL;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_set_Item_mA6EC1C733515861089D9CE77BAE89F61A07EF868 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_IList_Add_m88088531B25F95921B7340940E2BA604E022F3BF (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// int  IList.Add (object value)       { return 0; }
		return 0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Clear_mC7F9B445B0EF5481247FA8F599424FA0F1DD1268 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// void IList.Clear ()                 {}
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_Contains_m504DC72BD2940892414BE14A359ADB0BD6401D27 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// bool IList.Contains (object value)  { return false; }
		return (bool)0;
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_IList_IndexOf_m2E37387BD74399A08630995DF6DDE5907CBB9CF2 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// int  IList.IndexOf (object value)   { return -1; }
		return (-1);
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Insert_mD08ED249091AE820019A47388589D9915531DD89 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___i0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		// void IList.Insert (int i, object v) {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Remove_mAA9093BE1ABC625FFDBA805BB278B393261A29C2 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// void IList.Remove (object value)    {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_RemoveAt_m8AADF3A7B19BDBA2A2E3D819DF6DF287B600D018 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// void IList.RemoveAt (int index)     {}
		return;
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_ICollection_get_Count_m9BC06E3FA476EFE8260BB3083402BF2E75738346 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// int    ICollection.Count          { get { return 0; } }
		return 0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_ICollection_get_IsSynchronized_mBDA0535B86ED9A03EC83A57F4CD10AE4ED4A5EBA (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// bool   ICollection.IsSynchronized { get { return false; } }
		return (bool)0;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_ICollection_get_SyncRoot_m12EE44BEE0D582310C677AF6CD4B14A061050AEF (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// object ICollection.SyncRoot       { get { return null; } }
		return NULL;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_ICollection_CopyTo_m178E35952C0C5C8DB2511B32D4B6516E5C88EE0F (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// void ICollection.CopyTo (Array array, int index) {}
		return;
	}
}
// System.Collections.IEnumerator Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IEnumerable_GetEnumerator_m73FA26A520C6B294B55DAECD3B933B1149AD19DB (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// IEnumerator IEnumerable.GetEnumerator () { return null; }
		return (RuntimeObject*)NULL;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_get_IsFixedSize_m75DDD82D9096E02C0C930732BF4DBA27D4E63E13 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// bool IDictionary.IsFixedSize { get { return true; } }
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_get_IsReadOnly_m95CDCC42F377ECFE4FF27D94701C0A96CAA87813 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// bool IDictionary.IsReadOnly  { get { return true; } }
		return (bool)1;
	}
}
// System.Collections.ICollection Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_get_Keys_m1A1C26AF6DBBE4966E47BCD462668C3460BFACA0 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// ICollection IDictionary.Keys   { get { return null; } }
		return (RuntimeObject*)NULL;
	}
}
// System.Collections.ICollection Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_get_Values_m108A073C43F6DAA27524F706B219E5A1CCBA1B41 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// ICollection IDictionary.Values { get { return null; } }
		return (RuntimeObject*)NULL;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_get_Item_m02F543E2EFCD79EF3FA942E9F6AC0700697D0C50 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// get { return null; }
		return NULL;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_set_Item_mAA7D746D70D93E8063C4766FF0AEA25771C04287 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Add_m664D5230970D83C59615641D1D676BF81CD44999 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___k0, RuntimeObject* ___v1, const RuntimeMethod* method) 
{
	{
		// void IDictionary.Add (object k, object v) {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Clear_m6511E35B8FAD91A341D903E54136B359E19B5D31 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// void IDictionary.Clear ()                 {}
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_Contains_m555A7F6071D294D2CE230A95255A506091EB7CE0 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// bool IDictionary.Contains (object key)    { return false; }
		return (bool)0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Remove_m8B99AE445BC1EEB56B31E8557264BBCE1F59C0BA (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		// void IDictionary.Remove (object key)      {}
		return;
	}
}
// System.Collections.IDictionaryEnumerator Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_GetEnumerator_m42E535D271AA4FCB243FDC122FB64407ADB6D594 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// IDictionaryEnumerator IDictionary.GetEnumerator () { return null; }
		return (RuntimeObject*)NULL;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_get_Item_m51E23DFEE22BBB13B61254F960AF12D71B153E05 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	{
		// get { return null; }
		return NULL;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_set_Item_m844EBB1C5D5C76FA7EADCFED30552AAF1E2EA0B9 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___idx0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// System.Collections.IDictionaryEnumerator Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_mF1EF0FFA6BE8BDE31D4A8ABA68BA030816132EB4 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_Insert_m6A07D8FF64AAEF29EAFFDDF30516309D30E8A265 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___i0, RuntimeObject* ___k1, RuntimeObject* ___v2, const RuntimeMethod* method) 
{
	{
		// void IOrderedDictionary.Insert   (int i, object k, object v) {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_RemoveAt_mAD687BE18D7C5E96E7F15F81092175FF340AC856 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// void IOrderedDictionary.RemoveAt (int i) {}
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonMockWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper__ctor_m1FCA4218F728DC1DC3293BD71085FEEF520B4CC1 (JsonMockWrapper_t8A0D952ABB0367BE1CF752A6254FAE202E222E17* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowComments_m6876FA6B2682DE2F02E9A1C8158EEA353471ABC7 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return lexer.AllowComments; }
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowComments_m325B98287CACC43EBC3EFB0379D0E7C190005824_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowComments_m90826D643B8AA28C96ECF0B4B1A0F15E0B14864F (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { lexer.AllowComments = value; }
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_0 = __this->___lexer_6;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowComments_m78A275A69B54D2C267816320446CB377F3316916_inline(L_0, L_1, NULL);
		// set { lexer.AllowComments = value; }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_AllowSingleQuotedStrings_m42756A944822A58E62E97FD1BDA7675A85D0E4C8 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return lexer.AllowSingleQuotedStrings; }
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_0 = __this->___lexer_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lexer_get_AllowSingleQuotedStrings_mD542F6261D90984562827CCD6CC7C627DF0E1CD8_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_AllowSingleQuotedStrings_m661E68A23857D294059C9C50735971D9C66E84CE (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { lexer.AllowSingleQuotedStrings = value; }
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_0 = __this->___lexer_6;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowSingleQuotedStrings_m880094F6CE12F2534FFDADAEB8AEA7D5B2A8FA74_inline(L_0, L_1, NULL);
		// set { lexer.AllowSingleQuotedStrings = value; }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::get_SkipNonMembers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_SkipNonMembers_m1A0B6205E078F8FE5171EEE1A102E473CFD86C89 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return skip_non_members; }
		bool L_0 = __this->___skip_non_members_12;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::set_SkipNonMembers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_SkipNonMembers_mFE1C7A6E49D130DFCA1DE9ABCACF9926F60E918B (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { skip_non_members = value; }
		bool L_0 = ___value0;
		__this->___skip_non_members_12 = L_0;
		// set { skip_non_members = value; }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfInput_m26A5E43421CD2340462900C2D028AC324497AE85 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_input; }
		bool L_0 = __this->___end_of_input_5;
		return L_0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::get_EndOfJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_EndOfJson_m888D65F9E54DBB59D414698EBDADEB4E6643892F (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_json; }
		bool L_0 = __this->___end_of_json_4;
		return L_0;
	}
}
// Gpm.Common.ThirdParty.LitJson.JsonToken Gpm.Common.ThirdParty.LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_m00442556425BAC8B06E5A7D0E35FC57C369B088C (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return token; }
		int32_t L_0 = __this->___token_14;
		return L_0;
	}
}
// System.Object Gpm.Common.ThirdParty.LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_get_Value_mE87B511E24F1BECDFEA20A35771972F39B03C51B (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// get { return token_value; }
		RuntimeObject* L_0 = __this->___token_value_13;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mFC922FC6E3EDD0FA651120CBB34F12C2781F254D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parse_table = PopulateParseTable ();
		RuntimeObject* L_0;
		L_0 = JsonReader_PopulateParseTable_mDD24F561610BBCEC668D3FE839373459D09CC598(NULL);
		((JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var))->___parse_table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var))->___parse_table_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mBE75159E0EE349D839BDD4A3796B389C00994A05 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, String_t* ___json_text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this (new StringReader (json_text), true)
		String_t* L_0 = ___json_text0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		JsonReader__ctor_m692665453D88EA9DAE7F3C0A7E9D6CC3614D34DB(__this, L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m669556C2AAC6A9749EF0121AEC23BA9809EABB2F (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	{
		// this (reader, false)
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		JsonReader__ctor_m692665453D88EA9DAE7F3C0A7E9D6CC3614D34DB(__this, L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m692665453D88EA9DAE7F3C0A7E9D6CC3614D34DB (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, bool ___owned1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JsonReader (TextReader reader, bool owned)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (reader == null)
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException ("reader");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader__ctor_m692665453D88EA9DAE7F3C0A7E9D6CC3614D34DB_RuntimeMethod_var)));
	}

IL_0014:
	{
		// parser_in_string = false;
		__this->___parser_in_string_7 = (bool)0;
		// parser_return    = false;
		__this->___parser_return_8 = (bool)0;
		// read_started = false;
		__this->___read_started_9 = (bool)0;
		// automaton_stack = new Stack<int> ();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_2, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->___automaton_stack_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___automaton_stack_1), (void*)L_2);
		// automaton_stack.Push ((int) ParserToken.End);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// automaton_stack.Push ((int) ParserToken.Text);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// lexer = new Lexer (reader);
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_5 = ___reader0;
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_6 = (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351*)il2cpp_codegen_object_new(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Lexer__ctor_m61E18BEDFF1D196FCD3B53FE2AC5CC756AFEF1E8(L_6, L_5, NULL);
		__this->___lexer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lexer_6), (void*)L_6);
		// end_of_input = false;
		__this->___end_of_input_5 = (bool)0;
		// end_of_json  = false;
		__this->___end_of_json_4 = (bool)0;
		// skip_non_members = true;
		__this->___skip_non_members_12 = (bool)1;
		// this.reader = reader;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_7 = ___reader0;
		__this->___reader_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)L_7);
		// reader_is_owned = owned;
		bool L_8 = ___owned1;
		__this->___reader_is_owned_11 = L_8;
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> Gpm.Common.ThirdParty.LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_PopulateParseTable_mDD24F561610BBCEC668D3FE839373459D09CC598 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_25_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_27_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_63_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_65_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_95_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IDictionary<int, IDictionary<int, int[]>> parse_table = new Dictionary<int, IDictionary<int, int[]>> ();
		Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249* L_0 = (Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249*)il2cpp_codegen_object_new(Dictionary_2_t403ABC2FA2D9740F9ADD28DB8815C00EE2DB4249_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0(L_0, Dictionary_2__ctor_mF37C098D396E6388CF354D6F37970685A85B6FC0_RuntimeMethod_var);
		V_0 = L_0;
		// TableAddRow (parse_table, ParserToken.Array);
		RuntimeObject* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var);
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_1, ((int32_t)65548), NULL);
		// TableAddCol (parse_table, ParserToken.Array, '[',
		//                 '[',
		//                 (int) ParserToken.ArrayPrime);
		RuntimeObject* L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_2, ((int32_t)65548), ((int32_t)91), L_5, NULL);
		// TableAddRow (parse_table, ParserToken.ArrayPrime);
		RuntimeObject* L_6 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_6, ((int32_t)65549), NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, '"',
		//                 (int) ParserToken.Value,
		// 
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_9, L_10, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_7, ((int32_t)65549), ((int32_t)34), L_9, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, '[',
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_11, ((int32_t)65549), ((int32_t)91), L_13, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, ']',
		//                 ']');
		RuntimeObject* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_15, ((int32_t)65549), ((int32_t)93), L_17, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, '{',
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_18 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_20, L_21, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_18, ((int32_t)65549), ((int32_t)123), L_20, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, (int) ParserToken.Number,
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_24, L_25, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_22, ((int32_t)65549), ((int32_t)65537), L_24, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, (int) ParserToken.True,
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_26 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_28, L_29, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_26, ((int32_t)65549), ((int32_t)65538), L_28, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, (int) ParserToken.False,
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = L_31;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_32, L_33, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_30, ((int32_t)65549), ((int32_t)65539), L_32, NULL);
		// TableAddCol (parse_table, ParserToken.ArrayPrime, (int) ParserToken.Null,
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest,
		//                 ']');
		RuntimeObject* L_34 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_44_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_36, L_37, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_34, ((int32_t)65549), ((int32_t)65540), L_36, NULL);
		// TableAddRow (parse_table, ParserToken.Object);
		RuntimeObject* L_38 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_38, ((int32_t)65544), NULL);
		// TableAddCol (parse_table, ParserToken.Object, '{',
		//                 '{',
		//                 (int) ParserToken.ObjectPrime);
		RuntimeObject* L_39 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_39, ((int32_t)65544), ((int32_t)123), L_42, NULL);
		// TableAddRow (parse_table, ParserToken.ObjectPrime);
		RuntimeObject* L_43 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_43, ((int32_t)65545), NULL);
		// TableAddCol (parse_table, ParserToken.ObjectPrime, '"',
		//                 (int) ParserToken.Pair,
		//                 (int) ParserToken.PairRest,
		//                 '}');
		RuntimeObject* L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_47 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_25_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_46, L_47, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_44, ((int32_t)65545), ((int32_t)34), L_46, NULL);
		// TableAddCol (parse_table, ParserToken.ObjectPrime, '}',
		//                 '}');
		RuntimeObject* L_48 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_48, ((int32_t)65545), ((int32_t)125), L_50, NULL);
		// TableAddRow (parse_table, ParserToken.Pair);
		RuntimeObject* L_51 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_51, ((int32_t)65546), NULL);
		// TableAddCol (parse_table, ParserToken.Pair, '"',
		//                 (int) ParserToken.String,
		//                 ':',
		//                 (int) ParserToken.Value);
		RuntimeObject* L_52 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_55 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_65_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_54, L_55, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_52, ((int32_t)65546), ((int32_t)34), L_54, NULL);
		// TableAddRow (parse_table, ParserToken.PairRest);
		RuntimeObject* L_56 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_56, ((int32_t)65547), NULL);
		// TableAddCol (parse_table, ParserToken.PairRest, ',',
		//                 ',',
		//                 (int) ParserToken.Pair,
		//                 (int) ParserToken.PairRest);
		RuntimeObject* L_57 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_95_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_59, L_60, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_57, ((int32_t)65547), ((int32_t)44), L_59, NULL);
		// TableAddCol (parse_table, ParserToken.PairRest, '}',
		//                 (int) ParserToken.Epsilon);
		RuntimeObject* L_61 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_61, ((int32_t)65547), ((int32_t)125), L_63, NULL);
		// TableAddRow (parse_table, ParserToken.String);
		RuntimeObject* L_64 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_64, ((int32_t)65552), NULL);
		// TableAddCol (parse_table, ParserToken.String, '"',
		//                 '"',
		//                 (int) ParserToken.CharSeq,
		//                 '"');
		RuntimeObject* L_65 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = L_66;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_68 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_63_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_67, L_68, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_65, ((int32_t)65552), ((int32_t)34), L_67, NULL);
		// TableAddRow (parse_table, ParserToken.Text);
		RuntimeObject* L_69 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_69, ((int32_t)65543), NULL);
		// TableAddCol (parse_table, ParserToken.Text, '[',
		//                 (int) ParserToken.Array);
		RuntimeObject* L_70 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_70, ((int32_t)65543), ((int32_t)91), L_72, NULL);
		// TableAddCol (parse_table, ParserToken.Text, '{',
		//                 (int) ParserToken.Object);
		RuntimeObject* L_73 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_73, ((int32_t)65543), ((int32_t)123), L_75, NULL);
		// TableAddRow (parse_table, ParserToken.Value);
		RuntimeObject* L_76 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_76, ((int32_t)65550), NULL);
		// TableAddCol (parse_table, ParserToken.Value, '"',
		//                 (int) ParserToken.String);
		RuntimeObject* L_77 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = L_78;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_77, ((int32_t)65550), ((int32_t)34), L_79, NULL);
		// TableAddCol (parse_table, ParserToken.Value, '[',
		//                 (int) ParserToken.Array);
		RuntimeObject* L_80 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = L_81;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_80, ((int32_t)65550), ((int32_t)91), L_82, NULL);
		// TableAddCol (parse_table, ParserToken.Value, '{',
		//                 (int) ParserToken.Object);
		RuntimeObject* L_83 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = L_84;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_83, ((int32_t)65550), ((int32_t)123), L_85, NULL);
		// TableAddCol (parse_table, ParserToken.Value, (int) ParserToken.Number,
		//                 (int) ParserToken.Number);
		RuntimeObject* L_86 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = L_87;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_86, ((int32_t)65550), ((int32_t)65537), L_88, NULL);
		// TableAddCol (parse_table, ParserToken.Value, (int) ParserToken.True,
		//                 (int) ParserToken.True);
		RuntimeObject* L_89 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = L_90;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_89, ((int32_t)65550), ((int32_t)65538), L_91, NULL);
		// TableAddCol (parse_table, ParserToken.Value, (int) ParserToken.False,
		//                 (int) ParserToken.False);
		RuntimeObject* L_92 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = L_93;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_92, ((int32_t)65550), ((int32_t)65539), L_94, NULL);
		// TableAddCol (parse_table, ParserToken.Value, (int) ParserToken.Null,
		//                 (int) ParserToken.Null);
		RuntimeObject* L_95 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = L_96;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_95, ((int32_t)65550), ((int32_t)65540), L_97, NULL);
		// TableAddRow (parse_table, ParserToken.ValueRest);
		RuntimeObject* L_98 = V_0;
		JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C(L_98, ((int32_t)65551), NULL);
		// TableAddCol (parse_table, ParserToken.ValueRest, ',',
		//                 ',',
		//                 (int) ParserToken.Value,
		//                 (int) ParserToken.ValueRest);
		RuntimeObject* L_99 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = L_100;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_102 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_27_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_101, L_102, NULL);
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_99, ((int32_t)65551), ((int32_t)44), L_101, NULL);
		// TableAddCol (parse_table, ParserToken.ValueRest, ']',
		//                 (int) ParserToken.Epsilon);
		RuntimeObject* L_103 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3(L_103, ((int32_t)65551), ((int32_t)93), L_105, NULL);
		// return parse_table;
		RuntimeObject* L_106 = V_0;
		return L_106;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::TableAddCol(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,Gpm.Common.ThirdParty.LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_mE597C283B36EEE0168103507759467D49E0C39F3 (RuntimeObject* ___parse_table0, int32_t ___row1, int32_t ___col2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___symbols3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parse_table[(int) row].Add (col, symbols);
		RuntimeObject* L_0 = ___parse_table0;
		int32_t L_1 = ___row1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___symbols3;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(TKey,TValue) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::TableAddRow(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,Gpm.Common.ThirdParty.LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_mD86B490382313969BFFF79F55BA0D3D563D5417C (RuntimeObject* ___parse_table0, int32_t ___rule1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parse_table.Add ((int) rule, new Dictionary<int, int[]> ());
		RuntimeObject* L_0 = ___parse_table0;
		int32_t L_1 = ___rule1;
		Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9* L_2 = (Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9*)il2cpp_codegen_object_new(Dictionary_2_t029F6A37F043A1B571A7DB746955ECB8DC548AD9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A(L_2, Dictionary_2__ctor_m3F530E7CD9CC3EB97DCC6E1669EAB9FCE984FA9A_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(TKey,TValue) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mC50513A4EC0FA94271AD3AF04719AC96967801B1 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, String_t* ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	uint64_t V_2 = 0;
	double V_3 = 0.0;
	{
		// if (number.IndexOf ('.') != -1 ||
		//     number.IndexOf ('e') != -1 ||
		//     number.IndexOf ('E') != -1) {
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)101), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)69), NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}

IL_0021:
	{
		// if (double.TryParse (number, NumberStyles.Any, CultureInfo.InvariantCulture, out n_double)) {
		String_t* L_6 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_8;
		L_8 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_6, ((int32_t)511), L_7, (&V_3), NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// token = JsonToken.Double;
		__this->___token_14 = 8;
		// token_value = n_double;
		double L_9 = V_3;
		double L_10 = L_9;
		RuntimeObject* L_11 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_10);
		__this->___token_value_13 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_11);
		// return;
		return;
	}

IL_0049:
	{
		// if (int.TryParse (number, NumberStyles.Integer, CultureInfo.InvariantCulture, out n_int32)) {
		String_t* L_12 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13;
		L_13 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_14;
		L_14 = Int32_TryParse_m3CB3A8252B2254BF929D207AFA9F2CD4DA3E3F79(L_12, 7, L_13, (&V_0), NULL);
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		// token = JsonToken.Int;
		__this->___token_14 = 6;
		// token_value = n_int32;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		__this->___token_value_13 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_17);
		// return;
		return;
	}

IL_006d:
	{
		// if (long.TryParse (number, NumberStyles.Integer, CultureInfo.InvariantCulture, out n_int64)) {
		String_t* L_18 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_20;
		L_20 = Int64_TryParse_m280F0E3C898A7C3A57F35E3B136D4BFACE12122A(L_18, 7, L_19, (&V_1), NULL);
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		// token = JsonToken.Long;
		__this->___token_14 = 7;
		// token_value = n_int64;
		int64_t L_21 = V_1;
		int64_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_22);
		__this->___token_value_13 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_23);
		// return;
		return;
	}

IL_0091:
	{
		// if (ulong.TryParse(number, NumberStyles.Integer, CultureInfo.InvariantCulture, out n_uint64))
		String_t* L_24 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_26;
		L_26 = UInt64_TryParse_mFF6D2B2F9EFC729CB42EDC35E105CFADBD254819(L_24, 7, L_25, (&V_2), NULL);
		if (!L_26)
		{
			goto IL_00b5;
		}
	}
	{
		// token = JsonToken.Long;
		__this->___token_14 = 7;
		// token_value = n_uint64;
		uint64_t L_27 = V_2;
		uint64_t L_28 = L_27;
		RuntimeObject* L_29 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_28);
		__this->___token_value_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_29);
		// return;
		return;
	}

IL_00b5:
	{
		// token = JsonToken.Int;
		__this->___token_14 = 6;
		// token_value = 0;
		int32_t L_30 = 0;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		__this->___token_value_13 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_31);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_mA3C2DCB7F35187CA8931CB93A24B8BE19D918D51 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current_symbol == '[')  {
		int32_t L_0 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0019;
		}
	}
	{
		// token = JsonToken.ArrayStart;
		__this->___token_14 = 4;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0019:
	{
		// } else if (current_symbol == ']')  {
		int32_t L_1 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0032;
		}
	}
	{
		// token = JsonToken.ArrayEnd;
		__this->___token_14 = 5;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0032:
	{
		// } else if (current_symbol == '{')  {
		int32_t L_2 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_004b;
		}
	}
	{
		// token = JsonToken.ObjectStart;
		__this->___token_14 = 1;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_004b:
	{
		// } else if (current_symbol == '}')  {
		int32_t L_3 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0064;
		}
	}
	{
		// token = JsonToken.ObjectEnd;
		__this->___token_14 = 3;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0064:
	{
		// } else if (current_symbol == '"')  {
		int32_t L_4 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009d;
		}
	}
	{
		// if (parser_in_string) {
		bool L_5 = __this->___parser_in_string_7;
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		// parser_in_string = false;
		__this->___parser_in_string_7 = (bool)0;
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0085:
	{
		// if (token == JsonToken.None)
		int32_t L_6 = __this->___token_14;
		if (L_6)
		{
			goto IL_0095;
		}
	}
	{
		// token = JsonToken.String;
		__this->___token_14 = ((int32_t)9);
	}

IL_0095:
	{
		// parser_in_string = true;
		__this->___parser_in_string_7 = (bool)1;
		return;
	}

IL_009d:
	{
		// } else if (current_symbol == (int) ParserToken.CharSeq) {
		int32_t L_7 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00bc;
		}
	}
	{
		// token_value = lexer.StringValue;
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_8 = __this->___lexer_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Lexer_get_StringValue_mB4BCDAADD419C4C30941FDC1B276CB921C3C6B43_inline(L_8, NULL);
		__this->___token_value_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_9);
		return;
	}

IL_00bc:
	{
		// } else if (current_symbol == (int) ParserToken.False)  {
		int32_t L_10 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_00e5;
		}
	}
	{
		// token = JsonToken.Boolean;
		__this->___token_14 = ((int32_t)10);
		// token_value = false;
		bool L_11 = ((bool)0);
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		__this->___token_value_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_12);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_00e5:
	{
		// } else if (current_symbol == (int) ParserToken.Null)  {
		int32_t L_13 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0102;
		}
	}
	{
		// token = JsonToken.Null;
		__this->___token_14 = ((int32_t)11);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0102:
	{
		// } else if (current_symbol == (int) ParserToken.Number)  {
		int32_t L_14 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0128;
		}
	}
	{
		// ProcessNumber (lexer.StringValue);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_15 = __this->___lexer_6;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Lexer_get_StringValue_mB4BCDAADD419C4C30941FDC1B276CB921C3C6B43_inline(L_15, NULL);
		JsonReader_ProcessNumber_mC50513A4EC0FA94271AD3AF04719AC96967801B1(__this, L_16, NULL);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
		return;
	}

IL_0128:
	{
		// } else if (current_symbol == (int) ParserToken.Pair)  {
		int32_t L_17 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_013d;
		}
	}
	{
		// token = JsonToken.PropertyName;
		__this->___token_14 = 2;
		return;
	}

IL_013d:
	{
		// } else if (current_symbol == (int) ParserToken.True)  {
		int32_t L_18 = __this->___current_symbol_3;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_0165;
		}
	}
	{
		// token = JsonToken.Boolean;
		__this->___token_14 = ((int32_t)10);
		// token_value = true;
		bool L_19 = ((bool)1);
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		__this->___token_value_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)L_20);
		// parser_return = true;
		__this->___parser_return_8 = (bool)1;
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m538B17D4C8D37759B7A2C26310A51A70D565562E (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	{
		// if (end_of_input)
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// lexer.NextToken ();
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = __this->___lexer_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_NextToken_m0450608C24DDBAAE4F91FB406F3F4361E555D9AE(L_1, NULL);
		// if (lexer.EndOfInput) {
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_3 = __this->___lexer_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = Lexer_get_EndOfInput_m1BD7789DB9E9DE3F1DF4BCBD0FBE36BF297EBD85_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// Close ();
		JsonReader_Close_m90FAFA3027A3BBB160C8C1F30D9A0BB190E16AC0(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// current_input = lexer.Token;
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_5 = __this->___lexer_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Lexer_get_Token_mB14E9920EA6AEC43860CA259859011DBB4D9B5A9_inline(L_5, NULL);
		__this->___current_input_2 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m90FAFA3027A3BBB160C8C1F30D9A0BB190E16AC0 (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* V_0 = NULL;
	{
		// if (end_of_input)
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// end_of_input = true;
		__this->___end_of_input_5 = (bool)1;
		// end_of_json  = true;
		__this->___end_of_json_4 = (bool)1;
		// if (reader_is_owned)
		bool L_1 = __this->___reader_is_owned_11;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// using(reader){}
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader_10;
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0031;
					}
				}
				{
					TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// using(reader){}
			goto IL_0032;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// reader = null;
		__this->___reader_10 = (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_10), (void*)(TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7*)NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m4611FCD8AAEED570B0303059BB9C54C80D6E7D7A (JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (end_of_input)
		bool L_0 = __this->___end_of_input_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (end_of_json) {
		bool L_1 = __this->___end_of_json_4;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// end_of_json = false;
		__this->___end_of_json_4 = (bool)0;
		// automaton_stack.Clear ();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->___automaton_stack_1;
		NullCheck(L_2);
		Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0(L_2, Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		// automaton_stack.Push ((int) ParserToken.End);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___automaton_stack_1;
		NullCheck(L_3);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_3, ((int32_t)65553), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// automaton_stack.Push ((int) ParserToken.Text);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___automaton_stack_1;
		NullCheck(L_4);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_4, ((int32_t)65543), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
	}

IL_0044:
	{
		// parser_in_string = false;
		__this->___parser_in_string_7 = (bool)0;
		// parser_return    = false;
		__this->___parser_return_8 = (bool)0;
		// token       = JsonToken.None;
		__this->___token_14 = 0;
		// token_value = null;
		__this->___token_value_13 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_value_13), (void*)NULL);
		// if (! read_started) {
		bool L_5 = __this->___read_started_9;
		if (L_5)
		{
			goto IL_0079;
		}
	}
	{
		// read_started = true;
		__this->___read_started_9 = (bool)1;
		// if (! ReadToken ())
		bool L_6;
		L_6 = JsonReader_ReadToken_m538B17D4C8D37759B7A2C26310A51A70D565562E(__this, NULL);
		if (L_6)
		{
			goto IL_0079;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0079:
	{
		// if (parser_return) {
		bool L_7 = __this->___parser_return_8;
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		// if (automaton_stack.Peek () == (int) ParserToken.End)
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_8 = __this->___automaton_stack_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_8, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_009a;
		}
	}
	{
		// end_of_json = true;
		__this->___end_of_json_4 = (bool)1;
	}

IL_009a:
	{
		// return true;
		return (bool)1;
	}

IL_009c:
	{
		// current_symbol = automaton_stack.Pop ();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_10 = __this->___automaton_stack_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_10, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		__this->___current_symbol_3 = L_11;
		// ProcessSymbol ();
		JsonReader_ProcessSymbol_mA3C2DCB7F35187CA8931CB93A24B8BE19D918D51(__this, NULL);
		// if (current_symbol == current_input) {
		int32_t L_12 = __this->___current_symbol_3;
		int32_t L_13 = __this->___current_input_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00f2;
		}
	}
	{
		// if (! ReadToken ()) {
		bool L_14;
		L_14 = JsonReader_ReadToken_m538B17D4C8D37759B7A2C26310A51A70D565562E(__this, NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		// if (automaton_stack.Peek () != (int) ParserToken.End)
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_15 = __this->___automaton_stack_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_15, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_00e6;
		}
	}
	{
		// throw new JsonException (
		//     "Input doesn't evaluate to proper JSON text");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_17 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m4611FCD8AAEED570B0303059BB9C54C80D6E7D7A_RuntimeMethod_var)));
	}

IL_00e6:
	{
		// if (parser_return)
		bool L_18 = __this->___parser_return_8;
		if (!L_18)
		{
			goto IL_00f0;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00f0:
	{
		// return false;
		return (bool)0;
	}

IL_00f2:
	{
	}
	try
	{// begin try (depth: 1)
		// entry_symbols =
		//     parse_table[current_symbol][current_input];
		il2cpp_codegen_runtime_class_init_inline(JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t9A0B0F791231911B16C84B97AD94A2FF51AB2193_il2cpp_TypeInfo_var))->___parse_table_0;
		int32_t L_20 = __this->___current_symbol_3;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(TKey) */, IDictionary_2_t9503DE0744217071D554CC415B2890C454070024_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->___current_input_2;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23;
		L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(TKey) */, IDictionary_2_tAD4D3CC9C1631510439F3806F67FAA90CE4C4313_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		// } catch (KeyNotFoundException e) {
		goto IL_011f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0111;
		}
		throw e;
	}

CATCH_0111:
	{// begin catch(System.Collections.Generic.KeyNotFoundException)
		// } catch (KeyNotFoundException e) {
		V_1 = ((KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*));
		// throw new JsonException ((ParserToken) current_input, e);
		int32_t L_24 = __this->___current_input_2;
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_25 = V_1;
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_26 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		JsonException__ctor_mE98C412DA61318CF96E1D06FA4458E073BF38064(L_26, L_24, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m4611FCD8AAEED570B0303059BB9C54C80D6E7D7A_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_011f:
	{
		// if (entry_symbols[0] == (int) ParserToken.Epsilon)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65554))))
		{
			goto IL_0079;
		}
	}
	{
		// for (int i = entry_symbols.Length - 1; i >= 0; i--)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), 1));
		goto IL_0146;
	}

IL_0134:
	{
		// automaton_stack.Push (entry_symbols[i]);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_31 = __this->___automaton_stack_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_31, L_35, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// for (int i = entry_symbols.Length - 1; i >= 0; i--)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
	}

IL_0146:
	{
		// for (int i = entry_symbols.Length - 1; i >= 0; i--)
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0134;
		}
	}
	{
		// while (true) {
		goto IL_0079;
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
// System.Void Gpm.Common.ThirdParty.LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m11F9BABB11C77169A440A11B9650EE9DE9BEC366 (WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 Gpm.Common.ThirdParty.LitJson.JsonWriter::get_IndentValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriter_get_IndentValue_mDCC5DFAF3CCC98E5FCB53CE07BEFD2F1641344A3 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return indent_value; }
		int32_t L_0 = __this->___indent_value_6;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::set_IndentValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_IndentValue_mE773424A4373BC7EA943A734D2B957BB1951B9C8 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// indentation = (indentation / indent_value) * value;
		int32_t L_0 = __this->___indentation_5;
		int32_t L_1 = __this->___indent_value_6;
		int32_t L_2 = ___value0;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0/L_1)), L_2));
		// indent_value = value;
		int32_t L_3 = ___value0;
		__this->___indent_value_6 = L_3;
		// }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::get_PrettyPrint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_PrettyPrint_mB924204134C235D4ABDC8FB11CD935F00BD3CAD2 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return pretty_print; }
		bool L_0 = __this->___pretty_print_8;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_PrettyPrint_mC252C8815BD5EB74B3588DC5EEBDE3BD009DAC04 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { pretty_print = value; }
		bool L_0 = ___value0;
		__this->___pretty_print_8 = L_0;
		// set { pretty_print = value; }
		return;
	}
}
// System.IO.TextWriter Gpm.Common.ThirdParty.LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* JsonWriter_get_TextWriter_m4CCB1260FFEF4622E9D4C85E2A8E7C0EE29A5FF0 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return writer; }
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = __this->___writer_11;
		return L_0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::get_Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_Validate_m7F620B8B413A58EE97566E16523123ED8E6BB3A1 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return validate; }
		bool L_0 = __this->___validate_9;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_mF083321ADE3DAB3CF1F0EFEE872F8D55210627DF (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { validate = value; }
		bool L_0 = ___value0;
		__this->___validate_9 = L_0;
		// set { validate = value; }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.JsonWriter::get_LowerCaseProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriter_get_LowerCaseProperties_m2EA17FF61CDFE59CAF0523DEB65F16CE71A1E87D (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// get { return lower_case_properties; }
		bool L_0 = __this->___lower_case_properties_10;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::set_LowerCaseProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_LowerCaseProperties_m6C92022135B8E550FCA540B24074D51D93825497 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { lower_case_properties = value; }
		bool L_0 = ___value0;
		__this->___lower_case_properties_10 = L_0;
		// set { lower_case_properties = value; }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m659CFE32E3430D4C5E889441D1FCB64E5AD279D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// number_format = NumberFormatInfo.InvariantInfo;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m08BD3BFBBBE015F2EDCF6DE969ACFB327E453621(NULL);
		((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m5C18B971AB813F2A66ECCDA6D172943DCEF78B9A (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JsonWriter ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// inst_string_builder = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___inst_string_builder_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_string_builder_7), (void*)L_0);
		// writer = new StringWriter (inst_string_builder);
		StringBuilder_t* L_1 = __this->___inst_string_builder_7;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_2, L_1, NULL);
		__this->___writer_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_11), (void*)L_2);
		// Init ();
		JsonWriter_Init_m68A87A85E9810281EE1CA434612BC96659E7744C(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m030BC2FBB6B37957F438FBAEF2DFD4C4A3EC7F18 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this (new StringWriter (sb))
		StringBuilder_t* L_0 = ___sb0;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mF38CB8046B79DEF523E427B7F41CA3135671D0C8(L_1, L_0, NULL);
		JsonWriter__ctor_m61C651BAE23D32DC33D213437614758F8633D558(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m61C651BAE23D32DC33D213437614758F8633D558 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___writer0, const RuntimeMethod* method) 
{
	{
		// public JsonWriter (TextWriter writer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (writer == null)
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException ("writer");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m61C651BAE23D32DC33D213437614758F8633D558_RuntimeMethod_var)));
	}

IL_0014:
	{
		// this.writer = writer;
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_2 = ___writer0;
		__this->___writer_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writer_11), (void*)L_2);
		// Init ();
		JsonWriter_Init_m68A87A85E9810281EE1CA434612BC96659E7744C(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::DoValidation(Gpm.Common.ThirdParty.LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, int32_t ___cond0, const RuntimeMethod* method) 
{
	{
		// if (! context.ExpectingValue)
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_0 = __this->___context_1;
		NullCheck(L_0);
		bool L_1 = L_0->___ExpectingValue_3;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// context.Count++;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_2 = __this->___context_1;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		NullCheck(L_3);
		L_3->___Count_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0020:
	{
		// if (! validate)
		bool L_5 = __this->___validate_9;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// if (has_reached_end)
		bool L_6 = __this->___has_reached_end_3;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// throw new JsonException (
		//     "A complete JSON symbol has already been written");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_7 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return;
	}

IL_0057:
	{
		// if (! context.InArray)
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_9 = __this->___context_1;
		NullCheck(L_9);
		bool L_10 = L_9->___InArray_1;
		if (L_10)
		{
			goto IL_0116;
		}
	}
	{
		// throw new JsonException (
		//     "Can't close an array here");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_11 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var)));
	}

IL_0072:
	{
		// if (! context.InObject || context.ExpectingValue)
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_12 = __this->___context_1;
		NullCheck(L_12);
		bool L_13 = L_12->___InObject_2;
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_14 = __this->___context_1;
		NullCheck(L_14);
		bool L_15 = L_14->___ExpectingValue_3;
		if (!L_15)
		{
			goto IL_0116;
		}
	}

IL_008f:
	{
		// throw new JsonException (
		//     "Can't close an object here");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_16 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var)));
	}

IL_009a:
	{
		// if (context.InObject && ! context.ExpectingValue)
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_17 = __this->___context_1;
		NullCheck(L_17);
		bool L_18 = L_17->___InObject_2;
		if (!L_18)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_19 = __this->___context_1;
		NullCheck(L_19);
		bool L_20 = L_19->___ExpectingValue_3;
		if (L_20)
		{
			goto IL_0116;
		}
	}
	{
		// throw new JsonException (
		//     "Expected a property");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_21 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var)));
	}

IL_00bf:
	{
		// if (! context.InObject || context.ExpectingValue)
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_22 = __this->___context_1;
		NullCheck(L_22);
		bool L_23 = L_22->___InObject_2;
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_24 = __this->___context_1;
		NullCheck(L_24);
		bool L_25 = L_24->___ExpectingValue_3;
		if (!L_25)
		{
			goto IL_0116;
		}
	}

IL_00d9:
	{
		// throw new JsonException (
		//     "Can't add a property here");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_26 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var)));
	}

IL_00e4:
	{
		// if (! context.InArray &&
		//     (! context.InObject || ! context.ExpectingValue))
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_27 = __this->___context_1;
		NullCheck(L_27);
		bool L_28 = L_27->___InArray_1;
		if (L_28)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_29 = __this->___context_1;
		NullCheck(L_29);
		bool L_30 = L_29->___InObject_2;
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_31 = __this->___context_1;
		NullCheck(L_31);
		bool L_32 = L_31->___ExpectingValue_3;
		if (L_32)
		{
			goto IL_0116;
		}
	}

IL_010b:
	{
		// throw new JsonException (
		//     "Can't add a value here");
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_33 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		JsonException__ctor_m41F8AAB4585A622E1CF06BF97F0835670BE3BD0E(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844_RuntimeMethod_var)));
	}

IL_0116:
	{
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m68A87A85E9810281EE1CA434612BC96659E7744C (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mEDBD4DF62EB1CF8C26898FDD232786AA881E7ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// has_reached_end = false;
		__this->___has_reached_end_3 = (bool)0;
		// hex_seq = new char[4];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___hex_seq_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hex_seq_4), (void*)L_0);
		// indentation = 0;
		__this->___indentation_5 = 0;
		// indent_value = 4;
		__this->___indent_value_6 = 4;
		// pretty_print = false;
		__this->___pretty_print_8 = (bool)0;
		// validate = true;
		__this->___validate_9 = (bool)1;
		// lower_case_properties = false;
		__this->___lower_case_properties_10 = (bool)0;
		// ctx_stack = new Stack<WriterContext> ();
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_1 = (Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1*)il2cpp_codegen_object_new(Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_mEDBD4DF62EB1CF8C26898FDD232786AA881E7ED7(L_1, Stack_1__ctor_mEDBD4DF62EB1CF8C26898FDD232786AA881E7ED7_RuntimeMethod_var);
		__this->___ctx_stack_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctx_stack_2), (void*)L_1);
		// context = new WriterContext ();
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_2 = (WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B*)il2cpp_codegen_object_new(WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WriterContext__ctor_m11F9BABB11C77169A440A11B9650EE9DE9BEC366(L_2, NULL);
		__this->___context_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_2);
		// ctx_stack.Push (context);
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_3 = __this->___ctx_stack_2;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_4 = __this->___context_1;
		NullCheck(L_3);
		Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89(L_3, L_4, Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mF2F7E43853FE96A695D827F7CA83085510147C97 (int32_t ___n0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___hex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < 4; i++) {
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		// num = n % 16;
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)(L_0%((int32_t)16)));
		// if (num < 10)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		// hex[3 - i] = (char) ('0' + num);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_3))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_4))));
		goto IL_0027;
	}

IL_001a:
	{
		// hex[3 - i] = (char) ('A' + (num - 10));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(3, L_6))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)65), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10)))))));
	}

IL_0027:
	{
		// n >>= 4;
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)(L_8>>4));
		// for (int i = 0; i < 4; i++) {
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < 4; i++) {
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m1465A8458318860526F48A963DAD332E7AFD8E62 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// if (pretty_print)
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// indentation += indent_value;
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (pretty_print && ! context.ExpectingValue)
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		// for (int i = 0; i < indentation; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		// writer.Write (' ');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_3 = __this->___writer_11;
		NullCheck(L_3);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		// for (int i = 0; i < indentation; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < indentation; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___indentation_5;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		// writer.Write (str);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_7 = __this->___writer_11;
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// PutNewline (true);
		JsonWriter_PutNewline_m311618455FE296312013A7D9B94D1C142DA2C3F7(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m311618455FE296312013A7D9B94D1C142DA2C3F7 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, bool ___add_comma0, const RuntimeMethod* method) 
{
	{
		// if (add_comma && ! context.ExpectingValue &&
		//     context.Count > 1)
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1 = __this->___context_1;
		NullCheck(L_1);
		bool L_2 = L_1->___ExpectingValue_3;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Count_0;
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		// writer.Write (',');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_5 = __this->___writer_11;
		NullCheck(L_5);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		// if (pretty_print && ! context.ExpectingValue)
		bool L_6 = __this->___pretty_print_8;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_7 = __this->___context_1;
		NullCheck(L_7);
		bool L_8 = L_7->___ExpectingValue_3;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		// writer.Write (Environment.NewLine);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_9 = __this->___writer_11;
		String_t* L_10;
		L_10 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_m5240E682E510ED56C0EE617D2BDEEF181B7B4607 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// Put (String.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, L_0, NULL);
		// writer.Write ('"');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_1 = __this->___writer_11;
		NullCheck(L_1);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		// int n = str.Length;
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < n; i++) {
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		// switch (str[i]) {
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		// writer.Write ("\\n");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_10 = __this->___writer_11;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		// continue;
		goto IL_0141;
	}

IL_0072:
	{
		// writer.Write ("\\r");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_11 = __this->___writer_11;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		// continue;
		goto IL_0141;
	}

IL_0087:
	{
		// writer.Write ("\\t");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12 = __this->___writer_11;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		// continue;
		goto IL_0141;
	}

IL_009c:
	{
		// writer.Write ('\\');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13 = __this->___writer_11;
		NullCheck(L_13);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		// writer.Write (str[i]);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_14 = __this->___writer_11;
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_16, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		// continue;
		goto IL_0141;
	}

IL_00c0:
	{
		// writer.Write ("\\f");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18 = __this->___writer_11;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		// continue;
		goto IL_0141;
	}

IL_00d2:
	{
		// writer.Write ("\\b");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_19 = __this->___writer_11;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		// continue;
		goto IL_0141;
	}

IL_00e4:
	{
		// if ((int) str[i] >= 32 && (int) str[i] <= 126) {
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		// writer.Write (str[i]);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_26 = __this->___writer_11;
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, L_28, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		// continue;
		goto IL_0141;
	}

IL_010e:
	{
		// IntToHex ((int) str[i], hex_seq);
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_30, L_31, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___hex_seq_4;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_mF2F7E43853FE96A695D827F7CA83085510147C97(L_32, L_33, NULL);
		// writer.Write ("\\u");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_34 = __this->___writer_11;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		// writer.Write (hex_seq);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_35 = __this->___writer_11;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = __this->___hex_seq_4;
		NullCheck(L_35);
		VirtualActionInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		// for (int i = 0; i < n; i++) {
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0145:
	{
		// for (int i = 0; i < n; i++) {
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		// writer.Write ('"');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_40 = __this->___writer_11;
		NullCheck(L_40);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_m3129A0224939BFC045202DDD126E3D498DD85A5F (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	{
		// if (pretty_print)
		bool L_0 = __this->___pretty_print_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// indentation -= indent_value;
		int32_t L_1 = __this->___indentation_5;
		int32_t L_2 = __this->___indent_value_6;
		__this->___indentation_5 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.String Gpm.Common.ThirdParty.LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m9D2F5DABFA9407E68429E5EC4552097A599A98B3 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inst_string_builder == null)
		StringBuilder_t* L_0 = __this->___inst_string_builder_7;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return String.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		// return inst_string_builder.ToString ();
		StringBuilder_t* L_2 = __this->___inst_string_builder_7;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_m701D0E4D675E1F90BCF5C4986DC5702D2BB08025 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m79D7594E6CA3DA793A8474B6BB2160010F90A870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// has_reached_end = false;
		__this->___has_reached_end_3 = (bool)0;
		// ctx_stack.Clear ();
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		Stack_1_Clear_m79D7594E6CA3DA793A8474B6BB2160010F90A870(L_0, Stack_1_Clear_m79D7594E6CA3DA793A8474B6BB2160010F90A870_RuntimeMethod_var);
		// context = new WriterContext ();
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1 = (WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B*)il2cpp_codegen_object_new(WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WriterContext__ctor_m11F9BABB11C77169A440A11B9650EE9DE9BEC366(L_1, NULL);
		__this->___context_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_1);
		// ctx_stack.Push (context);
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_2 = __this->___ctx_stack_2;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89(L_2, L_3, Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		// if (inst_string_builder != null)
		StringBuilder_t* L_4 = __this->___inst_string_builder_7;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// inst_string_builder.Remove (0, inst_string_builder.Length);
		StringBuilder_t* L_5 = __this->___inst_string_builder_7;
		StringBuilder_t* L_6 = __this->___inst_string_builder_7;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_6, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_5, 0, L_7, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m701310B894BDFA64FC0726593F43F6C8CE8317F9 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, bool ___boolean0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* G_B2_0 = NULL;
	JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* G_B3_1 = NULL;
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put (boolean ? "true" : "false");
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(G_B3_1, G_B3_0, NULL);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m233C533BC9144DF3AAB6A0F6DDC006827DB756B9 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m968749D791BDDE9D6ECB2D71DDE205221B27953D(L_0, L_1, NULL);
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m011CF1660BC04B55C5FD68CED8B7377BBBCC09B9 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, double ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// string str = Convert.ToString (number, number_format);
		double L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7E8CB36CAB0CAC9E6E8D7C3CA8238A6A2D8E8D06(L_0, L_1, NULL);
		V_0 = L_2;
		// Put (str);
		String_t* L_3 = V_0;
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, L_3, NULL);
		// if (str.IndexOf ('.') == -1 &&
		//     str.IndexOf ('E') == -1)
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_4, ((int32_t)46), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)69), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		// writer.Write (".0");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_8 = __this->___writer_11;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_0046:
	{
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_9 = __this->___context_1;
		NullCheck(L_9);
		L_9->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mDEE2639CA335C6DF11093B1DEC70DEA2BCEBFA9E (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		int32_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m8EFAEC53F711584BCA70AC094729CA6F88BB4910(L_0, L_1, NULL);
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m664CFC0734B90FF12C576BCF30A6D9AAA9E96B97 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, int64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		int64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mF003FE14E8D6095D655814A1DB1CA3D8C43DCF56(L_0, L_1, NULL);
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mC1C5A212C893A12099FD9AAF0C3956889A196B0F (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// if (str == null)
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Put ("null");
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_0024;
	}

IL_001d:
	{
		// PutString (str);
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m5240E682E510ED56C0EE617D2BDEEF181B7B4607(__this, L_1, NULL);
	}

IL_0024:
	{
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_2 = __this->___context_1;
		NullCheck(L_2);
		L_2->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mA916F68CED3032A9BB9C19E988D0A383F3CCEF65 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, uint64_t ___number0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.Value);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 4, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put (Convert.ToString (number, number_format));
		uint64_t L_0 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = ((JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5_il2cpp_TypeInfo_var))->___number_format_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC566A684B01894703BF5DD80425842A7B1DF6C(L_0, L_1, NULL);
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, L_2, NULL);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_3);
		L_3->___ExpectingValue_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_mFBDB7A520715D9F013B3A01B1D37DECC38987A53 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.InArray);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 0, NULL);
		// PutNewline (false);
		JsonWriter_PutNewline_m311618455FE296312013A7D9B94D1C142DA2C3F7(__this, (bool)0, NULL);
		// ctx_stack.Pop ();
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1;
		L_1 = Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899(L_0, Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899_RuntimeMethod_var);
		// if (ctx_stack.Count == 1)
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_inline(L_2, Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// has_reached_end = true;
		__this->___has_reached_end_3 = (bool)1;
		goto IL_004e;
	}

IL_0031:
	{
		// context = ctx_stack.Peek ();
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_5;
		L_5 = Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624(L_4, Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_004e:
	{
		// Unindent ();
		JsonWriter_Unindent_m3129A0224939BFC045202DDD126E3D498DD85A5F(__this, NULL);
		// Put ("]");
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mB24AFA3A5077BD82B82EB33256F9C2B4CFE0BC89 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.NotAProperty);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 2, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put ("[");
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		// context = new WriterContext ();
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_0 = (WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B*)il2cpp_codegen_object_new(WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_m11F9BABB11C77169A440A11B9650EE9DE9BEC366(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		// context.InArray = true;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InArray_1 = (bool)1;
		// ctx_stack.Push (context);
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_2 = __this->___ctx_stack_2;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89(L_2, L_3, Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		// Indent ();
		JsonWriter_Indent_m1465A8458318860526F48A963DAD332E7AFD8E62(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_mBEA7F30AB6CD33FA332BEDB61831405C0D671404 (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.InObject);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 1, NULL);
		// PutNewline (false);
		JsonWriter_PutNewline_m311618455FE296312013A7D9B94D1C142DA2C3F7(__this, (bool)0, NULL);
		// ctx_stack.Pop ();
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_0 = __this->___ctx_stack_2;
		NullCheck(L_0);
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1;
		L_1 = Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899(L_0, Stack_1_Pop_m07759953DBBE3BFCE0A72EF2D0867BE8AF3DB899_RuntimeMethod_var);
		// if (ctx_stack.Count == 1)
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_2 = __this->___ctx_stack_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_inline(L_2, Stack_1_get_Count_mAD6AEAD0E3C9081ABD9BFFF82886C243301A5D41_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// has_reached_end = true;
		__this->___has_reached_end_3 = (bool)1;
		goto IL_004e;
	}

IL_0031:
	{
		// context = ctx_stack.Peek ();
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_4 = __this->___ctx_stack_2;
		NullCheck(L_4);
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_5;
		L_5 = Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624(L_4, Stack_1_Peek_mC926DD60C474D6A607A08E988BD6B3603E943624_RuntimeMethod_var);
		__this->___context_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_5);
		// context.ExpectingValue = false;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_6 = __this->___context_1;
		NullCheck(L_6);
		L_6->___ExpectingValue_3 = (bool)0;
	}

IL_004e:
	{
		// Unindent ();
		JsonWriter_Unindent_m3129A0224939BFC045202DDD126E3D498DD85A5F(__this, NULL);
		// Put ("}");
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m7BFD6074D382CB485CFC0AB2A43BA0DB45732F2E (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoValidation (Condition.NotAProperty);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 2, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// Put ("{");
		JsonWriter_Put_m65700B02B5473BA4D9FC83B7AD4264518D128FF6(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		// context = new WriterContext ();
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_0 = (WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B*)il2cpp_codegen_object_new(WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WriterContext__ctor_m11F9BABB11C77169A440A11B9650EE9DE9BEC366(L_0, NULL);
		__this->___context_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_1), (void*)L_0);
		// context.InObject = true;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_1 = __this->___context_1;
		NullCheck(L_1);
		L_1->___InObject_2 = (bool)1;
		// ctx_stack.Push (context);
		Stack_1_t4C300DAFE80A78987B6BAD4FEBB22A33EA9F11F1* L_2 = __this->___ctx_stack_2;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_3 = __this->___context_1;
		NullCheck(L_2);
		Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89(L_2, L_3, Stack_1_Push_m4251E9612422BC3928C5628967529FB30E7B1D89_RuntimeMethod_var);
		// Indent ();
		JsonWriter_Indent_m1465A8458318860526F48A963DAD332E7AFD8E62(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_mB73641BE5541C4282DED6DCA71FF38B5177AFBBF (JsonWriter_tCAC51646616F448DF0DB8CFE39AC2DFBE5EB27E5* __this, String_t* ___property_name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	{
		// DoValidation (Condition.Property);
		JsonWriter_DoValidation_m79CB48CB16C066399621BD7A17D3DF1D2ED32844(__this, 3, NULL);
		// PutNewline ();
		JsonWriter_PutNewline_m8EA1FAD6A43EFE5E03ED3AA1B8D740F79CF2C231(__this, NULL);
		// string propertyName = (property_name == null || !lower_case_properties)
		//     ? property_name
		//     : property_name.ToLowerInvariant();
		String_t* L_0 = ___property_name0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		bool L_1 = __this->___lower_case_properties_10;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_2, NULL);
		G_B4_0 = L_3;
		goto IL_0021;
	}

IL_0020:
	{
		String_t* L_4 = ___property_name0;
		G_B4_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		// PutString (propertyName);
		String_t* L_5 = V_0;
		JsonWriter_PutString_m5240E682E510ED56C0EE617D2BDEEF181B7B4607(__this, L_5, NULL);
		// if (pretty_print) {
		bool L_6 = __this->___pretty_print_8;
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		// if (propertyName.Length > context.Padding)
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_9 = __this->___context_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Padding_4;
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		// context.Padding = propertyName.Length;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_11 = __this->___context_1;
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_11);
		L_11->___Padding_4 = L_13;
	}

IL_0055:
	{
		// for (int i = context.Padding - propertyName.Length;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_14 = __this->___context_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Padding_4;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_17));
		goto IL_007b;
	}

IL_006a:
	{
		// writer.Write (' ');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18 = __this->___writer_11;
		NullCheck(L_18);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, ((int32_t)32));
		// i >= 0; i--)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_007b:
	{
		// i >= 0; i--)
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// writer.Write (": ");
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_21 = __this->___writer_11;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_21, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_009e;
	}

IL_0091:
	{
		// writer.Write (':');
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_22 = __this->___writer_11;
		NullCheck(L_22);
		VirtualActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_22, ((int32_t)58));
	}

IL_009e:
	{
		// context.ExpectingValue = true;
		WriterContext_t47626B0A4F6CF7AAAB0CB67B0C462E448421CE9B* L_23 = __this->___context_1;
		NullCheck(L_23);
		L_23->___ExpectingValue_3 = (bool)1;
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
// System.Void Gpm.Common.ThirdParty.LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_m86626B7D17A7352023025C3C3CBF1F4C7D854B8F (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::get_AllowComments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m325B98287CACC43EBC3EFB0379D0E7C190005824 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_comments; }
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::set_AllowComments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m78A275A69B54D2C267816320446CB377F3316916 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_comments = value; }
		bool L_0 = ___value0;
		__this->___allow_comments_2 = L_0;
		// set { allow_comments = value; }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::get_AllowSingleQuotedStrings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_mD542F6261D90984562827CCD6CC7C627DF0E1CD8 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_single_quoted_strings; }
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_m880094F6CE12F2534FFDADAEB8AEA7D5B2A8FA74 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_single_quoted_strings = value; }
		bool L_0 = ___value0;
		__this->___allow_single_quoted_strings_3 = L_0;
		// set { allow_single_quoted_strings = value; }
		return;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m1BD7789DB9E9DE3F1DF4BCBD0FBE36BF297EBD85 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_input; }
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mB14E9920EA6AEC43860CA259859011DBB4D9B5A9 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return token; }
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
// System.String Gpm.Common.ThirdParty.LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mB4BCDAADD419C4C30941FDC1B276CB921C3C6B43 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return string_value; }
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_m34C22E8F6C123ECC68539CE6C3544D9F1483A7F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PopulateFsmTables (out fsm_handler_table, out fsm_return_table);
		Lexer_PopulateFsmTables_mBD2315D5069A2DCD11004F081BB6468E9DB83CBF((&((Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var))->___fsm_handler_table_1), (&((Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var))->___fsm_return_table_0), NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m61E18BEDFF1D196FCD3B53FE2AC5CC756AFEF1E8 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Lexer (TextReader reader)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// allow_comments = true;
		__this->___allow_comments_2 = (bool)1;
		// allow_single_quoted_strings = true;
		__this->___allow_single_quoted_strings_3 = (bool)1;
		// input_buffer = 0;
		__this->___input_buffer_6 = 0;
		// string_buffer = new StringBuilder (128);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)128), NULL);
		__this->___string_buffer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_buffer_10), (void*)L_0);
		// state = 1;
		__this->___state_9 = 1;
		// end_of_input = false;
		__this->___end_of_input_4 = (bool)0;
		// this.reader = reader;
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_1 = ___reader0;
		__this->___reader_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_8), (void*)L_1);
		// fsm_context = new FsmContext ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_2 = (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B*)il2cpp_codegen_object_new(FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FsmContext__ctor_m86626B7D17A7352023025C3C3CBF1F4C7D854B8F(L_2, NULL);
		__this->___fsm_context_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fsm_context_5), (void*)L_2);
		// fsm_context.L = this;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = __this->___fsm_context_5;
		NullCheck(L_3);
		L_3->___L_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___L_2), (void*)__this);
		// }
		return;
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_m62BD979D29C42376A0905584939C19CA649AE86B (int32_t ___digit0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)65))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		int32_t L_1 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)97))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0044:
	{
		// return 10;
		return ((int32_t)10);
	}

IL_0047:
	{
		// return 11;
		return ((int32_t)11);
	}

IL_004a:
	{
		// return 12;
		return ((int32_t)12);
	}

IL_004d:
	{
		// return 13;
		return ((int32_t)13);
	}

IL_0050:
	{
		// return 14;
		return ((int32_t)14);
	}

IL_0053:
	{
		// return 15;
		return ((int32_t)15);
	}

IL_0056:
	{
		// return digit - '0';
		int32_t L_2 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)48)));
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::PopulateFsmTables(Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mBD2315D5069A2DCD11004F081BB6468E9DB83CBF (StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E** ___fsm_handler_table0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___fsm_return_table1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_m213559E9184F7B5968CC5142BC5E213712D49A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_m5A35FACECF0D8D35695619A34E9C6D423720E75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m21B6FCE9024AB687E6CEBE3009340C6D4C6CE395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_mF01E4DADFEC51BF5D409ABCC51771DEB81007477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_m44E699D3533E61EE36ADEE78E6D7300CA6E1BEF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_m862C9B6CEC33B69BA84FC0748EFF27293F383ECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_mC0B0CAC5FCF282178596652C22503DEC76975406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_m95B54BDA0C13E72BC6A98EF491F2077079E9F728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_mDDE63C673351272C3881E11345940B56D8AC7724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_mB2DB9193965B74ACA7E95679CC3DAC3AC8457F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_m2293E9BA99E5F5DD4BD8631E5D3C6F0557881E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_mD09C6B01FE45CC222C1743A92035CF4E23DE5312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_m37B8EC0F80459FFD65930D13A3FA8E23A1265F8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_m0B62037A6F04FD1E540308389AD83B37DF406BA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_m709EF564374159CF0327AE4812BE46A169E15FB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_mE3B8D3ADB8FC563E0FC9B4FF623F23C5686AD68C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_mF67D282823C6A1909774FCB72C33BCA0EFA4E96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_m90B5FD82147DCFF6BA050D798B2F41A5B8C05602_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_m9EDB8DF2DF8B1B9C079EFC10AFE181D5EA92D433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_m715D1DDDFF6263D40E11348DC1F40533E56F06E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_mF4CEF94C53606B9505003828F51FDF6613DD6611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_m5950971A4A532A55F35F994AC6A2FA2820C165C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_m37D220B9A3CB6BDA71DEF07677550AA4ACC6F00A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_m64B25604A7B8911B934FE4237F26F9C7FA16C36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_mA839B83EEE259A1F2B65043D27CC7EC68AE6F567_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_m1331CC6EB80EEDC6A064409649A7B6596354309B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_m7EC6CBD4DB8FD474298AAF3B7041DF45F2B5FA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_mE7325EE166994707F239DA9CF9CD836CFC3DBC3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_79_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fsm_handler_table = new StateHandler[28] {
		//     State1,
		//     State2,
		//     State3,
		//     State4,
		//     State5,
		//     State6,
		//     State7,
		//     State8,
		//     State9,
		//     State10,
		//     State11,
		//     State12,
		//     State13,
		//     State14,
		//     State15,
		//     State16,
		//     State17,
		//     State18,
		//     State19,
		//     State20,
		//     State21,
		//     State22,
		//     State23,
		//     State24,
		//     State25,
		//     State26,
		//     State27,
		//     State28
		// };
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E** L_0 = ___fsm_handler_table0;
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_1 = (StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E*)(StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E*)SZArrayNew(StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_2 = L_1;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_3 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_3, NULL, (intptr_t)((void*)Lexer_State1_m2293E9BA99E5F5DD4BD8631E5D3C6F0557881E9E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_3);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_4 = L_2;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_5 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_5, NULL, (intptr_t)((void*)Lexer_State2_mF4CEF94C53606B9505003828F51FDF6613DD6611_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_5);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_6 = L_4;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_7 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_7, NULL, (intptr_t)((void*)Lexer_State3_m5950971A4A532A55F35F994AC6A2FA2820C165C2_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_7);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_8 = L_6;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_9 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_9, NULL, (intptr_t)((void*)Lexer_State4_m37D220B9A3CB6BDA71DEF07677550AA4ACC6F00A_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_9);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_10 = L_8;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_11 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_11, NULL, (intptr_t)((void*)Lexer_State5_m64B25604A7B8911B934FE4237F26F9C7FA16C36F_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_11);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_12 = L_10;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_13 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_13, NULL, (intptr_t)((void*)Lexer_State6_mA839B83EEE259A1F2B65043D27CC7EC68AE6F567_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_13);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_14 = L_12;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_15 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_15, NULL, (intptr_t)((void*)Lexer_State7_m1331CC6EB80EEDC6A064409649A7B6596354309B_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_15);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_16 = L_14;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_17 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_17, NULL, (intptr_t)((void*)Lexer_State8_m7EC6CBD4DB8FD474298AAF3B7041DF45F2B5FA82_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_17);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_18 = L_16;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_19 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_19, NULL, (intptr_t)((void*)Lexer_State9_mE7325EE166994707F239DA9CF9CD836CFC3DBC3F_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_19);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_20 = L_18;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_21 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_21, NULL, (intptr_t)((void*)Lexer_State10_m213559E9184F7B5968CC5142BC5E213712D49A2E_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_21);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_22 = L_20;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_23 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_23, NULL, (intptr_t)((void*)Lexer_State11_m5A35FACECF0D8D35695619A34E9C6D423720E75E_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_23);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_24 = L_22;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_25 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_25, NULL, (intptr_t)((void*)Lexer_State12_m21B6FCE9024AB687E6CEBE3009340C6D4C6CE395_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_25);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_26 = L_24;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_27 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_27, NULL, (intptr_t)((void*)Lexer_State13_mF01E4DADFEC51BF5D409ABCC51771DEB81007477_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_27);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_28 = L_26;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_29 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_29, NULL, (intptr_t)((void*)Lexer_State14_m44E699D3533E61EE36ADEE78E6D7300CA6E1BEF6_RuntimeMethod_var), NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_29);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_30 = L_28;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_31 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_31, NULL, (intptr_t)((void*)Lexer_State15_m862C9B6CEC33B69BA84FC0748EFF27293F383ECF_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_31);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_32 = L_30;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_33 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_33, NULL, (intptr_t)((void*)Lexer_State16_mC0B0CAC5FCF282178596652C22503DEC76975406_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_33);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_34 = L_32;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_35 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_35, NULL, (intptr_t)((void*)Lexer_State17_m95B54BDA0C13E72BC6A98EF491F2077079E9F728_RuntimeMethod_var), NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_35);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_36 = L_34;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_37 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_37, NULL, (intptr_t)((void*)Lexer_State18_mDDE63C673351272C3881E11345940B56D8AC7724_RuntimeMethod_var), NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_37);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_38 = L_36;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_39 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_39, NULL, (intptr_t)((void*)Lexer_State19_mB2DB9193965B74ACA7E95679CC3DAC3AC8457F4F_RuntimeMethod_var), NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_39);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_40 = L_38;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_41 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_41, NULL, (intptr_t)((void*)Lexer_State20_mD09C6B01FE45CC222C1743A92035CF4E23DE5312_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_41);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_42 = L_40;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_43 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_43, NULL, (intptr_t)((void*)Lexer_State21_m37B8EC0F80459FFD65930D13A3FA8E23A1265F8D_RuntimeMethod_var), NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_43);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_44 = L_42;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_45 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_45, NULL, (intptr_t)((void*)Lexer_State22_m0B62037A6F04FD1E540308389AD83B37DF406BA9_RuntimeMethod_var), NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_45);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_46 = L_44;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_47 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_47, NULL, (intptr_t)((void*)Lexer_State23_m709EF564374159CF0327AE4812BE46A169E15FB4_RuntimeMethod_var), NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_47);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_48 = L_46;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_49 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_49, NULL, (intptr_t)((void*)Lexer_State24_mE3B8D3ADB8FC563E0FC9B4FF623F23C5686AD68C_RuntimeMethod_var), NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_49);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_50 = L_48;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_51 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_51, NULL, (intptr_t)((void*)Lexer_State25_mF67D282823C6A1909774FCB72C33BCA0EFA4E96B_RuntimeMethod_var), NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_51);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_52 = L_50;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_53 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_53, NULL, (intptr_t)((void*)Lexer_State26_m90B5FD82147DCFF6BA050D798B2F41A5B8C05602_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_53);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_54 = L_52;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_55 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_55, NULL, (intptr_t)((void*)Lexer_State27_m9EDB8DF2DF8B1B9C079EFC10AFE181D5EA92D433_RuntimeMethod_var), NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_55);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_56 = L_54;
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_57 = (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)il2cpp_codegen_object_new(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011(L_57, NULL, (intptr_t)((void*)Lexer_State28_m715D1DDDFF6263D40E11348DC1F40533E56F06E2_RuntimeMethod_var), NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*)L_57);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_56;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_56);
		// fsm_return_table = new int[28] {
		//     (int) ParserToken.Char,
		//     0,
		//     (int) ParserToken.Number,
		//     (int) ParserToken.Number,
		//     0,
		//     (int) ParserToken.Number,
		//     0,
		//     (int) ParserToken.Number,
		//     0,
		//     0,
		//     (int) ParserToken.True,
		//     0,
		//     0,
		//     0,
		//     (int) ParserToken.False,
		//     0,
		//     0,
		//     (int) ParserToken.Null,
		//     (int) ParserToken.CharSeq,
		//     (int) ParserToken.Char,
		//     0,
		//     0,
		//     (int) ParserToken.CharSeq,
		//     (int) ParserToken.Char,
		//     0,
		//     0,
		//     0,
		//     0
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_58 = ___fsm_return_table1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = L_59;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_61 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAE868FF8A28B1C8CDCE05BCC11B5F8BCDE4C6E62____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_79_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_60, L_61, NULL);
		*((RuntimeObject**)L_58) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_58, (void*)(RuntimeObject*)L_60);
		// }
		return;
	}
}
// System.Char Gpm.Common.ThirdParty.LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_mD22E0FBC9CF7B5A8FE9A960ADCC969D463E1A841 (int32_t ___esc_char0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___esc_char0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)92))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___esc_char0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)39))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___esc_char0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = ___esc_char0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0016:
	{
		int32_t L_4 = ___esc_char0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ___esc_char0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0022:
	{
		int32_t L_6 = ___esc_char0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)102))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___esc_char0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)98))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = ___esc_char0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)102))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0059;
	}

IL_0033:
	{
		int32_t L_9 = ___esc_char0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)110))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_10 = ___esc_char0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)114))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___esc_char0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)116))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_0044:
	{
		// return Convert.ToChar (esc_char);
		int32_t L_12 = ___esc_char0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_13;
		L_13 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_12, NULL);
		return L_13;
	}

IL_004b:
	{
		// return '\n';
		return ((int32_t)10);
	}

IL_004e:
	{
		// return '\t';
		return ((int32_t)9);
	}

IL_0051:
	{
		// return '\r';
		return ((int32_t)13);
	}

IL_0054:
	{
		// return '\b';
		return 8;
	}

IL_0056:
	{
		// return '\f';
		return ((int32_t)12);
	}

IL_0059:
	{
		// return '?';
		return ((int32_t)63);
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State1(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_m2293E9BA99E5F5DD4BD8631E5D3C6F0557881E9E (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_01d9;
	}

IL_0005:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r')
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_01d9;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)13))))
		{
			goto IL_01d9;
		}
	}

IL_0038:
	{
		// if (ctx.L.input_char >= '1' && ctx.L.input_char <= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_007c;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_16 = L_15->___L_2;
		NullCheck(L_16);
		StringBuilder_t* L_17 = L_16->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_19 = L_18->___L_2;
		NullCheck(L_19);
		int32_t L_20 = L_19->___input_char_7;
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)(uint16_t)L_20), NULL);
		// ctx.NextState = 3;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___NextState_1 = 3;
		// return true;
		return (bool)1;
	}

IL_007c:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_24 = L_23->___L_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char_7;
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)91))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)39))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01d7;
	}

IL_00a4:
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)44))))
		{
			case 0:
			{
				goto IL_0117;
			}
			case 1:
			{
				goto IL_0127;
			}
			case 2:
			{
				goto IL_01d7;
			}
			case 3:
			{
				goto IL_01be;
			}
			case 4:
			{
				goto IL_014d;
			}
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)91))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_00d0:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)110))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)93))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)102))))
		{
			goto IL_0173;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)110))))
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01d7;
	}

IL_00ef:
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)116))))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)123))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)125))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_0106:
	{
		// ctx.NextState = 19;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_40 = ___ctx0;
		NullCheck(L_40);
		L_40->___NextState_1 = ((int32_t)19);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->___Return_0 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_0117:
	{
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->___NextState_1 = 1;
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->___Return_0 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_0127:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_45 = L_44->___L_2;
		NullCheck(L_45);
		StringBuilder_t* L_46 = L_45->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_47 = ___ctx0;
		NullCheck(L_47);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_48 = L_47->___L_2;
		NullCheck(L_48);
		int32_t L_49 = L_48->___input_char_7;
		NullCheck(L_46);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, ((int32_t)(uint16_t)L_49), NULL);
		// ctx.NextState = 2;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_51 = ___ctx0;
		NullCheck(L_51);
		L_51->___NextState_1 = 2;
		// return true;
		return (bool)1;
	}

IL_014d:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_52 = ___ctx0;
		NullCheck(L_52);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_53 = L_52->___L_2;
		NullCheck(L_53);
		StringBuilder_t* L_54 = L_53->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_55 = ___ctx0;
		NullCheck(L_55);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_56 = L_55->___L_2;
		NullCheck(L_56);
		int32_t L_57 = L_56->___input_char_7;
		NullCheck(L_54);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_54, ((int32_t)(uint16_t)L_57), NULL);
		// ctx.NextState = 4;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_59 = ___ctx0;
		NullCheck(L_59);
		L_59->___NextState_1 = 4;
		// return true;
		return (bool)1;
	}

IL_0173:
	{
		// ctx.NextState = 12;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_60 = ___ctx0;
		NullCheck(L_60);
		L_60->___NextState_1 = ((int32_t)12);
		// return true;
		return (bool)1;
	}

IL_017d:
	{
		// ctx.NextState = 16;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_61 = ___ctx0;
		NullCheck(L_61);
		L_61->___NextState_1 = ((int32_t)16);
		// return true;
		return (bool)1;
	}

IL_0187:
	{
		// ctx.NextState = 9;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_62 = ___ctx0;
		NullCheck(L_62);
		L_62->___NextState_1 = ((int32_t)9);
		// return true;
		return (bool)1;
	}

IL_0191:
	{
		// if (! ctx.L.allow_single_quoted_strings)
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_63 = ___ctx0;
		NullCheck(L_63);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_64 = L_63->___L_2;
		NullCheck(L_64);
		bool L_65 = L_64->___allow_single_quoted_strings_3;
		if (L_65)
		{
			goto IL_01a0;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_01a0:
	{
		// ctx.L.input_char = '"';
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_66 = ___ctx0;
		NullCheck(L_66);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_67 = L_66->___L_2;
		NullCheck(L_67);
		L_67->___input_char_7 = ((int32_t)34);
		// ctx.NextState = 23;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_68 = ___ctx0;
		NullCheck(L_68);
		L_68->___NextState_1 = ((int32_t)23);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_69 = ___ctx0;
		NullCheck(L_69);
		L_69->___Return_0 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_01be:
	{
		// if (! ctx.L.allow_comments)
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_70 = ___ctx0;
		NullCheck(L_70);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_71 = L_70->___L_2;
		NullCheck(L_71);
		bool L_72 = L_71->___allow_comments_2;
		if (L_72)
		{
			goto IL_01cd;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_01cd:
	{
		// ctx.NextState = 25;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_73 = ___ctx0;
		NullCheck(L_73);
		L_73->___NextState_1 = ((int32_t)25);
		// return true;
		return (bool)1;
	}

IL_01d7:
	{
		// return false;
		return (bool)0;
	}

IL_01d9:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_74 = ___ctx0;
		NullCheck(L_74);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_75 = L_74->___L_2;
		NullCheck(L_75);
		bool L_76;
		L_76 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_75, NULL);
		if (L_76)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State2(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_mF4CEF94C53606B9505003828F51FDF6613DD6611 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// if (ctx.L.input_char >= '1' && ctx.L.input_char<= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		// ctx.NextState = 3;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 3;
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0085;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_21 = L_20->___L_2;
		NullCheck(L_21);
		StringBuilder_t* L_22 = L_21->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_24 = L_23->___L_2;
		NullCheck(L_24);
		int32_t L_25 = L_24->___input_char_7;
		NullCheck(L_22);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)(uint16_t)L_25), NULL);
		// ctx.NextState = 4;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->___NextState_1 = 4;
		// return true;
		return (bool)1;
	}

IL_0085:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State3(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_m5950971A4A532A55F35F994AC6A2FA2820C165C2 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_011c;
	}

IL_0005:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		// continue;
		goto IL_011c;
	}

IL_0045:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0082:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)69))))
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_011a;
	}

IL_00a4:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)101))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}

IL_00b3:
	{
		// ctx.L.UngetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_35 = L_34->___L_2;
		NullCheck(L_35);
		Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C(L_35, NULL);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_00ce:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_39 = L_38->___L_2;
		NullCheck(L_39);
		StringBuilder_t* L_40 = L_39->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_41 = ___ctx0;
		NullCheck(L_41);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_42 = L_41->___L_2;
		NullCheck(L_42);
		int32_t L_43 = L_42->___input_char_7;
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)(uint16_t)L_43), NULL);
		// ctx.NextState = 5;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_45 = ___ctx0;
		NullCheck(L_45);
		L_45->___NextState_1 = 5;
		// return true;
		return (bool)1;
	}

IL_00f4:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_46 = ___ctx0;
		NullCheck(L_46);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_47 = L_46->___L_2;
		NullCheck(L_47);
		StringBuilder_t* L_48 = L_47->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_49 = ___ctx0;
		NullCheck(L_49);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_50 = L_49->___L_2;
		NullCheck(L_50);
		int32_t L_51 = L_50->___input_char_7;
		NullCheck(L_48);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_48, ((int32_t)(uint16_t)L_51), NULL);
		// ctx.NextState = 7;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_53 = ___ctx0;
		NullCheck(L_53);
		L_53->___NextState_1 = 7;
		// return true;
		return (bool)1;
	}

IL_011a:
	{
		// return false;
		return (bool)0;
	}

IL_011c:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_54 = ___ctx0;
		NullCheck(L_54);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_55 = L_54->___L_2;
		NullCheck(L_55);
		bool L_56;
		L_56 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_55, NULL);
		if (L_56)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State4(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_m37D220B9A3CB6BDA71DEF07677550AA4ACC6F00A (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0049;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0049:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)69))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)44))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)46))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00e1;
	}

IL_006b:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)93))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00e1;
		}
	}

IL_007a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_25 = L_24->___L_2;
		NullCheck(L_25);
		Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C(L_25, NULL);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_26 = ___ctx0;
		NullCheck(L_26);
		L_26->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0095:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_28 = ___ctx0;
		NullCheck(L_28);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_29 = L_28->___L_2;
		NullCheck(L_29);
		StringBuilder_t* L_30 = L_29->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_31 = ___ctx0;
		NullCheck(L_31);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_32 = L_31->___L_2;
		NullCheck(L_32);
		int32_t L_33 = L_32->___input_char_7;
		NullCheck(L_30);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, ((int32_t)(uint16_t)L_33), NULL);
		// ctx.NextState = 5;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->___NextState_1 = 5;
		// return true;
		return (bool)1;
	}

IL_00bb:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_37 = L_36->___L_2;
		NullCheck(L_37);
		StringBuilder_t* L_38 = L_37->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_40 = L_39->___L_2;
		NullCheck(L_40);
		int32_t L_41 = L_40->___input_char_7;
		NullCheck(L_38);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, ((int32_t)(uint16_t)L_41), NULL);
		// ctx.NextState = 7;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->___NextState_1 = 7;
		// return true;
		return (bool)1;
	}

IL_00e1:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State5(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_m64B25604A7B8911B934FE4237F26F9C7FA16C36F (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		// ctx.NextState = 6;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 6;
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State6(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_mA839B83EEE259A1F2B65043D27CC7EC68AE6F567 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00f1;
	}

IL_0005:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		// continue;
		goto IL_00f1;
	}

IL_0045:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char <= '\r') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0082:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00ef;
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}

IL_00ae:
	{
		// ctx.L.UngetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_34 = L_33->___L_2;
		NullCheck(L_34);
		Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C(L_34, NULL);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_00c9:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_38 = L_37->___L_2;
		NullCheck(L_38);
		StringBuilder_t* L_39 = L_38->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_40 = ___ctx0;
		NullCheck(L_40);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_41 = L_40->___L_2;
		NullCheck(L_41);
		int32_t L_42 = L_41->___input_char_7;
		NullCheck(L_39);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_39, ((int32_t)(uint16_t)L_42), NULL);
		// ctx.NextState = 7;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->___NextState_1 = 7;
		// return true;
		return (bool)1;
	}

IL_00ef:
	{
		// return false;
		return (bool)0;
	}

IL_00f1:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_46 = L_45->___L_2;
		NullCheck(L_46);
		bool L_47;
		L_47 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_46, NULL);
		if (L_47)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State7(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_m1331CC6EB80EEDC6A064409649A7B6596354309B (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// if (ctx.L.input_char >= '0' && ctx.L.input_char<= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___input_char_7;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		StringBuilder_t* L_11 = L_10->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_13 = L_12->___L_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->___input_char_7;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)(uint16_t)L_14), NULL);
		// ctx.NextState = 8;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->___NextState_1 = 8;
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_008c;
		}
	}

IL_0066:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_23 = L_22->___L_2;
		NullCheck(L_23);
		StringBuilder_t* L_24 = L_23->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_26 = L_25->___L_2;
		NullCheck(L_26);
		int32_t L_27 = L_26->___input_char_7;
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)(uint16_t)L_27), NULL);
		// ctx.NextState = 8;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_29 = ___ctx0;
		NullCheck(L_29);
		L_29->___NextState_1 = 8;
		// return true;
		return (bool)1;
	}

IL_008c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State8(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_m7EC6CBD4DB8FD474298AAF3B7041DF45F2B5FA82 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_00b7;
	}

IL_0005:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char<= '9') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0042;
		}
	}
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		StringBuilder_t* L_8 = L_7->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_10 = L_9->___L_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->___input_char_7;
		NullCheck(L_8);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)(uint16_t)L_11), NULL);
		// continue;
		goto IL_00b7;
	}

IL_0042:
	{
		// if (ctx.L.input_char == ' ' ||
		//     ctx.L.input_char >= '\t' && ctx.L.input_char<= '\r') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_14 = L_13->___L_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___input_char_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_006f;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_17 = L_16->___L_2;
		NullCheck(L_17);
		int32_t L_18 = L_17->___input_char_7;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_007f;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_20 = L_19->___L_2;
		NullCheck(L_20);
		int32_t L_21 = L_20->___input_char_7;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_007f;
		}
	}

IL_006f:
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_007f:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00b5;
		}
	}

IL_009a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_30 = ___ctx0;
		NullCheck(L_30);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_31 = L_30->___L_2;
		NullCheck(L_31);
		Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C(L_31, NULL);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_00b5:
	{
		// return false;
		return (bool)0;
	}

IL_00b7:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_35 = L_34->___L_2;
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_35, NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State9(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_mE7325EE166994707F239DA9CF9CD836CFC3DBC3F (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)10);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State10(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_m213559E9184F7B5968CC5142BC5E213712D49A2E (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 11;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)11);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State11(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_m5A35FACECF0D8D35695619A34E9C6D423720E75E (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State12(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m21B6FCE9024AB687E6CEBE3009340C6D4C6CE395 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 13;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)13);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State13(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_mF01E4DADFEC51BF5D409ABCC51771DEB81007477 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 14;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)14);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State14(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_m44E699D3533E61EE36ADEE78E6D7300CA6E1BEF6 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 15;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)15);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State15(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_m862C9B6CEC33B69BA84FC0748EFF27293F383ECF (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State16(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_mC0B0CAC5FCF282178596652C22503DEC76975406 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 17;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)17);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State17(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_m95B54BDA0C13E72BC6A98EF491F2077079E9F728 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		// ctx.NextState = 18;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = ((int32_t)18);
		// return true;
		return (bool)1;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State18(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_mDDE63C673351272C3881E11345940B56D8AC7724 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State19(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_mB2DB9193965B74ACA7E95679CC3DAC3AC8457F4F (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C(L_6, NULL);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		// ctx.NextState = 20;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)20);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// ctx.StateStack = 19;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)19);
		// ctx.NextState = 21;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State20(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_mD09C6B01FE45CC222C1743A92035CF4E23DE5312 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002b;
		}
	}
	{
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_002b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State21(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_m37B8EC0F80459FFD65930D13A3FA8E23A1265F8D (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)92))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)39))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_003a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)102))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_006b:
	{
		// ctx.NextState = 22;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_17 = ___ctx0;
		NullCheck(L_17);
		L_17->___NextState_1 = ((int32_t)22);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// ctx.L.string_buffer.Append (
		//     ProcessEscChar (ctx.L.input_char));
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_19 = L_18->___L_2;
		NullCheck(L_19);
		StringBuilder_t* L_20 = L_19->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_22 = L_21->___L_2;
		NullCheck(L_22);
		int32_t L_23 = L_22->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		Il2CppChar L_24;
		L_24 = Lexer_ProcessEscChar_mD22E0FBC9CF7B5A8FE9A960ADCC969D463E1A841(L_23, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, L_24, NULL);
		// ctx.NextState = ctx.StateStack;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_26 = ___ctx0;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_27 = ___ctx0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___StateStack_3;
		NullCheck(L_26);
		L_26->___NextState_1 = L_28;
		// return true;
		return (bool)1;
	}

IL_00a4:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State22(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_m0B62037A6F04FD1E540308389AD83B37DF406BA9 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int counter = 0;
		V_0 = 0;
		// int mult    = 4096;
		V_1 = ((int32_t)4096);
		// ctx.L.unichar = 0;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		L_1->___unichar_13 = 0;
		goto IL_00d5;
	}

IL_0019:
	{
		// if (ctx.L.input_char >= '0' && ctx.L.input_char <= '9' ||
		//     ctx.L.input_char >= 'A' && ctx.L.input_char <= 'F' ||
		//     ctx.L.input_char >= 'a' && ctx.L.input_char <= 'f') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_3 = L_2->___L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___input_char_7;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_6 = L_5->___L_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___input_char_7;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0073;
		}
	}

IL_0037:
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_9 = L_8->___L_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->___input_char_7;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0055;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_12 = L_11->___L_2;
		NullCheck(L_12);
		int32_t L_13 = L_12->___input_char_7;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d3;
		}
	}
	{
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_18 = L_17->___L_2;
		NullCheck(L_18);
		int32_t L_19 = L_18->___input_char_7;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}

IL_0073:
	{
		// ctx.L.unichar += HexValue (ctx.L.input_char) * mult;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_21 = L_20->___L_2;
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->___unichar_13;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_25 = L_24->___L_2;
		NullCheck(L_25);
		int32_t L_26 = L_25->___input_char_7;
		il2cpp_codegen_runtime_class_init_inline(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_m62BD979D29C42376A0905584939C19CA649AE86B(L_26, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->___unichar_13 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))));
		// counter++;
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		// mult /= 16;
		int32_t L_30 = V_1;
		V_1 = ((int32_t)(L_30/((int32_t)16)));
		// if (counter == 4) {
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00d5;
		}
	}
	{
		// ctx.L.string_buffer.Append (
		//     Convert.ToChar (ctx.L.unichar));
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_33 = L_32->___L_2;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_36 = L_35->___L_2;
		NullCheck(L_36);
		int32_t L_37 = L_36->___unichar_13;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_m22D0549E3F5013C6BA2E1E68B8807F20786889F1(L_37, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, L_38, NULL);
		// ctx.NextState = ctx.StateStack;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_40 = ___ctx0;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_41 = ___ctx0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___StateStack_3;
		NullCheck(L_40);
		L_40->___NextState_1 = L_42;
		// return true;
		return (bool)1;
	}

IL_00d3:
	{
		// return false;
		return (bool)0;
	}

IL_00d5:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_44 = L_43->___L_2;
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_44, NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State23(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_m709EF564374159CF0327AE4812BE46A169E15FB4 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		// ctx.L.UngetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_6 = L_5->___L_2;
		NullCheck(L_6);
		Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C(L_6, NULL);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___Return_0 = (bool)1;
		// ctx.NextState = 24;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)24);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// ctx.StateStack = 23;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___StateStack_3 = ((int32_t)23);
		// ctx.NextState = 21;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->___NextState_1 = ((int32_t)21);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// ctx.L.string_buffer.Append ((char) ctx.L.input_char);
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_12 = L_11->___L_2;
		NullCheck(L_12);
		StringBuilder_t* L_13 = L_12->___string_buffer_10;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_15 = L_14->___L_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->___input_char_7;
		NullCheck(L_13);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_16), NULL);
	}

IL_0065:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_19 = L_18->___L_2;
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_19, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State24(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_mE3B8D3ADB8FC563E0FC9B4FF623F23C5686AD68C (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0038;
		}
	}
	{
		// ctx.L.input_char = '"';
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_7 = L_6->___L_2;
		NullCheck(L_7);
		L_7->___input_char_7 = ((int32_t)34);
		// ctx.Return = true;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___Return_0 = (bool)1;
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State25(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_mF67D282823C6A1909774FCB72C33BCA0EFA4E96B (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// ctx.L.GetChar ();
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_1, NULL);
		// switch (ctx.L.input_char) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		// ctx.NextState = 27;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->___NextState_1 = ((int32_t)27);
		// return true;
		return (bool)1;
	}

IL_002e:
	{
		// ctx.NextState = 26;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->___NextState_1 = ((int32_t)26);
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State26(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_m90B5FD82147DCFF6BA050D798B2F41A5B8C05602 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_001a;
	}

IL_0002:
	{
		// if (ctx.L.input_char == '\n') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001a;
		}
	}
	{
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State27(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_m9EDB8DF2DF8B1B9C079EFC10AFE181D5EA92D433 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_001b;
	}

IL_0002:
	{
		// if (ctx.L.input_char == '*') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001b;
		}
	}
	{
		// ctx.NextState = 28;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->___NextState_1 = ((int32_t)28);
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_5 = L_4->___L_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_5, NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::State28(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_m715D1DDDFF6263D40E11348DC1F40533E56F06E2 (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	{
		goto IL_0033;
	}

IL_0002:
	{
		// if (ctx.L.input_char == '*')
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_1 = L_0->___L_2;
		NullCheck(L_1);
		int32_t L_2 = L_1->___input_char_7;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0033;
		}
	}
	{
		// if (ctx.L.input_char == '/') {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_4 = L_3->___L_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___input_char_7;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0029;
		}
	}
	{
		// ctx.NextState = 1;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->___NextState_1 = 1;
		// return true;
		return (bool)1;
	}

IL_0029:
	{
		// ctx.NextState = 27;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->___NextState_1 = ((int32_t)27);
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// while (ctx.L.GetChar ()) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* L_9 = L_8->___L_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51(L_9, NULL);
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m837DBFC07040D1CEF49591104E5557B7B2C82B51 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if ((input_char = NextChar ()) != -1)
		int32_t L_0;
		L_0 = Lexer_NextChar_mF95624CEF6B9774246BD65E8F96E2FCEC8212372(__this, NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->___input_char_7 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// end_of_input = true;
		__this->___end_of_input_4 = (bool)1;
		// return false;
		return (bool)0;
	}
}
// System.Int32 Gpm.Common.ThirdParty.LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mF95624CEF6B9774246BD65E8F96E2FCEC8212372 (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// if (input_buffer != 0) {
		int32_t L_0 = __this->___input_buffer_6;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// int tmp = input_buffer;
		int32_t L_1 = __this->___input_buffer_6;
		// input_buffer = 0;
		__this->___input_buffer_6 = 0;
		// return tmp;
		return L_1;
	}

IL_0016:
	{
		// return reader.Read ();
		TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* L_2 = __this->___reader_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_2);
		return L_3;
	}
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m0450608C24DDBAAE4F91FB406F3F4361E555D9AE (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fsm_context.Return = false;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_0 = __this->___fsm_context_5;
		NullCheck(L_0);
		L_0->___Return_0 = (bool)0;
	}

IL_000c:
	{
		// handler = fsm_handler_table[state - 1];
		il2cpp_codegen_runtime_class_init_inline(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_tE31EC1C3D2BB46D00C7923FA77FAD94D6CDA883E* L_1 = ((Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var))->___fsm_handler_table_1;
		int32_t L_2 = __this->___state_9;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (! handler (fsm_context))
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_5 = __this->___fsm_context_5;
		NullCheck(L_4);
		bool L_6;
		L_6 = StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_inline(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		// throw new JsonException (input_char);
		int32_t L_7 = __this->___input_char_7;
		JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC* L_8 = (JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_t48DFD14606B4526378BC99BBDCFC57D71F48D0CC_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		JsonException__ctor_mE5808C2CD34708ABDAA760ABDF055B3B18B81F83(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m0450608C24DDBAAE4F91FB406F3F4361E555D9AE_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (end_of_input)
		bool L_9 = __this->___end_of_input_4;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// if (fsm_context.Return) {
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_10 = __this->___fsm_context_5;
		NullCheck(L_10);
		bool L_11 = L_10->___Return_0;
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		// string_value = string_buffer.ToString ();
		StringBuilder_t* L_12 = __this->___string_buffer_10;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		__this->___string_value_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___string_value_11), (void*)L_13);
		// string_buffer.Remove (0, string_buffer.Length);
		StringBuilder_t* L_14 = __this->___string_buffer_10;
		StringBuilder_t* L_15 = __this->___string_buffer_10;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_14, 0, L_16, NULL);
		// token = fsm_return_table[state - 1];
		il2cpp_codegen_runtime_class_init_inline(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351_il2cpp_TypeInfo_var))->___fsm_return_table_0;
		int32_t L_19 = __this->___state_9;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->___token_12 = L_21;
		// if (token == (int) ParserToken.Char)
		int32_t L_22 = __this->___token_12;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00a0;
		}
	}
	{
		// token = input_char;
		int32_t L_23 = __this->___input_char_7;
		__this->___token_12 = L_23;
	}

IL_00a0:
	{
		// state = fsm_context.NextState;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_24 = __this->___fsm_context_5;
		NullCheck(L_24);
		int32_t L_25 = L_24->___NextState_1;
		__this->___state_9 = L_25;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// state = fsm_context.NextState;
		FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* L_26 = __this->___fsm_context_5;
		NullCheck(L_26);
		int32_t L_27 = L_26->___NextState_1;
		__this->___state_9 = L_27;
		// while (true) {
		goto IL_000c;
	}
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m2F861B0A24B895AB9397A8BA8051E0573E04214C (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// input_buffer = input_char;
		int32_t L_0 = __this->___input_char_7;
		__this->___input_buffer_6 = L_0;
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
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_Multicast(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* currentDelegate = reinterpret_cast<StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___ctx0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_Open(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___ctx0, method);
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenStaticInvoker(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* >::Invoke(__this->___method_ptr_0, method, NULL, ___ctx0);
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_ClosedStaticInvoker(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___ctx0);
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenVirtual(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___ctx0);
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenInterface(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___ctx0);
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenGenericVirtual(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___ctx0);
}
bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenGenericInterface(StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___ctx0);
}
// System.Void Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_m44D56332121111872D011F138A9FF2894CAEA011 (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_Multicast;
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler::Invoke(Gpm.Common.ThirdParty.LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6 (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler::BeginInvoke(Gpm.Common.ThirdParty.LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_m1A61C3274E74C330F29517E498DB12FB2C183C72 (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean Gpm.Common.ThirdParty.LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_m8D5790DF531741EBBBBBB14A732D5A48D5F26362 (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.Common.Multilanguage.GpmMultilanguage::Load(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmMultilanguage_Load_m64BF1A1200D870C1F1ED58F7A29066D3C59A97C4 (String_t* ___serviceName0, String_t* ___filepath1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) 
{
	{
		// MultilanguageImplementation.Instance.Load(serviceName, filepath, callback);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		String_t* L_2 = ___filepath1;
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_3 = ___callback2;
		NullCheck(L_0);
		MultilanguageImplementation_Load_m9C6084C3ADE6CD89F3FB3DC3564D309820D4BBA2(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.GpmMultilanguage::Unload(System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmMultilanguage_Unload_mA958270D234D40BB6ECD2B8E2AC97D4247BFD51A (String_t* ___serviceName0, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback1, const RuntimeMethod* method) 
{
	{
		// MultilanguageImplementation.Instance.Unload(serviceName, callback);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_2 = ___callback1;
		NullCheck(L_0);
		MultilanguageImplementation_Unload_m2137E31B9968AB5AEF38D4495A060EBB86A062D1(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.GpmMultilanguage::SelectLanguageByCode(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmMultilanguage_SelectLanguageByCode_m20EF001873BB32AEA37686E25C343E8470DFC096 (String_t* ___serviceName0, String_t* ___languageCode1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) 
{
	{
		// MultilanguageImplementation.Instance.SelectLangaugeByCode(serviceName, languageCode, callback);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		String_t* L_2 = ___languageCode1;
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_3 = ___callback2;
		NullCheck(L_0);
		MultilanguageImplementation_SelectLangaugeByCode_m5F7E5BE7345A930E55493D369C73145A9A267C51(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.GpmMultilanguage::SelectLanguageByNativeName(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmMultilanguage_SelectLanguageByNativeName_m597CC810811B4330ECAE37CEE7E95600E17093DA (String_t* ___serviceName0, String_t* ___natvieName1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) 
{
	{
		// MultilanguageImplementation.Instance.SelectLanguageByNativeName(serviceName, natvieName, callback);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		String_t* L_2 = ___natvieName1;
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_3 = ___callback2;
		NullCheck(L_0);
		MultilanguageImplementation_SelectLanguageByNativeName_m03A7C8C5520BB691EC1ECB3F6F179CA6ACA36E99(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.String Gpm.Common.Multilanguage.GpmMultilanguage::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmMultilanguage_GetString_m9AA9ADA44E20C00543898CF9C14EE6C0B65FC389 (String_t* ___serviceName0, String_t* ___stringKey1, const RuntimeMethod* method) 
{
	{
		// return MultilanguageImplementation.Instance.GetString(serviceName, stringKey);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		String_t* L_2 = ___stringKey1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = MultilanguageImplementation_GetString_mD31DA4791558D3077C39F2A3E49516900683B368(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String Gpm.Common.Multilanguage.GpmMultilanguage::GetSelectLanguage(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmMultilanguage_GetSelectLanguage_mC2DCC81A1E385DA7AAD51D7BAE07B8B9C59C1E5D (String_t* ___serviceName0, bool ___isNativeName1, const RuntimeMethod* method) 
{
	{
		// return MultilanguageImplementation.Instance.GetSelectLanguage(serviceName, isNativeName);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		bool L_2 = ___isNativeName1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = MultilanguageImplementation_GetSelectLanguage_m3DB6546060CA5DB2FC76BB5FF5C2884EE38DB567(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.String[] Gpm.Common.Multilanguage.GpmMultilanguage::GetSupportLanguages(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GpmMultilanguage_GetSupportLanguages_mFDBE8FAAB67AF49DA213784D4102E20044A63F63 (String_t* ___serviceName0, bool ___isNativeName1, const RuntimeMethod* method) 
{
	{
		// return MultilanguageImplementation.Instance.GetSupportLanguages(serviceName, isNativeName);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		bool L_2 = ___isNativeName1;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = MultilanguageImplementation_GetSupportLanguages_m049DD1CB491D0572F1C8793E4CC1FC18BE0EC0B9(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Gpm.Common.Multilanguage.GpmMultilanguage::IsLoadService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmMultilanguage_IsLoadService_mA1F6CE34F0DFF2B0C7779CA9A81582C30D2F93D5 (String_t* ___serviceName0, const RuntimeMethod* method) 
{
	{
		// return MultilanguageImplementation.Instance.IsLoadService(serviceName);
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0;
		L_0 = MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67(NULL);
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = MultilanguageImplementation_IsLoadService_m7D52473002E10E1D06BDABB819C868F7E45FFDAE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String Gpm.Common.Multilanguage.GpmMultilanguage::GetSystemLanguage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmMultilanguage_GetSystemLanguage_mC206413596D8865E0A2DB38D9A325472D72033CC (bool ___isNativeName0, const RuntimeMethod* method) 
{
	{
		// return MultilanguageUtil.GetSystemLanguage(isNativeName);
		bool L_0 = ___isNativeName0;
		String_t* L_1;
		L_1 = MultilanguageUtil_GetSystemLanguage_m8DE7E55A4B5FC39A50DEDEE2D98A76487944C0EA(L_0, NULL);
		return L_1;
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
void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_Multicast(MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* currentDelegate = reinterpret_cast<MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, ___resultMessage1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_Open(MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, ___resultMessage1, method);
}
void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_OpenStaticInvoker(MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___result0, ___resultMessage1);
}
void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_ClosedStaticInvoker(MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0, ___resultMessage1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60 (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___resultMessage1' to native representation
	char* ____resultMessage1_marshaled = NULL;
	____resultMessage1_marshaled = il2cpp_codegen_marshal_string(___resultMessage1);

	// Native function invocation
	il2cppPInvokeFunc(___result0, ____resultMessage1_marshaled);

	// Marshaling cleanup of parameter '___resultMessage1' native representation
	il2cpp_codegen_marshal_free(____resultMessage1_marshaled);
	____resultMessage1_marshaled = NULL;

}
// System.Void Gpm.Common.Multilanguage.MultilanguageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageCallback__ctor_mD56CEEBF085792FDF090D7355660F47CAF18E0EA (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_Multicast;
}
// System.Void Gpm.Common.Multilanguage.MultilanguageCallback::Invoke(Gpm.Common.Multilanguage.MultilanguageResultCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612 (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, ___resultMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.Common.Multilanguage.MultilanguageCallback::BeginInvoke(Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultilanguageCallback_BeginInvoke_mB42FB53E1C4D0FC29AC954D7E71031491918DEF3 (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultilanguageResultCode_t2354F4D1E560AC81AB56E44991B64DDC15825A01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(MultilanguageResultCode_t2354F4D1E560AC81AB56E44991B64DDC15825A01_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___resultMessage1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Gpm.Common.Multilanguage.MultilanguageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageCallback_EndInvoke_m8F3D636608CF6EEEBB71BE3CCD6340D5400986B9 (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Gpm.Common.Multilanguage.Internal.MultilanguageImplementation Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* MultilanguageImplementation_get_Instance_m9E275AC54602D2139381F289CA423DADBC2A3B67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_0 = ((MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_StaticFields*)il2cpp_codegen_static_fields_for(MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var))->___instance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// instance = new MultilanguageImplementation();
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_1 = (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09*)il2cpp_codegen_object_new(MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MultilanguageImplementation__ctor_m8FABDF9637057E77C76D4BBDBE8F22329ABD3E77(L_1, NULL);
		((MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_StaticFields*)il2cpp_codegen_static_fields_for(MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var))->___instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_StaticFields*)il2cpp_codegen_static_fields_for(MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var))->___instance_0), (void*)L_1);
	}

IL_0011:
	{
		// return instance;
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_2 = ((MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_StaticFields*)il2cpp_codegen_static_fields_for(MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09_il2cpp_TypeInfo_var))->___instance_0;
		return L_2;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::Load(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_Load_m9C6084C3ADE6CD89F3FB3DC3564D309820D4BBA2 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___languagePath1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CLoadU3Eb__0_m814122CF052257F07D946FCDB4BFE4B43604F967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_0 = (U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m42995361D0496C0FD5FE91E4C26E1AEEC08B26FB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_1 = V_0;
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_2 = ___callback2;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_4 = V_0;
		String_t* L_5 = ___serviceName0;
		NullCheck(L_4);
		L_4->___serviceName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___serviceName_2), (void*)L_5);
		// if (services.ContainsKey(serviceName) == true)
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_6 = __this->___services_1;
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___serviceName_2;
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273(L_6, L_8, Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		// callback(MultilanguageResultCode.ALREADY_LOADED, null);
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_10 = V_0;
		NullCheck(L_10);
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_11 = L_10->___callback_0;
		NullCheck(L_11);
		MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline(L_11, 1, (String_t*)NULL, NULL);
		// return;
		return;
	}

IL_003c:
	{
		// loader.Load(
		//     languagePath,
		//     (resultCode, xmlData, messageInfo) =>
		//     {
		//         callback(InitializeService(serviceName, resultCode, xmlData), messageInfo);
		//     });
		MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* L_12 = __this->___loader_2;
		String_t* L_13 = ___languagePath1;
		U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* L_14 = V_0;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_15 = (Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85*)il2cpp_codegen_object_new(Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_3__ctor_mE58DE62C438CF8A7D5892E6A404C0174C5FE1CFA(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CLoadU3Eb__0_m814122CF052257F07D946FCDB4BFE4B43604F967_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		MultilanguageLoader_Load_m1F73DCDB28C74DFDD9538DCBCE9E67E5E177C03B(L_12, L_13, L_15, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::Unload(System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_Unload_m2137E31B9968AB5AEF38D4495A060EBB86A062D1 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m37821FBC2C9EEF3EA90756C9909AF8FEDA6EB04C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (services.ContainsKey(serviceName) == true)
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = __this->___services_1;
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273(L_0, L_1, Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// services.Remove(serviceName);
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_3 = __this->___services_1;
		String_t* L_4 = ___serviceName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m37821FBC2C9EEF3EA90756C9909AF8FEDA6EB04C(L_3, L_4, Dictionary_2_Remove_m37821FBC2C9EEF3EA90756C9909AF8FEDA6EB04C_RuntimeMethod_var);
		// callback(MultilanguageResultCode.SUCCESS, null);
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_6 = ___callback1;
		NullCheck(L_6);
		MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline(L_6, 0, (String_t*)NULL, NULL);
		return;
	}

IL_0024:
	{
		// callback(MultilanguageResultCode.NOT_LOADED, null);
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_7 = ___callback1;
		NullCheck(L_7);
		MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline(L_7, 2, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::SelectLangaugeByCode(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_SelectLangaugeByCode_m5F7E5BE7345A930E55493D369C73145A9A267C51 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___languageCode1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (services.TryGetValue(serviceName, out service) == true)
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = __this->___services_1;
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// MultilanguageResultCode resultCode = service.SelectLanguage(languageCode);
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_3 = V_0;
		String_t* L_4 = ___languageCode1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = MultilanguageServiceData_SelectLanguage_mF2F0936CD642134F518C467B50864666FA36191E(L_3, L_4, NULL);
		V_1 = L_5;
		// callback(resultCode, null);
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_6 = ___callback2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline(L_6, L_7, (String_t*)NULL, NULL);
		return;
	}

IL_0021:
	{
		// callback(MultilanguageResultCode.SERVICE_NOT_FOUND, null);
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_8 = ___callback2;
		NullCheck(L_8);
		MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline(L_8, 8, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::SelectLanguageByNativeName(System.String,System.String,Gpm.Common.Multilanguage.MultilanguageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation_SelectLanguageByNativeName_m03A7C8C5520BB691EC1ECB3F6F179CA6ACA36E99 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___nativeName1, MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* ___callback2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string languageCode = GetLanguageCodeByNativeName(nativeName);
		String_t* L_0 = ___nativeName1;
		String_t* L_1;
		L_1 = MultilanguageImplementation_GetLanguageCodeByNativeName_mE78E4C185915C0A87F7BDE38667F8AFE281FA0B8(__this, L_0, NULL);
		V_0 = L_1;
		// if (string.IsNullOrEmpty(languageCode) == true)
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// languageCode = nativeName;
		String_t* L_4 = ___nativeName1;
		V_0 = L_4;
	}

IL_0012:
	{
		// SelectLangaugeByCode(serviceName, languageCode, callback);
		String_t* L_5 = ___serviceName0;
		String_t* L_6 = V_0;
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_7 = ___callback2;
		MultilanguageImplementation_SelectLangaugeByCode_m5F7E5BE7345A930E55493D369C73145A9A267C51(__this, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageImplementation_GetString_mD31DA4791558D3077C39F2A3E49516900683B368 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, String_t* ___stringKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* V_0 = NULL;
	{
		// if (services.TryGetValue(serviceName, out languageInfo) == false)
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = __this->___services_1;
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0016:
	{
		// return languageInfo.GetString(stringKey);
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_4 = V_0;
		String_t* L_5 = ___stringKey1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = MultilanguageServiceData_GetString_m3609B598E26F9D66C6298747089C74072E68977B(L_4, L_5, NULL);
		return L_6;
	}
}
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetSelectLanguage(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageImplementation_GetSelectLanguage_m3DB6546060CA5DB2FC76BB5FF5C2884EE38DB567 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, bool ___isNativeName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (services.TryGetValue(serviceName, out service) == true)
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = __this->___services_1;
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		// string code = service.GetSelectLanguage();
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = MultilanguageServiceData_GetSelectLanguage_m54B7D339E7B25D9CF5B405C278F512563D7BB428_inline(L_3, NULL);
		V_1 = L_4;
		// if (isNativeName == false)
		bool L_5 = ___isNativeName1;
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return code;
		String_t* L_6 = V_1;
		return L_6;
	}

IL_001c:
	{
	}
	try
	{// begin try (depth: 1)
		// return CultureInfo.GetCultureInfo(code).NativeName;
		String_t* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_GetCultureInfo_m81DD5F9FC8266E13474181FC339738F52746C0F0(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Globalization.CultureInfo::get_NativeName() */, L_8);
		V_2 = L_9;
		goto IL_005c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002b;
		}
		throw e;
	}

CATCH_002b:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// GpmLogger.Error(
		//     string.Format("Language information not found. (language code: {0})(message: {1})", code, e.Message),
		//     GpmMultilanguage.SERVICE_NAME, GetType());
		String_t* L_10 = V_1;
		Exception_t* L_11 = V_3;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_11);
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9080B41A18F32815CD5D19C48AFB34202EDE4CCF)), L_10, L_12, NULL);
		Type_t* L_14;
		L_14 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1E234DB0BB6DA5424061E6FF869CA2A24E9E8EE)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3599345A0FEDD2EF5AAF4892F6566185AFD17D53)), NULL);
		// return code;
		String_t* L_15 = V_1;
		V_2 = L_15;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_0056:
	{
		// return string.Empty;
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_16;
	}

IL_005c:
	{
		// }
		String_t* L_17 = V_2;
		return L_17;
	}
}
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::IsLoadService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultilanguageImplementation_IsLoadService_m7D52473002E10E1D06BDABB819C868F7E45FFDAE (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return services.ContainsKey(serviceName);
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = __this->___services_1;
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273(L_0, L_1, Dictionary_2_ContainsKey_m7802B65474E946CC7AEC60180753FB19C7C54273_RuntimeMethod_var);
		return L_2;
	}
}
// System.String[] Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetSupportLanguages(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MultilanguageImplementation_GetSupportLanguages_m049DD1CB491D0572F1C8793E4CC1FC18BE0EC0B9 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, bool ___isNativeName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral127F2A40B8E374463C614253E4FD926E564AA678);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDED9589A5F13CEA61E6C3D8009CFC78F17B585F5);
		s_Il2CppMethodInitialized = true;
	}
	MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (services.TryGetValue(serviceName, out languageInfo) == true)
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = __this->___services_1;
		String_t* L_1 = ___serviceName0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mBA542C76460CA63363E8E499FCDE6F139F2841A3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00cf;
		}
	}
	{
		// List<string> result = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_3;
		// var supportCodes = languageInfo.GetSupportLanguages();
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = MultilanguageServiceData_GetSupportLanguages_m0C9FC3F142797746ACD79EC3BA4F94DFE5F05876(L_4, NULL);
		V_2 = L_5;
		// if (isNativeName == false)
		bool L_6 = ___isNativeName1;
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		// foreach (var code in supportCodes)
		RuntimeObject* L_7 = V_2;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_7);
		V_3 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_3;
					if (!L_9)
					{
						goto IL_004f;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003c_1;
			}

IL_002c_1:
			{
				// foreach (var code in supportCodes)
				RuntimeObject* L_11 = V_3;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_11);
				V_4 = L_12;
				// result.Add(code);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_1;
				String_t* L_14 = V_4;
				NullCheck(L_13);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_003c_1:
			{
				// foreach (var code in supportCodes)
				RuntimeObject* L_15 = V_3;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// return result.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_1;
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_17, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_18;
	}

IL_0057:
	{
		// foreach (var code in supportCodes)
		RuntimeObject* L_19 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_19);
		V_3 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00be:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_21 = V_3;
					if (!L_21)
					{
						goto IL_00c7;
					}
				}
				{
					RuntimeObject* L_22 = V_3;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00c7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b4_1;
			}

IL_0060_1:
			{
				// foreach (var code in supportCodes)
				RuntimeObject* L_23 = V_3;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_23);
				V_5 = L_24;
			}
			try
			{// begin try (depth: 2)
				// CultureInfo cultureInfo = CultureInfo.GetCultureInfo(code);
				String_t* L_25 = V_5;
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26;
				L_26 = CultureInfo_GetCultureInfo_m81DD5F9FC8266E13474181FC339738F52746C0F0(L_25, NULL);
				V_6 = L_26;
				// result.Add(cultureInfo.NativeName);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = V_1;
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_28 = V_6;
				NullCheck(L_28);
				String_t* L_29;
				L_29 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Globalization.CultureInfo::get_NativeName() */, L_28);
				NullCheck(L_27);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_27, L_29, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				// }
				goto IL_00b4_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0080_1;
				}
				throw e;
			}

CATCH_0080_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// GpmLogger.Error(
				//     string.Format("Language information not found. (language code: {0})(message: {1})", code, e.Message),
				//     GpmMultilanguage.SERVICE_NAME, GetType());
				String_t* L_30 = V_5;
				Exception_t* L_31 = V_7;
				NullCheck(L_31);
				String_t* L_32;
				L_32 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_31);
				String_t* L_33;
				L_33 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9080B41A18F32815CD5D19C48AFB34202EDE4CCF)), L_30, L_32, NULL);
				Type_t* L_34;
				L_34 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
				GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1E234DB0BB6DA5424061E6FF869CA2A24E9E8EE)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDED9589A5F13CEA61E6C3D8009CFC78F17B585F5)), NULL);
				// result.Add(code);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35 = V_1;
				String_t* L_36 = V_5;
				NullCheck(L_35);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_35, L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var)));
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00b4_1;
			}// end catch (depth: 2)

IL_00b4_1:
			{
				// foreach (var code in supportCodes)
				RuntimeObject* L_37 = V_3;
				NullCheck(L_37);
				bool L_38;
				L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_37);
				if (L_38)
				{
					goto IL_0060_1;
				}
			}
			{
				goto IL_00c8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c8:
	{
		// return result.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = V_1;
		NullCheck(L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40;
		L_40 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_39, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		return L_40;
	}

IL_00cf:
	{
		// GpmLogger.Debug("Not load language file.", serviceName, GetType());
		String_t* L_41 = ___serviceName0;
		Type_t* L_42;
		L_42 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		GpmLogger_Debug_m89CA3B3C9DFE6B12D0EE134721C4A3A62E40F64C(_stringLiteral127F2A40B8E374463C614253E4FD926E564AA678, L_41, L_42, _stringLiteralDED9589A5F13CEA61E6C3D8009CFC78F17B585F5, NULL);
		// return null;
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::GetLanguageCodeByNativeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageImplementation_GetLanguageCodeByNativeName_mE78E4C185915C0A87F7BDE38667F8AFE281FA0B8 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___nativeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* V_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// CultureInfo[] cultures = CultureInfo.GetCultures(CultureTypes.AllCultures);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_0;
		L_0 = CultureInfo_GetCultures_mBE611636F9A8147B8FADF38495713F146814E38B(7, NULL);
		V_0 = L_0;
		// CultureInfo findCulture = null;
		V_1 = (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL;
		// for (int i = 0; i < cultures.Length; i++)
		V_2 = 0;
		goto IL_0028;
	}

IL_000d:
	{
		// if (cultures[i].NativeName.Equals(nativeName, StringComparison.InvariantCultureIgnoreCase) == true)
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_1 = V_0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Globalization.CultureInfo::get_NativeName() */, L_4);
		String_t* L_6 = ___nativeName0;
		NullCheck(L_5);
		bool L_7;
		L_7 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_5, L_6, 3, NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		// findCulture = cultures[i];
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		// break;
		goto IL_002e;
	}

IL_0024:
	{
		// for (int i = 0; i < cultures.Length; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < cultures.Length; i++)
		int32_t L_13 = V_2;
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		// if (findCulture == null)
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15 = V_1;
		if (L_15)
		{
			goto IL_0037;
		}
	}
	{
		// return string.Empty;
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_16;
	}

IL_0037:
	{
		// return findCulture.Name;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Globalization.CultureInfo::get_Name() */, L_17);
		return L_18;
	}
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::InitializeService(System.String,Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageImplementation_InitializeService_m2B6FC847D933CB460A965E1C5E312B07D94BD7E1 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, String_t* ___serviceName0, int32_t ___resultCode1, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___xmlData2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9FA145C01395EEF4C6E093C519C01F3DAB6C6474_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* V_0 = NULL;
	{
		// if (resultCode != MultilanguageResultCode.SUCCESS)
		int32_t L_0 = ___resultCode1;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return resultCode;
		int32_t L_1 = ___resultCode1;
		return L_1;
	}

IL_0005:
	{
		// MultilanguageServiceData languageInfo = new MultilanguageServiceData(serviceName);
		String_t* L_2 = ___serviceName0;
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_3 = (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826*)il2cpp_codegen_object_new(MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MultilanguageServiceData__ctor_mB981E6EE3844213B1F9F22A655CDD4494C90514C(L_3, L_2, NULL);
		V_0 = L_3;
		// resultCode = languageInfo.Initialize(xmlData);
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_4 = V_0;
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_5 = ___xmlData2;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = MultilanguageServiceData_Initialize_m54A51ADE58994FA8493D59BAF2BFA1BF15367A81(L_4, L_5, NULL);
		___resultCode1 = L_6;
		// if (resultCode == MultilanguageResultCode.SUCCESS)
		int32_t L_7 = ___resultCode1;
		if (L_7)
		{
			goto IL_0025;
		}
	}
	{
		// services.Add(serviceName, languageInfo);
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_8 = __this->___services_1;
		String_t* L_9 = ___serviceName0;
		MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* L_10 = V_0;
		NullCheck(L_8);
		Dictionary_2_Add_m9FA145C01395EEF4C6E093C519C01F3DAB6C6474(L_8, L_9, L_10, Dictionary_2_Add_m9FA145C01395EEF4C6E093C519C01F3DAB6C6474_RuntimeMethod_var);
	}

IL_0025:
	{
		// return resultCode;
		int32_t L_11 = ___resultCode1;
		return L_11;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageImplementation__ctor_m8FABDF9637057E77C76D4BBDBE8F22329ABD3E77 (MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB25C69F92D696B6DD215671832368171A458FCFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, MultilanguageServiceData> services = new Dictionary<string, MultilanguageServiceData>();
		Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30* L_0 = (Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30*)il2cpp_codegen_object_new(Dictionary_2_t2A777114F1909A10358110A1B2AEBFF8B7610C30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB25C69F92D696B6DD215671832368171A458FCFC(L_0, Dictionary_2__ctor_mB25C69F92D696B6DD215671832368171A458FCFC_RuntimeMethod_var);
		__this->___services_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___services_1), (void*)L_0);
		// private MultilanguageLoader loader = new MultilanguageLoader();
		MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* L_1 = (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65*)il2cpp_codegen_object_new(MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MultilanguageLoader__ctor_mD5B5BD364A303CD2A36E2D07A14F72C3D8877D6E(L_1, NULL);
		__this->___loader_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loader_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m42995361D0496C0FD5FE91E4C26E1AEEC08B26FB (U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageImplementation/<>c__DisplayClass5_0::<Load>b__0(Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CLoadU3Eb__0_m814122CF052257F07D946FCDB4BFE4B43604F967 (U3CU3Ec__DisplayClass5_0_t5F267DAB4BBB71AFEF2B6D096C0A528DCC93783B* __this, int32_t ___resultCode0, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___xmlData1, String_t* ___messageInfo2, const RuntimeMethod* method) 
{
	{
		// callback(InitializeService(serviceName, resultCode, xmlData), messageInfo);
		MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* L_0 = __this->___callback_0;
		MultilanguageImplementation_t33749AFF2469E30B22D3EE1BCF088B9FFE9F7C09* L_1 = __this->___U3CU3E4__this_1;
		String_t* L_2 = __this->___serviceName_2;
		int32_t L_3 = ___resultCode0;
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_4 = ___xmlData1;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = MultilanguageImplementation_InitializeService_m2B6FC847D933CB460A965E1C5E312B07D94BD7E1(L_1, L_2, L_3, L_4, NULL);
		String_t* L_6 = ___messageInfo2;
		NullCheck(L_0);
		MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline(L_0, L_5, L_6, NULL);
		// });
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::Load(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_Load_m1F73DCDB28C74DFDD9538DCBCE9E67E5E177C03B (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___filepath0, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A39551FDCDB08A29A9FC3E9C07811D9A4F38ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral995425C6205B49314F8CCEB8EA6A491DF223FE00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD563997CDCF40B1A5AB801C16C2FEE93606C69BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3063325FD751AEC72966430C6537525730A5E9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// LoadType loadType = LoadType.LOCAL_FILE;
		V_0 = 0;
		// if (IsWebPath(filepath) == true)
		String_t* L_0 = ___filepath0;
		bool L_1;
		L_1 = MultilanguageLoader_IsWebPath_mCFF75BA07D0A52816D791DB83A10980EB78793B8(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// loadType = LoadType.DOWNLOAD_FILE;
		V_0 = 1;
		goto IL_00a8;
	}

IL_0012:
	{
		// if (filepath.StartsWith("/", StringComparison.Ordinal) == false)
		String_t* L_2 = ___filepath0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_2, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 4, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// filepath = string.Format("/{0}", filepath);
		String_t* L_4 = ___filepath0;
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral1A39551FDCDB08A29A9FC3E9C07811D9A4F38ABE, L_4, NULL);
		___filepath0 = L_5;
	}

IL_002d:
	{
		// if (filepath.StartsWith(STREAMING_ASSETS_DIRECTORY_NAME, StringComparison.Ordinal) == true)
		String_t* L_6 = ___filepath0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_6, _stringLiteralD563997CDCF40B1A5AB801C16C2FEE93606C69BA, 4, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// loadType = LoadType.STREAMING_ASSET;
		V_0 = 2;
		// filepath = filepath.Replace(STREAMING_ASSETS_DIRECTORY_NAME, "");
		String_t* L_8 = ___filepath0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteralD563997CDCF40B1A5AB801C16C2FEE93606C69BA, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		___filepath0 = L_9;
		goto IL_009e;
	}

IL_0051:
	{
		// else if (filepath.Contains(RESOURCE_DIRECTORY_NAME) == true)
		String_t* L_10 = ___filepath0;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_10, _stringLiteralF3063325FD751AEC72966430C6537525730A5E9C, NULL);
		if (!L_11)
		{
			goto IL_009e;
		}
	}
	{
		// loadType = LoadType.RESOURCE_ASSET;
		V_0 = 3;
		// int startIndex = filepath.LastIndexOf(RESOURCE_DIRECTORY_NAME, StringComparison.Ordinal) + RESOURCE_DIRECTORY_NAME.Length - 1;
		String_t* L_12 = ___filepath0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_LastIndexOf_m436B3CDFB93031C7D7710274C092EE52CEAF419F(L_12, _stringLiteralF3063325FD751AEC72966430C6537525730A5E9C, 4, NULL);
		NullCheck(_stringLiteralF3063325FD751AEC72966430C6537525730A5E9C);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralF3063325FD751AEC72966430C6537525730A5E9C, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1));
		// filepath = filepath.Substring(startIndex);
		String_t* L_15 = ___filepath0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_15, L_16, NULL);
		___filepath0 = L_17;
		// int commaLastIndex = filepath.LastIndexOf(".", StringComparison.Ordinal);
		String_t* L_18 = ___filepath0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_LastIndexOf_m436B3CDFB93031C7D7710274C092EE52CEAF419F(L_18, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, 4, NULL);
		V_2 = L_19;
		// if (commaLastIndex > -1)
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) <= ((int32_t)(-1))))
		{
			goto IL_009e;
		}
	}
	{
		// filepath = filepath.Substring(0, commaLastIndex);
		String_t* L_21 = ___filepath0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, 0, L_22, NULL);
		___filepath0 = L_23;
	}

IL_009e:
	{
		// filepath = filepath.TrimStart('/');
		String_t* L_24 = ___filepath0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_TrimStart_m210863A5E84BC22EC0487A1543D3680979DD87EE(L_24, ((int32_t)47), NULL);
		___filepath0 = L_25;
	}

IL_00a8:
	{
		int32_t L_26 = V_0;
		switch (L_26)
		{
			case 0:
			{
				goto IL_00bf;
			}
			case 1:
			{
				goto IL_00d4;
			}
			case 2:
			{
				goto IL_00de;
			}
			case 3:
			{
				goto IL_0116;
			}
		}
	}
	{
		return;
	}

IL_00bf:
	{
		// string localPath = Path.Combine(Application.dataPath, filepath);
		String_t* L_27;
		L_27 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		String_t* L_28 = ___filepath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_27, L_28, NULL);
		V_3 = L_29;
		// LoadLocalFile(localPath, callback);
		String_t* L_30 = V_3;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_31 = ___callback1;
		MultilanguageLoader_LoadLocalFile_m07B31FE4E3811FDAB4F4D415176CEDB072B071B2(__this, L_30, L_31, NULL);
		// break;
		return;
	}

IL_00d4:
	{
		// LoadDownloadFile(filepath, false, callback);
		String_t* L_32 = ___filepath0;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_33 = ___callback1;
		MultilanguageLoader_LoadDownloadFile_mA4585F847811BF6B1F87BB42A2A1013CAFD197FA(__this, L_32, (bool)0, L_33, NULL);
		// break;
		return;
	}

IL_00de:
	{
		// string streamingAssetsPath = string.Empty;
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_34;
		// streamingAssetsPath = string.Format("jar:file://{0}!/assets/{1}", Application.dataPath, filepath);
		String_t* L_35;
		L_35 = Application_get_dataPath_mBBC742FA17F8BD4156C4CB98480BEFBFB0BBB6D9(NULL);
		String_t* L_36 = ___filepath0;
		String_t* L_37;
		L_37 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral995425C6205B49314F8CCEB8EA6A491DF223FE00, L_35, L_36, NULL);
		V_4 = L_37;
		// if (IsWebPath(streamingAssetsPath) == true)
		String_t* L_38 = V_4;
		bool L_39;
		L_39 = MultilanguageLoader_IsWebPath_mCFF75BA07D0A52816D791DB83A10980EB78793B8(__this, L_38, NULL);
		if (!L_39)
		{
			goto IL_010c;
		}
	}
	{
		// LoadDownloadFile(streamingAssetsPath, true, callback);
		String_t* L_40 = V_4;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_41 = ___callback1;
		MultilanguageLoader_LoadDownloadFile_mA4585F847811BF6B1F87BB42A2A1013CAFD197FA(__this, L_40, (bool)1, L_41, NULL);
		return;
	}

IL_010c:
	{
		// LoadLocalFile(streamingAssetsPath, callback);
		String_t* L_42 = V_4;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_43 = ___callback1;
		MultilanguageLoader_LoadLocalFile_m07B31FE4E3811FDAB4F4D415176CEDB072B071B2(__this, L_42, L_43, NULL);
		// break;
		return;
	}

IL_0116:
	{
		// LoadResourceAsset(filepath, callback);
		String_t* L_44 = ___filepath0;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_45 = ___callback1;
		MultilanguageLoader_LoadResourceAsset_m05D9AF82DA6294F25AFD5EB169B6F8B4610D6FFE(__this, L_44, L_45, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::LoadLocalFile(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_LoadLocalFile_m07B31FE4E3811FDAB4F4D415176CEDB072B071B2 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___localPath0, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CLoadLocalFileU3Eb__0_m30A265313BC27A26901C16731556E690E1B8BAC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlHelper_LoadXmlFromFile_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_m906D987FED0AD45259D04BF433762B46E13A84DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* L_0 = (U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m5F70A8CE9C70DBB03E0F1B6DF1331CD73753D88B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* L_1 = V_0;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_2 = ___callback1;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// XmlHelper.LoadXmlFromFile<MultilanguageXml>(
		//     localPath,
		//     (xmlResultCode, xmlData, xmlResultMessage) =>
		//     {
		//         callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		//     });
		String_t* L_4 = ___localPath0;
		U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* L_5 = V_0;
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_6 = (Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9*)il2cpp_codegen_object_new(Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_3__ctor_mB59AFF8DE99B26F342D0A168F0B90D60BA4D2AB7(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CLoadLocalFileU3Eb__0_m30A265313BC27A26901C16731556E690E1B8BAC4_RuntimeMethod_var), NULL);
		XmlHelper_LoadXmlFromFile_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_m906D987FED0AD45259D04BF433762B46E13A84DB(L_4, L_6, XmlHelper_LoadXmlFromFile_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_m906D987FED0AD45259D04BF433762B46E13A84DB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::LoadResourceAsset(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_LoadResourceAsset_m05D9AF82DA6294F25AFD5EB169B6F8B4610D6FFE (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___assetName0, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CLoadResourceAssetU3Eb__0_m1BC2CF7424800C730E590CF6991469C2278940CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* V_0 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* L_0 = (U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mF312D20807F5AD4CE3F178E77809AD740B99F713(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* L_1 = V_0;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_2 = ___callback1;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// TextAsset asset = Resources.Load<TextAsset>(assetName);
		String_t* L_4 = ___assetName0;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_5;
		L_5 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A(L_4, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m6079ADE3574BF9526436A2BD6BFE75EA94BF193A_RuntimeMethod_var);
		V_1 = L_5;
		// if (asset == null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// callback(MultilanguageResultCode.FILE_NOT_FOUND, null, null);
		U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* L_8 = V_0;
		NullCheck(L_8);
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_9 = L_8->___callback_0;
		NullCheck(L_9);
		Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline(L_9, 3, (MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B*)NULL, (String_t*)NULL, NULL);
		// return;
		return;
	}

IL_0033:
	{
		// XmlHelper.LoadXmlFromText<MultilanguageXml>(
		//     asset.text,
		//     (xmlResultCode, xmlData, xmlResultMessage) =>
		//     {
		//         callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		//     });
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_10, NULL);
		U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* L_12 = V_0;
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_13 = (Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9*)il2cpp_codegen_object_new(Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_3__ctor_mB59AFF8DE99B26F342D0A168F0B90D60BA4D2AB7(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CLoadResourceAssetU3Eb__0_m1BC2CF7424800C730E590CF6991469C2278940CB_RuntimeMethod_var), NULL);
		XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C(L_11, L_13, XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::LoadDownloadFile(System.String,System.Boolean,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader_LoadDownloadFile_mA4585F847811BF6B1F87BB42A2A1013CAFD197FA (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___url0, bool ___isStreamingAsset1, Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectContainer_t98441798C4266C204E2770FC565ABBA3E337C1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__0_mFD7AB3E95BCEDD703866583D735E98DBC06EF574_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E234DB0BB6DA5424061E6FF869CA2A24E9E8EE);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* L_0 = (U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m2F1CD533E1B8E8CF524422CF5DC287DDA9649E27(L_0, NULL);
		U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* L_1 = L_0;
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_2 = ___callback2;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* L_3 = L_1;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// Action<MultilanguageResultCode, string, string> requestCallback =
		//     (result, loadText, resultMessage) =>
		//     {
		//         if (result != MultilanguageResultCode.SUCCESS)
		//         {
		//             callback(result, null, resultMessage);
		//             return;
		//         }
		// 
		//         if (string.IsNullOrEmpty(loadText) == true)
		//         {
		//             callback(MultilanguageResultCode.FILE_PARSING_ERROR, null, null);
		//             return;
		//         }
		// 
		//         XmlHelper.LoadXmlFromText<MultilanguageXml>(
		//             loadText,
		//             (xmlResultCode, xmlData, xmlResultMessage) =>
		//             {
		//                 callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		//             });
		//     };
		Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* L_4 = (Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01*)il2cpp_codegen_object_new(Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_3__ctor_mEDF25404A5FA527BFEEE7FA582C85C127925BC09(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__0_mFD7AB3E95BCEDD703866583D735E98DBC06EF574_RuntimeMethod_var), NULL);
		V_0 = L_4;
		// IEnumerator loadEnumerator = DownloadFile(url, requestCallback);
		String_t* L_5 = ___url0;
		Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = MultilanguageLoader_DownloadFile_mC17B21EB5A1ECEE450764F0D34D85A1AC2D7AFC6(__this, L_5, L_6, NULL);
		V_1 = L_7;
		// if (monoObject == null)
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_8 = __this->___monoObject_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// monoObject = GameObjectContainer.GetGameObject(GpmMultilanguage.SERVICE_NAME).GetComponent<MonoBehaviour>();
		il2cpp_codegen_runtime_class_init_inline(GameObjectContainer_t98441798C4266C204E2770FC565ABBA3E337C1AB_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObjectContainer_GetGameObject_mF9FEAAB7CDD93A8D3248A0DFD743112DEF4986AD(_stringLiteralF1E234DB0BB6DA5424061E6FF869CA2A24E9E8EE, NULL);
		NullCheck(L_10);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_11;
		L_11 = GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A(L_10, GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A_RuntimeMethod_var);
		__this->___monoObject_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monoObject_2), (void*)L_11);
	}

IL_004b:
	{
		// monoObject.StartCoroutine(loadEnumerator);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_12 = __this->___monoObject_2;
		RuntimeObject* L_13 = V_1;
		NullCheck(L_12);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Gpm.Common.Multilanguage.Internal.MultilanguageLoader::DownloadFile(System.String,System.Action`3<Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultilanguageLoader_DownloadFile_mC17B21EB5A1ECEE450764F0D34D85A1AC2D7AFC6 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___url0, Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* L_0 = (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32*)il2cpp_codegen_object_new(U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadFileU3Ed__8__ctor_mE5AF930518457C7ADC4D211804472562A41A947E(L_0, 0, NULL);
		U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		L_1->___url_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___url_2), (void*)L_2);
		U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* L_3 = L_1;
		Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* L_4 = ___callback1;
		NullCheck(L_3);
		L_3->___callback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_3), (void*)L_4);
		return L_3;
	}
}
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageLoader::IsWebPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultilanguageLoader_IsWebPath_mCFF75BA07D0A52816D791DB83A10980EB78793B8 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00ED444101CADBDD612603B145DC44E57F6FCA22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return path.Contains("://") == true || path.Contains(":///") == true;
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___path0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral00ED444101CADBDD612603B145DC44E57F6FCA22, NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageLoader::GetResultCode(Gpm.Common.Util.XmlHelper/ResponseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageLoader_GetResultCode_m91277E97E83CD75CA795240F4ED0AD74E4EDD276 (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, int32_t ___xmlResponseCode0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___xmlResponseCode0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___xmlResponseCode0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0011;
	}

IL_0009:
	{
		// resultCode = MultilanguageResultCode.SUCCESS;
		V_0 = 0;
		// break;
		goto IL_0013;
	}

IL_000d:
	{
		// resultCode = MultilanguageResultCode.FILE_NOT_FOUND;
		V_0 = 3;
		// break;
		goto IL_0013;
	}

IL_0011:
	{
		// resultCode = MultilanguageResultCode.FILE_PARSING_ERROR;
		V_0 = 5;
	}

IL_0013:
	{
		// return resultCode;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageLoader__ctor_mD5B5BD364A303CD2A36E2D07A14F72C3D8877D6E (MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5F70A8CE9C70DBB03E0F1B6DF1331CD73753D88B (U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass5_0::<LoadLocalFile>b__0(Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CLoadLocalFileU3Eb__0_m30A265313BC27A26901C16731556E690E1B8BAC4 (U3CU3Ec__DisplayClass5_0_t5321BAD78E70041FC90961D8445BE53F0D63715D* __this, int32_t ___xmlResultCode0, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___xmlData1, String_t* ___xmlResultMessage2, const RuntimeMethod* method) 
{
	{
		// callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_0 = __this->___callback_0;
		MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* L_1 = __this->___U3CU3E4__this_1;
		int32_t L_2 = ___xmlResultCode0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = MultilanguageLoader_GetResultCode_m91277E97E83CD75CA795240F4ED0AD74E4EDD276(L_1, L_2, NULL);
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_4 = ___xmlData1;
		String_t* L_5 = ___xmlResultMessage2;
		NullCheck(L_0);
		Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline(L_0, L_3, L_4, L_5, NULL);
		// });
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mF312D20807F5AD4CE3F178E77809AD740B99F713 (U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass6_0::<LoadResourceAsset>b__0(Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CLoadResourceAssetU3Eb__0_m1BC2CF7424800C730E590CF6991469C2278940CB (U3CU3Ec__DisplayClass6_0_t85AFDF4D8EBA04A5B5D1758748DA815A3FA0B296* __this, int32_t ___xmlResultCode0, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___xmlData1, String_t* ___xmlResultMessage2, const RuntimeMethod* method) 
{
	{
		// callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_0 = __this->___callback_0;
		MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* L_1 = __this->___U3CU3E4__this_1;
		int32_t L_2 = ___xmlResultCode0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = MultilanguageLoader_GetResultCode_m91277E97E83CD75CA795240F4ED0AD74E4EDD276(L_1, L_2, NULL);
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_4 = ___xmlData1;
		String_t* L_5 = ___xmlResultMessage2;
		NullCheck(L_0);
		Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline(L_0, L_3, L_4, L_5, NULL);
		// });
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m2F1CD533E1B8E8CF524422CF5DC287DDA9649E27 (U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::<LoadDownloadFile>b__0(Gpm.Common.Multilanguage.MultilanguageResultCode,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__0_mFD7AB3E95BCEDD703866583D735E98DBC06EF574 (U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* __this, int32_t ___result0, String_t* ___loadText1, String_t* ___resultMessage2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__1_mB550A99644C2C501D71D7D76A7A624FD6D395667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* V_0 = NULL;
	Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		// if (result != MultilanguageResultCode.SUCCESS)
		int32_t L_0 = ___result0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// callback(result, null, resultMessage);
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_1 = __this->___callback_0;
		int32_t L_2 = ___result0;
		String_t* L_3 = ___resultMessage2;
		NullCheck(L_1);
		Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline(L_1, L_2, (MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B*)NULL, L_3, NULL);
		// return;
		return;
	}

IL_0012:
	{
		// if (string.IsNullOrEmpty(loadText) == true)
		String_t* L_4 = ___loadText1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// callback(MultilanguageResultCode.FILE_PARSING_ERROR, null, null);
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_6 = __this->___callback_0;
		NullCheck(L_6);
		Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline(L_6, 5, (MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B*)NULL, (String_t*)NULL, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// XmlHelper.LoadXmlFromText<MultilanguageXml>(
		//     loadText,
		//     (xmlResultCode, xmlData, xmlResultMessage) =>
		//     {
		//         callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		//     });
		String_t* L_7 = ___loadText1;
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_8 = __this->___U3CU3E9__1_2;
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			goto IL_0049;
		}
	}
	{
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_10 = (Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9*)il2cpp_codegen_object_new(Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_3__ctor_mB59AFF8DE99B26F342D0A168F0B90D60BA4D2AB7(L_10, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__1_mB550A99644C2C501D71D7D76A7A624FD6D395667_RuntimeMethod_var), NULL);
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_11 = L_10;
		V_0 = L_11;
		__this->___U3CU3E9__1_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_2), (void*)L_11);
		Action_3_tB359E61A35AAA22B400A92D92F49D1BDB7C538F9* L_12 = V_0;
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_0049:
	{
		XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C(G_B6_1, G_B6_0, XmlHelper_LoadXmlFromText_TisMultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B_mF0FDAA296FD3156FB380989C800BF0A9D26B6F6C_RuntimeMethod_var);
		// };
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<>c__DisplayClass7_0::<LoadDownloadFile>b__1(Gpm.Common.Util.XmlHelper/ResponseCode,Gpm.Common.Multilanguage.Internal.MultilanguageXml,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CLoadDownloadFileU3Eb__1_mB550A99644C2C501D71D7D76A7A624FD6D395667 (U3CU3Ec__DisplayClass7_0_t4EEC2A73F099E4737C884B1119DDE4B11C5AC86C* __this, int32_t ___xmlResultCode0, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___xmlData1, String_t* ___xmlResultMessage2, const RuntimeMethod* method) 
{
	{
		// callback(GetResultCode(xmlResultCode), xmlData, xmlResultMessage);
		Action_3_tE125F3EA0A78A84AA8A8E06E266737EAE7155C85* L_0 = __this->___callback_0;
		MultilanguageLoader_t2402A7F3BB0B7100B82EF40B58FEDA60B67C6C65* L_1 = __this->___U3CU3E4__this_1;
		int32_t L_2 = ___xmlResultCode0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = MultilanguageLoader_GetResultCode_m91277E97E83CD75CA795240F4ED0AD74E4EDD276(L_1, L_2, NULL);
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_4 = ___xmlData1;
		String_t* L_5 = ___xmlResultMessage2;
		NullCheck(L_0);
		Action_3_Invoke_m43CB3E765D8167DFA208CE4879F6A0B1F7E4F66F_inline(L_0, L_3, L_4, L_5, NULL);
		// });
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8__ctor_mE5AF930518457C7ADC4D211804472562A41A947E (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8_System_IDisposable_Dispose_mD73FD6E4E635EF0D62049032ACCC68B13E412345 (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				U3CDownloadFileU3Ed__8_U3CU3Em__Finally1_m657280B99C567191ACD8411CF1EB02F1FFF60AE6(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadFileU3Ed__8_MoveNext_m90FD0567EA3BA4DB3EE58497DAB37E3385D881FB (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA40509BBE8A99A655A4164497A3B003DA8756527);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC88B7268310CF55E1332901267EC9623937285);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int64_t V_5 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_016d:
			{// begin fault (depth: 1)
				U3CDownloadFileU3Ed__8_System_IDisposable_Dispose_mD73FD6E4E635EF0D62049032ACCC68B13E412345(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				switch (L_1)
				{
					case 0:
					{
						goto IL_0020_1;
					}
					case 1:
					{
						goto IL_005f_1;
					}
					case 2:
					{
						goto IL_007e_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0174;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest request = UnityWebRequest.Get(url))
				String_t* L_2 = __this->___url_2;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3;
				L_3 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_2, NULL);
				__this->___U3CrequestU3E5__2_4 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)L_3);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return request.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_4);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5;
				L_5 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_4, NULL);
				__this->___U3CU3E2__current_1 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0174;
			}

IL_005f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0086_1;
			}

IL_0069_1:
			{
				// yield return null;
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_0174;
			}

IL_007e_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0086_1:
			{
				// while (request.isDone == false)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_6);
				bool L_7;
				L_7 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_6, NULL);
				if (!L_7)
				{
					goto IL_0069_1;
				}
			}
			{
				// if (UnityWebRequestHelper.IsSuccess(request) == false)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CrequestU3E5__2_4;
				bool L_9;
				L_9 = UnityWebRequestHelper_IsSuccess_mC0A5F79C93DB3E4E5333CB818126EEB6DA9C2F8A(L_8, NULL);
				if (L_9)
				{
					goto IL_00e0_1;
				}
			}
			{
				// callback(MultilanguageResultCode.FILE_LOAD_FAILED, string.Empty, string.Format("{0} {1} {2}", request.error, request.responseCode, url));
				Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* L_10 = __this->___callback_3;
				String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_12 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_12, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_14);
				int64_t L_15;
				L_15 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_14, NULL);
				int64_t L_16 = L_15;
				RuntimeObject* L_17 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_16);
				String_t* L_18 = __this->___url_2;
				String_t* L_19;
				L_19 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralAFC88B7268310CF55E1332901267EC9623937285, L_13, L_17, L_18, NULL);
				NullCheck(L_10);
				Action_3_Invoke_m0466CC62837E99552C75B069FAC01839ADAE5673_inline(L_10, 4, L_11, L_19, NULL);
				// yield break;
				V_0 = (bool)0;
				goto IL_015a_1;
			}

IL_00e0_1:
			{
				// string dataText = string.Empty;
				String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				V_2 = L_20;
				// MultilanguageResultCode resultCode = MultilanguageResultCode.SUCCESS;
				V_3 = 0;
				// string resultMessage = null;
				V_4 = (String_t*)NULL;
				// switch (request.responseCode)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_21 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_21);
				int64_t L_22;
				L_22 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_21, NULL);
				V_5 = L_22;
				int64_t L_23 = V_5;
				if ((((int64_t)L_23) == ((int64_t)((int64_t)((int32_t)200)))))
				{
					goto IL_010e_1;
				}
			}
			{
				int64_t L_24 = V_5;
				if ((((int64_t)L_24) == ((int64_t)((int64_t)((int32_t)404)))))
				{
					goto IL_0121_1;
				}
			}
			{
				goto IL_0125_1;
			}

IL_010e_1:
			{
				// dataText = request.downloadHandler.text;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_25);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_26;
				L_26 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_25, NULL);
				NullCheck(L_26);
				String_t* L_27;
				L_27 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_26, NULL);
				V_2 = L_27;
				// break;
				goto IL_0143_1;
			}

IL_0121_1:
			{
				// resultCode = MultilanguageResultCode.FILE_NOT_FOUND;
				V_3 = 3;
				// break;
				goto IL_0143_1;
			}

IL_0125_1:
			{
				// resultCode = MultilanguageResultCode.FILE_LOAD_FAILED;
				V_3 = 4;
				// resultMessage = string.Format("Response Code: {0}", request.responseCode);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_28 = __this->___U3CrequestU3E5__2_4;
				NullCheck(L_28);
				int64_t L_29;
				L_29 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_28, NULL);
				int64_t L_30 = L_29;
				RuntimeObject* L_31 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_30);
				String_t* L_32;
				L_32 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralA40509BBE8A99A655A4164497A3B003DA8756527, L_31, NULL);
				V_4 = L_32;
			}

IL_0143_1:
			{
				// callback(resultCode, dataText, resultMessage);
				Action_3_tAB8A7534A4CA82A9BE4E738368A8D5ACB1746C01* L_33 = __this->___callback_3;
				int32_t L_34 = V_3;
				String_t* L_35 = V_2;
				String_t* L_36 = V_4;
				NullCheck(L_33);
				Action_3_Invoke_m0466CC62837E99552C75B069FAC01839ADAE5673_inline(L_33, L_34, L_35, L_36, NULL);
				// }
				U3CDownloadFileU3Ed__8_U3CU3Em__Finally1_m657280B99C567191ACD8411CF1EB02F1FFF60AE6(__this, NULL);
				goto IL_0162_1;
			}

IL_015a_1:
			{
				U3CDownloadFileU3Ed__8_U3CU3Em__Finally1_m657280B99C567191ACD8411CF1EB02F1FFF60AE6(__this, NULL);
				goto IL_0174;
			}

IL_0162_1:
			{
				__this->___U3CrequestU3E5__2_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_4), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0174;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0174:
	{
		bool L_37 = V_0;
		return L_37;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8_U3CU3Em__Finally1_m657280B99C567191ACD8411CF1EB02F1FFF60AE6 (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CrequestU3E5__2_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CrequestU3E5__2_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadFileU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB65571CB5419D2C0F2339EAEB113657D89B9ADE2 (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadFileU3Ed__8_System_Collections_IEnumerator_Reset_m6219A91AEC76F08E5F400720D3D192544F9921EF (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadFileU3Ed__8_System_Collections_IEnumerator_Reset_m6219A91AEC76F08E5F400720D3D192544F9921EF_RuntimeMethod_var)));
	}
}
// System.Object Gpm.Common.Multilanguage.Internal.MultilanguageLoader/<DownloadFile>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadFileU3Ed__8_System_Collections_IEnumerator_get_Current_m96F2BA210AA433D1826FA5F814E601AE8F96EEED (U3CDownloadFileU3Ed__8_t454618A66587687A93548C592165818312533A32* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageServiceData__ctor_mB981E6EE3844213B1F9F22A655CDD4494C90514C (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___serviceName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, StringDictionary> languagePacks = new Dictionary<string, StringDictionary>();
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = (Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904*)il2cpp_codegen_object_new(Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4(L_0, Dictionary_2__ctor_m03F1779EF814C87DAC772538D4038FF44863D7E4_RuntimeMethod_var);
		__this->___languagePacks_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___languagePacks_4), (void*)L_0);
		// public MultilanguageServiceData(string serviceName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.serviceName = serviceName;
		String_t* L_1 = ___serviceName0;
		__this->___serviceName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serviceName_1), (void*)L_1);
		// }
		return;
	}
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::Initialize(Gpm.Common.Multilanguage.Internal.MultilanguageXml)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageServiceData_Initialize_m54A51ADE58994FA8493D59BAF2BFA1BF15367A81 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* ___languageXml0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBDADB03FB8B5DF72330546D069C8319D3B2B9DFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF8E168352806394C311DFECF95C71E60B676B92A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB3035E08F7DD498B66E72E263710BA35D6EBF5A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0E9FB7275B6F8219B89E8081BBB8AB8E72073165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B71A87394CAD84F09025E1851C5E0A0C8C3BF2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_5 = NULL;
	String_t* V_6 = NULL;
	XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* G_B7_0 = NULL;
	XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* G_B6_0 = NULL;
	{
		// if (languageXml.stringList == null)
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_0 = ___languageXml0;
		NullCheck(L_0);
		StringList_t2969F038B1A9485BAEDCA5E0CB427E1CF0C8BABF* L_1 = L_0->___stringList_1;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return MultilanguageResultCode.FILE_PARSING_ERROR;
		return (int32_t)(5);
	}

IL_000a:
	{
		// foreach (var data in languageXml.stringList.list)
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_2 = ___languageXml0;
		NullCheck(L_2);
		StringList_t2969F038B1A9485BAEDCA5E0CB427E1CF0C8BABF* L_3 = L_2->___stringList_1;
		NullCheck(L_3);
		List_1_t1FC18DDE48588A254EDD2E9F8B816D121AE434FD* L_4 = L_3->___list_0;
		NullCheck(L_4);
		Enumerator_t683CA133C27BC744EBADDD871A30A2BB4C583AEF L_5;
		L_5 = List_1_GetEnumerator_m0E9FB7275B6F8219B89E8081BBB8AB8E72073165(L_4, List_1_GetEnumerator_m0E9FB7275B6F8219B89E8081BBB8AB8E72073165_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dc:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBDADB03FB8B5DF72330546D069C8319D3B2B9DFA((&V_0), Enumerator_Dispose_mBDADB03FB8B5DF72330546D069C8319D3B2B9DFA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ce_1;
			}

IL_0020_1:
			{
				// foreach (var data in languageXml.stringList.list)
				StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E* L_6;
				L_6 = Enumerator_get_Current_mB3035E08F7DD498B66E72E263710BA35D6EBF5A0_inline((&V_0), Enumerator_get_Current_mB3035E08F7DD498B66E72E263710BA35D6EBF5A0_RuntimeMethod_var);
				// string key = data.key;
				StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E* L_7 = L_6;
				NullCheck(L_7);
				String_t* L_8 = L_7->___key_0;
				V_1 = L_8;
				// var languages = data.language;
				NullCheck(L_7);
				LanguageList_tC269096175850288B705566782B705D3E26C3433* L_9 = L_7->___language_1;
				// foreach (var language in languages.list)
				NullCheck(L_9);
				XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87* L_10 = L_9->___list_0;
				V_2 = L_10;
				V_3 = 0;
				goto IL_00c5_1;
			}

IL_0040_1:
			{
				// foreach (var language in languages.list)
				XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87* L_11 = V_2;
				int32_t L_12 = V_3;
				NullCheck(L_11);
				int32_t L_13 = L_12;
				XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
				// string languageCode = language.LocalName;
				XmlElement_t9A08B533E9A6B3548A1DE35476186F7ECCDF6FF1* L_15 = L_14;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = VirtualFuncInvoker0< String_t* >::Invoke(31 /* System.String System.Xml.XmlNode::get_LocalName() */, L_15);
				V_4 = L_16;
				// if (languagePacks.TryGetValue(languageCode, out languageStringMap) == false)
				Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_17 = __this->___languagePacks_4;
				String_t* L_18 = V_4;
				NullCheck(L_17);
				bool L_19;
				L_19 = Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9(L_17, L_18, (&V_5), Dictionary_2_TryGetValue_m513F64F4826D94301214791FFF31680CC2E4EAF9_RuntimeMethod_var);
				G_B6_0 = L_15;
				if (L_19)
				{
					G_B7_0 = L_15;
					goto IL_0072_1;
				}
			}
			{
				// languageStringMap = new StringDictionary();
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_20, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
				V_5 = L_20;
				// languagePacks.Add(languageCode, languageStringMap);
				Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_21 = __this->___languagePacks_4;
				String_t* L_22 = V_4;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = V_5;
				NullCheck(L_21);
				Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8(L_21, L_22, L_23, Dictionary_2_Add_m02B48855F06F281C2FAE48FE6799F154B8DCDBC8_RuntimeMethod_var);
				G_B7_0 = G_B6_0;
			}

IL_0072_1:
			{
				// string value = language.InnerText.Replace("\\n", "\n");
				NullCheck(G_B7_0);
				String_t* L_24;
				L_24 = VirtualFuncInvoker0< String_t* >::Invoke(33 /* System.String System.Xml.XmlNode::get_InnerText() */, G_B7_0);
				NullCheck(L_24);
				String_t* L_25;
				L_25 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_24, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
				V_6 = L_25;
				// if (languageStringMap.ContainsKey(key) == true)
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = V_5;
				String_t* L_27 = V_1;
				NullCheck(L_26);
				bool L_28;
				L_28 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_26, L_27, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
				if (!L_28)
				{
					goto IL_00b7_1;
				}
			}
			{
				// GpmLogger.Warn(string.Format("Already have a string key. (key: {0}, language: {1})", key, languageCode), serviceName, GetType());
				String_t* L_29 = V_1;
				String_t* L_30 = V_4;
				String_t* L_31;
				L_31 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral4B71A87394CAD84F09025E1851C5E0A0C8C3BF2D, L_29, L_30, NULL);
				String_t* L_32 = __this->___serviceName_1;
				Type_t* L_33;
				L_33 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
				GpmLogger_Warn_mDFE30DB31AE948F08D28DD3ED1C7129D77066058(L_31, L_32, L_33, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, NULL);
				goto IL_00c1_1;
			}

IL_00b7_1:
			{
				// languageStringMap.Add(key, value);
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = V_5;
				String_t* L_35 = V_1;
				String_t* L_36 = V_6;
				NullCheck(L_34);
				Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_34, L_35, L_36, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
			}

IL_00c1_1:
			{
				int32_t L_37 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			}

IL_00c5_1:
			{
				// foreach (var language in languages.list)
				int32_t L_38 = V_3;
				XmlElementU5BU5D_t8D8ED6DDF7F0D7999A4438EECE050E74AD268F87* L_39 = V_2;
				NullCheck(L_39);
				if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
				{
					goto IL_0040_1;
				}
			}

IL_00ce_1:
			{
				// foreach (var data in languageXml.stringList.list)
				bool L_40;
				L_40 = Enumerator_MoveNext_mF8E168352806394C311DFECF95C71E60B676B92A((&V_0), Enumerator_MoveNext_mF8E168352806394C311DFECF95C71E60B676B92A_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		// return InitializeLanguageCode(languageXml.defaultData);
		MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* L_41 = ___languageXml0;
		NullCheck(L_41);
		DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* L_42 = L_41->___defaultData_0;
		int32_t L_43;
		L_43 = MultilanguageServiceData_InitializeLanguageCode_mF1FFA409F1A3F86F49DAD51B67CE6CBD8E4A5EBB(__this, L_42, NULL);
		return L_43;
	}
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::SelectLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageServiceData_SelectLanguage_mF2F0936CD642134F518C467B50864666FA36191E (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___languageCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m54E1746131031E236AF76571378E6C616F8F27B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2389976ACD146B0B4790CB392DDCAAABB4A8177);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF693F62AB0874DBC323119F427407DA87F53FA58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (languagePacks.ContainsKey(languageCode) == false)
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = __this->___languagePacks_4;
		String_t* L_1 = ___languageCode0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3(L_0, L_1, Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// GpmLogger.Error("Language code not found.", serviceName, GetType());
		String_t* L_3 = __this->___serviceName_1;
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6(_stringLiteralF693F62AB0874DBC323119F427407DA87F53FA58, L_3, L_4, _stringLiteralD2389976ACD146B0B4790CB392DDCAAABB4A8177, NULL);
		// return MultilanguageResultCode.LANGUAGE_CODE_NOT_FOUND;
		return (int32_t)(7);
	}

IL_002b:
	{
		// selectLanguage = languageCode;
		String_t* L_5 = ___languageCode0;
		__this->___selectLanguage_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectLanguage_2), (void*)L_5);
		// selectLanguageStrings = languagePacks[selectLanguage];
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_6 = __this->___languagePacks_4;
		String_t* L_7 = __this->___selectLanguage_2;
		NullCheck(L_6);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8;
		L_8 = Dictionary_2_get_Item_m54E1746131031E236AF76571378E6C616F8F27B2(L_6, L_7, Dictionary_2_get_Item_m54E1746131031E236AF76571378E6C616F8F27B2_RuntimeMethod_var);
		__this->___selectLanguageStrings_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectLanguageStrings_3), (void*)L_8);
		// return MultilanguageResultCode.SUCCESS;
		return (int32_t)(0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::GetSupportLanguages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultilanguageServiceData_GetSupportLanguages_m0C9FC3F142797746ACD79EC3BA4F94DFE5F05876 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return languagePacks.Keys;
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_0 = __this->___languagePacks_4;
		NullCheck(L_0);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_1;
		L_1 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_0, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageServiceData_GetString_m3609B598E26F9D66C6298747089C74072E68977B (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___stringKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A2B7C862EEDE734C180E8F89B1C631BA7507A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CCC2400681F29FDC6F6EAC9AB15460D390B3326);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C4EE7194B38152F433BF4ED66C1BB382ED817CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (selectLanguageStrings == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___selectLanguageStrings_3;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		// GpmLogger.Error("Language file is not loaded.", serviceName, GetType());
		String_t* L_1 = __this->___serviceName_1;
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6(_stringLiteral42A2B7C862EEDE734C180E8F89B1C631BA7507A3, L_1, L_2, _stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A, NULL);
		// return stringKey;
		String_t* L_3 = ___stringKey0;
		return L_3;
	}

IL_0025:
	{
		// if (selectLanguageStrings.ContainsKey(stringKey) == false)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = __this->___selectLanguageStrings_3;
		String_t* L_5 = ___stringKey0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_4, L_5, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// GpmLogger.Error(string.Format("String key not found. (key= {0})", stringKey), serviceName, GetType());
		String_t* L_7 = ___stringKey0;
		String_t* L_8;
		L_8 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5CCC2400681F29FDC6F6EAC9AB15460D390B3326, L_7, NULL);
		String_t* L_9 = __this->___serviceName_1;
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6(L_8, L_9, L_10, _stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A, NULL);
		// return stringKey;
		String_t* L_11 = ___stringKey0;
		return L_11;
	}

IL_0056:
	{
		// string value = selectLanguageStrings[stringKey];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = __this->___selectLanguageStrings_3;
		String_t* L_13 = ___stringKey0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_12, L_13, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_0 = L_14;
		// if (string.IsNullOrEmpty(value) == true)
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_15, NULL);
		if (!L_16)
		{
			goto IL_008e;
		}
	}
	{
		// GpmLogger.Error(string.Format("String value is null or empty. (key= {0})", stringKey), serviceName, GetType());
		String_t* L_17 = ___stringKey0;
		String_t* L_18;
		L_18 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral8C4EE7194B38152F433BF4ED66C1BB382ED817CA, L_17, NULL);
		String_t* L_19 = __this->___serviceName_1;
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6(L_18, L_19, L_20, _stringLiteralA4A0059CBA044F5946D17BE152E7CD02E0D1282A, NULL);
		// return stringKey;
		String_t* L_21 = ___stringKey0;
		return L_21;
	}

IL_008e:
	{
		// return value;
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::GetSelectLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageServiceData_GetSelectLanguage_m54B7D339E7B25D9CF5B405C278F512563D7BB428 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, const RuntimeMethod* method) 
{
	{
		// return selectLanguage;
		String_t* L_0 = __this->___selectLanguage_2;
		return L_0;
	}
}
// Gpm.Common.Multilanguage.MultilanguageResultCode Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::InitializeLanguageCode(Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MultilanguageServiceData_InitializeLanguageCode_mF1FFA409F1A3F86F49DAD51B67CE6CBD8E4A5EBB (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* ___defaultData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// string systemLanguageCode = MultilanguageUtil.GetSystemLanguage(false);
		String_t* L_0;
		L_0 = MultilanguageUtil_GetSystemLanguage_m8DE7E55A4B5FC39A50DEDEE2D98A76487944C0EA((bool)0, NULL);
		V_0 = L_0;
		// if (IsSupportLanguage(systemLanguageCode) == true)
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = MultilanguageServiceData_IsSupportLanguage_m5DEF9F12DEC7ADEB5941C9376B454468850E7C18(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// selectLanguage = systemLanguageCode;
		String_t* L_3 = V_0;
		__this->___selectLanguage_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectLanguage_2), (void*)L_3);
		goto IL_00a2;
	}

IL_001c:
	{
		// else if (defaultData != null && IsSupportLanguage(defaultData.language) == true)
		DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* L_4 = ___defaultData0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* L_5 = ___defaultData0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___language_0;
		bool L_7;
		L_7 = MultilanguageServiceData_IsSupportLanguage_m5DEF9F12DEC7ADEB5941C9376B454468850E7C18(__this, L_6, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// selectLanguage = defaultData.language;
		DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* L_8 = ___defaultData0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___language_0;
		__this->___selectLanguage_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectLanguage_2), (void*)L_9);
		goto IL_00a2;
	}

IL_003b:
	{
		// else if (IsSupportLanguage(DEFAULT_LANGUAGE_CODE) == true)
		bool L_10;
		L_10 = MultilanguageServiceData_IsSupportLanguage_m5DEF9F12DEC7ADEB5941C9376B454468850E7C18(__this, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// selectLanguage = DEFAULT_LANGUAGE_CODE;
		__this->___selectLanguage_2 = _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectLanguage_2), (void*)_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		goto IL_00a2;
	}

IL_0055:
	{
		// else if (languagePacks.Count > 0)
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_11 = __this->___languagePacks_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534(L_11, Dictionary_2_get_Count_m04E1DF3E5CCF37B8E34F08F868B4DCE821B79534_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		// foreach (var key in languagePacks.Keys)
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_13 = __this->___languagePacks_4;
		NullCheck(L_13);
		KeyCollection_t5AE2380F1F0B36CFA57AEFE1A47C70858AD5947A* L_14;
		L_14 = Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68(L_13, Dictionary_2_get_Keys_mD2DD0BF3F79C9D226F5155217C143FA338193C68_RuntimeMethod_var);
		NullCheck(L_14);
		Enumerator_tE6A8EF1C59998F7956EF4D8EA8BD20406EF12B5B L_15;
		L_15 = KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58(L_14, KeyCollection_GetEnumerator_mDEC7C76881A166520D0C8A4B3226F683313CFF58_RuntimeMethod_var);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C((&V_1), Enumerator_Dispose_m9B020FFA20134F8F9215AB942EAFC4CD540BEB3C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_0076_1:
			{
				// foreach (var key in languagePacks.Keys)
				String_t* L_16;
				L_16 = Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_inline((&V_1), Enumerator_get_Current_m9CA758BAD24308A36B9E5B860B4275E3A9F40E08_RuntimeMethod_var);
				V_2 = L_16;
				// selectLanguage = key;
				String_t* L_17 = V_2;
				__this->___selectLanguage_2 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___selectLanguage_2), (void*)L_17);
				// break;
				goto IL_00a2;
			}

IL_0087_1:
			{
				// foreach (var key in languagePacks.Keys)
				bool L_18;
				L_18 = Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F((&V_1), Enumerator_MoveNext_m84C78D3FAE89D9E6E7CC2381F5046BC7B751F77F_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0076_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// return MultilanguageResultCode.LANGUAGE_LIST_EMPTY;
		return (int32_t)(6);
	}

IL_00a2:
	{
		// SelectLanguage(selectLanguage);
		String_t* L_19 = __this->___selectLanguage_2;
		int32_t L_20;
		L_20 = MultilanguageServiceData_SelectLanguage_mF2F0936CD642134F518C467B50864666FA36191E(__this, L_19, NULL);
		// return MultilanguageResultCode.SUCCESS;
		return (int32_t)(0);
	}
}
// System.Boolean Gpm.Common.Multilanguage.Internal.MultilanguageServiceData::IsSupportLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultilanguageServiceData_IsSupportLanguage_m5DEF9F12DEC7ADEB5941C9376B454468850E7C18 (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, String_t* ___languageCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.IsNullOrEmpty(languageCode) == false && languagePacks.ContainsKey(languageCode) == true;
		String_t* L_0 = ___languageCode0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_tB6CE3B793B413BC658CEFEF1339D0C1E2DE28904* L_2 = __this->___languagePacks_4;
		String_t* L_3 = ___languageCode0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3(L_2, L_3, Dictionary_2_ContainsKey_mCF867F1BDAF1C910F590A6EEC3C9D4A59794EFA3_RuntimeMethod_var);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
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
// System.String Gpm.Common.Multilanguage.Internal.MultilanguageUtil::GetSystemLanguage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultilanguageUtil_GetSystemLanguage_m8DE7E55A4B5FC39A50DEDEE2D98A76487944C0EA (bool ___isNativeName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral824A9D9A2BAC4D0020E78F328C3A5908C950B369);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19AA44CF7E852EDD061B7F2A098BC202378784E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFFE556F7CC5A872AFD8DD5F0E974020A23AF585);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_1 = NULL;
	CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* V_2 = NULL;
	int32_t V_3 = 0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_4 = NULL;
	{
		// SystemLanguage language = Application.systemLanguage;
		int32_t L_0;
		L_0 = Application_get_systemLanguage_mF0C8FBE854F7B58315A61087619DD10CB53A9AFF(NULL);
		V_0 = L_0;
		// CultureInfo findCulture = null;
		V_1 = (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)31))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)40))))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0028:
	{
		// findCulture = CultureInfo.GetCultureInfo("zh-CN");
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_GetCultureInfo_m81DD5F9FC8266E13474181FC339738F52746C0F0(_stringLiteralA19AA44CF7E852EDD061B7F2A098BC202378784E, NULL);
		V_1 = L_4;
		// break;
		goto IL_0089;
	}

IL_0035:
	{
		// findCulture = CultureInfo.GetCultureInfo("zh-TW");
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_GetCultureInfo_m81DD5F9FC8266E13474181FC339738F52746C0F0(_stringLiteralBFFE556F7CC5A872AFD8DD5F0E974020A23AF585, NULL);
		V_1 = L_5;
		// break;
		goto IL_0089;
	}

IL_0042:
	{
		// findCulture = CultureInfo.GetCultureInfo("sr");
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_GetCultureInfo_m81DD5F9FC8266E13474181FC339738F52746C0F0(_stringLiteral824A9D9A2BAC4D0020E78F328C3A5908C950B369, NULL);
		V_1 = L_6;
		// break;
		goto IL_0089;
	}

IL_004f:
	{
		// CultureInfo[] cultures = CultureInfo.GetCultures(CultureTypes.AllCultures);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_7;
		L_7 = CultureInfo_GetCultures_mBE611636F9A8147B8FADF38495713F146814E38B(7, NULL);
		// foreach (var culture in cultures)
		V_2 = L_7;
		V_3 = 0;
		goto IL_0083;
	}

IL_005a:
	{
		// foreach (var culture in cultures)
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (culture.EnglishName.Equals(language.ToString()) == true)
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_12 = V_4;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Globalization.CultureInfo::get_EnglishName() */, L_12);
		Il2CppFakeBox<int32_t> L_14(SystemLanguage_tDEDD64D7BFC2D67B538432ECAF8018FDCABAFD9E_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_15;
		L_15 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_14), NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		// findCulture = culture;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_17 = V_4;
		V_1 = L_17;
		// break;
		goto IL_0089;
	}

IL_007f:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0083:
	{
		// foreach (var culture in cultures)
		int32_t L_19 = V_3;
		CultureInfoU5BU5D_t3F54FF291A190FBE27B4B3324CBC8CC21F0EAD9F* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_005a;
		}
	}

IL_0089:
	{
		// if (findCulture == null)
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_21 = V_1;
		if (L_21)
		{
			goto IL_0092;
		}
	}
	{
		// return string.Empty;
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_22;
	}

IL_0092:
	{
		// return isNativeName == true ? findCulture.NativeName : findCulture.Name;
		bool L_23 = ___isNativeName0;
		if (L_23)
		{
			goto IL_009c;
		}
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Globalization.CultureInfo::get_Name() */, L_24);
		return L_25;
	}

IL_009c:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Globalization.CultureInfo::get_NativeName() */, L_26);
		return L_27;
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageXml::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultilanguageXml__ctor_m0692EFD40C2A2565BA7E33EC90FFA3B00D6BCC4B (MultilanguageXml_tC22CA02D97FF327CD1992A10C8CA6C16219BE71B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageXml/DefaultData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultData__ctor_m5CD25C24C2C0B66D9F8243C457243CCD508F2BD1 (DefaultData_t277375175B9C862951EFE06EFD60CAFE3EB7695B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringList__ctor_m3CE902B7BAE87D0E98F7A81B34A5CF47A7EA0FE9 (StringList_t2969F038B1A9485BAEDCA5E0CB427E1CF0C8BABF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringData__ctor_m90DA8A0446856ECC76410AF7D2973A4F7680CA2F (StringData_tA3EFA0942CD3B73DF364885C8BE4816734A6F00E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Multilanguage.Internal.MultilanguageXml/StringList/StringData/LanguageList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageList__ctor_mA449C3E5531BEA3DD8D3A4AA57257D184144AE41 (LanguageList_tC269096175850288B705566782B705D3E26C3433* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Gpm.Common.Log.GpmLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmLogger_MakeLog_mBC57175168836B450171EB3DEBD6ABFE9AF71BA1 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C13E73639856F799F682DDAB93967312F44069F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder log = new StringBuilder("[GPM]");
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863, NULL);
		// log.AppendFormat("[{0}]", serviceName);
		StringBuilder_t* L_1 = L_0;
		String_t* L_2 = ___serviceName1;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE, L_2, NULL);
		// log.AppendFormat("[{0}", classType.Name);
		StringBuilder_t* L_4 = L_1;
		Type_t* L_5 = ___classType2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, _stringLiteral9C13E73639856F799F682DDAB93967312F44069F, L_6, NULL);
		// log.AppendFormat("::{0}]", methodName);
		StringBuilder_t* L_8 = L_4;
		String_t* L_9 = ___methodName3;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_8, _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076, L_9, NULL);
		// log.AppendFormat(" {0}", message);
		StringBuilder_t* L_11 = L_8;
		RuntimeObject* L_12 = ___message0;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_12, NULL);
		// return log.ToString();
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_14;
	}
}
// System.Void Gpm.Common.Log.GpmLogger::Debug(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmLogger_Debug_m89CA3B3C9DFE6B12D0EE134721C4A3A62E40F64C (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GpmCommon.DebugLogEnabled == false)
		bool L_0;
		L_0 = GpmCommon_get_DebugLogEnabled_mC90D9030EE080873B786C1B5916913298508354A_inline(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// UnityEngine.Debug.Log(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_1 = ___message0;
		String_t* L_2 = ___serviceName1;
		Type_t* L_3 = ___classType2;
		String_t* L_4 = ___methodName3;
		String_t* L_5;
		L_5 = GpmLogger_MakeLog_mBC57175168836B450171EB3DEBD6ABFE9AF71BA1(L_1, L_2, L_3, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Log.GpmLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmLogger_Warn_mDFE30DB31AE948F08D28DD3ED1C7129D77066058 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t* L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = GpmLogger_MakeLog_mBC57175168836B450171EB3DEBD6ABFE9AF71BA1(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Log.GpmLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmLogger_Error_mF394D4794DE1258888BCE2D5D5978C6FFBB4C0D6 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t* L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = GpmLogger_MakeLog_mBC57175168836B450171EB3DEBD6ABFE9AF71BA1(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
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
// System.Void Gpm.Common.Indicator.GpmIndicator::Send(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmIndicator_Send_mE743B60F2459F4427F327A6FAB5F22D887FFF472 (String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IndicatorImplementation.Instance.Send(serviceName, serviceVersion, customData, ignoreActivation);
		il2cpp_codegen_runtime_class_init_inline(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* L_0;
		L_0 = IndicatorImplementation_get_Instance_m316351A61B8DF03DA8CBA4C92795927E06E8030F_inline(NULL);
		String_t* L_1 = ___serviceName0;
		String_t* L_2 = ___serviceVersion1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___customData2;
		bool L_4 = ___ignoreActivation3;
		NullCheck(L_0);
		IndicatorImplementation_Send_m96D05D955242921811ED6BDD175EC53A45C8E7CD(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.GpmIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmIndicator__ctor_m5EB64CB83285C9429D1515BD47548C40BFE5E9D8 (GpmIndicator_t697502353ACB41524764EC769DE6E1D11A0732FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Indicator.GpmIndicatorData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmIndicatorData__ctor_mF159BD8CF9B46444E6A21436BF0449D997122C39 (GpmIndicatorData_tC00240A425B2CA8633970A63E684ECFC1ACAC6A0* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10ACE5EEB0F9BB58BAAC876209B9EADB3CBD2F9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int index = 1;
		__this->___index_3 = 1;
		// public GpmIndicatorData(string action)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// dictionary = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___dictionary_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictionary_2), (void*)L_0);
		// dictionary.Add(KEY_ACTION, action);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = __this->___dictionary_2;
		String_t* L_2 = ___action0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral10ACE5EEB0F9BB58BAAC876209B9EADB3CBD2F9A, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Gpm.Common.Indicator.GpmIndicatorData::AddActionDetail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmIndicatorData_AddActionDetail_m37129805014E61EBAC0A12C625410BDAE180034D (GpmIndicatorData_tC00240A425B2CA8633970A63E684ECFC1ACAC6A0* __this, String_t* ___actionDetail0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE82A088C30684FF43A61A3B8E6E80DF46E0086);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// dictionary.Add(string.Format("{0}{1}", KEY_ACTION_DETAIL, index), actionDetail);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___dictionary_2;
		int32_t L_1 = __this->___index_3;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, _stringLiteralEDE82A088C30684FF43A61A3B8E6E80DF46E0086, L_3, NULL);
		String_t* L_5 = ___actionDetail0;
		NullCheck(L_0);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_0, L_4, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// return index++;
		int32_t L_6 = __this->___index_3;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Gpm.Common.Indicator.GpmIndicatorData::ToDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GpmIndicatorData_ToDictionary_mF232D4E0C59337C0D94949A2374C65FAA8D3AAF1 (GpmIndicatorData_tC00240A425B2CA8633970A63E684ECFC1ACAC6A0* __this, const RuntimeMethod* method) 
{
	{
		// return dictionary;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___dictionary_2;
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
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator__ctor_m26214A08675F9D2F685CD4584C181B9B2E96EFC0 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mB2EE77B91ECAE4455F3D5E26FCBF0CB9DD2A560F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BaseIndicator()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// queue = new Queue<QueueItem>();
		Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* L_0 = (Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B*)il2cpp_codegen_object_new(Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mB2EE77B91ECAE4455F3D5E26FCBF0CB9DD2A560F(L_0, Queue_1__ctor_mB2EE77B91ECAE4455F3D5E26FCBF0CB9DD2A560F_RuntimeMethod_var);
		__this->___queue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::Send(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_Send_m9A9717D21ACF999BE8FDE34251560BDDD7E951BE (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m29956665B4B7F8E7CDDD2CD11453087E220A941C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// queue.Enqueue(new QueueItem(serviceName, serviceVersion, customData, ignoreActivation));
		Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* L_0 = __this->___queue_1;
		String_t* L_1 = ___serviceName0;
		String_t* L_2 = ___serviceVersion1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___customData2;
		bool L_4 = ___ignoreActivation3;
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_5 = (QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7*)il2cpp_codegen_object_new(QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		QueueItem__ctor_mB8428D5BC78CEB02D27F6F65C93132EAC5E95C4B(L_5, L_1, L_2, L_3, L_4, NULL);
		NullCheck(L_0);
		Queue_1_Enqueue_m29956665B4B7F8E7CDDD2CD11453087E220A941C(L_0, L_5, Queue_1_Enqueue_m29956665B4B7F8E7CDDD2CD11453087E220A941C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_Initialize_m295DDDBF9C84B6A75F9FC1DFB0DFA0CD8B2F2038 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseIndicator_U3CInitializeU3Eb__8_0_m45632DAFDFD3DED9AD572FA7DC58D2A64942939A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C571F80CA4151F46F7D600186B2E65B8A777DB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C158E48956F9C2362D4B3F4240B46A9C7C489D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral520625740DAAAA312839FA6347FCA8DD2FA9A82C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16F7FF1D5E01911E2BEE361FB60B0955752A86C);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* V_0 = NULL;
	{
		// var request = UnityWebRequest.Get(string.Format("{0}/{1}/appkeys/{2}/configurations", Launching.URI, Launching.VERSION, Launching.APP_KEY));
		String_t* L_0;
		L_0 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralE16F7FF1D5E01911E2BEE361FB60B0955752A86C, _stringLiteral4C158E48956F9C2362D4B3F4240B46A9C7C489D7, _stringLiteral520625740DAAAA312839FA6347FCA8DD2FA9A82C, _stringLiteral2C571F80CA4151F46F7D600186B2E65B8A777DB5, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1;
		L_1 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_0, NULL);
		// request.method = UnityWebRequest.kHttpVerbGET;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = L_1;
		NullCheck(L_2);
		UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88(L_2, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
		// var helper = new UnityWebRequestHelper(request);
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_3 = (UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311*)il2cpp_codegen_object_new(UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityWebRequestHelper__ctor_m7C150EE29F67AB282A52C777479E82B6B21CBB28(L_3, L_2, NULL);
		V_0 = L_3;
		// GetLaunchingInfo(helper, (launchingInfo) =>
		// {
		//     if (launchingInfo == null)
		//     {
		//         return;
		//     }
		// 
		//     if (launchingInfo.header.isSuccessful == true)
		//     {
		//         indicatorInfo = launchingInfo.launching.indicator.real;
		//         SetDevelopmentZone(launchingInfo);
		// 
		//         ExecuteQueueDelegate();
		//     }
		// });
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_4 = V_0;
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_5 = (Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A*)il2cpp_codegen_object_new(Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mF6075D01AF2256DC2E7E138D05D0EF86AB3E0451(L_5, __this, (intptr_t)((void*)BaseIndicator_U3CInitializeU3Eb__8_0_m45632DAFDFD3DED9AD572FA7DC58D2A64942939A_RuntimeMethod_var), NULL);
		VirtualActionInvoker2< UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311*, Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* >::Invoke(4 /* System.Void Gpm.Common.Indicator.Internal.BaseIndicator::GetLaunchingInfo(Gpm.Common.UnityWebRequestHelper,System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>) */, __this, L_4, L_5);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::SetDevelopmentZone(Gpm.Common.Indicator.Internal.LaunchingInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_SetDevelopmentZone_m172F4058A237A98E1142EA923DC1FCB1ADDF879D (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* ___launchingInfo0, const RuntimeMethod* method) 
{
	{
		// indicatorInfo = launchingInfo.launching.indicator.alpha;
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_0 = ___launchingInfo0;
		NullCheck(L_0);
		Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C* L_1 = L_0->___launching_1;
		NullCheck(L_1);
		Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB* L_2 = L_1->___indicator_0;
		NullCheck(L_2);
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_3 = L_2->___alpha_0;
		__this->___indicatorInfo_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indicatorInfo_0), (void*)L_3);
		// }
		return;
	}
}
// System.Collections.IEnumerator Gpm.Common.Indicator.Internal.BaseIndicator::ExecuteQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseIndicator_ExecuteQueue_m5FCCDCE8CA9BFD8308D2ED46BB4DBF403977A30C (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* L_0 = (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35*)il2cpp_codegen_object_new(U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CExecuteQueueU3Ed__10__ctor_m34BEB0B1DE1EE4AEF7EA9A152E765D032310803E(L_0, 0, NULL);
		U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::SetQueueItemStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_SetQueueItemStatus_m163666BF22F1DA2D3A59EE165E00C99E5DA1BB86 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) 
{
	{
		// queueItem.isRunning = false;
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_0 = __this->___queueItem_2;
		NullCheck(L_0);
		L_0->___isRunning_4 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::IsWaitingInChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_IsWaitingInChild_mBE80E767C3D6B0B4AED2AA1861AD6969E7F5D68D (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::CheckInvalidResult(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_CheckInvalidResult_m57EA8CFCB53DBED1ABEB306C6605B01D0FC03B73 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___result0, const RuntimeMethod* method) 
{
	{
		// return ((result == null) || (string.IsNullOrEmpty(result.downloadHandler.text) == true));
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___result0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = ___result0;
		NullCheck(L_1);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_2;
		L_2 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		return L_4;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::IsWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_IsWaiting_m40878113CBFF87E7BDBFA5BF3545F4BD13EF7534 (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD9EA2A512F795D6707E0CAAFD5CC3046AAEDCACF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (indicatorInfo == null)
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_0 = __this->___indicatorInfo_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// if (queue.Count == 0)
		Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* L_1 = __this->___queue_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_mD9EA2A512F795D6707E0CAAFD5CC3046AAEDCACF_inline(L_1, Queue_1_get_Count_mD9EA2A512F795D6707E0CAAFD5CC3046AAEDCACF_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0019:
	{
		// return IsWaitingInChild();
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::IsWaitingInChild() */, __this);
		return L_3;
	}
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator::CanExecutable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseIndicator_CanExecutable_m9F63EFE0994E2A3EEC3E6E12C9BF751292C1C55E (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, bool ___ignoreActivation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (indicatorInfo.activation.Equals("off", StringComparison.Ordinal) == true)
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_0 = __this->___indicatorInfo_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___activation_3;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_1, _stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7, 4, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (ignoreActivation == false)
		bool L_3 = ___ignoreActivation0;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator::<Initialize>b__8_0(Gpm.Common.Indicator.Internal.LaunchingInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseIndicator_U3CInitializeU3Eb__8_0_m45632DAFDFD3DED9AD572FA7DC58D2A64942939A (BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* __this, LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* ___launchingInfo0, const RuntimeMethod* method) 
{
	{
		// if (launchingInfo == null)
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_0 = ___launchingInfo0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (launchingInfo.header.isSuccessful == true)
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_1 = ___launchingInfo0;
		NullCheck(L_1);
		Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35* L_2 = L_1->___header_0;
		NullCheck(L_2);
		bool L_3 = L_2->___isSuccessful_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// indicatorInfo = launchingInfo.launching.indicator.real;
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_4 = ___launchingInfo0;
		NullCheck(L_4);
		Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C* L_5 = L_4->___launching_1;
		NullCheck(L_5);
		Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB* L_6 = L_5->___indicator_0;
		NullCheck(L_6);
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_7 = L_6->___real_1;
		__this->___indicatorInfo_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indicatorInfo_0), (void*)L_7);
		// ExecuteQueueDelegate();
		VirtualActionInvoker0::Invoke(5 /* System.Void Gpm.Common.Indicator.Internal.BaseIndicator::ExecuteQueueDelegate() */, __this);
	}

IL_002d:
	{
		// });
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
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteQueueU3Ed__10__ctor_m34BEB0B1DE1EE4AEF7EA9A152E765D032310803E (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteQueueU3Ed__10_System_IDisposable_Dispose_m7DDBEA9753C0147BFECC934CA728CF31333DE367 (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteQueueU3Ed__10_MoveNext_mF6CC55C3CDA4ED2A827146053513C8489ED6BA3C (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mA9D9D62D1807BF3A4DE62C18139ABDCCE79EADAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B1D786203FDE1F9AB54748545FE2017AD124B33);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// if (IsWaiting() == true)
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = BaseIndicator_IsWaiting_m40878113CBFF87E7BDBFA5BF3545F4BD13EF7534(L_4, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0036:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_001e;
	}

IL_003f:
	{
		// queueItem = queue.Dequeue();
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_6 = V_1;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_7 = V_1;
		NullCheck(L_7);
		Queue_1_tDA53FC9F0E02A94BF69B5671732C69D8B36E193B* L_8 = L_7->___queue_1;
		NullCheck(L_8);
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_9;
		L_9 = Queue_1_Dequeue_mA9D9D62D1807BF3A4DE62C18139ABDCCE79EADAD(L_8, Queue_1_Dequeue_mA9D9D62D1807BF3A4DE62C18139ABDCCE79EADAD_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___queueItem_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___queueItem_2), (void*)L_9);
		// SetQueueItemStatus();
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_10 = V_1;
		NullCheck(L_10);
		VirtualActionInvoker0::Invoke(7 /* System.Void Gpm.Common.Indicator.Internal.BaseIndicator::SetQueueItemStatus() */, L_10);
		// if (CanExecutable(queueItem.ignoreActivation) == true)
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_11 = V_1;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_12 = V_1;
		NullCheck(L_12);
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_13 = L_12->___queueItem_2;
		NullCheck(L_13);
		bool L_14 = L_13->___ignoreActivation_3;
		NullCheck(L_11);
		bool L_15;
		L_15 = BaseIndicator_CanExecutable_m9F63EFE0994E2A3EEC3E6E12C9BF751292C1C55E(L_11, L_14, NULL);
		if (!L_15)
		{
			goto IL_001e;
		}
	}
	{
		// byte[] sendData =
		// IndicatorField.CreateSendData(
		//     indicatorInfo.appKey,
		//     indicatorInfo.logVersion,
		//     queueItem.serviceName,
		//     queueItem.serviceVersion,
		//     queueItem.customData);
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_16 = V_1;
		NullCheck(L_16);
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_17 = L_16->___indicatorInfo_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->___appKey_1;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_19 = V_1;
		NullCheck(L_19);
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_20 = L_19->___indicatorInfo_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___logVersion_0;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_22 = V_1;
		NullCheck(L_22);
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_23 = L_22->___queueItem_2;
		NullCheck(L_23);
		String_t* L_24 = L_23->___serviceName_0;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_25 = V_1;
		NullCheck(L_25);
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_26 = L_25->___queueItem_2;
		NullCheck(L_26);
		String_t* L_27 = L_26->___serviceVersion_1;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_28 = V_1;
		NullCheck(L_28);
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_29 = L_28->___queueItem_2;
		NullCheck(L_29);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = L_29->___customData_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = IndicatorField_CreateSendData_m5F1DC374251EC0D1C7C534CC74748BF05E4EDFD9(L_18, L_21, L_24, L_27, L_30, NULL);
		V_2 = L_31;
		// var request = UnityWebRequest.Put(string.Format("{0}/{1}/log", indicatorInfo.url, indicatorInfo.logVersion), sendData);
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_32 = V_1;
		NullCheck(L_32);
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_33 = L_32->___indicatorInfo_0;
		NullCheck(L_33);
		String_t* L_34 = L_33->___url_2;
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_35 = V_1;
		NullCheck(L_35);
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_36 = L_35->___indicatorInfo_0;
		NullCheck(L_36);
		String_t* L_37 = L_36->___logVersion_0;
		String_t* L_38;
		L_38 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral8B1D786203FDE1F9AB54748545FE2017AD124B33, L_34, L_37, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_40;
		L_40 = UnityWebRequest_Put_m83C23CEC1BD3493EAA6DC35D34B93369C0D09C03(L_38, L_39, NULL);
		// request.method = UnityWebRequest.kHttpVerbPOST;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_41 = L_40;
		NullCheck(L_41);
		UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88(L_41, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		// var helper = new UnityWebRequestHelper(request);
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_42 = (UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311*)il2cpp_codegen_object_new(UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		UnityWebRequestHelper__ctor_m7C150EE29F67AB282A52C777479E82B6B21CBB28(L_42, L_41, NULL);
		V_3 = L_42;
		// SendLogNCrash(helper, sendData);
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_43 = V_1;
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_44 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_2;
		NullCheck(L_43);
		VirtualActionInvoker2< UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Void Gpm.Common.Indicator.Internal.BaseIndicator::SendLogNCrash(Gpm.Common.UnityWebRequestHelper,System.Byte[]) */, L_43, L_44, L_45);
		// while (true)
		goto IL_001e;
	}
}
// System.Object Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteQueueU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C711E667C5A171E9A25046B95AAED18EB7DF2AE (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteQueueU3Ed__10_System_Collections_IEnumerator_Reset_mCF34163EEF77C69F9F0BC692C346A941BFDAB7FD (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteQueueU3Ed__10_System_Collections_IEnumerator_Reset_mCF34163EEF77C69F9F0BC692C346A941BFDAB7FD_RuntimeMethod_var)));
	}
}
// System.Object Gpm.Common.Indicator.Internal.BaseIndicator/<ExecuteQueue>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteQueueU3Ed__10_System_Collections_IEnumerator_get_Current_mAA1A4AEA10AA7A1345948D587B75F5D35C02C626 (U3CExecuteQueueU3Ed__10_t1056FC9721A7184A0E4757C3E46F51E3AFA3CC35* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorIndicator__ctor_m21A983C03DA609DD45E1C51A168933E97B4FD56F (EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* __this, const RuntimeMethod* method) 
{
	{
		// public EditorIndicator()
		BaseIndicator__ctor_m26214A08675F9D2F685CD4584C181B9B2E96EFC0(__this, NULL);
		// Initialize();
		BaseIndicator_Initialize_m295DDDBF9C84B6A75F9FC1DFB0DFA0CD8B2F2038(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator::GetLaunchingInfo(Gpm.Common.UnityWebRequestHelper,System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorIndicator_GetLaunchingInfo_m61847A491318E34ED400639CD8E56F566431652F (EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* __this, UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* ___helper0, Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CGetLaunchingInfoU3Eb__0_mC59AEC36EE74347502713FFB9124BED02E1AE339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* L_0 = (U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m696D9A381ED534897BDF73E633C37DC45C0898CF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* L_2 = V_0;
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_3 = ___callback1;
		NullCheck(L_2);
		L_2->___callback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_1), (void*)L_3);
		// EditorCoroutine.Start(helper.SendWebRequest(result =>
		// {
		//     if (CheckInvalidResult(result) == true)
		//     {
		//         callback(null);
		//     }
		//     else
		//     {
		//         var launchingInfo = GpmJsonMapper.ToObject<LaunchingInfo>(result.downloadHandler.text);
		//         callback(launchingInfo);
		//     }
		// }));
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_4 = ___helper0;
		U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* L_5 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_6 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CGetLaunchingInfoU3Eb__0_mC59AEC36EE74347502713FFB9124BED02E1AE339_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = UnityWebRequestHelper_SendWebRequest_mB5E436FC9F87B85FD2E361783F3F29BBD41149F1(L_4, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var);
		EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3* L_8;
		L_8 = EditorCoroutine_Start_m9ED0B319582EEC545A46E41D0CC8D148DBC4C9A6(L_7, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator::ExecuteQueueDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorIndicator_ExecuteQueueDelegate_m1A6ED9F75DFD38958657ECDF94F1C1107D59FE1A (EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EditorCoroutine.Start(ExecuteQueue());
		RuntimeObject* L_0;
		L_0 = BaseIndicator_ExecuteQueue_m5FCCDCE8CA9BFD8308D2ED46BB4DBF403977A30C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var);
		EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3* L_1;
		L_1 = EditorCoroutine_Start_m9ED0B319582EEC545A46E41D0CC8D148DBC4C9A6(L_0, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator::SendLogNCrash(Gpm.Common.UnityWebRequestHelper,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorIndicator_SendLogNCrash_m34E4946643899C344518F729633ED1B2E15D08E9 (EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* __this, UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sendData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EditorCoroutine.Start(helper.SendWebRequest());
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_0 = ___helper0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = UnityWebRequestHelper_SendWebRequest_mB5E436FC9F87B85FD2E361783F3F29BBD41149F1(L_0, (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3_il2cpp_TypeInfo_var);
		EditorCoroutine_tF16AF31E362E5589158B90CAF7E829A071C8B0D3* L_2;
		L_2 = EditorCoroutine_Start_m9ED0B319582EEC545A46E41D0CC8D148DBC4C9A6(L_1, NULL);
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
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m696D9A381ED534897BDF73E633C37DC45C0898CF (U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.EditorIndicator/<>c__DisplayClass1_0::<GetLaunchingInfo>b__0(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CGetLaunchingInfoU3Eb__0_mC59AEC36EE74347502713FFB9124BED02E1AE339 (U3CU3Ec__DisplayClass1_0_t58A023BA91762113CD4204E86B16CC42B4F74C1F* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* V_0 = NULL;
	{
		// if (CheckInvalidResult(result) == true)
		EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* L_0 = __this->___U3CU3E4__this_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = ___result0;
		NullCheck(L_0);
		bool L_2;
		L_2 = BaseIndicator_CheckInvalidResult_m57EA8CFCB53DBED1ABEB306C6605B01D0FC03B73(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// callback(null);
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_3 = __this->___callback_1;
		NullCheck(L_3);
		Action_1_Invoke_m239104A1101EB4850D85EA0B859D2799B9C735A1_inline(L_3, (LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85*)NULL, NULL);
		return;
	}

IL_001b:
	{
		// var launchingInfo = GpmJsonMapper.ToObject<LaunchingInfo>(result.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___result0;
		NullCheck(L_4);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_5;
		L_5 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_5, NULL);
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_7;
		L_7 = GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4(L_6, GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4_RuntimeMethod_var);
		V_0 = L_7;
		// callback(launchingInfo);
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_8 = __this->___callback_1;
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_9 = V_0;
		NullCheck(L_8);
		Action_1_Invoke_m239104A1101EB4850D85EA0B859D2799B9C735A1_inline(L_8, L_9, NULL);
		// }));
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
// Gpm.Common.Indicator.Internal.IndicatorImplementation Gpm.Common.Indicator.Internal.IndicatorImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* IndicatorImplementation_get_Instance_m316351A61B8DF03DA8CBA4C92795927E06E8030F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* L_0 = ((IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_StaticFields*)il2cpp_codegen_static_fields_for(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// Gpm.Common.Indicator.Internal.BaseIndicator Gpm.Common.Indicator.Internal.IndicatorImplementation::get_Indicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* IndicatorImplementation_get_Indicator_mE3E29EF5836789E4D6850CDFB76E591D85C68B41 (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, const RuntimeMethod* method) 
{
	{
		// get { return GetIndicatorInstance(); }
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_0;
		L_0 = IndicatorImplementation_GetIndicatorInstance_mE85E7E8A7B0FAC103F7982F4AD1C8F5506360520(__this, NULL);
		return L_0;
	}
}
// System.Void Gpm.Common.Indicator.Internal.IndicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndicatorImplementation__ctor_mC40989ABD4CC1FBBE181E3D9C6221AD56B21BA43 (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, const RuntimeMethod* method) 
{
	{
		// public IndicatorImplementation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.IndicatorImplementation::Send(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndicatorImplementation_Send_m96D05D955242921811ED6BDD175EC53A45C8E7CD (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(serviceName) == true
		//     || string.IsNullOrEmpty(serviceVersion) == true
		//     || customData == null)
		String_t* L_0 = ___serviceName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___serviceVersion1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___customData2;
		if (L_4)
		{
			goto IL_0014;
		}
	}

IL_0013:
	{
		// return;
		return;
	}

IL_0014:
	{
		// Indicator.Send(serviceName, serviceVersion, customData, ignoreActivation);
		BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* L_5;
		L_5 = IndicatorImplementation_get_Indicator_mE3E29EF5836789E4D6850CDFB76E591D85C68B41(__this, NULL);
		String_t* L_6 = ___serviceName0;
		String_t* L_7 = ___serviceVersion1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = ___customData2;
		bool L_9 = ___ignoreActivation3;
		NullCheck(L_5);
		BaseIndicator_Send_m9A9717D21ACF999BE8FDE34251560BDDD7E951BE(L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// Gpm.Common.Indicator.Internal.BaseIndicator Gpm.Common.Indicator.Internal.IndicatorImplementation::GetIndicatorInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D* IndicatorImplementation_GetIndicatorInstance_mE85E7E8A7B0FAC103F7982F4AD1C8F5506360520 (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var isInApp = true;
		// if (isInApp == true)
		if (!1)
		{
			goto IL_001d;
		}
	}
	{
		// if (inAppInstance == null)
		InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* L_0 = __this->___inAppInstance_1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// inAppInstance = new InAppIndicator();
		InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* L_1 = (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1*)il2cpp_codegen_object_new(InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InAppIndicator__ctor_m7A99A3EF42252687FAD33963EAD53BA8130A38A8(L_1, NULL);
		__this->___inAppInstance_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inAppInstance_1), (void*)L_1);
	}

IL_0016:
	{
		// return inAppInstance;
		InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* L_2 = __this->___inAppInstance_1;
		return L_2;
	}

IL_001d:
	{
		// if (editorInstance == null)
		EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* L_3 = __this->___editorInstance_2;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// editorInstance = new EditorIndicator();
		EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* L_4 = (EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D*)il2cpp_codegen_object_new(EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EditorIndicator__ctor_m21A983C03DA609DD45E1C51A168933E97B4FD56F(L_4, NULL);
		__this->___editorInstance_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___editorInstance_2), (void*)L_4);
	}

IL_0030:
	{
		// return editorInstance;
		EditorIndicator_t2BD6C6DE589F35EF015AC1070814D5B9F2C86E0D* L_5 = __this->___editorInstance_2;
		return L_5;
	}
}
// System.Void Gpm.Common.Indicator.Internal.IndicatorImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndicatorImplementation__cctor_mC73FAD08750FF0E7C87BBA5185FA6B2AE84385AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IndicatorImplementation instance = new IndicatorImplementation();
		IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* L_0 = (IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03*)il2cpp_codegen_object_new(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IndicatorImplementation__ctor_mC40989ABD4CC1FBBE181E3D9C6221AD56B21BA43(L_0, NULL);
		((IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_StaticFields*)il2cpp_codegen_static_fields_for(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_StaticFields*)il2cpp_codegen_static_fields_for(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator__ctor_m7A99A3EF42252687FAD33963EAD53BA8130A38A8 (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectContainer_t98441798C4266C204E2770FC565ABBA3E337C1AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855A5866749ED4E2C7D22CD00B10E47F7527D506);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InAppIndicator()
		BaseIndicator__ctor_m26214A08675F9D2F685CD4584C181B9B2E96EFC0(__this, NULL);
		// monoObject = GameObjectContainer.GetGameObject(GpmIndicator.SERVICE_NAME).GetComponent<MonoBehaviour>();
		il2cpp_codegen_runtime_class_init_inline(GameObjectContainer_t98441798C4266C204E2770FC565ABBA3E337C1AB_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObjectContainer_GetGameObject_mF9FEAAB7CDD93A8D3248A0DFD743112DEF4986AD(_stringLiteral855A5866749ED4E2C7D22CD00B10E47F7527D506, NULL);
		NullCheck(L_0);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1;
		L_1 = GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A(L_0, GameObject_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m63D5CACEF720FF384DDC45F687E301771BA4649A_RuntimeMethod_var);
		__this->___monoObject_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monoObject_3), (void*)L_1);
		// Initialize();
		BaseIndicator_Initialize_m295DDDBF9C84B6A75F9FC1DFB0DFA0CD8B2F2038(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::GetLaunchingInfo(Gpm.Common.UnityWebRequestHelper,System.Action`1<Gpm.Common.Indicator.Internal.LaunchingInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator_GetLaunchingInfo_m337D3D463EF0BA8C5B3C4145D28D2B7BD732F190 (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* ___helper0, Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetLaunchingInfoU3Eb__0_mA66761921588899F46673494308BA3E60C7ED811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* L_0 = (U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mED386876E4B142A354FA73A37081EB92CA186CEB(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* L_2 = V_0;
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_3 = ___callback1;
		NullCheck(L_2);
		L_2->___callback_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_1), (void*)L_3);
		// monoObject.StartCoroutine(helper.SendWebRequest(result =>
		// {
		//     if (CheckInvalidResult(result) == true)
		//     {
		//         callback(null);
		//     }
		//     else
		//     {
		//         var launchingInfo = GpmJsonMapper.ToObject<LaunchingInfo>(result.downloadHandler.text);
		//         callback(launchingInfo);
		//     }
		// }));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_4 = __this->___monoObject_3;
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_5 = ___helper0;
		U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* L_6 = V_0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_7 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetLaunchingInfoU3Eb__0_mA66761921588899F46673494308BA3E60C7ED811_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = UnityWebRequestHelper_SendWebRequest_mB5E436FC9F87B85FD2E361783F3F29BBD41149F1(L_5, L_7, NULL);
		NullCheck(L_4);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::ExecuteQueueDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator_ExecuteQueueDelegate_mBB77253A6974D7276472F68DA533411335EA4E17 (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, const RuntimeMethod* method) 
{
	{
		// monoObject.StartCoroutine(ExecuteQueue());
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___monoObject_3;
		RuntimeObject* L_1;
		L_1 = BaseIndicator_ExecuteQueue_m5FCCDCE8CA9BFD8308D2ED46BB4DBF403977A30C(__this, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::SendLogNCrash(Gpm.Common.UnityWebRequestHelper,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator_SendLogNCrash_m34523B24993BBFECA8D018D8430740C69815F79F (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* ___helper0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sendData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppIndicator_U3CSendLogNCrashU3Eb__4_0_m22E1743CB5D613B5983C8A52F2F5B6BF937FF9C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// monoObject.StartCoroutine(helper.SendWebRequest((result) =>
		// {
		//     queueItem.isRunning = false;
		// }));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___monoObject_3;
		UnityWebRequestHelper_tA47E468FD38F8261AD678EBB9FB36154BAC9E311* L_1 = ___helper0;
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_2 = (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*)il2cpp_codegen_object_new(Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m5D35045365FF235FD16A283F02F442BC16AF0D76(L_2, __this, (intptr_t)((void*)InAppIndicator_U3CSendLogNCrashU3Eb__4_0_m22E1743CB5D613B5983C8A52F2F5B6BF937FF9C7_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = UnityWebRequestHelper_SendWebRequest_mB5E436FC9F87B85FD2E361783F3F29BBD41149F1(L_1, L_2, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::SetQueueItemStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator_SetQueueItemStatus_m0B8580E0F667AB4BF1DD145DB6F33466C538FB2B (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, const RuntimeMethod* method) 
{
	{
		// queueItem.isRunning = true;
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_0 = ((BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D*)__this)->___queueItem_2;
		NullCheck(L_0);
		L_0->___isRunning_4 = (bool)1;
		// }
		return;
	}
}
// System.Boolean Gpm.Common.Indicator.Internal.InAppIndicator::IsWaitingInChild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InAppIndicator_IsWaitingInChild_mD237DBA4A19B735046B5A26D9868C905B5CE3492 (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, const RuntimeMethod* method) 
{
	{
		// if (queueItem != null && queueItem.isRunning == true)
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_0 = ((BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D*)__this)->___queueItem_2;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_1 = ((BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D*)__this)->___queueItem_2;
		NullCheck(L_1);
		bool L_2 = L_1->___isRunning_4;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0017:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator::<SendLogNCrash>b__4_0(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppIndicator_U3CSendLogNCrashU3Eb__4_0_m22E1743CB5D613B5983C8A52F2F5B6BF937FF9C7 (InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___result0, const RuntimeMethod* method) 
{
	{
		// queueItem.isRunning = false;
		QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* L_0 = ((BaseIndicator_t18669DB69CC7CCFDA9191A812018715621326D9D*)__this)->___queueItem_2;
		NullCheck(L_0);
		L_0->___isRunning_4 = (bool)0;
		// }));
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
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mED386876E4B142A354FA73A37081EB92CA186CEB (U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Common.Indicator.Internal.InAppIndicator/<>c__DisplayClass2_0::<GetLaunchingInfo>b__0(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CGetLaunchingInfoU3Eb__0_mA66761921588899F46673494308BA3E60C7ED811 (U3CU3Ec__DisplayClass2_0_tA0B667610C398D2FB22F036236BB0671D4172E67* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* V_0 = NULL;
	{
		// if (CheckInvalidResult(result) == true)
		InAppIndicator_t81430A39262776483A4BCE8896FE16EAE40B0CF1* L_0 = __this->___U3CU3E4__this_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = ___result0;
		NullCheck(L_0);
		bool L_2;
		L_2 = BaseIndicator_CheckInvalidResult_m57EA8CFCB53DBED1ABEB306C6605B01D0FC03B73(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// callback(null);
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_3 = __this->___callback_1;
		NullCheck(L_3);
		Action_1_Invoke_m239104A1101EB4850D85EA0B859D2799B9C735A1_inline(L_3, (LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85*)NULL, NULL);
		return;
	}

IL_001b:
	{
		// var launchingInfo = GpmJsonMapper.ToObject<LaunchingInfo>(result.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___result0;
		NullCheck(L_4);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_5;
		L_5 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_5, NULL);
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_7;
		L_7 = GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4(L_6, GpmJsonMapper_ToObject_TisLaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85_m3CB86B46B22F1E68C86EA322A362A0BC005F4BD4_RuntimeMethod_var);
		V_0 = L_7;
		// callback(launchingInfo);
		Action_1_t276A18CDF65B4218CC0D26C000B07F580ED0786A* L_8 = __this->___callback_1;
		LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* L_9 = V_0;
		NullCheck(L_8);
		Action_1_Invoke_m239104A1101EB4850D85EA0B859D2799B9C735A1_inline(L_8, L_9, NULL);
		// }));
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
// System.Byte[] Gpm.Common.Indicator.Internal.IndicatorField::CreateSendData(System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IndicatorField_CreateSendData_m5F1DC374251EC0D1C7C534CC74748BF05E4EDFD9 (String_t* ___appKey0, String_t* ___logVersion1, String_t* ___serviceName2, String_t* ___serviceVersion3, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03E309CFFE499B97855B290FFFE52403ECB9BE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A6C2B4495BC14692B8D7379F083BECF2BA5BB91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16137CBB869A7DAC6C21145B4435F930BC61766A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B5CD28DC90C9BD6C10176E53CA6C9C1F3C7ACC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6744F91A974C9FF8FF05BB66F5E510A9B8375A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FDA117E9483975E45F43555614838F830502645);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A1CAFC8F253100CFDDDA63EFBA6437CA7EFCB3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69E07BD9EAB61841462BDF6652EA3678DFE2523);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var sendData = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// sendData.Add(KEY_REQUIRED_PROJECT_NAME, appKey);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___appKey0;
		NullCheck(L_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_1, _stringLiteral9A1CAFC8F253100CFDDDA63EFBA6437CA7EFCB3E, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_REQUIRED_PROJECT_VERSION, GpmCommon.VERSION);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, _stringLiteral16137CBB869A7DAC6C21145B4435F930BC61766A, _stringLiteral7FDA117E9483975E45F43555614838F830502645, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_REQUIRED_LOG_VERSION, logVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_0;
		String_t* L_5 = ___logVersion1;
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, _stringLiteral03E309CFFE499B97855B290FFFE52403ECB9BE95, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_CUSTOM_UNITY_VERSION, Application.unityVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		String_t* L_7;
		L_7 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
		NullCheck(L_6);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_6, _stringLiteral0A6C2B4495BC14692B8D7379F083BECF2BA5BB91, L_7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_CUSTOM_PLATFORM, Application.platform.ToString());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = V_0;
		int32_t L_9;
		L_9 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_1 = L_9;
		Il2CppFakeBox<int32_t> L_10(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		NullCheck(L_8);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_8, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE, L_11, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_CUSTOM_SERVICE_NAME, serviceName);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = V_0;
		String_t* L_13 = ___serviceName2;
		NullCheck(L_12);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_12, _stringLiteral6744F91A974C9FF8FF05BB66F5E510A9B8375A9B, L_13, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_CUSTOM_SERVICE_VERSION, serviceVersion);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_0;
		String_t* L_15 = ___serviceVersion3;
		NullCheck(L_14);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_14, _stringLiteral5B5CD28DC90C9BD6C10176E53CA6C9C1F3C7ACC7, L_15, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// sendData.Add(KEY_CUSTOM_BODY, string.Format("[GPM] {0} v{1}", serviceName, serviceVersion));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = V_0;
		String_t* L_17 = ___serviceName2;
		String_t* L_18 = ___serviceVersion3;
		String_t* L_19;
		L_19 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA69E07BD9EAB61841462BDF6652EA3678DFE2523, L_17, L_18, NULL);
		NullCheck(L_16);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_16, _stringLiteralCD002DD70C7AAC9CFF6D7D4821927E13D2989493, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// if (customData == null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = ___customData4;
		if (L_20)
		{
			goto IL_0096;
		}
	}
	{
		// return Encoding(sendData);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = IndicatorField_Encoding_m823D6C35D9137FF5EBAB20A2DEB3DF5AE7D7B45B(L_21, NULL);
		return L_22;
	}

IL_0096:
	{
		// foreach (KeyValuePair<string, string> kvp in customData)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_23 = ___customData4;
		NullCheck(L_23);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_24;
		L_24 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_23, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bc_1;
			}

IL_00a0_1:
			{
				// foreach (KeyValuePair<string, string> kvp in customData)
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_25;
				L_25 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_3 = L_25;
				// sendData.Add(kvp.Key, kvp.Value);
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = V_0;
				String_t* L_27;
				L_27 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_28;
				L_28 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_26);
				Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_26, L_27, L_28, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
			}

IL_00bc_1:
			{
				// foreach (KeyValuePair<string, string> kvp in customData)
				bool L_29;
				L_29 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00a0_1;
				}
			}
			{
				goto IL_00d5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		// return Encoding(sendData);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = IndicatorField_Encoding_m823D6C35D9137FF5EBAB20A2DEB3DF5AE7D7B45B(L_30, NULL);
		return L_31;
	}
}
// System.Byte[] Gpm.Common.Indicator.Internal.IndicatorField::Encoding(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IndicatorField_Encoding_m823D6C35D9137FF5EBAB20A2DEB3DF5AE7D7B45B (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___dictionary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var jsonString = GpmJsonMapper.ToJson(dictionary);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___dictionary0;
		String_t* L_1;
		L_1 = GpmJsonMapper_ToJson_m3582B60E60FCC4B0467CE1A62755A56715FF8937(L_0, NULL);
		V_0 = L_1;
		// return new UTF8Encoding().GetBytes(jsonString);
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_2 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_2, NULL);
		String_t* L_3 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		return L_4;
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
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaunchingInfo__ctor_mB9F1DA8A3261FA0ACE611108B38B2BA5422869AA (LaunchingInfo_t7B374C11CEFC2A53903A23DAE167EFF59E6A6B85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LaunchingInfo()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// header = new Header();
		Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35* L_0 = (Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35*)il2cpp_codegen_object_new(Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Header__ctor_m0E3A393400985401FE1DB2B9A0F5E4BE718F69E7(L_0, NULL);
		__this->___header_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___header_0), (void*)L_0);
		// launching = new Launching();
		Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C* L_1 = (Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C*)il2cpp_codegen_object_new(Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Launching__ctor_m38B32B145116AA1F29B611B31C5409191F19F4AB(L_1, NULL);
		__this->___launching_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___launching_1), (void*)L_1);
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
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Header::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m0E3A393400985401FE1DB2B9A0F5E4BE718F69E7 (Header_tD46F64A973421C043CD0DA8B7BF32189E39A7E35* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Launching::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Launching__ctor_m38B32B145116AA1F29B611B31C5409191F19F4AB (Launching_t1F8543FAEC8F01E7525E2B810D0EC3F19013746C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Launching()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// indicator = new Indicator();
		Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB* L_0 = (Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB*)il2cpp_codegen_object_new(Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Indicator__ctor_mE57E6B81DE0777C758DDEC157479125B7A9DB050(L_0, NULL);
		__this->___indicator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indicator_0), (void*)L_0);
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
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Indicator__ctor_mE57E6B81DE0777C758DDEC157479125B7A9DB050 (Indicator_tCFA0DEC61FBC8A771BEC4454F05BABDFE71B43AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Zone_t76B26AE62FED398A6097396AEF841999ACEF0224_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Indicator()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// alpha = new Zone();
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_0 = (Zone_t76B26AE62FED398A6097396AEF841999ACEF0224*)il2cpp_codegen_object_new(Zone_t76B26AE62FED398A6097396AEF841999ACEF0224_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Zone__ctor_m6F73598B68714F0EA141323E330843CE4206C80F(L_0, NULL);
		__this->___alpha_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alpha_0), (void*)L_0);
		// real = new Zone();
		Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* L_1 = (Zone_t76B26AE62FED398A6097396AEF841999ACEF0224*)il2cpp_codegen_object_new(Zone_t76B26AE62FED398A6097396AEF841999ACEF0224_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Zone__ctor_m6F73598B68714F0EA141323E330843CE4206C80F(L_1, NULL);
		__this->___real_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___real_1), (void*)L_1);
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
// System.Void Gpm.Common.Indicator.Internal.LaunchingInfo/Launching/Indicator/Zone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone__ctor_m6F73598B68714F0EA141323E330843CE4206C80F (Zone_t76B26AE62FED398A6097396AEF841999ACEF0224* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Common.Indicator.Internal.QueueItem::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueItem__ctor_mB8428D5BC78CEB02D27F6F65C93132EAC5E95C4B (QueueItem_t169EE79306A18D92A77716F4ABE260CC0BD1B3B7* __this, String_t* ___serviceName0, String_t* ___serviceVersion1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___customData2, bool ___ignoreActivation3, const RuntimeMethod* method) 
{
	{
		// public QueueItem(string serviceName, string serviceVersion, Dictionary<string, string> customData, bool ignoreActivation)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.serviceName = serviceName;
		String_t* L_0 = ___serviceName0;
		__this->___serviceName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serviceName_0), (void*)L_0);
		// this.serviceVersion = serviceVersion;
		String_t* L_1 = ___serviceVersion1;
		__this->___serviceVersion_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serviceVersion_1), (void*)L_1);
		// this.customData = customData;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___customData2;
		__this->___customData_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customData_2), (void*)L_2);
		// this.ignoreActivation = ignoreActivation;
		bool L_3 = ___ignoreActivation3;
		__this->___ignoreActivation_3 = L_3;
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
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.GpmCompress::Extract(System.String,System.String,Gpm.Common.Compress.CompressFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmCompress_Extract_m642C8A7EDED359C8AE7BDCA3A6C56F6811E886BE (String_t* ___filePath0, String_t* ___outputPath1, int32_t ___format2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CompressImplementation.Extract(filePath, outputPath, format);
		String_t* L_0 = ___filePath0;
		String_t* L_1 = ___outputPath1;
		int32_t L_2 = ___format2;
		il2cpp_codegen_runtime_class_init_inline(CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CompressImplementation_Extract_m6C52D58E716F26EC1893F4DBCBC92703CC85CD62(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.GpmCompress::ExtractUnityPackage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmCompress_ExtractUnityPackage_m7B0548C36BA97433D742AFB78075BB0AF9328B38 (String_t* ___packagePath0, String_t* ___tempPath1, String_t* ___resultPath2, const RuntimeMethod* method) 
{
	{
		// return CompressImplementation.UnityPackage.Unpack(packagePath, tempPath, resultPath);
		String_t* L_0 = ___packagePath0;
		String_t* L_1 = ___tempPath1;
		String_t* L_2 = ___resultPath2;
		int32_t L_3;
		L_3 = UnityPackage_Unpack_m92A5ED72907985ACF4DFE3756977B53917167FE8(L_0, L_1, L_2, NULL);
		return L_3;
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
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.Internal.CompressImplementation::ExtractCode(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressImplementation_ExtractCode_m18068E708FA461E6C9E935AACAE42CB2505F8E5E (String_t* ___filePath0, String_t* ___outputPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEntry_t36C084EC57955EEAB7AAD0461B770EA404BD404C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReader_tC108EB5494E74CC186C9D8FF322AF9F25185B257_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Directory.Exists(outputPath) == true)
		String_t* L_0 = ___outputPath1;
		bool L_1;
		L_1 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Directory.Delete(outputPath, true);
		String_t* L_2 = ___outputPath1;
		Directory_Delete_m6CB0FB437D90EE5C377796BE03DA6A9FE509A04E(L_2, (bool)1, NULL);
	}

IL_000f:
	{
		// if (Directory.Exists(outputPath) == false)
		String_t* L_3 = ___outputPath1;
		bool L_4;
		L_4 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_3, NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		// Directory.CreateDirectory(outputPath);
		String_t* L_5 = ___outputPath1;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_6;
		L_6 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_5, NULL);
	}

IL_001e:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// using (var stream = File.OpenRead(filePath))
			String_t* L_7 = ___filePath0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8;
			L_8 = File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50(L_7, NULL);
			V_0 = L_8;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0061_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_0;
						if (!L_9)
						{
							goto IL_006a_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_0;
						NullCheck(L_10);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
					}

IL_006a_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// var reader = ReaderFactory.Open(stream);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_0;
					RuntimeObject* L_12;
					L_12 = ReaderFactory_Open_m368A7679B96D00D75FCD175477CAAE9C22C883B4(L_11, (ReaderOptions_tDC88644B122F479513775DA7C7A22F05437D78F2*)NULL, NULL);
					V_1 = L_12;
					goto IL_0057_2;
				}

IL_0030_2:
				{
					// if (!reader.Entry.IsDirectory)
					RuntimeObject* L_13 = V_1;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Gpm.Common.ThirdParty.SharpCompress.Common.IEntry Gpm.Common.ThirdParty.SharpCompress.Readers.IReader::get_Entry() */, IReader_tC108EB5494E74CC186C9D8FF322AF9F25185B257_il2cpp_TypeInfo_var, L_13);
					NullCheck(L_14);
					bool L_15;
					L_15 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Gpm.Common.ThirdParty.SharpCompress.Common.IEntry::get_IsDirectory() */, IEntry_t36C084EC57955EEAB7AAD0461B770EA404BD404C_il2cpp_TypeInfo_var, L_14);
					if (L_15)
					{
						goto IL_0057_2;
					}
				}
				{
					// reader.WriteEntryToDirectory(outputPath, new ExtractionOptions()
					// {
					//     ExtractFullPath = true,
					//     Overwrite = true
					// });
					RuntimeObject* L_16 = V_1;
					String_t* L_17 = ___outputPath1;
					ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* L_18 = (ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1*)il2cpp_codegen_object_new(ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1_il2cpp_TypeInfo_var);
					NullCheck(L_18);
					ExtractionOptions__ctor_mAB224F0BC930E067212296600FD2FE40F2680762(L_18, NULL);
					ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* L_19 = L_18;
					NullCheck(L_19);
					ExtractionOptions_set_ExtractFullPath_m0306B1E380BE44362BDA3F8DFE2D7B9AEF911EA4_inline(L_19, (bool)1, NULL);
					ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* L_20 = L_19;
					NullCheck(L_20);
					ExtractionOptions_set_Overwrite_m1F914B5A31330EDDA914D6A76A7B55779286496B_inline(L_20, (bool)1, NULL);
					IReaderExtensions_WriteEntryToDirectory_mA60EE9DC00BAA57BB98FBA1D343A11DBACBD85DD(L_16, L_17, L_20, NULL);
				}

IL_0057_2:
				{
					// while (reader.MoveToNextEntry() == true)
					RuntimeObject* L_21 = V_1;
					NullCheck(L_21);
					bool L_22;
					L_22 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean Gpm.Common.ThirdParty.SharpCompress.Readers.IReader::MoveToNextEntry() */, IReader_tC108EB5494E74CC186C9D8FF322AF9F25185B257_il2cpp_TypeInfo_var, L_21);
					if (L_22)
					{
						goto IL_0030_2;
					}
				}
				{
					// }
					goto IL_006b_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_006b_1:
		{
			// }
			goto IL_0087;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// UnityEngine.Debug.LogError(string.Format("Extract process error (Message: {0})", e.Message));
		Exception_t* L_23 = V_2;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_23);
		String_t* L_25;
		L_25 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC21D9DB6AA9057C43C4B739FC5C20032135E65D)), L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_25, NULL);
		// return CompressResultCode.ERROR_EXTRACT;
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0089;
	}// end catch (depth: 1)

IL_0087:
	{
		// return CompressResultCode.SUCCESS;
		return (int32_t)(0);
	}

IL_0089:
	{
		// }
		int32_t L_26 = V_3;
		return L_26;
	}
}
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.Internal.CompressImplementation::Extract(System.String,System.String,Gpm.Common.Compress.CompressFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressImplementation_Extract_m6C52D58E716F26EC1893F4DBCBC92703CC85CD62 (String_t* ___filePath0, String_t* ___outputPath1, int32_t ___format2, const RuntimeMethod* method) 
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* V_1 = NULL;
	Process_tF74794C64BCE464912BF158980B347CE66AF203B* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t* V_7 = NULL;
	{
		// return CompressResultCode.NOT_SUPPORT_PLATFORM;
		return (int32_t)(3);
	}
}
// System.String Gpm.Common.Compress.Internal.CompressImplementation::GetExtractArgument(Gpm.Common.Compress.CompressFormat,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CompressImplementation_GetExtractArgument_m19930605AFC0255AABDF43D6D112107BBAEC6669 (int32_t ___format0, String_t* ___filePath1, String_t* ___outputPath2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.Void Gpm.Common.Compress.Internal.CompressImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressImplementation__cctor_m181C0B1ECCFF1CBEE1EF385CFE2354CA8C0C8FF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEBD4E8744EE43F506F4A331C5FC6209DD99ECF9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04799565CD60A911F9CBB57805A3592363822500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral480882A527C376248599F1E500A62504DB0D8C43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25DD75EB593DB9A5C39874652119C6A8238CD0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7FD74AAD8C679A71C76D4A93F871E2D07BDCBC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string COMPRESS_PROGRAM_PATH = "";
		((CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_StaticFields*)il2cpp_codegen_static_fields_for(CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var))->___COMPRESS_PROGRAM_PATH_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_StaticFields*)il2cpp_codegen_static_fields_for(CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var))->___COMPRESS_PROGRAM_PATH_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private static Dictionary<CompressFormat, string> formatExtensions = new Dictionary<CompressFormat, string>
		// {
		//     { CompressFormat.SEVEN_ZIP,     "7z"    },
		//     { CompressFormat.GZIP,          "gzip"  },
		//     { CompressFormat.TAR,           "tar"   },
		//     { CompressFormat.ZIP,           "zip"   }
		// };
		Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* L_0 = (Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B*)il2cpp_codegen_object_new(Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mEBD4E8744EE43F506F4A331C5FC6209DD99ECF9D(L_0, Dictionary_2__ctor_mEBD4E8744EE43F506F4A331C5FC6209DD99ECF9D_RuntimeMethod_var);
		Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E(L_1, 0, _stringLiteral480882A527C376248599F1E500A62504DB0D8C43, Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E_RuntimeMethod_var);
		Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E(L_2, 1, _stringLiteral04799565CD60A911F9CBB57805A3592363822500, Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E_RuntimeMethod_var);
		Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E(L_3, 2, _stringLiteralF7FD74AAD8C679A71C76D4A93F871E2D07BDCBC3, Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E_RuntimeMethod_var);
		Dictionary_2_t02C1A455E7A9B3C18692B31F988D07659F53914B* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E(L_4, 3, _stringLiteralA25DD75EB593DB9A5C39874652119C6A8238CD0C, Dictionary_2_Add_m8FCE7CA2F53A268695256653620E62DEC5DAC65E_RuntimeMethod_var);
		((CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_StaticFields*)il2cpp_codegen_static_fields_for(CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var))->___formatExtensions_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_StaticFields*)il2cpp_codegen_static_fields_for(CompressImplementation_t440923972FCED0E9C0E4B4248184407ECA0C3B87_il2cpp_TypeInfo_var))->___formatExtensions_1), (void*)L_4);
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
// Gpm.Common.Compress.CompressResultCode Gpm.Common.Compress.Internal.CompressImplementation/UnityPackage::Unpack(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityPackage_Unpack_m92A5ED72907985ACF4DFE3756977B53917167FE8 (String_t* ___packagePath0, String_t* ___tempPath1, String_t* ___resultPath2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// return CompressResultCode.NOT_SUPPORT_PLATFORM;
		return (int32_t)(3);
	}
}
// System.Boolean Gpm.Common.Compress.Internal.CompressImplementation/UnityPackage::RemapPackageToAsset(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityPackage_RemapPackageToAsset_mA949DF96871F06A886C6EC9EF68E86CB495D9711 (String_t* ___originPath0, String_t* ___outputPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisString_t_mCDF27EFB046C1D9D445531CEFD458BE572781D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F713ACFFD6CE1669A5EE550E00610042893CA48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F76824A826CC71973134D804A7E05416DA829C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC492DE3237AB9080A354FA91692BDE1180611256);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* V_0 = NULL;
	int32_t V_1 = 0;
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// outputPath = outputPath.Replace('/', Path.DirectorySeparatorChar);
		String_t* L_0 = ___outputPath1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)47), L_1, NULL);
		___outputPath1 = L_2;
	}
	try
	{// begin try (depth: 1)
		{
			// foreach (var directoryInfo in new DirectoryInfo(originPath).GetDirectories())
			String_t* L_3 = ___originPath0;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_4, L_3, NULL);
			NullCheck(L_4);
			DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_5;
			L_5 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_4, NULL);
			V_0 = L_5;
			V_1 = 0;
			goto IL_00d9_1;
		}

IL_0022_1:
		{
			// foreach (var directoryInfo in new DirectoryInfo(originPath).GetDirectories())
			DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_6 = V_0;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_2 = L_9;
			// var remapPath = File.ReadAllLines(GpmPathUtil.Combine(directoryInfo.FullName, "pathname")).First();
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_12 = V_2;
			NullCheck(L_12);
			String_t* L_13;
			L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_12);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_13);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, _stringLiteralC492DE3237AB9080A354FA91692BDE1180611256);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC492DE3237AB9080A354FA91692BDE1180611256);
			String_t* L_15;
			L_15 = GpmPathUtil_Combine_mA5A272366437911876E332BF43AFE5FEE88DE2E1(L_14, NULL);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
			L_16 = File_ReadAllLines_m562C333C151F3023033AF86CFD57AD0125C7D5FC(L_15, NULL);
			String_t* L_17;
			L_17 = Enumerable_First_TisString_t_mCDF27EFB046C1D9D445531CEFD458BE572781D1C((RuntimeObject*)L_16, Enumerable_First_TisString_t_mCDF27EFB046C1D9D445531CEFD458BE572781D1C_RuntimeMethod_var);
			V_3 = L_17;
			// remapPath = remapPath.Replace('/', Path.DirectorySeparatorChar);
			String_t* L_18 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			Il2CppChar L_19 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
			NullCheck(L_18);
			String_t* L_20;
			L_20 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_18, ((int32_t)47), L_19, NULL);
			V_3 = L_20;
			// var assetFilePath = GpmPathUtil.Combine(directoryInfo.FullName, "asset");
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_23 = V_2;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_23);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_24);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_24);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, _stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral37B97248AD78DD69BA3DF192A954DA136A0917D3);
			String_t* L_26;
			L_26 = GpmPathUtil_Combine_mA5A272366437911876E332BF43AFE5FEE88DE2E1(L_25, NULL);
			V_4 = L_26;
			// var metaFilePath = GpmPathUtil.Combine(directoryInfo.FullName, "asset.meta");
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_29 = V_2;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_29);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_30);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_30);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_28;
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, _stringLiteral7F713ACFFD6CE1669A5EE550E00610042893CA48);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7F713ACFFD6CE1669A5EE550E00610042893CA48);
			String_t* L_32;
			L_32 = GpmPathUtil_Combine_mA5A272366437911876E332BF43AFE5FEE88DE2E1(L_31, NULL);
			V_5 = L_32;
			// GpmFileUtil.MoveFile(assetFilePath, GpmPathUtil.Combine(outputPath, remapPath));
			String_t* L_33 = V_4;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
			String_t* L_36 = ___outputPath1;
			NullCheck(L_35);
			ArrayElementTypeCheck (L_35, L_36);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_36);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_35;
			String_t* L_38 = V_3;
			NullCheck(L_37);
			ArrayElementTypeCheck (L_37, L_38);
			(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_38);
			String_t* L_39;
			L_39 = GpmPathUtil_Combine_mA5A272366437911876E332BF43AFE5FEE88DE2E1(L_37, NULL);
			GpmFileUtil_MoveFile_mF1E6E1281CF480698ACAE700950088B9D72DDCA1(L_33, L_39, NULL);
			// GpmFileUtil.MoveFile(metaFilePath, GpmPathUtil.Combine(outputPath, string.Format("{0}.meta", remapPath)));
			String_t* L_40 = V_5;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
			String_t* L_43 = ___outputPath1;
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_43);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_43);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_42;
			String_t* L_45 = V_3;
			String_t* L_46;
			L_46 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9F76824A826CC71973134D804A7E05416DA829C8, L_45, NULL);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_46);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_46);
			String_t* L_47;
			L_47 = GpmPathUtil_Combine_mA5A272366437911876E332BF43AFE5FEE88DE2E1(L_44, NULL);
			GpmFileUtil_MoveFile_mF1E6E1281CF480698ACAE700950088B9D72DDCA1(L_40, L_47, NULL);
			int32_t L_48 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		}

IL_00d9_1:
		{
			// foreach (var directoryInfo in new DirectoryInfo(originPath).GetDirectories())
			int32_t L_49 = V_1;
			DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_50 = V_0;
			NullCheck(L_50);
			if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
			{
				goto IL_0022_1;
			}
		}
		{
			// }
			goto IL_0101;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// UnityEngine.Debug.LogError(string.Format("Remap unity package to asset error (Message: {0})", e.Message));
		Exception_t* L_51 = V_6;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_51);
		String_t* L_53;
		L_53 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2CC60B2EEB4FE43FBA101EF6BFAE98F87126F7DE)), L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_53, NULL);
		// return false;
		V_7 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0103;
	}// end catch (depth: 1)

IL_0101:
	{
		// return true;
		return (bool)1;
	}

IL_0103:
	{
		// }
		bool L_54 = V_7;
		return L_54;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowComments_m325B98287CACC43EBC3EFB0379D0E7C190005824_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_comments; }
		bool L_0 = __this->___allow_comments_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowComments_m78A275A69B54D2C267816320446CB377F3316916_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_comments = value; }
		bool L_0 = ___value0;
		__this->___allow_comments_2 = L_0;
		// set { allow_comments = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_AllowSingleQuotedStrings_mD542F6261D90984562827CCD6CC7C627DF0E1CD8_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return allow_single_quoted_strings; }
		bool L_0 = __this->___allow_single_quoted_strings_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Lexer_set_AllowSingleQuotedStrings_m880094F6CE12F2534FFDADAEB8AEA7D5B2A8FA74_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { allow_single_quoted_strings = value; }
		bool L_0 = ___value0;
		__this->___allow_single_quoted_strings_3 = L_0;
		// set { allow_single_quoted_strings = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mB4BCDAADD419C4C30941FDC1B276CB921C3C6B43_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return string_value; }
		String_t* L_0 = __this->___string_value_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m1BD7789DB9E9DE3F1DF4BCBD0FBE36BF297EBD85_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return end_of_input; }
		bool L_0 = __this->___end_of_input_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mB14E9920EA6AEC43860CA259859011DBB4D9B5A9_inline (Lexer_tDFF3FAA3BB3B271B2C5C1A37F44B3401C21A1351* __this, const RuntimeMethod* method) 
{
	{
		// get { return token; }
		int32_t L_0 = __this->___token_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m8AF2CD2521ADF538D718620CCF9DBE4F34883BD6_inline (StateHandler_tF5E81DDCF07F346A1814D7DEE2B7D3F24322D081* __this, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B* ___ctx0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, FsmContext_t1F733825912AA9F7BE3B71B8085AFE27D056475B*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___ctx0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MultilanguageCallback_Invoke_m7AE619D613F502C10F38BA1742FB53E007477612_inline (MultilanguageCallback_t9A91C856CCDF5618AF0181D79B5BB57C61D24B60* __this, int32_t ___result0, String_t* ___resultMessage1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, ___resultMessage1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MultilanguageServiceData_GetSelectLanguage_m54B7D339E7B25D9CF5B405C278F512563D7BB428_inline (MultilanguageServiceData_t9F3BED4AA69D3EF864FE82219CCE3E3A7C300826* __this, const RuntimeMethod* method) 
{
	{
		// return selectLanguage;
		String_t* L_0 = __this->___selectLanguage_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GpmCommon_get_DebugLogEnabled_mC90D9030EE080873B786C1B5916913298508354A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmCommon_t5C2F5AAC633B2E45F214203250C3216B55E2661A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool DebugLogEnabled { get; set; }
		bool L_0 = ((GpmCommon_t5C2F5AAC633B2E45F214203250C3216B55E2661A_StaticFields*)il2cpp_codegen_static_fields_for(GpmCommon_t5C2F5AAC633B2E45F214203250C3216B55E2661A_il2cpp_TypeInfo_var))->___U3CDebugLogEnabledU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* IndicatorImplementation_get_Instance_m316351A61B8DF03DA8CBA4C92795927E06E8030F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var);
		IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03* L_0 = ((IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_StaticFields*)il2cpp_codegen_static_fields_for(IndicatorImplementation_t29B99931DA1FC5EF2FD8DFA7A3BB994E9BEA1D03_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtractionOptions_set_ExtractFullPath_m0306B1E380BE44362BDA3F8DFE2D7B9AEF911EA4_inline (ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ExtractFullPath { get; set; }
		bool L_0 = ___value0;
		__this->___U3CExtractFullPathU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExtractionOptions_set_Overwrite_m1F914B5A31330EDDA914D6A76A7B55779286496B_inline (ExtractionOptions_tD31733BAF89DA5B9D6906C711D8F25D040C34AE1* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Overwrite  {get; set; }
		bool L_0 = ___value0;
		__this->___U3COverwriteU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mB80AB2A94EE181B8A717E9D27E7F338C32EA8A17_gshared_inline (Action_3_tA5A4D30182F8B9F2378721FD07FDDF032927E7EF* __this, int32_t ___arg10, RuntimeObject* ___arg21, RuntimeObject* ___arg32, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
