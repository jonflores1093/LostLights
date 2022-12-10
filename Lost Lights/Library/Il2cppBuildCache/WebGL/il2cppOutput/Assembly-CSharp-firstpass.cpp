#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.AudioClip>
struct Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t518EF3AB63A4FDC2FFA1B67A575A68F7BD9C2F65;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// SimpleJSON.JSONNode
struct JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD;
// SimpleJSON.JSONObject
struct JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// LoLSDK.MockWebGL
struct MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LoLSDK.WebGL
struct WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// LoLSDK.MockWebGL/<_PollyTTS>d__13
struct U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02AEADE971E564162C31EBB2FA571C6AD73CE9E4;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0D61FA33932B4158DDBA6595C47D459C3D872579;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral193D61CE8AAAAE0C4CE7E8DB3338EFEA2343A8F6;
IL2CPP_EXTERN_C String_t* _stringLiteral1C31D960C743ED835CD31C84ED4444C9C6106DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29;
IL2CPP_EXTERN_C String_t* _stringLiteral1F05A92C109AC57A86C25CD496FFA04F9E47640A;
IL2CPP_EXTERN_C String_t* _stringLiteral222E042C359EA54919A22BEF2E124A6EA3CC6418;
IL2CPP_EXTERN_C String_t* _stringLiteral270DB076B1C89AC25E533B5E0E779314CD7A79CB;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9C53D9C1D5AD049AA39063E5E997F3FAAC6029;
IL2CPP_EXTERN_C String_t* _stringLiteral2DBF07571F57DB1DFB7BD89A0A8F4D72CB1D3284;
IL2CPP_EXTERN_C String_t* _stringLiteral333879C3D8AE0FBC11A33170D1DD8CCCB271C667;
IL2CPP_EXTERN_C String_t* _stringLiteral372D05CE295E056D2B3BD0FDE9C2316343E09F21;
IL2CPP_EXTERN_C String_t* _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC;
IL2CPP_EXTERN_C String_t* _stringLiteral3831A74391456331DECEEB3D380742D3067A7117;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0F3B80B1E71297E0632B6087FB9BD247E04F89;
IL2CPP_EXTERN_C String_t* _stringLiteral490F394828087815AB76ADCD05C0C90D6DAABEF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2E56424DDAB3E7E8CE3FDBF5100639CCBD92B9;
IL2CPP_EXTERN_C String_t* _stringLiteral4DB6BD6181A2FDD083BE122F6A6ED551761115A5;
IL2CPP_EXTERN_C String_t* _stringLiteral55A7F46D52E64418CC7F7052B04EAAA87590BAF5;
IL2CPP_EXTERN_C String_t* _stringLiteral5996492B2C473AD4838E8A5F0D7E9E462AB8C63D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5D99DF811BA23306495AF8632246B359B671F5D9;
IL2CPP_EXTERN_C String_t* _stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C;
IL2CPP_EXTERN_C String_t* _stringLiteral61CDA2CF076B3B1C60F4A3E3F04FA6F4AEA070D2;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral7B07A8EE16C4F6B46E5B48B2F45A0B8C8DD06478;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF4656442C57AC8446C155600893CC270FC58B0;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECD6975BC3C960529EDFD4B80E07171EFA23EF2;
IL2CPP_EXTERN_C String_t* _stringLiteral82989B4E12F25ED79C68AB26BE1A827039972FB2;
IL2CPP_EXTERN_C String_t* _stringLiteral88D3B5583A23D5C6BA10994992E02FA20F9CBDD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8B034CE9BAB5183193D63BDEE1DE588BE79AC390;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA41F0AE61626DB56B5A488823E2AEB4CF9998B;
IL2CPP_EXTERN_C String_t* _stringLiteral93146F23FBCFCC0ABC17C13F8664E5D772A4442B;
IL2CPP_EXTERN_C String_t* _stringLiteral93E28A6403D9F4604B07F787F5F349E06CE636F0;
IL2CPP_EXTERN_C String_t* _stringLiteral97D203BC3602A49415571F981B0358C7DE13C1CE;
IL2CPP_EXTERN_C String_t* _stringLiteral99147D95EB0FB3B0BD360458A2B4909E52FC1BA9;
IL2CPP_EXTERN_C String_t* _stringLiteral9BA5C3FE9526690B51958E8F6EC686CFD9207CB1;
IL2CPP_EXTERN_C String_t* _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60;
IL2CPP_EXTERN_C String_t* _stringLiteral9F7E5C19FAA38EEDC11F4B8BF490806ABD67E193;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A941CD81CE19790B710D29EB849A1844885B5E;
IL2CPP_EXTERN_C String_t* _stringLiteralA7D4DAD20C1BF0F9B332F78B5E0EB4D2091932C5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF3A350FCEBDEB193A977F853BC40C418F8ECD34;
IL2CPP_EXTERN_C String_t* _stringLiteralAF671DCFF145741AF733164CA94C2DF13A2502F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB0DBE5E8521C194AE0829F1AE9654AFF0414E536;
IL2CPP_EXTERN_C String_t* _stringLiteralB30463BE846124410A3C44E55FE0DCA8CE238A70;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B2696A237654859198F12097C3276E11B980B8;
IL2CPP_EXTERN_C String_t* _stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A1D6C2665A441AB812E3CC1500EF7458F228E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFACFAD293BDE7B8237DEAD4409DB560241158D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD67B260129B4A9C153BC806FE2B8B55E05C16B5;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7672E88A37B82E503FA219BD58832B5C5D29A5C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9928B5478488D69E5776EAC89B4266080286BD8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8D458241340A36967454CC6B275F6310402A8C;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF54983441BF19D55B1C26F3D23D6149B7A26A0;
IL2CPP_EXTERN_C String_t* _stringLiteralF086AF11277C2521781BD5A24277BDC3BAEF68D1;
IL2CPP_EXTERN_C String_t* _stringLiteralF0EC54FD9493DD95C328894C9CC1F35DEB57EC2F;
IL2CPP_EXTERN_C String_t* _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30;
IL2CPP_EXTERN_C String_t* _stringLiteralF60D0BBF78D0335E5CF0CEECE6DA3EB7F5F387B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF66FBA975153E0D00AAF2AEA4C20766584CAAFAD;
IL2CPP_EXTERN_C String_t* _stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFCAAE79B5B69492AB77FF774BA11951FC704A6BC;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7067BCC04D567E9A520BC26EBF3D022AAD23F7E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_PollyTTSU3Ed__13_System_Collections_IEnumerator_Reset_mEAC9919CB0A964CBA5E28E4FF0BF9364C1025B6C_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// LoLSDK.MockWebGL
struct MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5  : public RuntimeObject
{
public:
	// System.String LoLSDK.MockWebGL::_gameName
	String_t* ____gameName_0;
	// UnityEngine.Coroutine LoLSDK.MockWebGL::pollyTTSRequest
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___pollyTTSRequest_1;

public:
	inline static int32_t get_offset_of__gameName_0() { return static_cast<int32_t>(offsetof(MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5, ____gameName_0)); }
	inline String_t* get__gameName_0() const { return ____gameName_0; }
	inline String_t** get_address_of__gameName_0() { return &____gameName_0; }
	inline void set__gameName_0(String_t* value)
	{
		____gameName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gameName_0), (void*)value);
	}

	inline static int32_t get_offset_of_pollyTTSRequest_1() { return static_cast<int32_t>(offsetof(MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5, ___pollyTTSRequest_1)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_pollyTTSRequest_1() const { return ___pollyTTSRequest_1; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_pollyTTSRequest_1() { return &___pollyTTSRequest_1; }
	inline void set_pollyTTSRequest_1(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___pollyTTSRequest_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pollyTTSRequest_1), (void*)value);
	}
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

// LoLSDK.WebGL
struct WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9  : public RuntimeObject
{
public:

public:
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

// LoLSDK.MockWebGL/<_PollyTTS>d__13
struct U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5  : public RuntimeObject
{
public:
	// System.Int32 LoLSDK.MockWebGL/<_PollyTTS>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoLSDK.MockWebGL/<_PollyTTS>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String LoLSDK.MockWebGL/<_PollyTTS>d__13::text
	String_t* ___text_2;
	// System.String LoLSDK.MockWebGL/<_PollyTTS>d__13::currentLang
	String_t* ___currentLang_3;
	// System.String LoLSDK.MockWebGL/<_PollyTTS>d__13::currentTTSLangKey
	String_t* ___currentTTSLangKey_4;
	// LoLSDK.MockWebGL LoLSDK.MockWebGL/<_PollyTTS>d__13::<>4__this
	MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * ___U3CU3E4__this_5;
	// System.Action`1<UnityEngine.AudioClip> LoLSDK.MockWebGL/<_PollyTTS>d__13::onDownloaded
	Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * ___onDownloaded_6;
	// UnityEngine.Networking.UnityWebRequest LoLSDK.MockWebGL/<_PollyTTS>d__13::<dataRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CdataRequestU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_2), (void*)value);
	}

	inline static int32_t get_offset_of_currentLang_3() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___currentLang_3)); }
	inline String_t* get_currentLang_3() const { return ___currentLang_3; }
	inline String_t** get_address_of_currentLang_3() { return &___currentLang_3; }
	inline void set_currentLang_3(String_t* value)
	{
		___currentLang_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLang_3), (void*)value);
	}

	inline static int32_t get_offset_of_currentTTSLangKey_4() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___currentTTSLangKey_4)); }
	inline String_t* get_currentTTSLangKey_4() const { return ___currentTTSLangKey_4; }
	inline String_t** get_address_of_currentTTSLangKey_4() { return &___currentTTSLangKey_4; }
	inline void set_currentTTSLangKey_4(String_t* value)
	{
		___currentTTSLangKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTTSLangKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___U3CU3E4__this_5)); }
	inline MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_onDownloaded_6() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___onDownloaded_6)); }
	inline Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * get_onDownloaded_6() const { return ___onDownloaded_6; }
	inline Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 ** get_address_of_onDownloaded_6() { return &___onDownloaded_6; }
	inline void set_onDownloaded_6(Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * value)
	{
		___onDownloaded_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDownloaded_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataRequestU3E5__2_7() { return static_cast<int32_t>(offsetof(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5, ___U3CdataRequestU3E5__2_7)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CdataRequestU3E5__2_7() const { return ___U3CdataRequestU3E5__2_7; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CdataRequestU3E5__2_7() { return &___U3CdataRequestU3E5__2_7; }
	inline void set_U3CdataRequestU3E5__2_7(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CdataRequestU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataRequestU3E5__2_7), (void*)value);
	}
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.AudioType
struct AudioType_t11F5C6E305A5801D3D966A871C0AE858EECA585C 
{
public:
	// System.Int32 UnityEngine.AudioType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioType_t11F5C6E305A5801D3D966A871C0AE858EECA585C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// SimpleJSON.JSONContainerType
struct JSONContainerType_t784BDDEA69DF69F989AE8420E6AF3CB39B5EED9F 
{
public:
	// System.Int32 SimpleJSON.JSONContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JSONContainerType_t784BDDEA69DF69F989AE8420E6AF3CB39B5EED9F, ___value___2)); }
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

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// SimpleJSON.JSONNode
struct JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD  : public RuntimeObject
{
public:

public:
};

struct JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_StaticFields
{
public:
	// System.Boolean SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::VectorContainerType
	int32_t ___VectorContainerType_2;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::QuaternionContainerType
	int32_t ___QuaternionContainerType_3;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::RectContainerType
	int32_t ___RectContainerType_4;

public:
	inline static int32_t get_offset_of_forceASCII_0() { return static_cast<int32_t>(offsetof(JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_StaticFields, ___forceASCII_0)); }
	inline bool get_forceASCII_0() const { return ___forceASCII_0; }
	inline bool* get_address_of_forceASCII_0() { return &___forceASCII_0; }
	inline void set_forceASCII_0(bool value)
	{
		___forceASCII_0 = value;
	}

	inline static int32_t get_offset_of_VectorContainerType_2() { return static_cast<int32_t>(offsetof(JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_StaticFields, ___VectorContainerType_2)); }
	inline int32_t get_VectorContainerType_2() const { return ___VectorContainerType_2; }
	inline int32_t* get_address_of_VectorContainerType_2() { return &___VectorContainerType_2; }
	inline void set_VectorContainerType_2(int32_t value)
	{
		___VectorContainerType_2 = value;
	}

	inline static int32_t get_offset_of_QuaternionContainerType_3() { return static_cast<int32_t>(offsetof(JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_StaticFields, ___QuaternionContainerType_3)); }
	inline int32_t get_QuaternionContainerType_3() const { return ___QuaternionContainerType_3; }
	inline int32_t* get_address_of_QuaternionContainerType_3() { return &___QuaternionContainerType_3; }
	inline void set_QuaternionContainerType_3(int32_t value)
	{
		___QuaternionContainerType_3 = value;
	}

	inline static int32_t get_offset_of_RectContainerType_4() { return static_cast<int32_t>(offsetof(JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_StaticFields, ___RectContainerType_4)); }
	inline int32_t get_RectContainerType_4() const { return ___RectContainerType_4; }
	inline int32_t* get_address_of_RectContainerType_4() { return &___RectContainerType_4; }
	inline void set_RectContainerType_4(int32_t value)
	{
		___RectContainerType_4 = value;
	}
};

struct JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_ThreadStaticFields
{
public:
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t * ___m_EscapeBuilder_1;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_1() { return static_cast<int32_t>(offsetof(JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD_ThreadStaticFields, ___m_EscapeBuilder_1)); }
	inline StringBuilder_t * get_m_EscapeBuilder_1() const { return ___m_EscapeBuilder_1; }
	inline StringBuilder_t ** get_address_of_m_EscapeBuilder_1() { return &___m_EscapeBuilder_1; }
	inline void set_m_EscapeBuilder_1(StringBuilder_t * value)
	{
		___m_EscapeBuilder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EscapeBuilder_1), (void*)value);
	}
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

// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_8), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_9), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_10), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_12)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_12), (void*)value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_13)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_13), (void*)value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_14)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_14() const { return ___code_14; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_14), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_16), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Action`1<UnityEngine.AudioClip>
struct Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// SimpleJSON.JSONObject
struct JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536  : public JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_t518EF3AB63A4FDC2FFA1B67A575A68F7BD9C2F65 * ___m_Dict_5;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_6;

public:
	inline static int32_t get_offset_of_m_Dict_5() { return static_cast<int32_t>(offsetof(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536, ___m_Dict_5)); }
	inline Dictionary_2_t518EF3AB63A4FDC2FFA1B67A575A68F7BD9C2F65 * get_m_Dict_5() const { return ___m_Dict_5; }
	inline Dictionary_2_t518EF3AB63A4FDC2FFA1B67A575A68F7BD9C2F65 ** get_address_of_m_Dict_5() { return &___m_Dict_5; }
	inline void set_m_Dict_5(Dictionary_2_t518EF3AB63A4FDC2FFA1B67A575A68F7BD9C2F65 * value)
	{
		___m_Dict_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dict_5), (void*)value);
	}

	inline static int32_t get_offset_of_inline_6() { return static_cast<int32_t>(offsetof(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536, ___inline_6)); }
	inline bool get_inline_6() const { return ___inline_6; }
	inline bool* get_address_of_inline_6() { return &___inline_6; }
	inline void set_inline_6(bool value)
	{
		___inline_6 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___input0, String_t* ___replacement1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator LoLSDK.MockWebGL::_PollyTTS(System.String,System.String,System.String,System.Action`1<UnityEngine.AudioClip>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MockWebGL__PollyTTS_m9879E9542A79C7AA6E5818D46A112716B16547D2 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___text0, String_t* ___currentLang1, String_t* ___currentTTSLangKey2, Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * ___onDownloaded3, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13__ctor_mE6BE840406391D35B15CBA9B76284D750E33AF73 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LoLSDK.WebGL::_PostWindowMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL__PostWindowMessage_m1A4EA3BEEFD1E06205D3AE50C2DDA23DF6A5596A (String_t* ___msgName0, String_t* ___jsonPayload1, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7 (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * __this, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854 (String_t* ___s0, const RuntimeMethod* method);
// System.Void LoLSDK.WebGL::PostWindowMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___msgName0, String_t* ___jsonPayload1, const RuntimeMethod* method);
// System.String LoLSDK.WebGL::_GameIsReady(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebGL__GameIsReady_m6133D89BC897CDDC020D752E38CC6DB1CBC7CFA9 (String_t* ___gameName0, String_t* ___callbackGameObject1, String_t* ___aspectRatio2, String_t* ___resolution3, String_t* ___sdkVersion4, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977 (int32_t ___n0, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * JSONNode_op_Implicit_mA3F0075AE5C210393DE9D442AF285E198B59B0A2 (bool ___b0, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * JSONNode_op_Implicit_m1FE1DDB5F169000384861BF8D077082F99F588FB (float ___n0, const RuntimeMethod* method);
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_U3CU3Em__Finally1_m4695B519B6C0D7545D5ACE3741C025739983A012 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method);
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_U3CU3Em__Finally2_m6A7F53E19C1D99946C905026CA47FACDFC2BBAB0 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_companyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_companyName_mB9307F7E65824E4128137B4E4298CAA997B3524D (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_productName_m712E2BD951F92F0D8E992E45C8508F0B5B045E83 (const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4 (String_t* ___uri0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bodyData1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * JSON_Parse_m16D30620CC0C91402567BDF83A090D16365C03BF (String_t* ___aJSON0, const RuntimeMethod* method);
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_op_Implicit_m0B0794613B6C0CC8F37926CBEF29B48EB491A12F (JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * ___d0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestMultimedia::GetAudioClip(System.String,UnityEngine.AudioType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestMultimedia_GetAudioClip_m810280693B8D9FEFCD8E98D522DEE48F87F32B95 (String_t* ___uri0, int32_t ___audioType1, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Networking.DownloadHandlerAudioClip::get_audioClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * DownloadHandlerAudioClip_get_audioClip_m90B66F5B139F4886862363A3DACE0858D15AAFFE (DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AudioClip>::Invoke(!0)
inline void Action_1_Invoke_m7067BCC04D567E9A520BC26EBF3D022AAD23F7E6 (Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_System_IDisposable_Dispose_mEE34E2FABB41995EACA97F47C89D6978DAD8CF82 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL _PostWindowMessage(char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _GameIsReady(char*, char*, char*, char*, char*);
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
// System.Void LoLSDK.MockWebGL::PostWindowMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_PostWindowMessage_m34486B1117F6661BDD8430CE41159CDF6A8A891B (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___msgName0, String_t* ___jsonPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B034CE9BAB5183193D63BDEE1DE588BE79AC390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BA5C3FE9526690B51958E8F6EC686CFD9207CB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("PostWindowMessage: " + msgName);
		String_t* L_0 = ___msgName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8B034CE9BAB5183193D63BDEE1DE588BE79AC390, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// Debug.Log("JSON: " + jsonPayload);
		String_t* L_2 = ___jsonPayload1;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9BA5C3FE9526690B51958E8F6EC686CFD9207CB1, L_2, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::LogMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_LogMessage_m16243C55CD08937D6DD2D5A8B79F014364F0D24B (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFACFAD293BDE7B8237DEAD4409DB560241158D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("LogMessage");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCCFACFAD293BDE7B8237DEAD4409DB560241158D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::sError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_sError_m1C0DE5792A0E84B405B0B3E775C6F45D10567D53 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Error");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::CompleteGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_CompleteGame_m8DA8B890A6C4C17B8D808FAF57FE02AE75103130 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82989B4E12F25ED79C68AB26BE1A827039972FB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("CompleteGame");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral82989B4E12F25ED79C68AB26BE1A827039972FB2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::GameIsReady(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_GameIsReady_m4BCEA1883C62D0EF1DCBFDC0B8F2EEBC84EF1371 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___gameName0, String_t* ___callbackGameObject1, String_t* ___aspectRatio2, String_t* ___resolution3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2E56424DDAB3E7E8CE3FDBF5100639CCBD92B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7672E88A37B82E503FA219BD58832B5C5D29A5C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameName = gameName;
		String_t* L_0 = ___gameName0;
		__this->set__gameName_0(L_0);
		// Debug.Log($"GameIsReady Editor - name: {gameName}, callbackGameObject: {callbackGameObject}");
		String_t* L_1 = ___gameName0;
		String_t* L_2 = ___callbackGameObject1;
		String_t* L_3;
		L_3 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralD7672E88A37B82E503FA219BD58832B5C5D29A5C, L_1, _stringLiteral4D2E56424DDAB3E7E8CE3FDBF5100639CCBD92B9, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SubmitProgress(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SubmitProgress_m32048A7871D932D1E2E9E9B54B14FFD5C9124C40 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, int32_t ___score0, int32_t ___currentProgress1, int32_t ___maximumProgress2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA41F0AE61626DB56B5A488823E2AEB4CF9998B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SubmitProgress");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8FA41F0AE61626DB56B5A488823E2AEB4CF9998B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SubmitAnswer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SubmitAnswer_m4A11ABFF4D5587281EFC332A645B82CDD7F56CFA (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, int32_t ___questionId0, int32_t ___alternativeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66FBA975153E0D00AAF2AEA4C20766584CAAFAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SubmitAnswer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF66FBA975153E0D00AAF2AEA4C20766584CAAFAD, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::ShowQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_ShowQuestion_mA5C286512C78336B759B19815FF5A4CFDB680AB5 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DBF07571F57DB1DFB7BD89A0A8F4D72CB1D3284);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ShowQuestion");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2DBF07571F57DB1DFB7BD89A0A8F4D72CB1D3284, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SpeakText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SpeakText_m3A4D36261BB436EC84EC74D3D97B3F7B72B2E3F8 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral270DB076B1C89AC25E533B5E0E779314CD7A79CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SpeakText");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral270DB076B1C89AC25E533B5E0E779314CD7A79CB, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::CancelSpeakText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_CancelSpeakText_m2FA8B8D0C1F4189BE4DEA6AD4DF3A14BB4B4E34A (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCAAE79B5B69492AB77FF774BA11951FC704A6BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Cancel SpeakText. NOTE: Will not cancel editor testing SpeakText.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFCAAE79B5B69492AB77FF774BA11951FC704A6BC, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SpeakText(System.String,System.Action`1<UnityEngine.AudioClip>,UnityEngine.MonoBehaviour,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SpeakText_mF097A9A992451105D9B61ADF591F4AB7AEF3F1FE (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___text0, Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * ___onDownloaded1, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___owner2, String_t* ___currentLang3, String_t* ___currentTTSLangKey4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A1D6C2665A441AB812E3CC1500EF7458F228E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(text))
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
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
		// var regex = new System.Text.RegularExpressions.Regex("<[^>]+>");
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_2 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m8BB2137D7B0A93CD70FD3061579C7456BB65216E(L_2, _stringLiteralC5A1D6C2665A441AB812E3CC1500EF7458F228E2, /*hidden argument*/NULL);
		// string cleanString = regex.Replace(text, "");
		String_t* L_3 = ___text0;
		String_t* L_4;
		L_4 = Regex_Replace_m47C8C4AF6A7F1D1A2728F9ADA7791F4EABA49E2F(L_2, L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (pollyTTSRequest != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5 = __this->get_pollyTTSRequest_1();
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// owner.StopCoroutine(pollyTTSRequest);
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_6 = ___owner2;
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7 = __this->get_pollyTTSRequest_1();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// pollyTTSRequest = owner.StartCoroutine(_PollyTTS(cleanString, currentLang, currentTTSLangKey, onDownloaded));
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_8 = ___owner2;
		String_t* L_9 = V_0;
		String_t* L_10 = ___currentLang3;
		String_t* L_11 = ___currentTTSLangKey4;
		Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * L_12 = ___onDownloaded1;
		RuntimeObject* L_13;
		L_13 = MockWebGL__PollyTTS_m9879E9542A79C7AA6E5818D46A112716B16547D2(__this, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_8, L_13, /*hidden argument*/NULL);
		__this->set_pollyTTSRequest_1(L_14);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoLSDK.MockWebGL::_PollyTTS(System.String,System.String,System.String,System.Action`1<UnityEngine.AudioClip>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MockWebGL__PollyTTS_m9879E9542A79C7AA6E5818D46A112716B16547D2 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___text0, String_t* ___currentLang1, String_t* ___currentTTSLangKey2, Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * ___onDownloaded3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * L_0 = (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 *)il2cpp_codegen_object_new(U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5_il2cpp_TypeInfo_var);
		U3C_PollyTTSU3Ed__13__ctor_mE6BE840406391D35B15CBA9B76284D750E33AF73(L_0, 0, /*hidden argument*/NULL);
		U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * L_1 = L_0;
		L_1->set_U3CU3E4__this_5(__this);
		U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * L_2 = L_1;
		String_t* L_3 = ___text0;
		L_2->set_text_2(L_3);
		U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * L_4 = L_2;
		String_t* L_5 = ___currentLang1;
		L_4->set_currentLang_3(L_5);
		U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * L_6 = L_4;
		String_t* L_7 = ___currentTTSLangKey2;
		L_6->set_currentTTSLangKey_4(L_7);
		U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * L_8 = L_6;
		Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * L_9 = ___onDownloaded3;
		L_8->set_onDownloaded_6(L_9);
		return L_8;
	}
}
// System.Void LoLSDK.MockWebGL::SpeakQuestion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SpeakQuestion_m4EE22AF6EEFE639E6468FF3A694C24E73E5039DA (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, int32_t ___questionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral222E042C359EA54919A22BEF2E124A6EA3CC6418);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SpeakQuestion");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral222E042C359EA54919A22BEF2E124A6EA3CC6418, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SpeakQuestionAndAlternatives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SpeakQuestionAndAlternatives_mBD01295AA823A404D9D841944972DCB6EF01C0C6 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, int32_t ___questionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F05A92C109AC57A86C25CD496FFA04F9E47640A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SpeakQuestionAndAlternatives");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1F05A92C109AC57A86C25CD496FFA04F9E47640A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SpeakAlternative(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SpeakAlternative_m900A949D65336D09450D8F45A6A0B2997A505762 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, int32_t ___alternativeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02AEADE971E564162C31EBB2FA571C6AD73CE9E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SpeakAlternative");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral02AEADE971E564162C31EBB2FA571C6AD73CE9E4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::ConfigureSound(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_ConfigureSound_mB4A8181347A074798F7F92C844D7708FD75851BD (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, float ___a0, float ___b1, float ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral490F394828087815AB76ADCD05C0C90D6DAABEF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ConfigureSound");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral490F394828087815AB76ADCD05C0C90D6DAABEF9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::PlaySound(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_PlaySound_m95382D85DE2583E41DFAACC4257163573A07BF7D (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___path0, bool ___background1, bool ___loop2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E28A6403D9F4604B07F787F5F349E06CE636F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("PlaySound");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral93E28A6403D9F4604B07F787F5F349E06CE636F0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::StopSound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_StopSound_mF4D8DC6F84EEDABA528D435F0BF4A88828EF7311 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193D61CE8AAAAE0C4CE7E8DB3338EFEA2343A8F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("StopSound");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral193D61CE8AAAAE0C4CE7E8DB3338EFEA2343A8F6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::SaveState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_SaveState_mD79246B3C68C6C0CCDF7B1821B0485532E1873C6 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("SaveData");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral608D2432B9FF573677D3C91B290C6EB06A4F353C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::LoadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_LoadState_m46DF386131E038597E90901908943817BB461070 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("LoadData");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::GetPlayerActivityId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL_GetPlayerActivityId_m1418017CCF78CE96722FE5040401ADE878656ACE (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93146F23FBCFCC0ABC17C13F8664E5D772A4442B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GetPlayerActivityId");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral93146F23FBCFCC0ABC17C13F8664E5D772A4442B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.MockWebGL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockWebGL__ctor_mB877BB1BBBC42919F2F4448C1541252497358BF9 (MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void LoLSDK.WebGL::_PostWindowMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL__PostWindowMessage_m1A4EA3BEEFD1E06205D3AE50C2DDA23DF6A5596A (String_t* ___msgName0, String_t* ___jsonPayload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___msgName0' to native representation
	char* ____msgName0_marshaled = NULL;
	____msgName0_marshaled = il2cpp_codegen_marshal_string(___msgName0);

	// Marshaling of parameter '___jsonPayload1' to native representation
	char* ____jsonPayload1_marshaled = NULL;
	____jsonPayload1_marshaled = il2cpp_codegen_marshal_string(___jsonPayload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_PostWindowMessage)(____msgName0_marshaled, ____jsonPayload1_marshaled);

	// Marshaling cleanup of parameter '___msgName0' native representation
	il2cpp_codegen_marshal_free(____msgName0_marshaled);
	____msgName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___jsonPayload1' native representation
	il2cpp_codegen_marshal_free(____jsonPayload1_marshaled);
	____jsonPayload1_marshaled = NULL;

}
// System.Void LoLSDK.WebGL::PostWindowMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___msgName0, String_t* ___jsonPayload1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55A7F46D52E64418CC7F7052B04EAAA87590BAF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("PostWindowMessage " + msgName);
		String_t* L_0 = ___msgName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral55A7F46D52E64418CC7F7052B04EAAA87590BAF5, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// _PostWindowMessage(msgName, jsonPayload);
		String_t* L_2 = ___msgName0;
		String_t* L_3 = ___jsonPayload1;
		WebGL__PostWindowMessage_m1A4EA3BEEFD1E06205D3AE50C2DDA23DF6A5596A(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::LogMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_LogMessage_m6AB64945EB60098AFA2CB70A8AF868913DC043DE (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0DBE5E8521C194AE0829F1AE9654AFF0414E536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["msg"] = msg
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		String_t* L_2 = ___msg0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51, L_3);
		V_0 = L_1;
		// PostWindowMessage("logMessage", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralB0DBE5E8521C194AE0829F1AE9654AFF0414E536, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String LoLSDK.WebGL::_GameIsReady(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebGL__GameIsReady_m6133D89BC897CDDC020D752E38CC6DB1CBC7CFA9 (String_t* ___gameName0, String_t* ___callbackGameObject1, String_t* ___aspectRatio2, String_t* ___resolution3, String_t* ___sdkVersion4, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, char*, char*);

	// Marshaling of parameter '___gameName0' to native representation
	char* ____gameName0_marshaled = NULL;
	____gameName0_marshaled = il2cpp_codegen_marshal_string(___gameName0);

	// Marshaling of parameter '___callbackGameObject1' to native representation
	char* ____callbackGameObject1_marshaled = NULL;
	____callbackGameObject1_marshaled = il2cpp_codegen_marshal_string(___callbackGameObject1);

	// Marshaling of parameter '___aspectRatio2' to native representation
	char* ____aspectRatio2_marshaled = NULL;
	____aspectRatio2_marshaled = il2cpp_codegen_marshal_string(___aspectRatio2);

	// Marshaling of parameter '___resolution3' to native representation
	char* ____resolution3_marshaled = NULL;
	____resolution3_marshaled = il2cpp_codegen_marshal_string(___resolution3);

	// Marshaling of parameter '___sdkVersion4' to native representation
	char* ____sdkVersion4_marshaled = NULL;
	____sdkVersion4_marshaled = il2cpp_codegen_marshal_string(___sdkVersion4);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GameIsReady)(____gameName0_marshaled, ____callbackGameObject1_marshaled, ____aspectRatio2_marshaled, ____resolution3_marshaled, ____sdkVersion4_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___gameName0' native representation
	il2cpp_codegen_marshal_free(____gameName0_marshaled);
	____gameName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___callbackGameObject1' native representation
	il2cpp_codegen_marshal_free(____callbackGameObject1_marshaled);
	____callbackGameObject1_marshaled = NULL;

	// Marshaling cleanup of parameter '___aspectRatio2' native representation
	il2cpp_codegen_marshal_free(____aspectRatio2_marshaled);
	____aspectRatio2_marshaled = NULL;

	// Marshaling cleanup of parameter '___resolution3' native representation
	il2cpp_codegen_marshal_free(____resolution3_marshaled);
	____resolution3_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdkVersion4' native representation
	il2cpp_codegen_marshal_free(____sdkVersion4_marshaled);
	____sdkVersion4_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void LoLSDK.WebGL::GameIsReady(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_GameIsReady_mAF3CA87ADA9CC9FB4BEE6BCA4151D0F8D5D24736 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___gameName0, String_t* ___callbackGameObject1, String_t* ___aspectRatio2, String_t* ___resolution3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB30463BE846124410A3C44E55FE0DCA8CE238A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _GameIsReady(gameName, callbackGameObject, aspectRatio, resolution, SDK_VERSION);
		String_t* L_0 = ___gameName0;
		String_t* L_1 = ___callbackGameObject1;
		String_t* L_2 = ___aspectRatio2;
		String_t* L_3 = ___resolution3;
		String_t* L_4;
		L_4 = WebGL__GameIsReady_m6133D89BC897CDDC020D752E38CC6DB1CBC7CFA9(L_0, L_1, L_2, L_3, _stringLiteralB30463BE846124410A3C44E55FE0DCA8CE238A70, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::CompleteGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_CompleteGame_m3330594A487DD02D1CF35CF46BE94056922AA88A (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject();
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// PostWindowMessage("complete", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = V_0;
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SubmitProgress(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SubmitProgress_m5FC3B80F4EACCDC3B9CED3E4BBC90BA3810158BD (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, int32_t ___score0, int32_t ___currentProgress1, int32_t ___maximumProgress2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F7E5C19FAA38EEDC11F4B8BF490806ABD67E193);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF671DCFF145741AF733164CA94C2DF13A2502F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD8D458241340A36967454CC6B275F6310402A8C);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		// 
		//     ["score"] = score,
		//     ["currentProgress"] = currentProgress,
		//     ["maximumProgress"] = maximumProgress
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		int32_t L_2 = ___score0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_3);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = L_1;
		int32_t L_5 = ___currentProgress1;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_6;
		L_6 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_5, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_4, _stringLiteral9F7E5C19FAA38EEDC11F4B8BF490806ABD67E193, L_6);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_7 = L_4;
		int32_t L_8 = ___maximumProgress2;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_9;
		L_9 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_8, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_7, _stringLiteralAF671DCFF145741AF733164CA94C2DF13A2502F6, L_9);
		V_0 = L_7;
		// PostWindowMessage("progress", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_10 = V_0;
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralDD8D458241340A36967454CC6B275F6310402A8C, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SubmitAnswer(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SubmitAnswer_m428723588B57504847402D0FE024A736B31F0A53 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, int32_t ___questionId0, int32_t ___alternativeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD67B260129B4A9C153BC806FE2B8B55E05C16B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["questionId"] = questionId,
		//     ["alternativeId"] = alternativeId
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		int32_t L_2 = ___questionId0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3, L_3);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = L_1;
		int32_t L_5 = ___alternativeId1;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_6;
		L_6 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_5, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_4, _stringLiteralCD67B260129B4A9C153BC806FE2B8B55E05C16B5, L_6);
		V_0 = L_4;
		// PostWindowMessage("answer", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_7 = V_0;
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SpeakText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SpeakText_mAEB9E0E307610CCFEBC5AE3D976E73A5CD728326 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF4656442C57AC8446C155600893CC270FC58B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["key"] = key
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		String_t* L_2 = ___key0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6, L_3);
		V_0 = L_1;
		// PostWindowMessage("speakText", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral7BF4656442C57AC8446C155600893CC270FC58B0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::CancelSpeakText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_CancelSpeakText_m6A6DB97543DA86E045856BA9FAB8743F8B5F3588 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7D4DAD20C1BF0F9B332F78B5E0EB4D2091932C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PostWindowMessage("speakTextCancel", "{}");
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralA7D4DAD20C1BF0F9B332F78B5E0EB4D2091932C5, _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SpeakQuestion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SpeakQuestion_m868B7144A6F6D0E043563AD87F59CB7800F7AB5C (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, int32_t ___questionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral222E042C359EA54919A22BEF2E124A6EA3CC6418);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF54983441BF19D55B1C26F3D23D6149B7A26A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// Debug.Log("SpeakQuestion");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral222E042C359EA54919A22BEF2E124A6EA3CC6418, /*hidden argument*/NULL);
		// JSONObject payload = new JSONObject()
		// {
		//     ["questionId"] = questionId
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		int32_t L_2 = ___questionId0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3, L_3);
		V_0 = L_1;
		// PostWindowMessage("speakQuestion", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralEBF54983441BF19D55B1C26F3D23D6149B7A26A0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SpeakAlternative(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SpeakAlternative_m182B20F3BD2577B5A1CA16C1D61622F34DF6EC3F (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, int32_t ___alternativeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D203BC3602A49415571F981B0358C7DE13C1CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD67B260129B4A9C153BC806FE2B8B55E05C16B5);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["alternativeId"] = alternativeId
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		int32_t L_2 = ___alternativeId0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralCD67B260129B4A9C153BC806FE2B8B55E05C16B5, L_3);
		V_0 = L_1;
		// PostWindowMessage("speakAlternative", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral97D203BC3602A49415571F981B0358C7DE13C1CE, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SpeakQuestionAndAlternatives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SpeakQuestionAndAlternatives_m4D0CB0A10CD2B525DB12609DB670B127D0041682 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, int32_t ___questionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D99DF811BA23306495AF8632246B359B671F5D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["questionId"] = questionId
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		int32_t L_2 = ___questionId0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_mE8465C81B784896DED800C56DDF99A3A39357977(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralFF8B50500F0515C2C126AF2AC476EF522167C1D3, L_3);
		V_0 = L_1;
		// PostWindowMessage("speakQuestionAndAlternatives", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral5D99DF811BA23306495AF8632246B359B671F5D9, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_Error_m3C0A01B23DE1644E8D4968911F20E8D298B05998 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["msg"] = msg
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		String_t* L_2 = ___msg0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralF82A2551B1939B7DB5814FDB771C9F7684F62A51, L_3);
		V_0 = L_1;
		// PostWindowMessage("error", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::ShowQuestion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_ShowQuestion_m7D8635EAE871A197B706C9B27813703A3DD6A5DA (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DBF07571F57DB1DFB7BD89A0A8F4D72CB1D3284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0F3B80B1E71297E0632B6087FB9BD247E04F89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("ShowQuestion");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2DBF07571F57DB1DFB7BD89A0A8F4D72CB1D3284, /*hidden argument*/NULL);
		// PostWindowMessage("showQuestion", "{}");
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral3F0F3B80B1E71297E0632B6087FB9BD247E04F89, _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::PlaySound(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_PlaySound_m728FF1CB2C91436C1F639F81A92C08170357980F (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___file0, bool ___background1, bool ___loop2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C31D960C743ED835CD31C84ED4444C9C6106DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF086AF11277C2521781BD5A24277BDC3BAEF68D1);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		// 
		//     ["file"] = file,
		//     ["background"] = background,
		//     ["loop"] = loop
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		String_t* L_2 = ___file0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, L_3);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = L_1;
		bool L_5 = ___background1;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_6;
		L_6 = JSONNode_op_Implicit_mA3F0075AE5C210393DE9D442AF285E198B59B0A2(L_5, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_4, _stringLiteralF086AF11277C2521781BD5A24277BDC3BAEF68D1, L_6);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_7 = L_4;
		bool L_8 = ___loop2;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_9;
		L_9 = JSONNode_op_Implicit_mA3F0075AE5C210393DE9D442AF285E198B59B0A2(L_8, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_7, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, L_9);
		V_0 = L_7;
		// PostWindowMessage("playSound", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_10 = V_0;
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral1C31D960C743ED835CD31C84ED4444C9C6106DA4, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::ConfigureSound(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_ConfigureSound_m94C1C2D2AF82C24FAED4F536302B0667404BE4CB (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, float ___foreground0, float ___background1, float ___fade2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D61FA33932B4158DDBA6595C47D459C3D872579);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5996492B2C473AD4838E8A5F0D7E9E462AB8C63D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF086AF11277C2521781BD5A24277BDC3BAEF68D1);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["foreground"] = foreground,
		//     ["background"] = background,
		//     ["fade"] = fade
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		float L_2 = ___foreground0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_m1FE1DDB5F169000384861BF8D077082F99F588FB(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteral5996492B2C473AD4838E8A5F0D7E9E462AB8C63D, L_3);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = L_1;
		float L_5 = ___background1;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_6;
		L_6 = JSONNode_op_Implicit_m1FE1DDB5F169000384861BF8D077082F99F588FB(L_5, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_4, _stringLiteralF086AF11277C2521781BD5A24277BDC3BAEF68D1, L_6);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_7 = L_4;
		float L_8 = ___fade2;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_9;
		L_9 = JSONNode_op_Implicit_m1FE1DDB5F169000384861BF8D077082F99F588FB(L_8, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_7, _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC, L_9);
		V_0 = L_7;
		// PostWindowMessage("configureSound", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_10 = V_0;
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral0D61FA33932B4158DDBA6595C47D459C3D872579, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::StopSound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_StopSound_m6D88C582C01175D88299EE72E84757D7B1592EF8 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___file0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9C53D9C1D5AD049AA39063E5E997F3FAAC6029);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_0 = NULL;
	{
		// JSONObject payload = new JSONObject()
		// {
		//     ["file"] = file
		// };
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_0 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_0, /*hidden argument*/NULL);
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_1 = L_0;
		String_t* L_2 = ___file0;
		JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_3;
		L_3 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_2, /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_1, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, L_3);
		V_0 = L_1;
		// PostWindowMessage("stopSound", payload.ToString());
		JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteral2B9C53D9C1D5AD049AA39063E5E997F3FAAC6029, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::SaveState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_SaveState_m9E44BD230A914D0E75988A97909371A8F0181346 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF3A350FCEBDEB193A977F853BC40C418F8ECD34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PostWindowMessage("saveState", data);
		String_t* L_0 = ___data0;
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralAF3A350FCEBDEB193A977F853BC40C418F8ECD34, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::LoadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_LoadState_mFD3BF159BF04CC21E201A1A4E93609E32EEF6D6F (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7B2696A237654859198F12097C3276E11B980B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PostWindowMessage("loadState", "{}");
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralB7B2696A237654859198F12097C3276E11B980B8, _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::GetPlayerActivityId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL_GetPlayerActivityId_m3A0DC61910B4B9CBC6E04B8C495F5409E91A8BF4 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9928B5478488D69E5776EAC89B4266080286BD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PostWindowMessage("getPlayerActivityId", "{}");
		WebGL_PostWindowMessage_m1113EBBAB65CAD96CD3B8C1314756D3CB4F980E3(__this, _stringLiteralD9928B5478488D69E5776EAC89B4266080286BD8, _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoLSDK.WebGL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebGL__ctor_m43E4262FCA1A4CB9D1A44DB2846B6BA1F646E2D1 (WebGL_t079834AC1D72B13BDA75D00689504B3C525363F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13__ctor_mE6BE840406391D35B15CBA9B76284D750E33AF73 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_System_IDisposable_Dispose_mEE34E2FABB41995EACA97F47C89D6978DAD8CF82 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0041;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_0037;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x41, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		U3C_PollyTTSU3Ed__13_U3CU3Em__Finally1_m4695B519B6C0D7545D5ACE3741C025739983A012(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0037:
	{
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x41, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		U3C_PollyTTSU3Ed__13_U3CU3Em__Finally2_m6A7F53E19C1D99946C905026CA47FACDFC2BBAB0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean LoLSDK.MockWebGL/<_PollyTTS>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_PollyTTSU3Ed__13_MoveNext_m7408875831887C90B2BDFEA054CB66A95F9D40D2 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7067BCC04D567E9A520BC26EBF3D022AAD23F7E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral333879C3D8AE0FBC11A33170D1DD8CCCB271C667);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral372D05CE295E056D2B3BD0FDE9C2316343E09F21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3831A74391456331DECEEB3D380742D3067A7117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DB6BD6181A2FDD083BE122F6A6ED551761115A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CDA2CF076B3B1C60F4A3E3F04FA6F4AEA070D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B07A8EE16C4F6B46E5B48B2F45A0B8C8DD06478);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ECD6975BC3C960529EDFD4B80E07171EFA23EF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88D3B5583A23D5C6BA10994992E02FA20F9CBDD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99147D95EB0FB3B0BD360458A2B4909E52FC1BA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A941CD81CE19790B710D29EB849A1844885B5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0EC54FD9493DD95C328894C9CC1F35DEB57EC2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF60D0BBF78D0335E5CF0CEECE6DA3EB7F5F387B8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * V_2 = NULL;
	String_t* V_3 = NULL;
	JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	int32_t G_B18_0 = 0;
	Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * G_B23_0 = NULL;
	Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * G_B22_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_012a;
				}
				case 2:
				{
					goto IL_02a4;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_036e;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			// string clipUrl = null;
			V_3 = (String_t*)NULL;
			// var postData = new JSONObject
			// {
			//     ["text"] = text,
			//     ["lang"] = currentLang,
			//     ["lang_code"] = currentTTSLangKey,
			//     ["company_in_editor"] = Application.companyName,
			//     ["product_in_editor"] = Application.productName,
			//     ["game_name_in_editor"] = _gameName,
			// };
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_3 = (JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 *)il2cpp_codegen_object_new(JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536_il2cpp_TypeInfo_var);
			JSONObject__ctor_mAF478C493F8B62CDB63C88ECD1635F60E97458F7(L_3, /*hidden argument*/NULL);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_4 = L_3;
			String_t* L_5 = __this->get_text_2();
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_6;
			L_6 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_5, /*hidden argument*/NULL);
			VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_4, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0, L_6);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_7 = L_4;
			String_t* L_8 = __this->get_currentLang_3();
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_9;
			L_9 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_8, /*hidden argument*/NULL);
			VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_7, _stringLiteral1CBC514CBF721C4C5F12F67F33B3E7694BCD1B29, L_9);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_10 = L_7;
			String_t* L_11 = __this->get_currentTTSLangKey_4();
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_12;
			L_12 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_11, /*hidden argument*/NULL);
			VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_10, _stringLiteral7B07A8EE16C4F6B46E5B48B2F45A0B8C8DD06478, L_12);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_13 = L_10;
			String_t* L_14;
			L_14 = Application_get_companyName_mB9307F7E65824E4128137B4E4298CAA997B3524D(/*hidden argument*/NULL);
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_15;
			L_15 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_14, /*hidden argument*/NULL);
			VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_13, _stringLiteral4DB6BD6181A2FDD083BE122F6A6ED551761115A5, L_15);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_16 = L_13;
			String_t* L_17;
			L_17 = Application_get_productName_m712E2BD951F92F0D8E992E45C8508F0B5B045E83(/*hidden argument*/NULL);
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_18;
			L_18 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_17, /*hidden argument*/NULL);
			VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_16, _stringLiteralF60D0BBF78D0335E5CF0CEECE6DA3EB7F5F387B8, L_18);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_19 = L_16;
			MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * L_20 = V_2;
			String_t* L_21 = L_20->get__gameName_0();
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_22;
			L_22 = JSONNode_op_Implicit_m3DF8941ED2D41C314D1D5E47BABC7CCFE1996854(L_21, /*hidden argument*/NULL);
			VirtActionInvoker2< String_t*, JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * >::Invoke(5 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_19, _stringLiteral88D3B5583A23D5C6BA10994992E02FA20F9CBDD4, L_22);
			V_4 = L_19;
			// byte[] bytes = System.Text.Encoding.UTF8.GetBytes(postData.ToString());
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_23;
			L_23 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
			JSONObject_tEFA8D0DD8E31D62C7163072377354ACEBA6B4536 * L_24 = V_4;
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
			L_26 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
			V_5 = L_26;
			// using (var dataRequest = UnityWebRequest.Put("https://app.legendsoflearning.com/developers/tts", bytes))
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_5;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_28;
			L_28 = UnityWebRequest_Put_mA2C337337953404F65F36D8F59747F566E3266A4(_stringLiteral7ECD6975BC3C960529EDFD4B80E07171EFA23EF2, L_27, /*hidden argument*/NULL);
			__this->set_U3CdataRequestU3E5__2_7(L_28);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// dataRequest.SetRequestHeader("Content-Type", "application/json");
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CdataRequestU3E5__2_7();
			UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_29, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
			// dataRequest.method = UnityWebRequest.kHttpVerbPOST;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_30 = __this->get_U3CdataRequestU3E5__2_7();
			UnityWebRequest_set_method_m603E0D94414F046DE2A60E127A715B3303F46AA7(L_30, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
			// yield return dataRequest.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_31 = __this->get_U3CdataRequestU3E5__2_7();
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_32;
			L_32 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_31, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_32);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_036e;
		}

IL_012a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (!string.IsNullOrEmpty(dataRequest.error))
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_33 = __this->get_U3CdataRequestU3E5__2_7();
			String_t* L_34;
			L_34 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_33, /*hidden argument*/NULL);
			bool L_35;
			L_35 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_0190;
			}
		}

IL_0144:
		{
			// Debug.LogError($"Error: {dataRequest.error}\nGetting polly file: {text} : {currentLang}");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
			ArrayElementTypeCheck (L_37, _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
			(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_39 = __this->get_U3CdataRequestU3E5__2_7();
			String_t* L_40;
			L_40 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_39, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_38, L_40);
			(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_40);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_38;
			ArrayElementTypeCheck (L_41, _stringLiteralA4A941CD81CE19790B710D29EB849A1844885B5E);
			(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA4A941CD81CE19790B710D29EB849A1844885B5E);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
			String_t* L_43 = __this->get_text_2();
			ArrayElementTypeCheck (L_42, L_43);
			(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_43);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_42;
			ArrayElementTypeCheck (L_44, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_44;
			String_t* L_46 = __this->get_currentLang_3();
			ArrayElementTypeCheck (L_45, L_46);
			(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_46);
			String_t* L_47;
			L_47 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_45, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_47, /*hidden argument*/NULL);
			// yield break;
			V_0 = (bool)0;
			goto IL_01f8;
		}

IL_0190:
		{
			// var json = JSON.Parse(dataRequest.downloadHandler.text);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_48 = __this->get_U3CdataRequestU3E5__2_7();
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_49;
			L_49 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_48, /*hidden argument*/NULL);
			String_t* L_50;
			L_50 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_49, /*hidden argument*/NULL);
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_51;
			L_51 = JSON_Parse_m16D30620CC0C91402567BDF83A090D16365C03BF(L_50, /*hidden argument*/NULL);
			V_7 = L_51;
			// if (!json["success"].AsBool)
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_52 = V_7;
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_53;
			L_53 = VirtFuncInvoker1< JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD *, String_t* >::Invoke(4 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_52, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
			bool L_54;
			L_54 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_53);
			if (L_54)
			{
				goto IL_01de;
			}
		}

IL_01ba:
		{
			// Debug.LogError("Error: Success FALSE\nGetting polly file: " + text + " : " + currentLang);
			String_t* L_55 = __this->get_text_2();
			String_t* L_56 = __this->get_currentLang_3();
			String_t* L_57;
			L_57 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral333879C3D8AE0FBC11A33170D1DD8CCCB271C667, L_55, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_56, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_57, /*hidden argument*/NULL);
			// yield break;
			V_0 = (bool)0;
			goto IL_01f8;
		}

IL_01de:
		{
			// clipUrl = json["file"];
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_58 = V_7;
			JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD * L_59;
			L_59 = VirtFuncInvoker1< JSONNode_t40A7A2D6236071944DA1037155928119E223FEFD *, String_t* >::Invoke(4 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_58, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
			String_t* L_60;
			L_60 = JSONNode_op_Implicit_m0B0794613B6C0CC8F37926CBEF29B48EB491A12F(L_59, /*hidden argument*/NULL);
			V_3 = L_60;
			// }
			U3C_PollyTTSU3Ed__13_U3CU3Em__Finally1_m4695B519B6C0D7545D5ACE3741C025739983A012(__this, /*hidden argument*/NULL);
			goto IL_0203;
		}

IL_01f8:
		{
			U3C_PollyTTSU3Ed__13_U3CU3Em__Finally1_m4695B519B6C0D7545D5ACE3741C025739983A012(__this, /*hidden argument*/NULL);
			goto IL_036e;
		}

IL_0203:
		{
			__this->set_U3CdataRequestU3E5__2_7((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// if (string.IsNullOrEmpty(clipUrl))
			String_t* L_61 = V_3;
			bool L_62;
			L_62 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_61, /*hidden argument*/NULL);
			if (!L_62)
			{
				goto IL_0239;
			}
		}

IL_0212:
		{
			// Debug.LogError("Error: CLIP URL NULL\nGetting polly file: " + text + " : " + currentLang);
			String_t* L_63 = __this->get_text_2();
			String_t* L_64 = __this->get_currentLang_3();
			String_t* L_65;
			L_65 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral372D05CE295E056D2B3BD0FDE9C2316343E09F21, L_63, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_64, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_65, /*hidden argument*/NULL);
			// yield break;
			V_0 = (bool)0;
			goto IL_036e;
		}

IL_0239:
		{
			// var clipType = clipUrl.EndsWith(".mp3") ? AudioType.MPEG
			//     : clipUrl.EndsWith(".ogg") ? AudioType.OGGVORBIS
			//     : clipUrl.EndsWith(".wav") ? AudioType.WAV
			//     : AudioType.UNKNOWN;
			String_t* L_66 = V_3;
			bool L_67;
			L_67 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_66, _stringLiteral61CDA2CF076B3B1C60F4A3E3F04FA6F4AEA070D2, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_026b;
			}
		}

IL_0246:
		{
			String_t* L_68 = V_3;
			bool L_69;
			L_69 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_68, _stringLiteralF0EC54FD9493DD95C328894C9CC1F35DEB57EC2F, /*hidden argument*/NULL);
			if (L_69)
			{
				goto IL_0267;
			}
		}

IL_0253:
		{
			String_t* L_70 = V_3;
			bool L_71;
			L_71 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_70, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_0263;
			}
		}

IL_0260:
		{
			G_B18_0 = 0;
			goto IL_026d;
		}

IL_0263:
		{
			G_B18_0 = ((int32_t)20);
			goto IL_026d;
		}

IL_0267:
		{
			G_B18_0 = ((int32_t)14);
			goto IL_026d;
		}

IL_026b:
		{
			G_B18_0 = ((int32_t)13);
		}

IL_026d:
		{
			V_6 = G_B18_0;
			// using (var clipRequest = UnityWebRequestMultimedia.GetAudioClip(clipUrl, clipType))
			String_t* L_72 = V_3;
			int32_t L_73 = V_6;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_74;
			L_74 = UnityWebRequestMultimedia_GetAudioClip_m810280693B8D9FEFCD8E98D522DEE48F87F32B95(L_72, L_73, /*hidden argument*/NULL);
			__this->set_U3CdataRequestU3E5__2_7(L_74);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// yield return clipRequest.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_75 = __this->get_U3CdataRequestU3E5__2_7();
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_76;
			L_76 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_75, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_76);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_036e;
		}

IL_02a4:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			// if (!string.IsNullOrEmpty(clipRequest.error))
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_77 = __this->get_U3CdataRequestU3E5__2_7();
			String_t* L_78;
			L_78 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_77, /*hidden argument*/NULL);
			bool L_79;
			L_79 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_78, /*hidden argument*/NULL);
			if (L_79)
			{
				goto IL_030a;
			}
		}

IL_02be:
		{
			// Debug.LogError($"Error: {clipRequest.error} \nGetting polly audio clip: {text} : {currentLang}");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
			ArrayElementTypeCheck (L_81, _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
			(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = L_81;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_83 = __this->get_U3CdataRequestU3E5__2_7();
			String_t* L_84;
			L_84 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_83, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_82, L_84);
			(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_84);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_85 = L_82;
			ArrayElementTypeCheck (L_85, _stringLiteral99147D95EB0FB3B0BD360458A2B4909E52FC1BA9);
			(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral99147D95EB0FB3B0BD360458A2B4909E52FC1BA9);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = L_85;
			String_t* L_87 = __this->get_text_2();
			ArrayElementTypeCheck (L_86, L_87);
			(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_87);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = L_86;
			ArrayElementTypeCheck (L_88, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
			(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = L_88;
			String_t* L_90 = __this->get_currentLang_3();
			ArrayElementTypeCheck (L_89, L_90);
			(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_90);
			String_t* L_91;
			L_91 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_89, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_91, /*hidden argument*/NULL);
			// yield break;
			V_0 = (bool)0;
			goto IL_0354;
		}

IL_030a:
		{
			// onDownloaded?.Invoke(((DownloadHandlerAudioClip)clipRequest.downloadHandler).audioClip);
			Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * L_92 = __this->get_onDownloaded_6();
			Action_1_tA9E4CB98D1FC43CD57330AB7BF9ECF6EFB5F1B08 * L_93 = L_92;
			G_B22_0 = L_93;
			if (L_93)
			{
				G_B23_0 = L_93;
				goto IL_0316;
			}
		}

IL_0313:
		{
			goto IL_0330;
		}

IL_0316:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_94 = __this->get_U3CdataRequestU3E5__2_7();
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_95;
			L_95 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_94, /*hidden argument*/NULL);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_96;
			L_96 = DownloadHandlerAudioClip_get_audioClip_m90B66F5B139F4886862363A3DACE0858D15AAFFE(((DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB *)CastclassSealed((RuntimeObject*)L_95, DownloadHandlerAudioClip_t9E1DBDA2B3152201330A8103FDCC575A64F49BBB_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			Action_1_Invoke_m7067BCC04D567E9A520BC26EBF3D022AAD23F7E6(G_B23_0, L_96, /*hidden argument*/Action_1_Invoke_m7067BCC04D567E9A520BC26EBF3D022AAD23F7E6_RuntimeMethod_var);
		}

IL_0330:
		{
			// Debug.Log("Playing polly tts: " + text);
			String_t* L_97 = __this->get_text_2();
			String_t* L_98;
			L_98 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3831A74391456331DECEEB3D380742D3067A7117, L_97, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_98, /*hidden argument*/NULL);
			// pollyTTSRequest = null;
			MockWebGL_t4E2B18A42B7668C03A8D9A6F2E4735BDAC8189E5 * L_99 = V_2;
			L_99->set_pollyTTSRequest_1((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
			// }
			U3C_PollyTTSU3Ed__13_U3CU3Em__Finally2_m6A7F53E19C1D99946C905026CA47FACDFC2BBAB0(__this, /*hidden argument*/NULL);
			goto IL_035c;
		}

IL_0354:
		{
			U3C_PollyTTSU3Ed__13_U3CU3Em__Finally2_m6A7F53E19C1D99946C905026CA47FACDFC2BBAB0(__this, /*hidden argument*/NULL);
			goto IL_036e;
		}

IL_035c:
		{
			__this->set_U3CdataRequestU3E5__2_7((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_036e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0367;
	}

FAULT_0367:
	{ // begin fault (depth: 1)
		U3C_PollyTTSU3Ed__13_System_IDisposable_Dispose_mEE34E2FABB41995EACA97F47C89D6978DAD8CF82(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(871)
	} // end fault
	IL2CPP_CLEANUP(871)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_036e:
	{
		bool L_100 = V_0;
		return L_100;
	}
}
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_U3CU3Em__Finally1_m4695B519B6C0D7545D5ACE3741C025739983A012 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CdataRequestU3E5__2_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CdataRequestU3E5__2_7();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_U3CU3Em__Finally2_m6A7F53E19C1D99946C905026CA47FACDFC2BBAB0 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CdataRequestU3E5__2_7();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CdataRequestU3E5__2_7();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object LoLSDK.MockWebGL/<_PollyTTS>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_PollyTTSU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4E1D1691D50567679814B809C9F05380949FAE5B (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoLSDK.MockWebGL/<_PollyTTS>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PollyTTSU3Ed__13_System_Collections_IEnumerator_Reset_mEAC9919CB0A964CBA5E28E4FF0BF9364C1025B6C (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_PollyTTSU3Ed__13_System_Collections_IEnumerator_Reset_mEAC9919CB0A964CBA5E28E4FF0BF9364C1025B6C_RuntimeMethod_var)));
	}
}
// System.Object LoLSDK.MockWebGL/<_PollyTTS>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3C_PollyTTSU3Ed__13_System_Collections_IEnumerator_get_Current_mECABA128D8CD60C73705CCC5A0277C8CA5BF4018 (U3C_PollyTTSU3Ed__13_t51B869BB1DE138CB50AF128DA0087D6A9352BED5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
