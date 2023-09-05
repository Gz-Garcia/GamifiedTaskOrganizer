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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression>
struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A;
// Unity.VisualScripting.Antlr3.Runtime.BitSet[]
struct BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Collections.IDictionary[]
struct IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[]
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B;
// Unity.VisualScripting.Dependencies.NCalc.BinaryExpression
struct BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.VisualScripting.Antlr3.Runtime.BitSet
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1;
// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F;
// Unity.VisualScripting.Antlr3.Runtime.DFA
struct DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Unity.VisualScripting.Dependencies.NCalc.EvaluationException
struct EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// Unity.VisualScripting.Dependencies.NCalc.FunctionExpression
struct FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD;
// Unity.VisualScripting.Antlr3.Runtime.ICharStream
struct ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Unity.VisualScripting.Antlr3.Runtime.IIntStream
struct IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Unity.VisualScripting.Antlr3.Runtime.IToken
struct IToken_t620DE9D086BA75DE074EF126922C24743D268A42;
// Unity.VisualScripting.Antlr3.Runtime.ITokenStream
struct ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047;
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor
struct ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D;
// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression
struct IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression
struct LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor
struct LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException
struct MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser
struct NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0;
// Unity.VisualScripting.Antlr3.Runtime.NoViableAltException
struct NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Unity.VisualScripting.Dependencies.NCalc.ParameterArgs
struct ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957;
// Unity.VisualScripting.Antlr3.Runtime.Parser
struct Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849;
// Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035;
// Unity.VisualScripting.Antlr3.Runtime.RecognitionException
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55;
// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor
struct SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.VisualScripting.Dependencies.NCalc.TernaryExpression
struct TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC;
// System.Type
struct Type_t;
// Unity.VisualScripting.Dependencies.NCalc.UnaryExpression
struct UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E;
// Unity.VisualScripting.Dependencies.NCalc.ValueExpression
struct ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler
struct SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E;
// Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA14
struct DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E;
// Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA7
struct DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return
struct additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return
struct arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return
struct bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return
struct bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return
struct bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return
struct booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return
struct conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return
struct equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return
struct expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return
struct identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return
struct logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return
struct multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return
struct ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return
struct primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return
struct relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return
struct shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return
struct unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return
struct value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA;

IL2CPP_EXTERN_C RuntimeClass* BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E;
IL2CPP_EXTERN_C String_t* _stringLiteral0AC045CDB107222D470290520872F98BAD304712;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52;
IL2CPP_EXTERN_C String_t* _stringLiteral1603453E15E296D9A743367FA75358E71A294BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074;
IL2CPP_EXTERN_C String_t* _stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66;
IL2CPP_EXTERN_C String_t* _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3;
IL2CPP_EXTERN_C String_t* _stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01;
IL2CPP_EXTERN_C String_t* _stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD;
IL2CPP_EXTERN_C String_t* _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922;
IL2CPP_EXTERN_C String_t* _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5;
IL2CPP_EXTERN_C String_t* _stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098;
IL2CPP_EXTERN_C String_t* _stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7;
IL2CPP_EXTERN_C String_t* _stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030;
IL2CPP_EXTERN_C String_t* _stringLiteral5FDE879CBB29EDDD1BF6CA7C9074367D90619E3B;
IL2CPP_EXTERN_C String_t* _stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD;
IL2CPP_EXTERN_C String_t* _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF;
IL2CPP_EXTERN_C String_t* _stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC;
IL2CPP_EXTERN_C String_t* _stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079;
IL2CPP_EXTERN_C String_t* _stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC;
IL2CPP_EXTERN_C String_t* _stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E;
IL2CPP_EXTERN_C String_t* _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE;
IL2CPP_EXTERN_C String_t* _stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95;
IL2CPP_EXTERN_C String_t* _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D;
IL2CPP_EXTERN_C String_t* _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13;
IL2CPP_EXTERN_C String_t* _stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650;
IL2CPP_EXTERN_C String_t* _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EF4E53D10409FFAE3D189EFA705AC02447DFB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A;
IL2CPP_EXTERN_C String_t* _stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C;
IL2CPP_EXTERN_C String_t* _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20;
IL2CPP_EXTERN_C String_t* _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C;
IL2CPP_EXTERN_C String_t* _stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15;
IL2CPP_EXTERN_C String_t* _stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8;
IL2CPP_EXTERN_C String_t* _stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556;
IL2CPP_EXTERN_C String_t* _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6;
IL2CPP_EXTERN_C String_t* _stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83;
IL2CPP_EXTERN_C String_t* _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32;
IL2CPP_EXTERN_C String_t* _stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2;
IL2CPP_EXTERN_C String_t* _stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression>
struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___s_emptyArray_5;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t32B9240F30447D9E5C4951749F43B17B2E485B9D  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B  : public RuntimeObject
{
	// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::state
	RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state_6;
};

struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_StaticFields
{
	// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::NEXT_TOKEN_RULE_NAME
	String_t* ___NEXT_TOKEN_RULE_NAME_5;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909  : public RuntimeObject
{
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::children
	RuntimeObject* ___children_0;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor
struct BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC  : public RuntimeObject
{
	// System.Collections.IDictionary Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::treeToUniqueIDMap
	RuntimeObject* ___treeToUniqueIDMap_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor::uniqueNodeID
	int32_t ___uniqueNodeID_1;
};

// Unity.VisualScripting.Antlr3.Runtime.BitSet
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6  : public RuntimeObject
{
	// System.UInt64[] Unity.VisualScripting.Antlr3.Runtime.BitSet::bits
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___bits_3;
};

struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_StaticFields
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.BitSet::MOD_MASK
	int32_t ___MOD_MASK_2;
};

// Unity.VisualScripting.Antlr3.Runtime.DFA
struct DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F  : public RuntimeObject
{
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::eot
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eot_1;
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::eof
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___eof_2;
	// System.Char[] Unity.VisualScripting.Antlr3.Runtime.DFA::min
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___min_3;
	// System.Char[] Unity.VisualScripting.Antlr3.Runtime.DFA::max
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___max_4;
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::accept
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___accept_5;
	// System.Int16[] Unity.VisualScripting.Antlr3.Runtime.DFA::special
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___special_6;
	// System.Int16[][] Unity.VisualScripting.Antlr3.Runtime.DFA::transition
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___transition_7;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.DFA::decisionNumber
	int32_t ___decisionNumber_8;
	// Unity.VisualScripting.Antlr3.Runtime.DFA/SpecialStateTransitionHandler Unity.VisualScripting.Antlr3.Runtime.DFA::specialStateTransitionHandler
	SpecialStateTransitionHandler_t580B77F22520338A17D0E305DA6ADAA39AF0FB9E* ___specialStateTransitionHandler_9;
	// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer Unity.VisualScripting.Antlr3.Runtime.DFA::recognizer
	BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* ___recognizer_10;
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

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression
struct LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465  : public RuntimeObject
{
};

// Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor
struct LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0  : public RuntimeObject
{
	// Unity.VisualScripting.Antlr3.Runtime.BitSet[] Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::following
	BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* ___following_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::followingStackPointer
	int32_t ___followingStackPointer_1;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::errorRecovery
	bool ___errorRecovery_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::lastErrorIndex
	int32_t ___lastErrorIndex_3;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::failed
	bool ___failed_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::syntaxErrors
	int32_t ___syntaxErrors_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::backtracking
	int32_t ___backtracking_6;
	// System.Collections.IDictionary[] Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::ruleMemo
	IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* ___ruleMemo_7;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::token
	RuntimeObject* ___token_8;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartCharIndex
	int32_t ___tokenStartCharIndex_9;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartLine
	int32_t ___tokenStartLine_10;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartCharPositionInLine
	int32_t ___tokenStartCharPositionInLine_11;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::channel
	int32_t ___channel_12;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::type
	int32_t ___type_13;
	// System.String Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::text
	String_t* ___text_14;
};

// Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope
struct RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2  : public RuntimeObject
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

// Unity.VisualScripting.Dependencies.NCalc.BinaryExpression
struct BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::<LeftExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CLeftExpressionU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::<RightExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CRightExpressionU3Ek__BackingField_2;
	// Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;
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

// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1  : public BaseTree_t93C88620BBC74C7117CD89A87723D83057772909
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::startIndex
	int32_t ___startIndex_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::stopIndex
	int32_t ___stopIndex_2;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::token
	RuntimeObject* ___token_3;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::parent
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___parent_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::childIndex
	int32_t ___childIndex_5;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F  : public BaseTreeAdaptor_tC5D6F4BD7543FA9070CE10CCA68E30AB5EDB65AC
{
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

// Unity.VisualScripting.Dependencies.NCalc.FunctionExpression
struct FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::<Identifier>k__BackingField
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___U3CIdentifierU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[] Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::<Expressions>k__BackingField
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___U3CExpressionsU3Ek__BackingField_2;
};

// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression
struct IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// System.String Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
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

// Unity.VisualScripting.Antlr3.Runtime.Lexer
struct Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	// Unity.VisualScripting.Antlr3.Runtime.ICharStream Unity.VisualScripting.Antlr3.Runtime.Lexer::input
	RuntimeObject* ___input_8;
};

// Unity.VisualScripting.Dependencies.NCalc.ParameterArgs
struct ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::_result
	RuntimeObject* ____result_1;
	// System.Boolean Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::<HasResult>k__BackingField
	bool ___U3CHasResultU3Ek__BackingField_2;
};

// Unity.VisualScripting.Antlr3.Runtime.Parser
struct Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	// Unity.VisualScripting.Antlr3.Runtime.ITokenStream Unity.VisualScripting.Antlr3.Runtime.Parser::input
	RuntimeObject* ___input_7;
};

// Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035  : public RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2
{
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::start
	RuntimeObject* ___start_0;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::stop
	RuntimeObject* ___stop_1;
};

// Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor
struct SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58  : public LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2
{
	// System.Globalization.NumberFormatInfo Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::_numberFormatInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ____numberFormatInfo_0;
	// System.Text.StringBuilder Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::<Result>k__BackingField
	StringBuilder_t* ___U3CResultU3Ek__BackingField_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Unity.VisualScripting.Dependencies.NCalc.TernaryExpression
struct TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::<LeftExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CLeftExpressionU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::<MiddleExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CMiddleExpressionU3Ek__BackingField_2;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::<RightExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CRightExpressionU3Ek__BackingField_3;
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

// Unity.VisualScripting.Dependencies.NCalc.UnaryExpression
struct UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::<Expression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CExpressionU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
};

// Unity.VisualScripting.Dependencies.NCalc.ValueExpression
struct ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// System.Object Unity.VisualScripting.Dependencies.NCalc.ValueExpression::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.ValueType Unity.VisualScripting.Dependencies.NCalc.ValueExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
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

// Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA14
struct DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E  : public DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F
{
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

// Unity.VisualScripting.Dependencies.NCalc.NCalcLexer
struct NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5  : public Lexer_t236B54FF12CB8B83D666009EFB5F21A88BED37EE
{
	// Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA7 Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::dfa7
	DFA7_t48436D7F9C5212F53AFF4FE9B76204B5E5AE74AB* ___dfa7_9;
	// Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA14 Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::dfa14
	DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E* ___dfa14_10;
};

struct NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields
{
	// System.String[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_transitionS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DFA7_transitionS_69;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_eot
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_eot_70;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_eof
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_eof_71;
	// System.Char[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_min
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA7_min_72;
	// System.Char[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_max
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA7_max_73;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_accept
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_accept_74;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_special
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA7_special_75;
	// System.Int16[][] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA7_transition
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___DFA7_transition_76;
	// System.String[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_transitionS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DFA14_transitionS_77;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_eot
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_eot_78;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_eof
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_eof_79;
	// System.Char[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_min
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA14_min_80;
	// System.Char[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_max
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___DFA14_max_81;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_accept
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_accept_82;
	// System.Int16[] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_special
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___DFA14_special_83;
	// System.Int16[][] Unity.VisualScripting.Dependencies.NCalc.NCalcLexer::DFA14_transition
	Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* ___DFA14_transition_84;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser
struct NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0  : public Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849
{
	// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Dependencies.NCalc.NCalcParser::adaptor
	RuntimeObject* ___adaptor_8;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.Dependencies.NCalc.NCalcParser::<Errors>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CErrorsU3Ek__BackingField_9;
};

struct NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields
{
	// System.String[] Unity.VisualScripting.Dependencies.NCalc.NCalcParser::tokenNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames_57;
	// System.Globalization.NumberFormatInfo Unity.VisualScripting.Dependencies.NCalc.NCalcParser::numberFormatInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numberFormatInfo_58;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_logicalExpression_in_ncalcExpression56
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_ncalcExpression56_59;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_EOF_in_ncalcExpression58
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_EOF_in_ncalcExpression58_60;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_conditionalExpression_in_logicalExpression78
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_logicalExpression78_61;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_19_in_logicalExpression84
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_19_in_logicalExpression84_62;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_conditionalExpression_in_logicalExpression88
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_logicalExpression88_63;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_20_in_logicalExpression90
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_20_in_logicalExpression90_64;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_conditionalExpression_in_logicalExpression94
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_logicalExpression94_65;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_booleanAndExpression_in_conditionalExpression121
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_booleanAndExpression_in_conditionalExpression121_66;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_set_in_conditionalExpression130
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_conditionalExpression130_67;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_conditionalExpression_in_conditionalExpression146
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_conditionalExpression_in_conditionalExpression146_68;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_bitwiseOrExpression_in_booleanAndExpression180
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180_69;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_set_in_booleanAndExpression189
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_booleanAndExpression189_70;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_bitwiseOrExpression_in_booleanAndExpression205
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205_71;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237_72;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_25_in_bitwiseOrExpression246
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_25_in_bitwiseOrExpression246_73;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256_74;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290_75;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_26_in_bitwiseXOrExpression299
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_26_in_bitwiseXOrExpression299_76;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309_77;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_equalityExpression_in_bitwiseAndExpression341
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_equalityExpression_in_bitwiseAndExpression341_78;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_27_in_bitwiseAndExpression350
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_27_in_bitwiseAndExpression350_79;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_equalityExpression_in_bitwiseAndExpression360
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_equalityExpression_in_bitwiseAndExpression360_80;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_relationalExpression_in_equalityExpression394
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_relationalExpression_in_equalityExpression394_81;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_set_in_equalityExpression405
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_equalityExpression405_82;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_set_in_equalityExpression422
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_equalityExpression422_83;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_relationalExpression_in_equalityExpression441
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_relationalExpression_in_equalityExpression441_84;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_shiftExpression_in_relationalExpression474
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_shiftExpression_in_relationalExpression474_85;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_32_in_relationalExpression485
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_32_in_relationalExpression485_86;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_33_in_relationalExpression495
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_33_in_relationalExpression495_87;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_34_in_relationalExpression506
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_34_in_relationalExpression506_88;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_35_in_relationalExpression516
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_35_in_relationalExpression516_89;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_shiftExpression_in_relationalExpression528
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_shiftExpression_in_relationalExpression528_90;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_additiveExpression_in_shiftExpression560
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_additiveExpression_in_shiftExpression560_91;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_36_in_shiftExpression571
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_36_in_shiftExpression571_92;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_37_in_shiftExpression581
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_37_in_shiftExpression581_93;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_additiveExpression_in_shiftExpression593
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_additiveExpression_in_shiftExpression593_94;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_multiplicativeExpression_in_additiveExpression625
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_multiplicativeExpression_in_additiveExpression625_95;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_38_in_additiveExpression636
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_38_in_additiveExpression636_96;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_39_in_additiveExpression646
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_39_in_additiveExpression646_97;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_multiplicativeExpression_in_additiveExpression658
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_multiplicativeExpression_in_additiveExpression658_98;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_unaryExpression_in_multiplicativeExpression690
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_unaryExpression_in_multiplicativeExpression690_99;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_40_in_multiplicativeExpression701
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_40_in_multiplicativeExpression701_100;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_41_in_multiplicativeExpression711
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_41_in_multiplicativeExpression711_101;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_42_in_multiplicativeExpression721
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_42_in_multiplicativeExpression721_102;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_unaryExpression_in_multiplicativeExpression733
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_unaryExpression_in_multiplicativeExpression733_103;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_primaryExpression_in_unaryExpression760
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression760_104;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_set_in_unaryExpression771
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_set_in_unaryExpression771_105;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_primaryExpression_in_unaryExpression779
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression779_106;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_45_in_unaryExpression791
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_45_in_unaryExpression791_107;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_primaryExpression_in_unaryExpression794
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression794_108;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_39_in_unaryExpression805
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_39_in_unaryExpression805_109;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_primaryExpression_in_unaryExpression807
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_primaryExpression_in_unaryExpression807_110;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_46_in_primaryExpression829
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_46_in_primaryExpression829_111;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_logicalExpression_in_primaryExpression831
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_primaryExpression831_112;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_47_in_primaryExpression833
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_47_in_primaryExpression833_113;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_value_in_primaryExpression843
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_value_in_primaryExpression843_114;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_identifier_in_primaryExpression851
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_identifier_in_primaryExpression851_115;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_arguments_in_primaryExpression856
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_arguments_in_primaryExpression856_116;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_INTEGER_in_value876
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_INTEGER_in_value876_117;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_FLOAT_in_value884
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_FLOAT_in_value884_118;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_STRING_in_value892
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_STRING_in_value892_119;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_DATETIME_in_value901
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_DATETIME_in_value901_120;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_TRUE_in_value908
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_TRUE_in_value908_121;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_FALSE_in_value916
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_FALSE_in_value916_122;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_ID_in_identifier934
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_ID_in_identifier934_123;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_NAME_in_identifier942
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_NAME_in_identifier942_124;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_logicalExpression_in_expressionList966
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_expressionList966_125;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_48_in_expressionList973
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_48_in_expressionList973_126;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_logicalExpression_in_expressionList977
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_logicalExpression_in_expressionList977_127;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_46_in_arguments1006
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_46_in_arguments1006_128;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_expressionList_in_arguments1010
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_expressionList_in_arguments1010_129;
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Dependencies.NCalc.NCalcParser::FOLLOW_47_in_arguments1017
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___FOLLOW_47_in_arguments1017_130;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return
struct additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return
struct arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression> Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::value
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return
struct bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return
struct bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return
struct bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return
struct booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return
struct conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return
struct equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return
struct expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression> Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::value
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return
struct identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::value
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return
struct logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return
struct multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return
struct ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return
struct primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return
struct relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return
struct shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return
struct unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return
struct value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.ValueExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::value
	ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Unity.VisualScripting.Antlr3.Runtime.RecognitionException
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55  : public Exception_t
{
	// Unity.VisualScripting.Antlr3.Runtime.IIntStream Unity.VisualScripting.Antlr3.Runtime.RecognitionException::input
	RuntimeObject* ___input_18;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::index
	int32_t ___index_19;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognitionException::token
	RuntimeObject* ___token_20;
	// System.Object Unity.VisualScripting.Antlr3.Runtime.RecognitionException::node
	RuntimeObject* ___node_21;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::c
	int32_t ___c_22;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::line
	int32_t ___line_23;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::charPositionInLine
	int32_t ___charPositionInLine_24;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognitionException::approximateLineInfo
	bool ___approximateLineInfo_25;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.VisualScripting.Dependencies.NCalc.EvaluationException
struct EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException
struct MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	// Unity.VisualScripting.Antlr3.Runtime.BitSet Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::expecting
	BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___expecting_26;
};

// Unity.VisualScripting.Antlr3.Runtime.NoViableAltException
struct NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	// System.String Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::grammarDecisionDescription
	String_t* ___grammarDecisionDescription_26;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::decisionNumber
	int32_t ___decisionNumber_27;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::stateNumber
	int32_t ___stateNumber_28;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A  : public RuntimeArray
{
	ALIGN_FIELD (8) Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* m_Items[1];

	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* value)
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
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[]
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B  : public RuntimeArray
{
	ALIGN_FIELD (8) LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* m_Items[1];

	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void Unity.VisualScripting.Antlr3.Runtime.DFA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA__ctor_mCE38E09A4533B61037DF20776BC22D1438D61C53 (DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630 (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__ctor_mE3E1C167C20F1DAB752BB3E8930D298457BF079A (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___input0, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_m31806D904E560E7BA0F0267CE96CFCF867A5AC6D (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Parser::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m4FE6ADD0C253605D2E055630DF3B047F544B0429 (Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849* __this, RuntimeObject* ___input0, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::InitializeCyclicDFAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_InitializeCyclicDFAs_m0D9AB3C6A4145FE34A0CA9589752B41800CA19E8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0 (const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679 (StringBuilder_t* __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_mBC97080D22543F9B12719E704A0C90AF84597A43 (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::DisplayRecognitionError(System.String[],Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_DisplayRecognitionError_m7EFC27074AA3274F788688E29BC8D48ADD2F19FD (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames0, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___e1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.Dependencies.NCalc.NCalcParser::get_Errors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::set_Errors(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::PushFollow(Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___fset0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::logicalExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::conditionalExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___leftExpression0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___middleExpression1, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___rightExpression2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::booleanAndExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedSetException::.ctor(Unity.VisualScripting.Antlr3.Runtime.BitSet,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4 (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* __this, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6 (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, int32_t ___type0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___leftExpression1, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___rightExpression2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::bitwiseOrExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::bitwiseXOrExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* NCalcParser_bitwiseXOrExpression_m465CDDB79DF988DCD3ED8D7607F18142823508FF (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::bitwiseAndExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::equalityExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::relationalExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.NoViableAltException::.ctor(System.String,System.Int32,System.Int32,Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1 (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* __this, String_t* ___grammarDecisionDescription0, int32_t ___decisionNumber1, int32_t ___stateNumber2, RuntimeObject* ___input3, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::shiftExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::additiveExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::multiplicativeExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::unaryExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::primaryExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___type0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* NCalcParser_arguments_m8382A07E7C283B57AF2D3DECF15F56C6B7708A7C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression>::ToArray()
inline LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572 (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* __this, const RuntimeMethod* method)
{
	return ((  LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* (*) (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FunctionExpression__ctor_m34989F1EE71A2A0D4ECD1FC2704A70E4FB460F2A (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___identifier0, LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___expressions1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, float ___value0, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mA6BD954627BB3B2317D7BA7D4B29DCA53C660058 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.Dependencies.NCalc.NCalcParser::extractString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentifierExpression__ctor_mD7084F992382FC6882312FF559288E684E3F2196 (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7 (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression>::.ctor()
inline void List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05 (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression>::Add(T)
inline void List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_inline (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::expressionList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* NCalcParser_expressionList_m9714F81848953C3B58959B2E8FA232FC0856231C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BitSet::.ctor(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57 (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___bits_0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::set_HasResult(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpressionVisitor__ctor_m24C7C345ACEE6EADDD7106CAC9D789BFEBB0F3D9 (LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::set_Result(System.Text.StringBuilder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Globalization.NumberFormatInfo::set_NumberDecimalSeparator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_LeftExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::EncapsulateNoValue(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_MiddleExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_RightExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::get_LeftExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::get_RightExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.ValueType Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Parse_mF59EB26DED52ED2D5E804452CFC9102E3347C10D (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[] Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::get_Expressions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF (LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_LeftExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_MiddleExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_RightExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Expression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.ValueType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.TypeCode System.Type::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.EvaluationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvaluationException__ctor_mC3545B04D76AEAFC2007507CC0D00D12D4CC6BFE (EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA14::.ctor(Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA14__ctor_m183328D8536374AADA4DBC0BC8F28B00C618E551 (DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E* __this, BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* ___recognizer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DFA14(BaseRecognizer recognizer)
		DFA__ctor_mCE38E09A4533B61037DF20776BC22D1438D61C53(__this, NULL);
		// this.recognizer = recognizer;
		BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* L_0 = ___recognizer0;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___recognizer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___recognizer_10), (void*)L_0);
		// decisionNumber = 14;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___decisionNumber_8 = ((int32_t)14);
		// eot = DFA14_eot;
		il2cpp_codegen_runtime_class_init_inline(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_eot_78;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eot_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eot_1), (void*)L_1);
		// eof = DFA14_eof;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_eof_79;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eof_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___eof_2), (void*)L_2);
		// min = DFA14_min;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_min_80;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___min_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___min_3), (void*)L_3);
		// max = DFA14_max;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_max_81;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___max_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___max_4), (void*)L_4);
		// accept = DFA14_accept;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_accept_82;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___accept_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___accept_5), (void*)L_5);
		// special = DFA14_special;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_special_83;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___special_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___special_6), (void*)L_6);
		// transition = DFA14_transition;
		Int16U5BU5DU5BU5D_t3B9E7F8B8A9ABE3DCB70EF6D806F55BF9267B25A* L_7 = ((NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_StaticFields*)il2cpp_codegen_static_fields_for(NCalcLexer_tFB9E3745705062F3EDA0B81F6292A59560AC77D5_il2cpp_TypeInfo_var))->___DFA14_transition_84;
		((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___transition_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((DFA_t68E40FB2261FCCE22383DC845FCC24D69A0A067F*)__this)->___transition_7), (void*)L_7);
		// }
		return;
	}
}
// System.String Unity.VisualScripting.Dependencies.NCalc.NCalcLexer/DFA14::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA14_get_Description_m06C7CA4921D7E33A63DF7F14C82BB39C8C18F946 (DFA14_tFBA7EA500275A28066C470E71FC8925CB701A61E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "1:1: Tokens : ( T__19 | T__20 | T__21 | T__22 | T__23 | T__24 | T__25 | T__26 | T__27 | T__28 | T__29 | T__30 | T__31 | T__32 | T__33 | T__34 | T__35 | T__36 | T__37 | T__38 | T__39 | T__40 | T__41 | T__42 | T__43 | T__44 | T__45 | T__46 | T__47 | T__48 | TRUE | FALSE | ID | INTEGER | FLOAT | STRING | DATETIME | NAME | E | WS );";
		V_0 = _stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
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
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__ctor_mED5BC8CDBB1F32ADF97E1FED23E75AE5DC64E464 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(input, new RecognizerSharedState()) { }
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = (RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0*)il2cpp_codegen_object_new(RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_m15A6D7A25E2A244035839024D7A03AF8BBDB5630(L_1, NULL);
		NCalcParser__ctor_mE3E1C167C20F1DAB752BB3E8930D298457BF079A(__this, L_0, L_1, NULL);
		// : this(input, new RecognizerSharedState()) { }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::.ctor(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__ctor_mE3E1C167C20F1DAB752BB3E8930D298457BF079A (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___input0, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ITreeAdaptor adaptor = new CommonTreeAdaptor();
		CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F* L_0 = (CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F*)il2cpp_codegen_object_new(CommonTreeAdaptor_tE15F8C7E207F6816A6F49224C98D40FB330AB20F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m31806D904E560E7BA0F0267CE96CFCF867A5AC6D(L_0, NULL);
		__this->___adaptor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_8), (void*)L_0);
		// : base(input, state)
		RuntimeObject* L_1 = ___input0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_2 = ___state1;
		Parser__ctor_m4FE6ADD0C253605D2E055630DF3B047F544B0429(__this, L_1, L_2, NULL);
		// InitializeCyclicDFAs();
		NCalcParser_InitializeCyclicDFAs_m0D9AB3C6A4145FE34A0CA9589752B41800CA19E8(__this, NULL);
		// }
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Dependencies.NCalc.NCalcParser::get_TreeAdaptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NCalcParser_get_TreeAdaptor_mB994E084897ADA9171CD40C689793B2EDAF50706 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return adaptor;
		RuntimeObject* L_0 = __this->___adaptor_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::set_TreeAdaptor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_set_TreeAdaptor_mC31FE9465D094AB5A602502EAB74583C2E969D92 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// adaptor = value;
		RuntimeObject* L_0 = ___value0;
		__this->___adaptor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_8), (void*)L_0);
		// }
		return;
	}
}
// System.String[] Unity.VisualScripting.Dependencies.NCalc.NCalcParser::get_TokenNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* NCalcParser_get_TokenNames_m49C500C0C895AD891859589294E383C2AA092155 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// return tokenNames;
		il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___tokenNames_57;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.String Unity.VisualScripting.Dependencies.NCalc.NCalcParser::get_GrammarFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NCalcParser_get_GrammarFileName_m03E28EEC2B1558AED0960FEB5E278BEDA0ABEDC9 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EF4E53D10409FFAE3D189EFA705AC02447DFB1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "C:\\Users\\s.ros\\Documents\\D?veloppement\\NCalc\\Grammar\\NCalc.g";
		V_0 = _stringLiteralA3EF4E53D10409FFAE3D189EFA705AC02447DFB1;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.Dependencies.NCalc.NCalcParser::get_Errors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Errors { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CErrorsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::set_Errors(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Errors { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CErrorsU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorsU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::InitializeCyclicDFAs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_InitializeCyclicDFAs_m0D9AB3C6A4145FE34A0CA9589752B41800CA19E8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	{
		// private void InitializeCyclicDFAs() { }
		return;
	}
}
// System.String Unity.VisualScripting.Dependencies.NCalc.NCalcParser::extractString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	Il2CppChar V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	bool V_9 = false;
	String_t* V_10 = NULL;
	{
		// var sb = new StringBuilder(text);
		String_t* L_0 = ___text0;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_1, L_0, NULL);
		V_0 = L_1;
		// var startIndex = 1; // Skip initial quote
		V_1 = 1;
		// var slashIndex = -1;
		V_2 = (-1);
		goto IL_016c;
	}

IL_0011:
	{
		// var escapeType = sb[slashIndex + 1];
		StringBuilder_t* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		V_3 = L_4;
		// switch (escapeType)
		Il2CppChar L_5 = V_3;
		V_8 = L_5;
		Il2CppChar L_6 = V_8;
		V_7 = L_6;
		Il2CppChar L_7 = V_7;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_8 = V_7;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)39))))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0034;
	}

IL_0034:
	{
		Il2CppChar L_9 = V_7;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_0150;
	}

IL_0042:
	{
		Il2CppChar L_10 = V_7;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)110))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_004d;
	}

IL_004d:
	{
		Il2CppChar L_11 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0104;
			}
			case 1:
			{
				goto IL_0150;
			}
			case 2:
			{
				goto IL_0117;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_0150;
	}

IL_006c:
	{
		// var hcode = String.Concat(sb[slashIndex + 4], sb[slashIndex + 5]);
		StringBuilder_t* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_12, ((int32_t)il2cpp_codegen_add(L_13, 4)), NULL);
		Il2CppChar L_15 = L_14;
		RuntimeObject* L_16 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_15);
		StringBuilder_t* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), NULL);
		Il2CppChar L_20 = L_19;
		RuntimeObject* L_21 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_16, L_21, NULL);
		V_4 = L_22;
		// var lcode = String.Concat(sb[slashIndex + 2], sb[slashIndex + 3]);
		StringBuilder_t* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), NULL);
		Il2CppChar L_26 = L_25;
		RuntimeObject* L_27 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_26);
		StringBuilder_t* L_28 = V_0;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_28, ((int32_t)il2cpp_codegen_add(L_29, 3)), NULL);
		Il2CppChar L_31 = L_30;
		RuntimeObject* L_32 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_27, L_32, NULL);
		V_5 = L_33;
		// var unicodeChar = Encoding.Unicode.GetChars(new[] { Convert.ToByte(hcode, 16), Convert.ToByte(lcode, 16) })[0];
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
		L_34 = Encoding_get_Unicode_m1E0509DF0E550E33114D0FFEC4811B141219A3B0(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35;
		String_t* L_37 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_38;
		L_38 = Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9(L_37, ((int32_t)16), NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_36;
		String_t* L_40 = V_5;
		uint8_t L_41;
		L_41 = Convert_ToByte_mC835E3C6004C07A7828640861C7E57DF6F42D0E9(L_40, ((int32_t)16), NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_41);
		NullCheck(L_34);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42;
		L_42 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_34, L_39);
		NullCheck(L_42);
		int32_t L_43 = 0;
		uint16_t L_44 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_6 = L_44;
		// sb.Remove(slashIndex, 6).Insert(slashIndex, unicodeChar);
		StringBuilder_t* L_45 = V_0;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_45, L_46, 6, NULL);
		int32_t L_48 = V_2;
		Il2CppChar L_49 = V_6;
		NullCheck(L_47);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_47, L_48, L_49, NULL);
		// break;
		goto IL_0167;
	}

IL_00f1:
	{
		// sb.Remove(slashIndex, 2).Insert(slashIndex, '\n');
		StringBuilder_t* L_51 = V_0;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_51, L_52, 2, NULL);
		int32_t L_54 = V_2;
		NullCheck(L_53);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_53, L_54, ((int32_t)10), NULL);
		// break;
		goto IL_0167;
	}

IL_0104:
	{
		// sb.Remove(slashIndex, 2).Insert(slashIndex, '\r');
		StringBuilder_t* L_56 = V_0;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_56, L_57, 2, NULL);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		StringBuilder_t* L_60;
		L_60 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_58, L_59, ((int32_t)13), NULL);
		// break;
		goto IL_0167;
	}

IL_0117:
	{
		// sb.Remove(slashIndex, 2).Insert(slashIndex, '\t');
		StringBuilder_t* L_61 = V_0;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_61, L_62, 2, NULL);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_63, L_64, ((int32_t)9), NULL);
		// break;
		goto IL_0167;
	}

IL_012a:
	{
		// sb.Remove(slashIndex, 2).Insert(slashIndex, '\'');
		StringBuilder_t* L_66 = V_0;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_66, L_67, 2, NULL);
		int32_t L_69 = V_2;
		NullCheck(L_68);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_68, L_69, ((int32_t)39), NULL);
		// break;
		goto IL_0167;
	}

IL_013d:
	{
		// sb.Remove(slashIndex, 2).Insert(slashIndex, '\\');
		StringBuilder_t* L_71 = V_0;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_71, L_72, 2, NULL);
		int32_t L_74 = V_2;
		NullCheck(L_73);
		StringBuilder_t* L_75;
		L_75 = StringBuilder_Insert_m7EC9995F7927B77505D294E81B4B285EEA6FB679(L_73, L_74, ((int32_t)92), NULL);
		// break;
		goto IL_0167;
	}

IL_0150:
	{
		// throw new RecognitionException("Unvalid escape sequence: \\" + escapeType);
		String_t* L_76;
		L_76 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		String_t* L_77;
		L_77 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5FDE879CBB29EDDD1BF6CA7C9074367D90619E3B)), L_76, NULL);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_78 = (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)));
		NullCheck(L_78);
		RecognitionException__ctor_mBC97080D22543F9B12719E704A0C90AF84597A43(L_78, L_77, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F_RuntimeMethod_var)));
	}

IL_0167:
	{
		// startIndex = slashIndex + 1;
		int32_t L_79 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_016c:
	{
		// while ((slashIndex = sb.ToString().IndexOf(BS, startIndex)) != -1)
		StringBuilder_t* L_80 = V_0;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_80);
		int32_t L_82 = V_1;
		NullCheck(L_81);
		int32_t L_83;
		L_83 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_81, ((int32_t)92), L_82, NULL);
		int32_t L_84 = L_83;
		V_2 = L_84;
		V_9 = (bool)((((int32_t)((((int32_t)L_84) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_85 = V_9;
		if (L_85)
		{
			goto IL_0011;
		}
	}
	{
		// sb.Remove(0, 1);
		StringBuilder_t* L_86 = V_0;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_86, 0, 1, NULL);
		// sb.Remove(sb.Length - 1, 1);
		StringBuilder_t* L_88 = V_0;
		StringBuilder_t* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90;
		L_90 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_89, NULL);
		NullCheck(L_88);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_88, ((int32_t)il2cpp_codegen_subtract(L_90, 1)), 1, NULL);
		// return sb.ToString();
		StringBuilder_t* L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
		V_10 = L_93;
		goto IL_01ae;
	}

IL_01ae:
	{
		// }
		String_t* L_94 = V_10;
		return L_94;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::DisplayRecognitionError(System.String[],Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser_DisplayRecognitionError_m74D1B1F8143AAB9B64BABE1662DCA47AF942D504 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames0, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// base.DisplayRecognitionError(tokenNames, e);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___tokenNames0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_1 = ___e1;
		BaseRecognizer_DisplayRecognitionError_m7EFC27074AA3274F788688E29BC8D48ADD2F19FD(__this, L_0, L_1, NULL);
		// if (Errors == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline(__this, NULL);
		V_2 = (bool)((((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Errors = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_4, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75_inline(__this, L_4, NULL);
	}

IL_0025:
	{
		// var hdr = GetErrorHeader(e);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_5 = ___e1;
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(13 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorHeader(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_5);
		V_0 = L_6;
		// var msg = GetErrorMessage(e, tokenNames);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_7 = ___e1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___tokenNames0;
		String_t* L_9;
		L_9 = VirtualFuncInvoker2< String_t*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(12 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[]) */, __this, L_7, L_8);
		V_1 = L_9;
		// Errors.Add(msg + " at " + hdr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline(__this, NULL);
		String_t* L_11 = V_1;
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, L_12, NULL);
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::ncalcExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* NCalcParser_ncalcExpression_m2056D603298800CBA3D58C744399464FD978DACF (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_3 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_4 = NULL;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_5 = NULL;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* G_B3_0 = NULL;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* G_B4_1 = NULL;
	{
		// var retval = new ncalcExpression_return();
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_0 = (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6*)il2cpp_codegen_object_new(ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken EOF2 = null;
		V_2 = (RuntimeObject*)NULL;
		// logicalExpression_return logicalExpression1 = null;
		V_3 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		// CommonTree EOF2_tree = null;
		V_4 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0146:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_logicalExpression_in_ncalcExpression56);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_ncalcExpression56_59;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// logicalExpression1 = logicalExpression();
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_7;
					L_7 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_3 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, logicalExpression1.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// EOF2 = (IToken)Match(input, EOF, FOLLOW_EOF_in_ncalcExpression58);
					RuntimeObject* L_15 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_16 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_EOF_in_ncalcExpression58_60;
					RuntimeObject* L_17;
					L_17 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_15, (-1), L_16);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// retval.value = logicalExpression1 != null ? logicalExpression1.value : null;
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_18 = V_0;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_19 = V_3;
					G_B2_0 = L_18;
					if (L_19)
					{
						G_B3_0 = L_18;
						goto IL_008e_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0094_2;
				}

IL_008e_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_20 = V_3;
					NullCheck(L_20);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_21 = L_20->___value_2;
					G_B4_0 = L_21;
					G_B4_1 = G_B3_0;
				}

IL_0094_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
					// retval.Stop = input.LT(-1);
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_22 = V_0;
					RuntimeObject* L_23 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_23);
					RuntimeObject* L_24;
					L_24 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_23, (-1));
					NullCheck(L_22);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_22, L_24);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_25 = V_0;
					RuntimeObject* L_26 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_27 = V_1;
					NullCheck(L_26);
					RuntimeObject* L_28;
					L_28 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_26, L_27);
					NullCheck(L_25);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_25, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_28, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_29 = __this->___adaptor_8;
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_30 = V_0;
					NullCheck(L_30);
					RuntimeObject* L_31;
					L_31 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_30);
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_32 = V_0;
					NullCheck(L_32);
					RuntimeObject* L_33;
					L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_32);
					ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_34 = V_0;
					NullCheck(L_34);
					RuntimeObject* L_35;
					L_35 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_34);
					NullCheck(L_29);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_31, ((RuntimeObject*)Castclass((RuntimeObject*)L_33, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_35, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0144_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00f0_1;
				}
				throw e;
			}

CATCH_00f0_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_5 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_36 = V_5;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_36);
				// Recover(input, re);
				RuntimeObject* L_37 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_38 = V_5;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_37, L_38);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_39 = V_0;
				RuntimeObject* L_40 = __this->___adaptor_8;
				RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_42 = V_0;
				NullCheck(L_42);
				RuntimeObject* L_43;
				L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_42);
				RuntimeObject* L_44 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_44);
				RuntimeObject* L_45;
				L_45 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_44, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_46 = V_5;
				NullCheck(L_40);
				RuntimeObject* L_47;
				L_47 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_40, L_41, ((RuntimeObject*)Castclass((RuntimeObject*)L_43, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_45, L_46);
				NullCheck(L_39);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_39, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_47, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0144_1;
			}// end catch (depth: 2)

IL_0144_1:
			{
				goto IL_0149;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0149:
	{
		// return retval;
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_48 = V_0;
		V_6 = L_48;
		goto IL_014e;
	}

IL_014e:
	{
		// }
		ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* L_49 = V_6;
		return L_49;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::logicalExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_4 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_5 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_14 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B3_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B4_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B10_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B9_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B11_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B13_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B13_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B12_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B14_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B14_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B14_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B16_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B16_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B16_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B15_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B15_1 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B15_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B17_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B17_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B17_2 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* G_B17_3 = NULL;
	{
		// var retval = new logicalExpression_return();
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_0 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)il2cpp_codegen_object_new(logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal3 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken char_literal4 = null;
		V_3 = (RuntimeObject*)NULL;
		// conditionalExpression_return left = null;
		V_4 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		// conditionalExpression_return middle = null;
		V_5 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		// conditionalExpression_return right = null;
		V_6 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		// CommonTree char_literal3_tree = null;
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal4_tree = null;
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0297:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_conditionalExpression_in_logicalExpression78);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression78_61;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = conditionalExpression();
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_7;
					L_7 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_4 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_15 = V_0;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_16 = V_4;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0085_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008c_2;
				}

IL_0085_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008c_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
					// var alt1 = 2;
					V_9 = 2;
					// var LA1_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					// if (LA1_0 == 19)
					int32_t L_21 = V_10;
					V_11 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)19)))? 1 : 0);
					bool L_22 = V_11;
					if (!L_22)
					{
						goto IL_00b3_2;
					}
				}
				{
					// alt1 = 1;
					V_9 = 1;
				}

IL_00b3_2:
				{
					// switch (alt1)
					int32_t L_23 = V_9;
					V_13 = L_23;
					int32_t L_24 = V_13;
					V_12 = L_24;
					int32_t L_25 = V_12;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00c5_2;
					}
				}
				{
					goto IL_01ea_2;
				}

IL_00c5_2:
				{
					// char_literal3 = (IToken)Match(input, 19, FOLLOW_19_in_logicalExpression84);
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_19_in_logicalExpression84_62;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_26, ((int32_t)19), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal3_tree = (CommonTree)adaptor.Create(char_literal3);
					RuntimeObject* L_29 = __this->___adaptor_8;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal3_tree);
					RuntimeObject* L_32 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_7;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					// PushFollow(FOLLOW_conditionalExpression_in_logicalExpression88);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression88_63;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					// middle = conditionalExpression();
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_36;
					L_36 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_5 = L_36;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer_1;
					NullCheck(L_38);
					L_38->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					// adaptor.AddChild(root_0, middle.Tree);
					RuntimeObject* L_40 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_42 = V_5;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					// char_literal4 = (IToken)Match(input, 20, FOLLOW_20_in_logicalExpression90);
					RuntimeObject* L_44 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_45 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_20_in_logicalExpression90_64;
					RuntimeObject* L_46;
					L_46 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_44, ((int32_t)20), L_45);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_46, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal4_tree = (CommonTree)adaptor.Create(char_literal4);
					RuntimeObject* L_47 = __this->___adaptor_8;
					RuntimeObject* L_48 = V_3;
					NullCheck(L_47);
					RuntimeObject* L_49;
					L_49 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_47, L_48);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_49, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal4_tree);
					RuntimeObject* L_50 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_51 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_52 = V_8;
					NullCheck(L_50);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_50, L_51, L_52);
					// PushFollow(FOLLOW_conditionalExpression_in_logicalExpression94);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_53 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression94_65;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_53, NULL);
					// right = conditionalExpression();
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_54;
					L_54 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_6 = L_54;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_55 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_56 = L_55;
					NullCheck(L_56);
					int32_t L_57 = L_56->___followingStackPointer_1;
					NullCheck(L_56);
					L_56->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_58 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_59 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_60 = V_6;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_60);
					NullCheck(L_58);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59, L_61);
					// retval.value = new TernaryExpression(left != null ? left.value : null, middle != null ? middle.value : null, right != null ? right.value : null);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_62 = V_0;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_63 = V_4;
					G_B9_0 = L_62;
					if (L_63)
					{
						G_B10_0 = L_62;
						goto IL_01ba_2;
					}
				}
				{
					G_B11_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B11_1 = G_B9_0;
					goto IL_01c1_2;
				}

IL_01ba_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_64 = V_4;
					NullCheck(L_64);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_65 = L_64->___value_2;
					G_B11_0 = L_65;
					G_B11_1 = G_B10_0;
				}

IL_01c1_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_66 = V_5;
					G_B12_0 = G_B11_0;
					G_B12_1 = G_B11_1;
					if (L_66)
					{
						G_B13_0 = G_B11_0;
						G_B13_1 = G_B11_1;
						goto IL_01c8_2;
					}
				}
				{
					G_B14_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B14_1 = G_B12_0;
					G_B14_2 = G_B12_1;
					goto IL_01cf_2;
				}

IL_01c8_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_67 = V_5;
					NullCheck(L_67);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_68 = L_67->___value_2;
					G_B14_0 = L_68;
					G_B14_1 = G_B13_0;
					G_B14_2 = G_B13_1;
				}

IL_01cf_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_69 = V_6;
					G_B15_0 = G_B14_0;
					G_B15_1 = G_B14_1;
					G_B15_2 = G_B14_2;
					if (L_69)
					{
						G_B16_0 = G_B14_0;
						G_B16_1 = G_B14_1;
						G_B16_2 = G_B14_2;
						goto IL_01d6_2;
					}
				}
				{
					G_B17_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B17_1 = G_B15_0;
					G_B17_2 = G_B15_1;
					G_B17_3 = G_B15_2;
					goto IL_01dd_2;
				}

IL_01d6_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_70 = V_6;
					NullCheck(L_70);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_71 = L_70->___value_2;
					G_B17_0 = L_71;
					G_B17_1 = G_B16_0;
					G_B17_2 = G_B16_1;
					G_B17_3 = G_B16_2;
				}

IL_01dd_2:
				{
					TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_72 = (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC*)il2cpp_codegen_object_new(TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC_il2cpp_TypeInfo_var);
					NullCheck(L_72);
					TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267(L_72, G_B17_2, G_B17_1, G_B17_0, NULL);
					NullCheck(G_B17_3);
					G_B17_3->___value_2 = L_72;
					Il2CppCodeGenWriteBarrier((void**)(&G_B17_3->___value_2), (void*)L_72);
					// break;
					goto IL_01ea_2;
				}

IL_01ea_2:
				{
					// retval.Stop = input.LT(-1);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_73 = V_0;
					RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_74);
					RuntimeObject* L_75;
					L_75 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_74, (-1));
					NullCheck(L_73);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_73, L_75);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_76 = V_0;
					RuntimeObject* L_77 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_78 = V_1;
					NullCheck(L_77);
					RuntimeObject* L_79;
					L_79 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_77, L_78);
					NullCheck(L_76);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_76, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_79, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_80 = __this->___adaptor_8;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_81 = V_0;
					NullCheck(L_81);
					RuntimeObject* L_82;
					L_82 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_81);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_83 = V_0;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_83);
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_85 = V_0;
					NullCheck(L_85);
					RuntimeObject* L_86;
					L_86 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_85);
					NullCheck(L_80);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_80, L_82, ((RuntimeObject*)Castclass((RuntimeObject*)L_84, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0295_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0241_1;
				}
				throw e;
			}

CATCH_0241_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_14 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_87 = V_14;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_87);
				// Recover(input, re);
				RuntimeObject* L_88 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_89 = V_14;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_88, L_89);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_90 = V_0;
				RuntimeObject* L_91 = __this->___adaptor_8;
				RuntimeObject* L_92 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_93 = V_0;
				NullCheck(L_93);
				RuntimeObject* L_94;
				L_94 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_93);
				RuntimeObject* L_95 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_95);
				RuntimeObject* L_96;
				L_96 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_95, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_97 = V_14;
				NullCheck(L_91);
				RuntimeObject* L_98;
				L_98 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_91, L_92, ((RuntimeObject*)Castclass((RuntimeObject*)L_94, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_96, L_97);
				NullCheck(L_90);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_90, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_98, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0295_1;
			}// end catch (depth: 2)

IL_0295_1:
			{
				goto IL_029a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_029a:
	{
		// return retval;
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_99 = V_0;
		V_15 = L_99;
		goto IL_029f;
	}

IL_029f:
	{
		// }
		logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_100 = V_15;
		return L_100;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::conditionalExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* V_3 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_13 = NULL;
	bool V_14 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_15 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B3_0 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B20_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B19_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* G_B21_3 = NULL;
	{
		// var retval = new conditionalExpression_return();
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_0 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)il2cpp_codegen_object_new(conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken set5 = null;
		V_2 = (RuntimeObject*)NULL;
		// booleanAndExpression_return left = null;
		V_3 = (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033*)NULL;
		// conditionalExpression_return right = null;
		V_4 = (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257*)NULL;
		// CommonTree set5_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026b:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_booleanAndExpression_in_conditionalExpression121);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_booleanAndExpression_in_conditionalExpression121_66;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = booleanAndExpression();
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_7;
					L_7 = NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212(__this, NULL);
					V_3 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_15 = V_0;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_16 = V_3;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0088_2:
				{
					// var alt2 = 2;
					V_7 = 2;
					// var LA2_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					// if (LA2_0 >= 21 && LA2_0 <= 22)
					int32_t L_21 = V_8;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)21))))
					{
						goto IL_00ab_2;
					}
				}
				{
					int32_t L_22 = V_8;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00ac_2;
				}

IL_00ab_2:
				{
					G_B8_0 = 0;
				}

IL_00ac_2:
				{
					V_9 = (bool)G_B8_0;
					bool L_23 = V_9;
					if (!L_23)
					{
						goto IL_00b7_2;
					}
				}
				{
					// alt2 = 1;
					V_7 = 1;
				}

IL_00b7_2:
				{
					// switch (alt2)
					int32_t L_24 = V_7;
					V_11 = L_24;
					int32_t L_25 = V_11;
					V_10 = L_25;
					int32_t L_26 = V_10;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00c9_2;
					}
				}
				{
					goto IL_01b1_2;
				}

IL_00c9_2:
				{
					// set5 = (IToken)input.LT(1);
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					RuntimeObject* L_28;
					L_28 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_27, 1);
					V_2 = L_28;
					// if (input.LA(1) >= 21 && input.LA(1) <= 22)
					RuntimeObject* L_29 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_29);
					int32_t L_30;
					L_30 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_29, 1);
					if ((((int32_t)L_30) < ((int32_t)((int32_t)21))))
					{
						goto IL_00fc_2;
					}
				}
				{
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_31);
					int32_t L_32;
					L_32 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_31, 1);
					G_B15_0 = ((((int32_t)((((int32_t)L_32) > ((int32_t)((int32_t)22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00fd_2;
				}

IL_00fc_2:
				{
					G_B15_0 = 0;
				}

IL_00fd_2:
				{
					V_12 = (bool)G_B15_0;
					bool L_33 = V_12;
					if (!L_33)
					{
						goto IL_013d_2;
					}
				}
				{
					// input.Consume();
					RuntimeObject* L_34 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_34);
					// adaptor.AddChild(root_0, (CommonTree)adaptor.Create(set5));
					RuntimeObject* L_35 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_36 = V_1;
					RuntimeObject* L_37 = __this->___adaptor_8;
					RuntimeObject* L_38 = V_2;
					NullCheck(L_37);
					RuntimeObject* L_39;
					L_39 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_37, L_38);
					NullCheck(L_35);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_35, L_36, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_39, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// state.errorRecovery = false;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_40 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					NullCheck(L_40);
					L_40->___errorRecovery_2 = (bool)0;
					goto IL_014f_2;
				}

IL_013d_2:
				{
					// var mse = new MismatchedSetException(null, input);
					RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_42 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					NullCheck(L_42);
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_42, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_41, NULL);
					V_13 = L_42;
					// throw mse;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_43 = V_13;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12_RuntimeMethod_var)));
				}

IL_014f_2:
				{
					// type = BinaryExpressionType.Or;
					V_6 = 1;
					// PushFollow(FOLLOW_conditionalExpression_in_conditionalExpression146);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_44 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_conditionalExpression146_68;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_44, NULL);
					// right = conditionalExpression();
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_45;
					L_45 = NCalcParser_conditionalExpression_mB49BC2847A4823A8EC0F35FD31660447571BFF12(__this, NULL);
					V_4 = L_45;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_46 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_47 = L_46;
					NullCheck(L_47);
					int32_t L_48 = L_47->___followingStackPointer_1;
					NullCheck(L_47);
					L_47->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_49 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_50 = V_1;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_51 = V_4;
					NullCheck(L_51);
					RuntimeObject* L_52;
					L_52 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_51);
					NullCheck(L_49);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50, L_52);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_53 = V_0;
					int32_t L_54 = V_6;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_55 = V_0;
					NullCheck(L_55);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_56 = L_55->___value_2;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_57 = V_4;
					G_B19_0 = L_56;
					G_B19_1 = L_54;
					G_B19_2 = L_53;
					if (L_57)
					{
						G_B20_0 = L_56;
						G_B20_1 = L_54;
						G_B20_2 = L_53;
						goto IL_019d_2;
					}
				}
				{
					G_B21_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B21_1 = G_B19_0;
					G_B21_2 = G_B19_1;
					G_B21_3 = G_B19_2;
					goto IL_01a4_2;
				}

IL_019d_2:
				{
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_58 = V_4;
					NullCheck(L_58);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_59 = L_58->___value_2;
					G_B21_0 = L_59;
					G_B21_1 = G_B20_0;
					G_B21_2 = G_B20_1;
					G_B21_3 = G_B20_2;
				}

IL_01a4_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_60 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_60);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_60, G_B21_2, G_B21_1, G_B21_0, NULL);
					NullCheck(G_B21_3);
					G_B21_3->___value_2 = L_60;
					Il2CppCodeGenWriteBarrier((void**)(&G_B21_3->___value_2), (void*)L_60);
					// break;
					goto IL_01b3_2;
				}

IL_01b1_2:
				{
					// goto loop2;
					goto IL_01bc_2;
				}

IL_01b3_2:
				{
					// while (true);
					V_14 = (bool)1;
					goto IL_0088_2;
				}

IL_01bc_2:
				{
					// retval.Stop = input.LT(-1);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_61 = V_0;
					RuntimeObject* L_62 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_62, (-1));
					NullCheck(L_61);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_61, L_63);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_64 = V_0;
					RuntimeObject* L_65 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_66 = V_1;
					NullCheck(L_65);
					RuntimeObject* L_67;
					L_67 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_65, L_66);
					NullCheck(L_64);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_64, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_67, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_68 = __this->___adaptor_8;
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_69 = V_0;
					NullCheck(L_69);
					RuntimeObject* L_70;
					L_70 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_69);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_71 = V_0;
					NullCheck(L_71);
					RuntimeObject* L_72;
					L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_71);
					conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_73 = V_0;
					NullCheck(L_73);
					RuntimeObject* L_74;
					L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_73);
					NullCheck(L_68);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_68, L_70, ((RuntimeObject*)Castclass((RuntimeObject*)L_72, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_74, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0269_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0215_1;
				}
				throw e;
			}

CATCH_0215_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_15 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_75 = V_15;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_75);
				// Recover(input, re);
				RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_77 = V_15;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_76, L_77);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_78 = V_0;
				RuntimeObject* L_79 = __this->___adaptor_8;
				RuntimeObject* L_80 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_81 = V_0;
				NullCheck(L_81);
				RuntimeObject* L_82;
				L_82 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_81);
				RuntimeObject* L_83 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_83);
				RuntimeObject* L_84;
				L_84 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_83, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_85 = V_15;
				NullCheck(L_79);
				RuntimeObject* L_86;
				L_86 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_79, L_80, ((RuntimeObject*)Castclass((RuntimeObject*)L_82, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_84, L_85);
				NullCheck(L_78);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_78, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_86, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0269_1;
			}// end catch (depth: 2)

IL_0269_1:
			{
				goto IL_026e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026e:
	{
		// return retval;
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_87 = V_0;
		V_16 = L_87;
		goto IL_0273;
	}

IL_0273:
	{
		// }
		conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* L_88 = V_16;
		return L_88;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::booleanAndExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_3 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_13 = NULL;
	bool V_14 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_15 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B3_0 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B20_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B19_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B21_1 = NULL;
	int32_t G_B21_2 = 0;
	booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* G_B21_3 = NULL;
	{
		// var retval = new booleanAndExpression_return();
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_0 = (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033*)il2cpp_codegen_object_new(booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken set6 = null;
		V_2 = (RuntimeObject*)NULL;
		// bitwiseOrExpression_return left = null;
		V_3 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)NULL;
		// bitwiseOrExpression_return right = null;
		V_4 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)NULL;
		// CommonTree set6_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026b:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_bitwiseOrExpression_in_booleanAndExpression180);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180_69;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = bitwiseOrExpression();
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_7;
					L_7 = NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8(__this, NULL);
					V_3 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_15 = V_0;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_16 = V_3;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0088_2:
				{
					// var alt3 = 2;
					V_7 = 2;
					// var LA3_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					// if (LA3_0 >= 23 && LA3_0 <= 24)
					int32_t L_21 = V_8;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)23))))
					{
						goto IL_00ab_2;
					}
				}
				{
					int32_t L_22 = V_8;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00ac_2;
				}

IL_00ab_2:
				{
					G_B8_0 = 0;
				}

IL_00ac_2:
				{
					V_9 = (bool)G_B8_0;
					bool L_23 = V_9;
					if (!L_23)
					{
						goto IL_00b7_2;
					}
				}
				{
					// alt3 = 1;
					V_7 = 1;
				}

IL_00b7_2:
				{
					// switch (alt3)
					int32_t L_24 = V_7;
					V_11 = L_24;
					int32_t L_25 = V_11;
					V_10 = L_25;
					int32_t L_26 = V_10;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00c9_2;
					}
				}
				{
					goto IL_01b1_2;
				}

IL_00c9_2:
				{
					// set6 = (IToken)input.LT(1);
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					RuntimeObject* L_28;
					L_28 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_27, 1);
					V_2 = L_28;
					// if (input.LA(1) >= 23 && input.LA(1) <= 24)
					RuntimeObject* L_29 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_29);
					int32_t L_30;
					L_30 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_29, 1);
					if ((((int32_t)L_30) < ((int32_t)((int32_t)23))))
					{
						goto IL_00fc_2;
					}
				}
				{
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_31);
					int32_t L_32;
					L_32 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_31, 1);
					G_B15_0 = ((((int32_t)((((int32_t)L_32) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00fd_2;
				}

IL_00fc_2:
				{
					G_B15_0 = 0;
				}

IL_00fd_2:
				{
					V_12 = (bool)G_B15_0;
					bool L_33 = V_12;
					if (!L_33)
					{
						goto IL_013d_2;
					}
				}
				{
					// input.Consume();
					RuntimeObject* L_34 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_34);
					InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_34);
					// adaptor.AddChild(root_0, (CommonTree)adaptor.Create(set6));
					RuntimeObject* L_35 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_36 = V_1;
					RuntimeObject* L_37 = __this->___adaptor_8;
					RuntimeObject* L_38 = V_2;
					NullCheck(L_37);
					RuntimeObject* L_39;
					L_39 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_37, L_38);
					NullCheck(L_35);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_35, L_36, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_39, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// state.errorRecovery = false;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_40 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					NullCheck(L_40);
					L_40->___errorRecovery_2 = (bool)0;
					goto IL_014f_2;
				}

IL_013d_2:
				{
					// var mse = new MismatchedSetException(null, input);
					RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_42 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					NullCheck(L_42);
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_42, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_41, NULL);
					V_13 = L_42;
					// throw mse;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_43 = V_13;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_booleanAndExpression_mE3B01E6AE23C34C27F4C545C7808C9AE69243212_RuntimeMethod_var)));
				}

IL_014f_2:
				{
					// type = BinaryExpressionType.And;
					V_6 = 0;
					// PushFollow(FOLLOW_bitwiseOrExpression_in_booleanAndExpression205);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_44 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205_71;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_44, NULL);
					// right = bitwiseOrExpression();
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_45;
					L_45 = NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8(__this, NULL);
					V_4 = L_45;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_46 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_47 = L_46;
					NullCheck(L_47);
					int32_t L_48 = L_47->___followingStackPointer_1;
					NullCheck(L_47);
					L_47->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_49 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_50 = V_1;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_51 = V_4;
					NullCheck(L_51);
					RuntimeObject* L_52;
					L_52 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_51);
					NullCheck(L_49);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50, L_52);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_53 = V_0;
					int32_t L_54 = V_6;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_55 = V_0;
					NullCheck(L_55);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_56 = L_55->___value_2;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_57 = V_4;
					G_B19_0 = L_56;
					G_B19_1 = L_54;
					G_B19_2 = L_53;
					if (L_57)
					{
						G_B20_0 = L_56;
						G_B20_1 = L_54;
						G_B20_2 = L_53;
						goto IL_019d_2;
					}
				}
				{
					G_B21_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B21_1 = G_B19_0;
					G_B21_2 = G_B19_1;
					G_B21_3 = G_B19_2;
					goto IL_01a4_2;
				}

IL_019d_2:
				{
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_58 = V_4;
					NullCheck(L_58);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_59 = L_58->___value_2;
					G_B21_0 = L_59;
					G_B21_1 = G_B20_0;
					G_B21_2 = G_B20_1;
					G_B21_3 = G_B20_2;
				}

IL_01a4_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_60 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_60);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_60, G_B21_2, G_B21_1, G_B21_0, NULL);
					NullCheck(G_B21_3);
					G_B21_3->___value_2 = L_60;
					Il2CppCodeGenWriteBarrier((void**)(&G_B21_3->___value_2), (void*)L_60);
					// break;
					goto IL_01b3_2;
				}

IL_01b1_2:
				{
					// goto loop3;
					goto IL_01bc_2;
				}

IL_01b3_2:
				{
					// while (true);
					V_14 = (bool)1;
					goto IL_0088_2;
				}

IL_01bc_2:
				{
					// retval.Stop = input.LT(-1);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_61 = V_0;
					RuntimeObject* L_62 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_62, (-1));
					NullCheck(L_61);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_61, L_63);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_64 = V_0;
					RuntimeObject* L_65 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_66 = V_1;
					NullCheck(L_65);
					RuntimeObject* L_67;
					L_67 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_65, L_66);
					NullCheck(L_64);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_64, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_67, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_68 = __this->___adaptor_8;
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_69 = V_0;
					NullCheck(L_69);
					RuntimeObject* L_70;
					L_70 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_69);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_71 = V_0;
					NullCheck(L_71);
					RuntimeObject* L_72;
					L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_71);
					booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_73 = V_0;
					NullCheck(L_73);
					RuntimeObject* L_74;
					L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_73);
					NullCheck(L_68);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_68, L_70, ((RuntimeObject*)Castclass((RuntimeObject*)L_72, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_74, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0269_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0215_1;
				}
				throw e;
			}

CATCH_0215_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_15 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_75 = V_15;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_75);
				// Recover(input, re);
				RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_77 = V_15;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_76, L_77);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_78 = V_0;
				RuntimeObject* L_79 = __this->___adaptor_8;
				RuntimeObject* L_80 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_81 = V_0;
				NullCheck(L_81);
				RuntimeObject* L_82;
				L_82 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_81);
				RuntimeObject* L_83 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_83);
				RuntimeObject* L_84;
				L_84 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_83, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_85 = V_15;
				NullCheck(L_79);
				RuntimeObject* L_86;
				L_86 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_79, L_80, ((RuntimeObject*)Castclass((RuntimeObject*)L_82, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_84, L_85);
				NullCheck(L_78);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_78, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_86, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0269_1;
			}// end catch (depth: 2)

IL_0269_1:
			{
				goto IL_026e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026e:
	{
		// return retval;
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_87 = V_0;
		V_16 = L_87;
		goto IL_0273;
	}

IL_0273:
	{
		// }
		booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* L_88 = V_16;
		return L_88;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::bitwiseOrExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* V_3 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B3_0 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B4_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B11_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B10_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* G_B12_3 = NULL;
	{
		// var retval = new bitwiseOrExpression_return();
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_0 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)il2cpp_codegen_object_new(bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal7 = null;
		V_2 = (RuntimeObject*)NULL;
		// bitwiseXOrExpression_return left = null;
		V_3 = (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F*)NULL;
		// bitwiseOrExpression_return right = null;
		V_4 = (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C*)NULL;
		// CommonTree char_literal7_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0216:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237_72;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = bitwiseXOrExpression();
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_7;
					L_7 = NCalcParser_bitwiseXOrExpression_m465CDDB79DF988DCD3ED8D7607F18142823508FF(__this, NULL);
					V_3 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_15 = V_0;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_16 = V_3;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0088_2:
				{
					// var alt4 = 2;
					V_7 = 2;
					// var LA4_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					// if (LA4_0 == 25)
					int32_t L_21 = V_8;
					V_9 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)25)))? 1 : 0);
					bool L_22 = V_9;
					if (!L_22)
					{
						goto IL_00ab_2;
					}
				}
				{
					// alt4 = 1;
					V_7 = 1;
				}

IL_00ab_2:
				{
					// switch (alt4)
					int32_t L_23 = V_7;
					V_11 = L_23;
					int32_t L_24 = V_11;
					V_10 = L_24;
					int32_t L_25 = V_10;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00bd_2;
					}
				}
				{
					goto IL_015c_2;
				}

IL_00bd_2:
				{
					// char_literal7 = (IToken)Match(input, 25, FOLLOW_25_in_bitwiseOrExpression246);
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_25_in_bitwiseOrExpression246_73;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_26, ((int32_t)25), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal7_tree = (CommonTree)adaptor.Create(char_literal7);
					RuntimeObject* L_29 = __this->___adaptor_8;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal7_tree);
					RuntimeObject* L_32 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					// type = BinaryExpressionType.BitwiseOr;
					V_6 = ((int32_t)13);
					// PushFollow(FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256_74;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					// right = bitwiseOrExpression();
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_36;
					L_36 = NCalcParser_bitwiseOrExpression_mED019F59632FC2FC3760DDD2328ADB9F3DF614A8(__this, NULL);
					V_4 = L_36;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer_1;
					NullCheck(L_38);
					L_38->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_40 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_42 = V_4;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_44 = V_0;
					int32_t L_45 = V_6;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_46 = V_0;
					NullCheck(L_46);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_47 = L_46->___value_2;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_48 = V_4;
					G_B10_0 = L_47;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
					if (L_48)
					{
						G_B11_0 = L_47;
						G_B11_1 = L_45;
						G_B11_2 = L_44;
						goto IL_0148_2;
					}
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					G_B12_2 = G_B10_1;
					G_B12_3 = G_B10_2;
					goto IL_014f_2;
				}

IL_0148_2:
				{
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_49 = V_4;
					NullCheck(L_49);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_50 = L_49->___value_2;
					G_B12_0 = L_50;
					G_B12_1 = G_B11_0;
					G_B12_2 = G_B11_1;
					G_B12_3 = G_B11_2;
				}

IL_014f_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_51 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_51);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_51, G_B12_2, G_B12_1, G_B12_0, NULL);
					NullCheck(G_B12_3);
					G_B12_3->___value_2 = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&G_B12_3->___value_2), (void*)L_51);
					// break;
					goto IL_015e_2;
				}

IL_015c_2:
				{
					// goto loop4;
					goto IL_0167_2;
				}

IL_015e_2:
				{
					// while (true);
					V_12 = (bool)1;
					goto IL_0088_2;
				}

IL_0167_2:
				{
					// retval.Stop = input.LT(-1);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_52 = V_0;
					RuntimeObject* L_53 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_53);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_53, (-1));
					NullCheck(L_52);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_52, L_54);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_55 = V_0;
					RuntimeObject* L_56 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					NullCheck(L_56);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57);
					NullCheck(L_55);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_55, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_59 = __this->___adaptor_8;
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_60);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_62);
					bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_64);
					NullCheck(L_59);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_59, L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0214_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01c0_1;
				}
				throw e;
			}

CATCH_01c0_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_13 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_66);
				// Recover(input, re);
				RuntimeObject* L_67 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_68 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_67, L_68);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_69 = V_0;
				RuntimeObject* L_70 = __this->___adaptor_8;
				RuntimeObject* L_71 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_72 = V_0;
				NullCheck(L_72);
				RuntimeObject* L_73;
				L_73 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_72);
				RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_74);
				RuntimeObject* L_75;
				L_75 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_74, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_76 = V_13;
				NullCheck(L_70);
				RuntimeObject* L_77;
				L_77 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_70, L_71, ((RuntimeObject*)Castclass((RuntimeObject*)L_73, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_75, L_76);
				NullCheck(L_69);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_69, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_77, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0214_1;
			}// end catch (depth: 2)

IL_0214_1:
			{
				goto IL_0219;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		// return retval;
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_78 = V_0;
		V_14 = L_78;
		goto IL_021e;
	}

IL_021e:
	{
		// }
		bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* L_79 = V_14;
		return L_79;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::bitwiseXOrExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* NCalcParser_bitwiseXOrExpression_m465CDDB79DF988DCD3ED8D7607F18142823508FF (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_3 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B3_0 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B4_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B11_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B10_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* G_B12_3 = NULL;
	{
		// var retval = new bitwiseXOrExpression_return();
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_0 = (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F*)il2cpp_codegen_object_new(bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal8 = null;
		V_2 = (RuntimeObject*)NULL;
		// bitwiseAndExpression_return left = null;
		V_3 = (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD*)NULL;
		// bitwiseAndExpression_return right = null;
		V_4 = (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD*)NULL;
		// CommonTree char_literal8_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0216:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290_75;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = bitwiseAndExpression();
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_7;
					L_7 = NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3(__this, NULL);
					V_3 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_15 = V_0;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_16 = V_3;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0088_2:
				{
					// var alt5 = 2;
					V_7 = 2;
					// var LA5_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					// if (LA5_0 == 26)
					int32_t L_21 = V_8;
					V_9 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)26)))? 1 : 0);
					bool L_22 = V_9;
					if (!L_22)
					{
						goto IL_00ab_2;
					}
				}
				{
					// alt5 = 1;
					V_7 = 1;
				}

IL_00ab_2:
				{
					// switch (alt5)
					int32_t L_23 = V_7;
					V_11 = L_23;
					int32_t L_24 = V_11;
					V_10 = L_24;
					int32_t L_25 = V_10;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00bd_2;
					}
				}
				{
					goto IL_015c_2;
				}

IL_00bd_2:
				{
					// char_literal8 = (IToken)Match(input, 26, FOLLOW_26_in_bitwiseXOrExpression299);
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_26_in_bitwiseXOrExpression299_76;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_26, ((int32_t)26), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal8_tree = (CommonTree)adaptor.Create(char_literal8);
					RuntimeObject* L_29 = __this->___adaptor_8;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal8_tree);
					RuntimeObject* L_32 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					// type = BinaryExpressionType.BitwiseXOr;
					V_6 = ((int32_t)15);
					// PushFollow(FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309_77;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					// right = bitwiseAndExpression();
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_36;
					L_36 = NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3(__this, NULL);
					V_4 = L_36;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer_1;
					NullCheck(L_38);
					L_38->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_40 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_42 = V_4;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_44 = V_0;
					int32_t L_45 = V_6;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_46 = V_0;
					NullCheck(L_46);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_47 = L_46->___value_2;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_48 = V_4;
					G_B10_0 = L_47;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
					if (L_48)
					{
						G_B11_0 = L_47;
						G_B11_1 = L_45;
						G_B11_2 = L_44;
						goto IL_0148_2;
					}
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					G_B12_2 = G_B10_1;
					G_B12_3 = G_B10_2;
					goto IL_014f_2;
				}

IL_0148_2:
				{
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_49 = V_4;
					NullCheck(L_49);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_50 = L_49->___value_2;
					G_B12_0 = L_50;
					G_B12_1 = G_B11_0;
					G_B12_2 = G_B11_1;
					G_B12_3 = G_B11_2;
				}

IL_014f_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_51 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_51);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_51, G_B12_2, G_B12_1, G_B12_0, NULL);
					NullCheck(G_B12_3);
					G_B12_3->___value_2 = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&G_B12_3->___value_2), (void*)L_51);
					// break;
					goto IL_015e_2;
				}

IL_015c_2:
				{
					// goto loop5;
					goto IL_0167_2;
				}

IL_015e_2:
				{
					// while (true);
					V_12 = (bool)1;
					goto IL_0088_2;
				}

IL_0167_2:
				{
					// retval.Stop = input.LT(-1);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_52 = V_0;
					RuntimeObject* L_53 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_53);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_53, (-1));
					NullCheck(L_52);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_52, L_54);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_55 = V_0;
					RuntimeObject* L_56 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					NullCheck(L_56);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57);
					NullCheck(L_55);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_55, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_59 = __this->___adaptor_8;
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_60);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_62);
					bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_64);
					NullCheck(L_59);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_59, L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0214_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01c0_1;
				}
				throw e;
			}

CATCH_01c0_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_13 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_66);
				// Recover(input, re);
				RuntimeObject* L_67 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_68 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_67, L_68);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_69 = V_0;
				RuntimeObject* L_70 = __this->___adaptor_8;
				RuntimeObject* L_71 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_72 = V_0;
				NullCheck(L_72);
				RuntimeObject* L_73;
				L_73 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_72);
				RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_74);
				RuntimeObject* L_75;
				L_75 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_74, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_76 = V_13;
				NullCheck(L_70);
				RuntimeObject* L_77;
				L_77 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_70, L_71, ((RuntimeObject*)Castclass((RuntimeObject*)L_73, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_75, L_76);
				NullCheck(L_69);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_69, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_77, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0214_1;
			}// end catch (depth: 2)

IL_0214_1:
			{
				goto IL_0219;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		// return retval;
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_78 = V_0;
		V_14 = L_78;
		goto IL_021e;
	}

IL_021e:
	{
		// }
		bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* L_79 = V_14;
		return L_79;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::bitwiseAndExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* NCalcParser_bitwiseAndExpression_m6053C71F216686575266D3E709ACFC95DD3DBBB3 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_3 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B3_0 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B4_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B11_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B10_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* G_B12_3 = NULL;
	{
		// var retval = new bitwiseAndExpression_return();
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_0 = (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD*)il2cpp_codegen_object_new(bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal9 = null;
		V_2 = (RuntimeObject*)NULL;
		// equalityExpression_return left = null;
		V_3 = (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957*)NULL;
		// equalityExpression_return right = null;
		V_4 = (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957*)NULL;
		// CommonTree char_literal9_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_6 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0216:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_equalityExpression_in_bitwiseAndExpression341);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression341_78;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = equalityExpression();
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_7;
					L_7 = NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73(__this, NULL);
					V_3 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_13 = V_3;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_15 = V_0;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_16 = V_3;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_007d_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0083_2;
				}

IL_007d_2:
				{
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_17 = V_3;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0083_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0088_2:
				{
					// var alt6 = 2;
					V_7 = 2;
					// var LA6_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_8 = L_20;
					// if (LA6_0 == 27)
					int32_t L_21 = V_8;
					V_9 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)27)))? 1 : 0);
					bool L_22 = V_9;
					if (!L_22)
					{
						goto IL_00ab_2;
					}
				}
				{
					// alt6 = 1;
					V_7 = 1;
				}

IL_00ab_2:
				{
					// switch (alt6)
					int32_t L_23 = V_7;
					V_11 = L_23;
					int32_t L_24 = V_11;
					V_10 = L_24;
					int32_t L_25 = V_10;
					if ((((int32_t)L_25) == ((int32_t)1)))
					{
						goto IL_00bd_2;
					}
				}
				{
					goto IL_015c_2;
				}

IL_00bd_2:
				{
					// char_literal9 = (IToken)Match(input, 27, FOLLOW_27_in_bitwiseAndExpression350);
					RuntimeObject* L_26 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_27_in_bitwiseAndExpression350_79;
					RuntimeObject* L_28;
					L_28 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_26, ((int32_t)27), L_27);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal9_tree = (CommonTree)adaptor.Create(char_literal9);
					RuntimeObject* L_29 = __this->___adaptor_8;
					RuntimeObject* L_30 = V_2;
					NullCheck(L_29);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_29, L_30);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal9_tree);
					RuntimeObject* L_32 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_5;
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_34);
					// type = BinaryExpressionType.BitwiseAnd;
					V_6 = ((int32_t)14);
					// PushFollow(FOLLOW_equalityExpression_in_bitwiseAndExpression360);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_35 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression360_80;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_35, NULL);
					// right = equalityExpression();
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_36;
					L_36 = NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73(__this, NULL);
					V_4 = L_36;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_37 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = L_37;
					NullCheck(L_38);
					int32_t L_39 = L_38->___followingStackPointer_1;
					NullCheck(L_38);
					L_38->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_40 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_42 = V_4;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_42);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, L_43);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_44 = V_0;
					int32_t L_45 = V_6;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_46 = V_0;
					NullCheck(L_46);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_47 = L_46->___value_2;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_48 = V_4;
					G_B10_0 = L_47;
					G_B10_1 = L_45;
					G_B10_2 = L_44;
					if (L_48)
					{
						G_B11_0 = L_47;
						G_B11_1 = L_45;
						G_B11_2 = L_44;
						goto IL_0148_2;
					}
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					G_B12_2 = G_B10_1;
					G_B12_3 = G_B10_2;
					goto IL_014f_2;
				}

IL_0148_2:
				{
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_49 = V_4;
					NullCheck(L_49);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_50 = L_49->___value_2;
					G_B12_0 = L_50;
					G_B12_1 = G_B11_0;
					G_B12_2 = G_B11_1;
					G_B12_3 = G_B11_2;
				}

IL_014f_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_51 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_51);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_51, G_B12_2, G_B12_1, G_B12_0, NULL);
					NullCheck(G_B12_3);
					G_B12_3->___value_2 = L_51;
					Il2CppCodeGenWriteBarrier((void**)(&G_B12_3->___value_2), (void*)L_51);
					// break;
					goto IL_015e_2;
				}

IL_015c_2:
				{
					// goto loop6;
					goto IL_0167_2;
				}

IL_015e_2:
				{
					// while (true);
					V_12 = (bool)1;
					goto IL_0088_2;
				}

IL_0167_2:
				{
					// retval.Stop = input.LT(-1);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_52 = V_0;
					RuntimeObject* L_53 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_53);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_53, (-1));
					NullCheck(L_52);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_52, L_54);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_55 = V_0;
					RuntimeObject* L_56 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					NullCheck(L_56);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57);
					NullCheck(L_55);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_55, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_59 = __this->___adaptor_8;
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_60);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_62);
					bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_64);
					NullCheck(L_59);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_59, L_61, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0214_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01c0_1;
				}
				throw e;
			}

CATCH_01c0_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_13 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_66);
				// Recover(input, re);
				RuntimeObject* L_67 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_68 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_67, L_68);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_69 = V_0;
				RuntimeObject* L_70 = __this->___adaptor_8;
				RuntimeObject* L_71 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_72 = V_0;
				NullCheck(L_72);
				RuntimeObject* L_73;
				L_73 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_72);
				RuntimeObject* L_74 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_74);
				RuntimeObject* L_75;
				L_75 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_74, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_76 = V_13;
				NullCheck(L_70);
				RuntimeObject* L_77;
				L_77 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_70, L_71, ((RuntimeObject*)Castclass((RuntimeObject*)L_73, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_75, L_76);
				NullCheck(L_69);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_69, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_77, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0214_1;
			}// end catch (depth: 2)

IL_0214_1:
			{
				goto IL_0219;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0219:
	{
		// return retval;
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_78 = V_0;
		V_14 = L_78;
		goto IL_021e;
	}

IL_021e:
	{
		// }
		bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* L_79 = V_14;
		return L_79;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::equalityExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_4 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_22 = NULL;
	bool V_23 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_24 = NULL;
	bool V_25 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_26 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* V_27 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B3_0 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B37_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B43_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B42_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B44_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B44_1 = NULL;
	int32_t G_B44_2 = 0;
	equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* G_B44_3 = NULL;
	{
		// var retval = new equalityExpression_return();
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_0 = (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957*)il2cpp_codegen_object_new(equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken set10 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken set11 = null;
		V_3 = (RuntimeObject*)NULL;
		// relationalExpression_return left = null;
		V_4 = (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE*)NULL;
		// relationalExpression_return right = null;
		V_5 = (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE*)NULL;
		// CommonTree set10_tree = null;
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree set11_tree = null;
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_8 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_038b:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_relationalExpression_in_equalityExpression394);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression394_81;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = relationalExpression();
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_7;
					L_7 = NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5(__this, NULL);
					V_4 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_15 = V_0;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_16 = V_4;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0086_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008d_2;
				}

IL_0086_2:
				{
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008d_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0092_2:
				{
					// var alt8 = 2;
					V_9 = 2;
					// var LA8_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					// if (LA8_0 >= 28 && LA8_0 <= 31)
					int32_t L_21 = V_10;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)28))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_22 = V_10;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B8_0 = 0;
				}

IL_00b6_2:
				{
					V_11 = (bool)G_B8_0;
					bool L_23 = V_11;
					if (!L_23)
					{
						goto IL_00c1_2;
					}
				}
				{
					// alt8 = 1;
					V_9 = 1;
				}

IL_00c1_2:
				{
					// switch (alt8)
					int32_t L_24 = V_9;
					V_13 = L_24;
					int32_t L_25 = V_13;
					V_12 = L_25;
					int32_t L_26 = V_12;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_02d1_2;
				}

IL_00d3_2:
				{
					// var alt7 = 2;
					V_14 = 2;
					// var LA7_0 = input.LA(1);
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_15 = L_28;
					// if (LA7_0 >= 28 && LA7_0 <= 29)
					int32_t L_29 = V_15;
					if ((((int32_t)L_29) < ((int32_t)((int32_t)28))))
					{
						goto IL_00f6_2;
					}
				}
				{
					int32_t L_30 = V_15;
					G_B15_0 = ((((int32_t)((((int32_t)L_30) > ((int32_t)((int32_t)29)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00f7_2;
				}

IL_00f6_2:
				{
					G_B15_0 = 0;
				}

IL_00f7_2:
				{
					V_16 = (bool)G_B15_0;
					bool L_31 = V_16;
					if (!L_31)
					{
						goto IL_0104_2;
					}
				}
				{
					// alt7 = 1;
					V_14 = 1;
					goto IL_013b_2;
				}

IL_0104_2:
				{
					// else if (LA7_0 >= 30 && LA7_0 <= 31)
					int32_t L_32 = V_15;
					if ((((int32_t)L_32) < ((int32_t)((int32_t)30))))
					{
						goto IL_0115_2;
					}
				}
				{
					int32_t L_33 = V_15;
					G_B20_0 = ((((int32_t)((((int32_t)L_33) > ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_0116_2;
				}

IL_0115_2:
				{
					G_B20_0 = 0;
				}

IL_0116_2:
				{
					V_17 = (bool)G_B20_0;
					bool L_34 = V_17;
					if (!L_34)
					{
						goto IL_0123_2;
					}
				}
				{
					// alt7 = 2;
					V_14 = 2;
					goto IL_013b_2;
				}

IL_0123_2:
				{
					// var nvae_d7s0 =
					//     new NoViableAltException("", 7, 0, input);
					RuntimeObject* L_35 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_36 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_36);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), 7, 0, L_35, NULL);
					V_18 = L_36;
					// throw nvae_d7s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_37 = V_18;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var)));
				}

IL_013b_2:
				{
					// switch (alt7)
					int32_t L_38 = V_14;
					V_20 = L_38;
					int32_t L_39 = V_20;
					V_19 = L_39;
					int32_t L_40 = V_19;
					if ((((int32_t)L_40) == ((int32_t)1)))
					{
						goto IL_0157_2;
					}
				}
				{
					goto IL_014a_2;
				}

IL_014a_2:
				{
					int32_t L_41 = V_19;
					if ((((int32_t)L_41) == ((int32_t)2)))
					{
						goto IL_01e6_2;
					}
				}
				{
					goto IL_0272_2;
				}

IL_0157_2:
				{
					// set10 = (IToken)input.LT(1);
					RuntimeObject* L_42 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_42);
					RuntimeObject* L_43;
					L_43 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_42, 1);
					V_2 = L_43;
					// if (input.LA(1) >= 28 && input.LA(1) <= 29)
					RuntimeObject* L_44 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_44);
					int32_t L_45;
					L_45 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_44, 1);
					if ((((int32_t)L_45) < ((int32_t)((int32_t)28))))
					{
						goto IL_018a_2;
					}
				}
				{
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_46);
					int32_t L_47;
					L_47 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_46, 1);
					G_B30_0 = ((((int32_t)((((int32_t)L_47) > ((int32_t)((int32_t)29)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_018b_2;
				}

IL_018a_2:
				{
					G_B30_0 = 0;
				}

IL_018b_2:
				{
					V_21 = (bool)G_B30_0;
					bool L_48 = V_21;
					if (!L_48)
					{
						goto IL_01cb_2;
					}
				}
				{
					// input.Consume();
					RuntimeObject* L_49 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_49);
					InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_49);
					// adaptor.AddChild(root_0, (CommonTree)adaptor.Create(set10));
					RuntimeObject* L_50 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_51 = V_1;
					RuntimeObject* L_52 = __this->___adaptor_8;
					RuntimeObject* L_53 = V_2;
					NullCheck(L_52);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53);
					NullCheck(L_50);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_50, L_51, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_54, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// state.errorRecovery = false;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_55 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					NullCheck(L_55);
					L_55->___errorRecovery_2 = (bool)0;
					goto IL_01dd_2;
				}

IL_01cb_2:
				{
					// var mse = new MismatchedSetException(null, input);
					RuntimeObject* L_56 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_57 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					NullCheck(L_57);
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_57, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_56, NULL);
					V_22 = L_57;
					// throw mse;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_58 = V_22;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var)));
				}

IL_01dd_2:
				{
					// type = BinaryExpressionType.Equal;
					V_8 = 7;
					// break;
					goto IL_0272_2;
				}

IL_01e6_2:
				{
					// set11 = (IToken)input.LT(1);
					RuntimeObject* L_59 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_59);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_59, 1);
					V_3 = L_60;
					// if (input.LA(1) >= 30 && input.LA(1) <= 31)
					RuntimeObject* L_61 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_61);
					int32_t L_62;
					L_62 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_61, 1);
					if ((((int32_t)L_62) < ((int32_t)((int32_t)30))))
					{
						goto IL_0219_2;
					}
				}
				{
					RuntimeObject* L_63 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_63);
					int32_t L_64;
					L_64 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_63, 1);
					G_B37_0 = ((((int32_t)((((int32_t)L_64) > ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_021a_2;
				}

IL_0219_2:
				{
					G_B37_0 = 0;
				}

IL_021a_2:
				{
					V_23 = (bool)G_B37_0;
					bool L_65 = V_23;
					if (!L_65)
					{
						goto IL_025a_2;
					}
				}
				{
					// input.Consume();
					RuntimeObject* L_66 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_66);
					// adaptor.AddChild(root_0, (CommonTree)adaptor.Create(set11));
					RuntimeObject* L_67 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_68 = V_1;
					RuntimeObject* L_69 = __this->___adaptor_8;
					RuntimeObject* L_70 = V_3;
					NullCheck(L_69);
					RuntimeObject* L_71;
					L_71 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_69, L_70);
					NullCheck(L_67);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_67, L_68, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_71, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// state.errorRecovery = false;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_72 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					NullCheck(L_72);
					L_72->___errorRecovery_2 = (bool)0;
					goto IL_026c_2;
				}

IL_025a_2:
				{
					// var mse = new MismatchedSetException(null, input);
					RuntimeObject* L_73 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_74 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					NullCheck(L_74);
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_74, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_73, NULL);
					V_24 = L_74;
					// throw mse;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_75 = V_24;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_equalityExpression_m660CBE5AC5F60906C6433F77F9BCABB051A1AA73_RuntimeMethod_var)));
				}

IL_026c_2:
				{
					// type = BinaryExpressionType.NotEqual;
					V_8 = 2;
					// break;
					goto IL_0272_2;
				}

IL_0272_2:
				{
					// PushFollow(FOLLOW_relationalExpression_in_equalityExpression441);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_76 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression441_84;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_76, NULL);
					// right = relationalExpression();
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_77;
					L_77 = NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5(__this, NULL);
					V_5 = L_77;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_78 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_79 = L_78;
					NullCheck(L_79);
					int32_t L_80 = L_79->___followingStackPointer_1;
					NullCheck(L_79);
					L_79->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_80, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_81 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_82 = V_1;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_83 = V_5;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_83);
					NullCheck(L_81);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_81, L_82, L_84);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_85 = V_0;
					int32_t L_86 = V_8;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_87 = V_0;
					NullCheck(L_87);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_88 = L_87->___value_2;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_89 = V_5;
					G_B42_0 = L_88;
					G_B42_1 = L_86;
					G_B42_2 = L_85;
					if (L_89)
					{
						G_B43_0 = L_88;
						G_B43_1 = L_86;
						G_B43_2 = L_85;
						goto IL_02bd_2;
					}
				}
				{
					G_B44_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B44_1 = G_B42_0;
					G_B44_2 = G_B42_1;
					G_B44_3 = G_B42_2;
					goto IL_02c4_2;
				}

IL_02bd_2:
				{
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_90 = V_5;
					NullCheck(L_90);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_91 = L_90->___value_2;
					G_B44_0 = L_91;
					G_B44_1 = G_B43_0;
					G_B44_2 = G_B43_1;
					G_B44_3 = G_B43_2;
				}

IL_02c4_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_92 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_92);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_92, G_B44_2, G_B44_1, G_B44_0, NULL);
					NullCheck(G_B44_3);
					G_B44_3->___value_2 = L_92;
					Il2CppCodeGenWriteBarrier((void**)(&G_B44_3->___value_2), (void*)L_92);
					// break;
					goto IL_02d3_2;
				}

IL_02d1_2:
				{
					// goto loop8;
					goto IL_02dc_2;
				}

IL_02d3_2:
				{
					// while (true);
					V_25 = (bool)1;
					goto IL_0092_2;
				}

IL_02dc_2:
				{
					// retval.Stop = input.LT(-1);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_93 = V_0;
					RuntimeObject* L_94 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_94);
					RuntimeObject* L_95;
					L_95 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_94, (-1));
					NullCheck(L_93);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_93, L_95);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_96 = V_0;
					RuntimeObject* L_97 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_98 = V_1;
					NullCheck(L_97);
					RuntimeObject* L_99;
					L_99 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_97, L_98);
					NullCheck(L_96);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_96, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_99, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_100 = __this->___adaptor_8;
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_101 = V_0;
					NullCheck(L_101);
					RuntimeObject* L_102;
					L_102 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_101);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_103 = V_0;
					NullCheck(L_103);
					RuntimeObject* L_104;
					L_104 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_103);
					equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_105 = V_0;
					NullCheck(L_105);
					RuntimeObject* L_106;
					L_106 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_105);
					NullCheck(L_100);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_100, L_102, ((RuntimeObject*)Castclass((RuntimeObject*)L_104, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_106, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0389_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0335_1;
				}
				throw e;
			}

CATCH_0335_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_26 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_107 = V_26;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_107);
				// Recover(input, re);
				RuntimeObject* L_108 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_109 = V_26;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_108, L_109);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_110 = V_0;
				RuntimeObject* L_111 = __this->___adaptor_8;
				RuntimeObject* L_112 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_113 = V_0;
				NullCheck(L_113);
				RuntimeObject* L_114;
				L_114 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_113);
				RuntimeObject* L_115 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_115);
				RuntimeObject* L_116;
				L_116 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_115, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_117 = V_26;
				NullCheck(L_111);
				RuntimeObject* L_118;
				L_118 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_111, L_112, ((RuntimeObject*)Castclass((RuntimeObject*)L_114, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_116, L_117);
				NullCheck(L_110);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_110, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_118, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0389_1;
			}// end catch (depth: 2)

IL_0389_1:
			{
				goto IL_038e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_038e:
	{
		// return retval;
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_119 = V_0;
		V_27 = L_119;
		goto IL_0393;
	}

IL_0393:
	{
		// }
		equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* L_120 = V_27;
		return L_120;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::relationalExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_6 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_10 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_19 = NULL;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	bool V_24 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_25 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* V_26 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B3_0 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B27_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B26_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B28_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B28_1 = NULL;
	int32_t G_B28_2 = 0;
	relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* G_B28_3 = NULL;
	{
		// var retval = new relationalExpression_return();
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_0 = (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE*)il2cpp_codegen_object_new(relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal12 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken string_literal13 = null;
		V_3 = (RuntimeObject*)NULL;
		// IToken char_literal14 = null;
		V_4 = (RuntimeObject*)NULL;
		// IToken string_literal15 = null;
		V_5 = (RuntimeObject*)NULL;
		// shiftExpression_return left = null;
		V_6 = (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71*)NULL;
		// shiftExpression_return right = null;
		V_7 = (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71*)NULL;
		// CommonTree char_literal12_tree = null;
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree string_literal13_tree = null;
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal14_tree = null;
		V_10 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree string_literal15_tree = null;
		V_11 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_12 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0396:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_shiftExpression_in_relationalExpression474);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression474_85;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = shiftExpression();
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_7;
					L_7 = NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C(__this, NULL);
					V_6 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_13 = V_6;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_15 = V_0;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_16 = V_6;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0092_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0099_2;
				}

IL_0092_2:
				{
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_17 = V_6;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0099_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_009e_2:
				{
					// var alt10 = 2;
					V_13 = 2;
					// var LA10_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_14 = L_20;
					// if (LA10_0 >= 32 && LA10_0 <= 35)
					int32_t L_21 = V_14;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)32))))
					{
						goto IL_00c1_2;
					}
				}
				{
					int32_t L_22 = V_14;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)35)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00c2_2;
				}

IL_00c1_2:
				{
					G_B8_0 = 0;
				}

IL_00c2_2:
				{
					V_15 = (bool)G_B8_0;
					bool L_23 = V_15;
					if (!L_23)
					{
						goto IL_00cd_2;
					}
				}
				{
					// alt10 = 1;
					V_13 = 1;
				}

IL_00cd_2:
				{
					// switch (alt10)
					int32_t L_24 = V_13;
					V_17 = L_24;
					int32_t L_25 = V_17;
					V_16 = L_25;
					int32_t L_26 = V_16;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00df_2;
					}
				}
				{
					goto IL_02dc_2;
				}

IL_00df_2:
				{
					// var alt9 = 4;
					V_18 = 4;
					// switch (input.LA(1))
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_21 = L_28;
					int32_t L_29 = V_21;
					V_20 = L_29;
					int32_t L_30 = V_20;
					switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)32))))
					{
						case 0:
						{
							goto IL_0111_2;
						}
						case 1:
						{
							goto IL_0118_2;
						}
						case 2:
						{
							goto IL_011f_2;
						}
						case 3:
						{
							goto IL_0126_2;
						}
					}
				}
				{
					goto IL_012d_2;
				}

IL_0111_2:
				{
					// alt9 = 1;
					V_18 = 1;
					// break;
					goto IL_0145_2;
				}

IL_0118_2:
				{
					// alt9 = 2;
					V_18 = 2;
					// break;
					goto IL_0145_2;
				}

IL_011f_2:
				{
					// alt9 = 3;
					V_18 = 3;
					// break;
					goto IL_0145_2;
				}

IL_0126_2:
				{
					// alt9 = 4;
					V_18 = 4;
					// break;
					goto IL_0145_2;
				}

IL_012d_2:
				{
					// var nvae_d9s0 =
					//     new NoViableAltException("", 9, 0, input);
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_32 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_32);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)9), 0, L_31, NULL);
					V_19 = L_32;
					// throw nvae_d9s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_33 = V_19;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_relationalExpression_m0C3EDD10778FB21C34EDF679DB5F139A1D0555B5_RuntimeMethod_var)));
				}

IL_0145_2:
				{
					// switch (alt9)
					int32_t L_34 = V_18;
					V_23 = L_34;
					int32_t L_35 = V_23;
					V_22 = L_35;
					int32_t L_36 = V_22;
					switch (((int32_t)il2cpp_codegen_subtract(L_36, 1)))
					{
						case 0:
						{
							goto IL_016b_2;
						}
						case 1:
						{
							goto IL_01b0_2;
						}
						case 2:
						{
							goto IL_01f5_2;
						}
						case 3:
						{
							goto IL_0239_2;
						}
					}
				}
				{
					goto IL_027d_2;
				}

IL_016b_2:
				{
					// char_literal12 = (IToken)Match(input, 32, FOLLOW_32_in_relationalExpression485);
					RuntimeObject* L_37 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_38 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_32_in_relationalExpression485_86;
					RuntimeObject* L_39;
					L_39 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_37, ((int32_t)32), L_38);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal12_tree = (CommonTree)adaptor.Create(char_literal12);
					RuntimeObject* L_40 = __this->___adaptor_8;
					RuntimeObject* L_41 = V_2;
					NullCheck(L_40);
					RuntimeObject* L_42;
					L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_42, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal12_tree);
					RuntimeObject* L_43 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_44 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_45 = V_8;
					NullCheck(L_43);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44, L_45);
					// type = BinaryExpressionType.Lesser;
					V_12 = 5;
					// break;
					goto IL_027d_2;
				}

IL_01b0_2:
				{
					// string_literal13 = (IToken)Match(input, 33, FOLLOW_33_in_relationalExpression495);
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_47 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_33_in_relationalExpression495_87;
					RuntimeObject* L_48;
					L_48 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_46, ((int32_t)33), L_47);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// string_literal13_tree = (CommonTree)adaptor.Create(string_literal13);
					RuntimeObject* L_49 = __this->___adaptor_8;
					RuntimeObject* L_50 = V_3;
					NullCheck(L_49);
					RuntimeObject* L_51;
					L_51 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_51, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, string_literal13_tree);
					RuntimeObject* L_52 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_53 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_54 = V_9;
					NullCheck(L_52);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53, L_54);
					// type = BinaryExpressionType.LesserOrEqual;
					V_12 = 3;
					// break;
					goto IL_027d_2;
				}

IL_01f5_2:
				{
					// char_literal14 = (IToken)Match(input, 34, FOLLOW_34_in_relationalExpression506);
					RuntimeObject* L_55 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_56 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_34_in_relationalExpression506_88;
					RuntimeObject* L_57;
					L_57 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_55, ((int32_t)34), L_56);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_57, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal14_tree = (CommonTree)adaptor.Create(char_literal14);
					RuntimeObject* L_58 = __this->___adaptor_8;
					RuntimeObject* L_59 = V_4;
					NullCheck(L_58);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59);
					V_10 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_60, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal14_tree);
					RuntimeObject* L_61 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_62 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_63 = V_10;
					NullCheck(L_61);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_61, L_62, L_63);
					// type = BinaryExpressionType.Greater;
					V_12 = 6;
					// break;
					goto IL_027d_2;
				}

IL_0239_2:
				{
					// string_literal15 = (IToken)Match(input, 35, FOLLOW_35_in_relationalExpression516);
					RuntimeObject* L_64 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_65 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_35_in_relationalExpression516_89;
					RuntimeObject* L_66;
					L_66 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_64, ((int32_t)35), L_65);
					V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_66, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// string_literal15_tree = (CommonTree)adaptor.Create(string_literal15);
					RuntimeObject* L_67 = __this->___adaptor_8;
					RuntimeObject* L_68 = V_5;
					NullCheck(L_67);
					RuntimeObject* L_69;
					L_69 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_67, L_68);
					V_11 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_69, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, string_literal15_tree);
					RuntimeObject* L_70 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_71 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_72 = V_11;
					NullCheck(L_70);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_70, L_71, L_72);
					// type = BinaryExpressionType.GreaterOrEqual;
					V_12 = 4;
					// break;
					goto IL_027d_2;
				}

IL_027d_2:
				{
					// PushFollow(FOLLOW_shiftExpression_in_relationalExpression528);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_73 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression528_90;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_73, NULL);
					// right = shiftExpression();
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_74;
					L_74 = NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C(__this, NULL);
					V_7 = L_74;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_75 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_76 = L_75;
					NullCheck(L_76);
					int32_t L_77 = L_76->___followingStackPointer_1;
					NullCheck(L_76);
					L_76->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_78 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_79 = V_1;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_80 = V_7;
					NullCheck(L_80);
					RuntimeObject* L_81;
					L_81 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_80);
					NullCheck(L_78);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_78, L_79, L_81);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_82 = V_0;
					int32_t L_83 = V_12;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_84 = V_0;
					NullCheck(L_84);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_85 = L_84->___value_2;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_86 = V_7;
					G_B26_0 = L_85;
					G_B26_1 = L_83;
					G_B26_2 = L_82;
					if (L_86)
					{
						G_B27_0 = L_85;
						G_B27_1 = L_83;
						G_B27_2 = L_82;
						goto IL_02c8_2;
					}
				}
				{
					G_B28_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B28_1 = G_B26_0;
					G_B28_2 = G_B26_1;
					G_B28_3 = G_B26_2;
					goto IL_02cf_2;
				}

IL_02c8_2:
				{
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_87 = V_7;
					NullCheck(L_87);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_88 = L_87->___value_2;
					G_B28_0 = L_88;
					G_B28_1 = G_B27_0;
					G_B28_2 = G_B27_1;
					G_B28_3 = G_B27_2;
				}

IL_02cf_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_89 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_89);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_89, G_B28_2, G_B28_1, G_B28_0, NULL);
					NullCheck(G_B28_3);
					G_B28_3->___value_2 = L_89;
					Il2CppCodeGenWriteBarrier((void**)(&G_B28_3->___value_2), (void*)L_89);
					// break;
					goto IL_02de_2;
				}

IL_02dc_2:
				{
					// goto loop10;
					goto IL_02e7_2;
				}

IL_02de_2:
				{
					// while (true);
					V_24 = (bool)1;
					goto IL_009e_2;
				}

IL_02e7_2:
				{
					// retval.Stop = input.LT(-1);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_90 = V_0;
					RuntimeObject* L_91 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_91);
					RuntimeObject* L_92;
					L_92 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_91, (-1));
					NullCheck(L_90);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_90, L_92);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_93 = V_0;
					RuntimeObject* L_94 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_95 = V_1;
					NullCheck(L_94);
					RuntimeObject* L_96;
					L_96 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_94, L_95);
					NullCheck(L_93);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_93, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_96, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_97 = __this->___adaptor_8;
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_98 = V_0;
					NullCheck(L_98);
					RuntimeObject* L_99;
					L_99 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_98);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_100 = V_0;
					NullCheck(L_100);
					RuntimeObject* L_101;
					L_101 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_100);
					relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_102 = V_0;
					NullCheck(L_102);
					RuntimeObject* L_103;
					L_103 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_102);
					NullCheck(L_97);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_97, L_99, ((RuntimeObject*)Castclass((RuntimeObject*)L_101, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_103, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0394_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0340_1;
				}
				throw e;
			}

CATCH_0340_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_25 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_104 = V_25;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_104);
				// Recover(input, re);
				RuntimeObject* L_105 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_106 = V_25;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_105, L_106);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_107 = V_0;
				RuntimeObject* L_108 = __this->___adaptor_8;
				RuntimeObject* L_109 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_110 = V_0;
				NullCheck(L_110);
				RuntimeObject* L_111;
				L_111 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_110);
				RuntimeObject* L_112 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_112);
				RuntimeObject* L_113;
				L_113 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_112, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_114 = V_25;
				NullCheck(L_108);
				RuntimeObject* L_115;
				L_115 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_108, L_109, ((RuntimeObject*)Castclass((RuntimeObject*)L_111, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_113, L_114);
				NullCheck(L_107);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_107, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_115, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0394_1;
			}// end catch (depth: 2)

IL_0394_1:
			{
				goto IL_0399;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0399:
	{
		// return retval;
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_116 = V_0;
		V_26 = L_116;
		goto IL_039e;
	}

IL_039e:
	{
		// }
		relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* L_117 = V_26;
		return L_117;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::shiftExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_4 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_22 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* V_23 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B3_0 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B25_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B24_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* G_B26_3 = NULL;
	{
		// var retval = new shiftExpression_return();
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_0 = (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71*)il2cpp_codegen_object_new(shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken string_literal16 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken string_literal17 = null;
		V_3 = (RuntimeObject*)NULL;
		// additiveExpression_return left = null;
		V_4 = (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9*)NULL;
		// additiveExpression_return right = null;
		V_5 = (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9*)NULL;
		// CommonTree string_literal16_tree = null;
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree string_literal17_tree = null;
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_8 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02dc:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_additiveExpression_in_shiftExpression560);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression560_91;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = additiveExpression();
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_7;
					L_7 = NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50(__this, NULL);
					V_4 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_15 = V_0;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_16 = V_4;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0086_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008d_2;
				}

IL_0086_2:
				{
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008d_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0092_2:
				{
					// var alt12 = 2;
					V_9 = 2;
					// var LA12_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					// if (LA12_0 >= 36 && LA12_0 <= 37)
					int32_t L_21 = V_10;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)36))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_22 = V_10;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)37)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B8_0 = 0;
				}

IL_00b6_2:
				{
					V_11 = (bool)G_B8_0;
					bool L_23 = V_11;
					if (!L_23)
					{
						goto IL_00c1_2;
					}
				}
				{
					// alt12 = 1;
					V_9 = 1;
				}

IL_00c1_2:
				{
					// switch (alt12)
					int32_t L_24 = V_9;
					V_13 = L_24;
					int32_t L_25 = V_13;
					V_12 = L_25;
					int32_t L_26 = V_12;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_0222_2;
				}

IL_00d3_2:
				{
					// var alt11 = 2;
					V_14 = 2;
					// var LA11_0 = input.LA(1);
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_15 = L_28;
					// if (LA11_0 == 36)
					int32_t L_29 = V_15;
					V_16 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)36)))? 1 : 0);
					bool L_30 = V_16;
					if (!L_30)
					{
						goto IL_00f8_2;
					}
				}
				{
					// alt11 = 1;
					V_14 = 1;
					goto IL_0124_2;
				}

IL_00f8_2:
				{
					// else if (LA11_0 == 37)
					int32_t L_31 = V_15;
					V_17 = (bool)((((int32_t)L_31) == ((int32_t)((int32_t)37)))? 1 : 0);
					bool L_32 = V_17;
					if (!L_32)
					{
						goto IL_010b_2;
					}
				}
				{
					// alt11 = 2;
					V_14 = 2;
					goto IL_0124_2;
				}

IL_010b_2:
				{
					// var nvae_d11s0 =
					//     new NoViableAltException("", 11, 0, input);
					RuntimeObject* L_33 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_34 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_34);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)11), 0, L_33, NULL);
					V_18 = L_34;
					// throw nvae_d11s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_35 = V_18;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_shiftExpression_mB1135256D729B4899DC37EA2F7AD81EE5368103C_RuntimeMethod_var)));
				}

IL_0124_2:
				{
					// switch (alt11)
					int32_t L_36 = V_14;
					V_20 = L_36;
					int32_t L_37 = V_20;
					V_19 = L_37;
					int32_t L_38 = V_19;
					if ((((int32_t)L_38) == ((int32_t)1)))
					{
						goto IL_013d_2;
					}
				}
				{
					goto IL_0133_2;
				}

IL_0133_2:
				{
					int32_t L_39 = V_19;
					if ((((int32_t)L_39) == ((int32_t)2)))
					{
						goto IL_0180_2;
					}
				}
				{
					goto IL_01c3_2;
				}

IL_013d_2:
				{
					// string_literal16 = (IToken)Match(input, 36, FOLLOW_36_in_shiftExpression571);
					RuntimeObject* L_40 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_41 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_36_in_shiftExpression571_92;
					RuntimeObject* L_42;
					L_42 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_40, ((int32_t)36), L_41);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// string_literal16_tree = (CommonTree)adaptor.Create(string_literal16);
					RuntimeObject* L_43 = __this->___adaptor_8;
					RuntimeObject* L_44 = V_2;
					NullCheck(L_43);
					RuntimeObject* L_45;
					L_45 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44);
					V_6 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_45, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, string_literal16_tree);
					RuntimeObject* L_46 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_47 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_6;
					NullCheck(L_46);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_46, L_47, L_48);
					// type = BinaryExpressionType.LeftShift;
					V_8 = ((int32_t)16);
					// break;
					goto IL_01c3_2;
				}

IL_0180_2:
				{
					// string_literal17 = (IToken)Match(input, 37, FOLLOW_37_in_shiftExpression581);
					RuntimeObject* L_49 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_50 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_37_in_shiftExpression581_93;
					RuntimeObject* L_51;
					L_51 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_49, ((int32_t)37), L_50);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// string_literal17_tree = (CommonTree)adaptor.Create(string_literal17);
					RuntimeObject* L_52 = __this->___adaptor_8;
					RuntimeObject* L_53 = V_3;
					NullCheck(L_52);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_54, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, string_literal17_tree);
					RuntimeObject* L_55 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_56 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_7;
					NullCheck(L_55);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_55, L_56, L_57);
					// type = BinaryExpressionType.RightShift;
					V_8 = ((int32_t)17);
					// break;
					goto IL_01c3_2;
				}

IL_01c3_2:
				{
					// PushFollow(FOLLOW_additiveExpression_in_shiftExpression593);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_58 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression593_94;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_58, NULL);
					// right = additiveExpression();
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_59;
					L_59 = NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50(__this, NULL);
					V_5 = L_59;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_60 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_61 = L_60;
					NullCheck(L_61);
					int32_t L_62 = L_61->___followingStackPointer_1;
					NullCheck(L_61);
					L_61->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_63 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_64 = V_1;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_65 = V_5;
					NullCheck(L_65);
					RuntimeObject* L_66;
					L_66 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_65);
					NullCheck(L_63);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63, L_64, L_66);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_67 = V_0;
					int32_t L_68 = V_8;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_69 = V_0;
					NullCheck(L_69);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_70 = L_69->___value_2;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_71 = V_5;
					G_B24_0 = L_70;
					G_B24_1 = L_68;
					G_B24_2 = L_67;
					if (L_71)
					{
						G_B25_0 = L_70;
						G_B25_1 = L_68;
						G_B25_2 = L_67;
						goto IL_020e_2;
					}
				}
				{
					G_B26_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B26_1 = G_B24_0;
					G_B26_2 = G_B24_1;
					G_B26_3 = G_B24_2;
					goto IL_0215_2;
				}

IL_020e_2:
				{
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_72 = V_5;
					NullCheck(L_72);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_73 = L_72->___value_2;
					G_B26_0 = L_73;
					G_B26_1 = G_B25_0;
					G_B26_2 = G_B25_1;
					G_B26_3 = G_B25_2;
				}

IL_0215_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_74 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_74);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_74, G_B26_2, G_B26_1, G_B26_0, NULL);
					NullCheck(G_B26_3);
					G_B26_3->___value_2 = L_74;
					Il2CppCodeGenWriteBarrier((void**)(&G_B26_3->___value_2), (void*)L_74);
					// break;
					goto IL_0224_2;
				}

IL_0222_2:
				{
					// goto loop12;
					goto IL_022d_2;
				}

IL_0224_2:
				{
					// while (true);
					V_21 = (bool)1;
					goto IL_0092_2;
				}

IL_022d_2:
				{
					// retval.Stop = input.LT(-1);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_75 = V_0;
					RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_76);
					RuntimeObject* L_77;
					L_77 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_76, (-1));
					NullCheck(L_75);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_75, L_77);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_78 = V_0;
					RuntimeObject* L_79 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_80 = V_1;
					NullCheck(L_79);
					RuntimeObject* L_81;
					L_81 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80);
					NullCheck(L_78);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_78, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_81, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_82 = __this->___adaptor_8;
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_83 = V_0;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_83);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_85 = V_0;
					NullCheck(L_85);
					RuntimeObject* L_86;
					L_86 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_85);
					shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_87 = V_0;
					NullCheck(L_87);
					RuntimeObject* L_88;
					L_88 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_87);
					NullCheck(L_82);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_82, L_84, ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_88, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_02da_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0286_1;
				}
				throw e;
			}

CATCH_0286_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_22 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_89 = V_22;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_89);
				// Recover(input, re);
				RuntimeObject* L_90 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_91 = V_22;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_90, L_91);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_92 = V_0;
				RuntimeObject* L_93 = __this->___adaptor_8;
				RuntimeObject* L_94 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_95 = V_0;
				NullCheck(L_95);
				RuntimeObject* L_96;
				L_96 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_95);
				RuntimeObject* L_97 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_97);
				RuntimeObject* L_98;
				L_98 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_97, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_99 = V_22;
				NullCheck(L_93);
				RuntimeObject* L_100;
				L_100 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_93, L_94, ((RuntimeObject*)Castclass((RuntimeObject*)L_96, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_98, L_99);
				NullCheck(L_92);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_92, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_100, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_02da_1;
			}// end catch (depth: 2)

IL_02da_1:
			{
				goto IL_02df;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02df:
	{
		// return retval;
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_101 = V_0;
		V_23 = L_101;
		goto IL_02e4;
	}

IL_02e4:
	{
		// }
		shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* L_102 = V_23;
		return L_102;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::additiveExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_4 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_22 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* V_23 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B3_0 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B25_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B24_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* G_B26_3 = NULL;
	{
		// var retval = new additiveExpression_return();
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_0 = (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9*)il2cpp_codegen_object_new(additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal18 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken char_literal19 = null;
		V_3 = (RuntimeObject*)NULL;
		// multiplicativeExpression_return left = null;
		V_4 = (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE*)NULL;
		// multiplicativeExpression_return right = null;
		V_5 = (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE*)NULL;
		// CommonTree char_literal18_tree = null;
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal19_tree = null;
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_8 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02db:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_multiplicativeExpression_in_additiveExpression625);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression625_95;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = multiplicativeExpression();
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_7;
					L_7 = NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5(__this, NULL);
					V_4 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_13 = V_4;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_15 = V_0;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_16 = V_4;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_0086_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_008d_2;
				}

IL_0086_2:
				{
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_17 = V_4;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_008d_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0092_2:
				{
					// var alt14 = 2;
					V_9 = 2;
					// var LA14_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_10 = L_20;
					// if (LA14_0 >= 38 && LA14_0 <= 39)
					int32_t L_21 = V_10;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)38))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_22 = V_10;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)39)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B8_0 = 0;
				}

IL_00b6_2:
				{
					V_11 = (bool)G_B8_0;
					bool L_23 = V_11;
					if (!L_23)
					{
						goto IL_00c1_2;
					}
				}
				{
					// alt14 = 1;
					V_9 = 1;
				}

IL_00c1_2:
				{
					// switch (alt14)
					int32_t L_24 = V_9;
					V_13 = L_24;
					int32_t L_25 = V_13;
					V_12 = L_25;
					int32_t L_26 = V_12;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_0221_2;
				}

IL_00d3_2:
				{
					// var alt13 = 2;
					V_14 = 2;
					// var LA13_0 = input.LA(1);
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_15 = L_28;
					// if (LA13_0 == 38)
					int32_t L_29 = V_15;
					V_16 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)38)))? 1 : 0);
					bool L_30 = V_16;
					if (!L_30)
					{
						goto IL_00f8_2;
					}
				}
				{
					// alt13 = 1;
					V_14 = 1;
					goto IL_0124_2;
				}

IL_00f8_2:
				{
					// else if (LA13_0 == 39)
					int32_t L_31 = V_15;
					V_17 = (bool)((((int32_t)L_31) == ((int32_t)((int32_t)39)))? 1 : 0);
					bool L_32 = V_17;
					if (!L_32)
					{
						goto IL_010b_2;
					}
				}
				{
					// alt13 = 2;
					V_14 = 2;
					goto IL_0124_2;
				}

IL_010b_2:
				{
					// var nvae_d13s0 =
					//     new NoViableAltException("", 13, 0, input);
					RuntimeObject* L_33 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_34 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_34);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)13), 0, L_33, NULL);
					V_18 = L_34;
					// throw nvae_d13s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_35 = V_18;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_additiveExpression_m6DB278A3FB63E67ACBA48722BA7B9FFA98321B50_RuntimeMethod_var)));
				}

IL_0124_2:
				{
					// switch (alt13)
					int32_t L_36 = V_14;
					V_20 = L_36;
					int32_t L_37 = V_20;
					V_19 = L_37;
					int32_t L_38 = V_19;
					if ((((int32_t)L_38) == ((int32_t)1)))
					{
						goto IL_013d_2;
					}
				}
				{
					goto IL_0133_2;
				}

IL_0133_2:
				{
					int32_t L_39 = V_19;
					if ((((int32_t)L_39) == ((int32_t)2)))
					{
						goto IL_0180_2;
					}
				}
				{
					goto IL_01c2_2;
				}

IL_013d_2:
				{
					// char_literal18 = (IToken)Match(input, 38, FOLLOW_38_in_additiveExpression636);
					RuntimeObject* L_40 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_41 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_38_in_additiveExpression636_96;
					RuntimeObject* L_42;
					L_42 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_40, ((int32_t)38), L_41);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_42, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal18_tree = (CommonTree)adaptor.Create(char_literal18);
					RuntimeObject* L_43 = __this->___adaptor_8;
					RuntimeObject* L_44 = V_2;
					NullCheck(L_43);
					RuntimeObject* L_45;
					L_45 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44);
					V_6 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_45, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal18_tree);
					RuntimeObject* L_46 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_47 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_6;
					NullCheck(L_46);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_46, L_47, L_48);
					// type = BinaryExpressionType.Plus;
					V_8 = ((int32_t)9);
					// break;
					goto IL_01c2_2;
				}

IL_0180_2:
				{
					// char_literal19 = (IToken)Match(input, 39, FOLLOW_39_in_additiveExpression646);
					RuntimeObject* L_49 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_50 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_additiveExpression646_97;
					RuntimeObject* L_51;
					L_51 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_49, ((int32_t)39), L_50);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal19_tree = (CommonTree)adaptor.Create(char_literal19);
					RuntimeObject* L_52 = __this->___adaptor_8;
					RuntimeObject* L_53 = V_3;
					NullCheck(L_52);
					RuntimeObject* L_54;
					L_54 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_54, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal19_tree);
					RuntimeObject* L_55 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_56 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_7;
					NullCheck(L_55);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_55, L_56, L_57);
					// type = BinaryExpressionType.Minus;
					V_8 = 8;
					// break;
					goto IL_01c2_2;
				}

IL_01c2_2:
				{
					// PushFollow(FOLLOW_multiplicativeExpression_in_additiveExpression658);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_58 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression658_98;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_58, NULL);
					// right = multiplicativeExpression();
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_59;
					L_59 = NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5(__this, NULL);
					V_5 = L_59;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_60 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_61 = L_60;
					NullCheck(L_61);
					int32_t L_62 = L_61->___followingStackPointer_1;
					NullCheck(L_61);
					L_61->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_63 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_64 = V_1;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_65 = V_5;
					NullCheck(L_65);
					RuntimeObject* L_66;
					L_66 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_65);
					NullCheck(L_63);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63, L_64, L_66);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_67 = V_0;
					int32_t L_68 = V_8;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_69 = V_0;
					NullCheck(L_69);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_70 = L_69->___value_2;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_71 = V_5;
					G_B24_0 = L_70;
					G_B24_1 = L_68;
					G_B24_2 = L_67;
					if (L_71)
					{
						G_B25_0 = L_70;
						G_B25_1 = L_68;
						G_B25_2 = L_67;
						goto IL_020d_2;
					}
				}
				{
					G_B26_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B26_1 = G_B24_0;
					G_B26_2 = G_B24_1;
					G_B26_3 = G_B24_2;
					goto IL_0214_2;
				}

IL_020d_2:
				{
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_72 = V_5;
					NullCheck(L_72);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_73 = L_72->___value_2;
					G_B26_0 = L_73;
					G_B26_1 = G_B25_0;
					G_B26_2 = G_B25_1;
					G_B26_3 = G_B25_2;
				}

IL_0214_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_74 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_74);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_74, G_B26_2, G_B26_1, G_B26_0, NULL);
					NullCheck(G_B26_3);
					G_B26_3->___value_2 = L_74;
					Il2CppCodeGenWriteBarrier((void**)(&G_B26_3->___value_2), (void*)L_74);
					// break;
					goto IL_0223_2;
				}

IL_0221_2:
				{
					// goto loop14;
					goto IL_022c_2;
				}

IL_0223_2:
				{
					// while (true);
					V_21 = (bool)1;
					goto IL_0092_2;
				}

IL_022c_2:
				{
					// retval.Stop = input.LT(-1);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_75 = V_0;
					RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_76);
					RuntimeObject* L_77;
					L_77 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_76, (-1));
					NullCheck(L_75);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_75, L_77);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_78 = V_0;
					RuntimeObject* L_79 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_80 = V_1;
					NullCheck(L_79);
					RuntimeObject* L_81;
					L_81 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80);
					NullCheck(L_78);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_78, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_81, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_82 = __this->___adaptor_8;
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_83 = V_0;
					NullCheck(L_83);
					RuntimeObject* L_84;
					L_84 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_83);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_85 = V_0;
					NullCheck(L_85);
					RuntimeObject* L_86;
					L_86 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_85);
					additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_87 = V_0;
					NullCheck(L_87);
					RuntimeObject* L_88;
					L_88 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_87);
					NullCheck(L_82);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_82, L_84, ((RuntimeObject*)Castclass((RuntimeObject*)L_86, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_88, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_02d9_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0285_1;
				}
				throw e;
			}

CATCH_0285_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_22 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_89 = V_22;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_89);
				// Recover(input, re);
				RuntimeObject* L_90 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_91 = V_22;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_90, L_91);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_92 = V_0;
				RuntimeObject* L_93 = __this->___adaptor_8;
				RuntimeObject* L_94 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_95 = V_0;
				NullCheck(L_95);
				RuntimeObject* L_96;
				L_96 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_95);
				RuntimeObject* L_97 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_97);
				RuntimeObject* L_98;
				L_98 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_97, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_99 = V_22;
				NullCheck(L_93);
				RuntimeObject* L_100;
				L_100 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_93, L_94, ((RuntimeObject*)Castclass((RuntimeObject*)L_96, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_98, L_99);
				NullCheck(L_92);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_92, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_100, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_02d9_1;
			}// end catch (depth: 2)

IL_02d9_1:
			{
				goto IL_02de;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02de:
	{
		// return retval;
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_101 = V_0;
		V_23 = L_101;
		goto IL_02e3;
	}

IL_02e3:
	{
		// }
		additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* L_102 = V_23;
		return L_102;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::multiplicativeExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_5 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_6 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_23 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* V_24 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B3_0 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B4_1 = NULL;
	int32_t G_B8_0 = 0;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B25_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B24_2 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* G_B26_3 = NULL;
	{
		// var retval = new multiplicativeExpression_return();
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_0 = (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE*)il2cpp_codegen_object_new(multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal20 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken char_literal21 = null;
		V_3 = (RuntimeObject*)NULL;
		// IToken char_literal22 = null;
		V_4 = (RuntimeObject*)NULL;
		// unaryExpression_return left = null;
		V_5 = (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64*)NULL;
		// unaryExpression_return right = null;
		V_6 = (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64*)NULL;
		// CommonTree char_literal20_tree = null;
		V_7 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal21_tree = null;
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal22_tree = null;
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var type = BinaryExpressionType.Unknown;
		V_10 = ((int32_t)18);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_033d:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_4 = __this->___adaptor_8;
					NullCheck(L_4);
					RuntimeObject* L_5;
					L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_5, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_unaryExpression_in_multiplicativeExpression690);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_6 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression690_99;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_6, NULL);
					// left = unaryExpression();
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_7;
					L_7 = NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5(__this, NULL);
					V_5 = L_7;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_8 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = L_8;
					NullCheck(L_9);
					int32_t L_10 = L_9->___followingStackPointer_1;
					NullCheck(L_9);
					L_9->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
					// adaptor.AddChild(root_0, left.Tree);
					RuntimeObject* L_11 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_12 = V_1;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_13 = V_5;
					NullCheck(L_13);
					RuntimeObject* L_14;
					L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_13);
					NullCheck(L_11);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12, L_14);
					// retval.value = left != null ? left.value : null;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_15 = V_0;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_16 = V_5;
					G_B2_0 = L_15;
					if (L_16)
					{
						G_B3_0 = L_15;
						goto IL_008c_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0093_2;
				}

IL_008c_2:
				{
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_17 = V_5;
					NullCheck(L_17);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_18 = L_17->___value_2;
					G_B4_0 = L_18;
					G_B4_1 = G_B3_0;
				}

IL_0093_2:
				{
					NullCheck(G_B4_1);
					G_B4_1->___value_2 = G_B4_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___value_2), (void*)G_B4_0);
				}

IL_0098_2:
				{
					// var alt16 = 2;
					V_11 = 2;
					// var LA16_0 = input.LA(1);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_19);
					int32_t L_20;
					L_20 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_19, 1);
					V_12 = L_20;
					// if (LA16_0 >= 40 && LA16_0 <= 42)
					int32_t L_21 = V_12;
					if ((((int32_t)L_21) < ((int32_t)((int32_t)40))))
					{
						goto IL_00bb_2;
					}
				}
				{
					int32_t L_22 = V_12;
					G_B8_0 = ((((int32_t)((((int32_t)L_22) > ((int32_t)((int32_t)42)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00bc_2;
				}

IL_00bb_2:
				{
					G_B8_0 = 0;
				}

IL_00bc_2:
				{
					V_13 = (bool)G_B8_0;
					bool L_23 = V_13;
					if (!L_23)
					{
						goto IL_00c7_2;
					}
				}
				{
					// alt16 = 1;
					V_11 = 1;
				}

IL_00c7_2:
				{
					// switch (alt16)
					int32_t L_24 = V_11;
					V_15 = L_24;
					int32_t L_25 = V_15;
					V_14 = L_25;
					int32_t L_26 = V_14;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00d9_2;
					}
				}
				{
					goto IL_0283_2;
				}

IL_00d9_2:
				{
					// var alt15 = 3;
					V_16 = 3;
					// switch (input.LA(1))
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_27);
					int32_t L_28;
					L_28 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_27, 1);
					V_19 = L_28;
					int32_t L_29 = V_19;
					V_18 = L_29;
					int32_t L_30 = V_18;
					switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)40))))
					{
						case 0:
						{
							goto IL_0107_2;
						}
						case 1:
						{
							goto IL_010e_2;
						}
						case 2:
						{
							goto IL_0115_2;
						}
					}
				}
				{
					goto IL_011c_2;
				}

IL_0107_2:
				{
					// alt15 = 1;
					V_16 = 1;
					// break;
					goto IL_0134_2;
				}

IL_010e_2:
				{
					// alt15 = 2;
					V_16 = 2;
					// break;
					goto IL_0134_2;
				}

IL_0115_2:
				{
					// alt15 = 3;
					V_16 = 3;
					// break;
					goto IL_0134_2;
				}

IL_011c_2:
				{
					// var nvae_d15s0 =
					//     new NoViableAltException("", 15, 0, input);
					RuntimeObject* L_31 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_32 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_32);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)15), 0, L_31, NULL);
					V_17 = L_32;
					// throw nvae_d15s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_33 = V_17;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_multiplicativeExpression_mE4985CD19B9128DDFF9FAEDF2A5D1ACB9BC4D2D5_RuntimeMethod_var)));
				}

IL_0134_2:
				{
					// switch (alt15)
					int32_t L_34 = V_16;
					V_21 = L_34;
					int32_t L_35 = V_21;
					V_20 = L_35;
					int32_t L_36 = V_20;
					switch (((int32_t)il2cpp_codegen_subtract(L_36, 1)))
					{
						case 0:
						{
							goto IL_0156_2;
						}
						case 1:
						{
							goto IL_019c_2;
						}
						case 2:
						{
							goto IL_01df_2;
						}
					}
				}
				{
					goto IL_0224_2;
				}

IL_0156_2:
				{
					// char_literal20 = (IToken)Match(input, 40, FOLLOW_40_in_multiplicativeExpression701);
					RuntimeObject* L_37 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_38 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_40_in_multiplicativeExpression701_100;
					RuntimeObject* L_39;
					L_39 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_37, ((int32_t)40), L_38);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_39, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal20_tree = (CommonTree)adaptor.Create(char_literal20);
					RuntimeObject* L_40 = __this->___adaptor_8;
					RuntimeObject* L_41 = V_2;
					NullCheck(L_40);
					RuntimeObject* L_42;
					L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41);
					V_7 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_42, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal20_tree);
					RuntimeObject* L_43 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_44 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_45 = V_7;
					NullCheck(L_43);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_43, L_44, L_45);
					// type = BinaryExpressionType.Times;
					V_10 = ((int32_t)12);
					// break;
					goto IL_0224_2;
				}

IL_019c_2:
				{
					// char_literal21 = (IToken)Match(input, 41, FOLLOW_41_in_multiplicativeExpression711);
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_47 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_41_in_multiplicativeExpression711_101;
					RuntimeObject* L_48;
					L_48 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_46, ((int32_t)41), L_47);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal21_tree = (CommonTree)adaptor.Create(char_literal21);
					RuntimeObject* L_49 = __this->___adaptor_8;
					RuntimeObject* L_50 = V_3;
					NullCheck(L_49);
					RuntimeObject* L_51;
					L_51 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49, L_50);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_51, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal21_tree);
					RuntimeObject* L_52 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_53 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_54 = V_8;
					NullCheck(L_52);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_52, L_53, L_54);
					// type = BinaryExpressionType.Div;
					V_10 = ((int32_t)11);
					// break;
					goto IL_0224_2;
				}

IL_01df_2:
				{
					// char_literal22 = (IToken)Match(input, 42, FOLLOW_42_in_multiplicativeExpression721);
					RuntimeObject* L_55 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_56 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_42_in_multiplicativeExpression721_102;
					RuntimeObject* L_57;
					L_57 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_55, ((int32_t)42), L_56);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_57, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal22_tree = (CommonTree)adaptor.Create(char_literal22);
					RuntimeObject* L_58 = __this->___adaptor_8;
					RuntimeObject* L_59 = V_4;
					NullCheck(L_58);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_60, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal22_tree);
					RuntimeObject* L_61 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_62 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_63 = V_9;
					NullCheck(L_61);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_61, L_62, L_63);
					// type = BinaryExpressionType.Modulo;
					V_10 = ((int32_t)10);
					// break;
					goto IL_0224_2;
				}

IL_0224_2:
				{
					// PushFollow(FOLLOW_unaryExpression_in_multiplicativeExpression733);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_64 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression733_103;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_64, NULL);
					// right = unaryExpression();
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_65;
					L_65 = NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5(__this, NULL);
					V_6 = L_65;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_66 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_67 = L_66;
					NullCheck(L_67);
					int32_t L_68 = L_67->___followingStackPointer_1;
					NullCheck(L_67);
					L_67->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
					// adaptor.AddChild(root_0, right.Tree);
					RuntimeObject* L_69 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_70 = V_1;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_71 = V_6;
					NullCheck(L_71);
					RuntimeObject* L_72;
					L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_71);
					NullCheck(L_69);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_69, L_70, L_72);
					// retval.value = new BinaryExpression(type, retval.value, right != null ? right.value : null);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_73 = V_0;
					int32_t L_74 = V_10;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_75 = V_0;
					NullCheck(L_75);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_76 = L_75->___value_2;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_77 = V_6;
					G_B24_0 = L_76;
					G_B24_1 = L_74;
					G_B24_2 = L_73;
					if (L_77)
					{
						G_B25_0 = L_76;
						G_B25_1 = L_74;
						G_B25_2 = L_73;
						goto IL_026f_2;
					}
				}
				{
					G_B26_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B26_1 = G_B24_0;
					G_B26_2 = G_B24_1;
					G_B26_3 = G_B24_2;
					goto IL_0276_2;
				}

IL_026f_2:
				{
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_78 = V_6;
					NullCheck(L_78);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_79 = L_78->___value_2;
					G_B26_0 = L_79;
					G_B26_1 = G_B25_0;
					G_B26_2 = G_B25_1;
					G_B26_3 = G_B25_2;
				}

IL_0276_2:
				{
					BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_80 = (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B*)il2cpp_codegen_object_new(BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B_il2cpp_TypeInfo_var);
					NullCheck(L_80);
					BinaryExpression__ctor_mA26C4DABE317DAB57BBC4BCB6AA429740BC602A6(L_80, G_B26_2, G_B26_1, G_B26_0, NULL);
					NullCheck(G_B26_3);
					G_B26_3->___value_2 = L_80;
					Il2CppCodeGenWriteBarrier((void**)(&G_B26_3->___value_2), (void*)L_80);
					// break;
					goto IL_0285_2;
				}

IL_0283_2:
				{
					// goto loop16;
					goto IL_028e_2;
				}

IL_0285_2:
				{
					// while (true);
					V_22 = (bool)1;
					goto IL_0098_2;
				}

IL_028e_2:
				{
					// retval.Stop = input.LT(-1);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_81 = V_0;
					RuntimeObject* L_82 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_82);
					RuntimeObject* L_83;
					L_83 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_82, (-1));
					NullCheck(L_81);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_81, L_83);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_84 = V_0;
					RuntimeObject* L_85 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_86 = V_1;
					NullCheck(L_85);
					RuntimeObject* L_87;
					L_87 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_85, L_86);
					NullCheck(L_84);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_84, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_87, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_88 = __this->___adaptor_8;
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_89 = V_0;
					NullCheck(L_89);
					RuntimeObject* L_90;
					L_90 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_89);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_91 = V_0;
					NullCheck(L_91);
					RuntimeObject* L_92;
					L_92 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_91);
					multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_93 = V_0;
					NullCheck(L_93);
					RuntimeObject* L_94;
					L_94 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_93);
					NullCheck(L_88);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_88, L_90, ((RuntimeObject*)Castclass((RuntimeObject*)L_92, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_94, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_033b_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_02e7_1;
				}
				throw e;
			}

CATCH_02e7_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_23 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_95 = V_23;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_95);
				// Recover(input, re);
				RuntimeObject* L_96 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_97 = V_23;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_96, L_97);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_98 = V_0;
				RuntimeObject* L_99 = __this->___adaptor_8;
				RuntimeObject* L_100 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_101 = V_0;
				NullCheck(L_101);
				RuntimeObject* L_102;
				L_102 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_101);
				RuntimeObject* L_103 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_103);
				RuntimeObject* L_104;
				L_104 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_103, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_105 = V_23;
				NullCheck(L_99);
				RuntimeObject* L_106;
				L_106 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_99, L_100, ((RuntimeObject*)Castclass((RuntimeObject*)L_102, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_104, L_105);
				NullCheck(L_98);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_98, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_106, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_033b_1;
			}// end catch (depth: 2)

IL_033b_1:
			{
				goto IL_0340;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0340:
	{
		// return retval;
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_107 = V_0;
		V_24 = L_107;
		goto IL_0345;
	}

IL_0345:
	{
		// }
		multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* L_108 = V_24;
		return L_108;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::unaryExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_5 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_6 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_7 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_10 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_11 = NULL;
	int32_t V_12 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* V_19 = NULL;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_20 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B14_0 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B13_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B15_0 = NULL;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B15_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B24_1 = NULL;
	int32_t G_B23_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B23_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B25_2 = NULL;
	int32_t G_B28_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B28_1 = NULL;
	int32_t G_B27_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B27_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B29_2 = NULL;
	int32_t G_B32_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B32_1 = NULL;
	int32_t G_B31_0 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B31_1 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* G_B33_2 = NULL;
	{
		// var retval = new unaryExpression_return();
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_0 = (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64*)il2cpp_codegen_object_new(unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken set24 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken char_literal26 = null;
		V_3 = (RuntimeObject*)NULL;
		// IToken char_literal28 = null;
		V_4 = (RuntimeObject*)NULL;
		// primaryExpression_return primaryExpression23 = null;
		V_5 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		// primaryExpression_return primaryExpression25 = null;
		V_6 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		// primaryExpression_return primaryExpression27 = null;
		V_7 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		// primaryExpression_return primaryExpression29 = null;
		V_8 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)NULL;
		// CommonTree set24_tree = null;
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal26_tree = null;
		V_10 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal28_tree = null;
		V_11 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0433:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// var alt17 = 4;
					V_12 = 4;
					// switch (input.LA(1))
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_15 = L_5;
					int32_t L_6 = V_15;
					V_14 = L_6;
					int32_t L_7 = V_14;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, 4))) > ((uint32_t)7))))
					{
						goto IL_0083_2;
					}
				}
				{
					goto IL_0057_2;
				}

IL_0057_2:
				{
					int32_t L_8 = V_14;
					switch (((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)39))))
					{
						case 0:
						{
							goto IL_0098_2;
						}
						case 1:
						{
							goto IL_009f_2;
						}
						case 2:
						{
							goto IL_009f_2;
						}
						case 3:
						{
							goto IL_009f_2;
						}
						case 4:
						{
							goto IL_008a_2;
						}
						case 5:
						{
							goto IL_008a_2;
						}
						case 6:
						{
							goto IL_0091_2;
						}
						case 7:
						{
							goto IL_0083_2;
						}
					}
				}
				{
					goto IL_009f_2;
				}

IL_0083_2:
				{
					// alt17 = 1;
					V_12 = 1;
					// break;
					goto IL_00b7_2;
				}

IL_008a_2:
				{
					// alt17 = 2;
					V_12 = 2;
					// break;
					goto IL_00b7_2;
				}

IL_0091_2:
				{
					// alt17 = 3;
					V_12 = 3;
					// break;
					goto IL_00b7_2;
				}

IL_0098_2:
				{
					// alt17 = 4;
					V_12 = 4;
					// break;
					goto IL_00b7_2;
				}

IL_009f_2:
				{
					// var nvae_d17s0 =
					//     new NoViableAltException("", 17, 0, input);
					RuntimeObject* L_9 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_10 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_10);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)17), 0, L_9, NULL);
					V_13 = L_10;
					// throw nvae_d17s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = V_13;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5_RuntimeMethod_var)));
				}

IL_00b7_2:
				{
					// switch (alt17)
					int32_t L_12 = V_12;
					V_17 = L_12;
					int32_t L_13 = V_17;
					V_16 = L_13;
					int32_t L_14 = V_16;
					switch (((int32_t)il2cpp_codegen_subtract(L_14, 1)))
					{
						case 0:
						{
							goto IL_00dd_2;
						}
						case 1:
						{
							goto IL_0144_2;
						}
						case 2:
						{
							goto IL_0236_2;
						}
						case 3:
						{
							goto IL_02e0_2;
						}
					}
				}
				{
					goto IL_0387_2;
				}

IL_00dd_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_15 = __this->___adaptor_8;
					NullCheck(L_15);
					RuntimeObject* L_16;
					L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_15);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_16, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_primaryExpression_in_unaryExpression760);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_17 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression760_104;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_17, NULL);
					// primaryExpression23 = primaryExpression();
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_18;
					L_18 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_5 = L_18;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_19 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_20 = L_19;
					NullCheck(L_20);
					int32_t L_21 = L_20->___followingStackPointer_1;
					NullCheck(L_20);
					L_20->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
					// adaptor.AddChild(root_0, primaryExpression23.Tree);
					RuntimeObject* L_22 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_23 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_24 = V_5;
					NullCheck(L_24);
					RuntimeObject* L_25;
					L_25 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_24);
					NullCheck(L_22);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_22, L_23, L_25);
					// retval.value = primaryExpression23 != null ? primaryExpression23.value : null;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_26 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_27 = V_5;
					G_B13_0 = L_26;
					if (L_27)
					{
						G_B14_0 = L_26;
						goto IL_0132_2;
					}
				}
				{
					G_B15_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B15_1 = G_B13_0;
					goto IL_0139_2;
				}

IL_0132_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_28 = V_5;
					NullCheck(L_28);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_29 = L_28->___value_2;
					G_B15_0 = L_29;
					G_B15_1 = G_B14_0;
				}

IL_0139_2:
				{
					NullCheck(G_B15_1);
					G_B15_1->___value_2 = G_B15_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B15_1->___value_2), (void*)G_B15_0);
					// break;
					goto IL_0387_2;
				}

IL_0144_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_30 = __this->___adaptor_8;
					NullCheck(L_30);
					RuntimeObject* L_31;
					L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_30);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_31, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// set24 = (IToken)input.LT(1);
					RuntimeObject* L_32 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_32);
					RuntimeObject* L_33;
					L_33 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_32, 1);
					V_2 = L_33;
					// if (input.LA(1) >= 43 && input.LA(1) <= 44)
					RuntimeObject* L_34 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_34);
					int32_t L_35;
					L_35 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_34, 1);
					if ((((int32_t)L_35) < ((int32_t)((int32_t)43))))
					{
						goto IL_0188_2;
					}
				}
				{
					RuntimeObject* L_36 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_36);
					int32_t L_37;
					L_37 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_36, 1);
					G_B19_0 = ((((int32_t)((((int32_t)L_37) > ((int32_t)((int32_t)44)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_0189_2;
				}

IL_0188_2:
				{
					G_B19_0 = 0;
				}

IL_0189_2:
				{
					V_18 = (bool)G_B19_0;
					bool L_38 = V_18;
					if (!L_38)
					{
						goto IL_01c9_2;
					}
				}
				{
					// input.Consume();
					RuntimeObject* L_39 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_39);
					InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_39);
					// adaptor.AddChild(root_0, (CommonTree)adaptor.Create(set24));
					RuntimeObject* L_40 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_41 = V_1;
					RuntimeObject* L_42 = __this->___adaptor_8;
					RuntimeObject* L_43 = V_2;
					NullCheck(L_42);
					RuntimeObject* L_44;
					L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_42, L_43);
					NullCheck(L_40);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_40, L_41, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_44, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// state.errorRecovery = false;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_45 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					NullCheck(L_45);
					L_45->___errorRecovery_2 = (bool)0;
					goto IL_01db_2;
				}

IL_01c9_2:
				{
					// var mse = new MismatchedSetException(null, input);
					RuntimeObject* L_46 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_47 = (MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1_il2cpp_TypeInfo_var)));
					NullCheck(L_47);
					MismatchedSetException__ctor_m86BBF2EDDE084B2481D65102A4D9A78A4F4F42A4(L_47, (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)NULL, L_46, NULL);
					V_19 = L_47;
					// throw mse;
					MismatchedSetException_tF71811010518729AF0312C30A871681CC02110D1* L_48 = V_19;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_unaryExpression_mC8B605980131E1E0AC78330D9A43790295E1B2A5_RuntimeMethod_var)));
				}

IL_01db_2:
				{
					// PushFollow(FOLLOW_primaryExpression_in_unaryExpression779);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_49 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression779_106;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_49, NULL);
					// primaryExpression25 = primaryExpression();
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_50;
					L_50 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_6 = L_50;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_51 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_52 = L_51;
					NullCheck(L_52);
					int32_t L_53 = L_52->___followingStackPointer_1;
					NullCheck(L_52);
					L_52->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
					// adaptor.AddChild(root_0, primaryExpression25.Tree);
					RuntimeObject* L_54 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_55 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_56 = V_6;
					NullCheck(L_56);
					RuntimeObject* L_57;
					L_57 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_56);
					NullCheck(L_54);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_54, L_55, L_57);
					// retval.value = new UnaryExpression(UnaryExpressionType.Not, primaryExpression25 != null ? primaryExpression25.value : null);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_58 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_59 = V_6;
					G_B23_0 = 0;
					G_B23_1 = L_58;
					if (L_59)
					{
						G_B24_0 = 0;
						G_B24_1 = L_58;
						goto IL_021f_2;
					}
				}
				{
					G_B25_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B25_1 = G_B23_0;
					G_B25_2 = G_B23_1;
					goto IL_0226_2;
				}

IL_021f_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_60 = V_6;
					NullCheck(L_60);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_61 = L_60->___value_2;
					G_B25_0 = L_61;
					G_B25_1 = G_B24_0;
					G_B25_2 = G_B24_1;
				}

IL_0226_2:
				{
					UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_62 = (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E*)il2cpp_codegen_object_new(UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
					NullCheck(L_62);
					UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E(L_62, G_B25_1, G_B25_0, NULL);
					NullCheck(G_B25_2);
					G_B25_2->___value_2 = L_62;
					Il2CppCodeGenWriteBarrier((void**)(&G_B25_2->___value_2), (void*)L_62);
					// break;
					goto IL_0387_2;
				}

IL_0236_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_63 = __this->___adaptor_8;
					NullCheck(L_63);
					RuntimeObject* L_64;
					L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_63);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_64, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// char_literal26 = (IToken)Match(input, 45, FOLLOW_45_in_unaryExpression791);
					RuntimeObject* L_65 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_66 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_45_in_unaryExpression791_107;
					RuntimeObject* L_67;
					L_67 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_65, ((int32_t)45), L_66);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_67, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal26_tree = (CommonTree)adaptor.Create(char_literal26);
					RuntimeObject* L_68 = __this->___adaptor_8;
					RuntimeObject* L_69 = V_3;
					NullCheck(L_68);
					RuntimeObject* L_70;
					L_70 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_68, L_69);
					V_10 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_70, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal26_tree);
					RuntimeObject* L_71 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_72 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_73 = V_10;
					NullCheck(L_71);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_71, L_72, L_73);
					// PushFollow(FOLLOW_primaryExpression_in_unaryExpression794);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_74 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression794_108;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_74, NULL);
					// primaryExpression27 = primaryExpression();
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_75;
					L_75 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_7 = L_75;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_76 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_77 = L_76;
					NullCheck(L_77);
					int32_t L_78 = L_77->___followingStackPointer_1;
					NullCheck(L_77);
					L_77->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
					// adaptor.AddChild(root_0, primaryExpression27.Tree);
					RuntimeObject* L_79 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_80 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_81 = V_7;
					NullCheck(L_81);
					RuntimeObject* L_82;
					L_82 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_81);
					NullCheck(L_79);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80, L_82);
					// retval.value = new UnaryExpression(UnaryExpressionType.BitwiseNot, primaryExpression27 != null ? primaryExpression27.value : null);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_83 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_84 = V_7;
					G_B27_0 = 2;
					G_B27_1 = L_83;
					if (L_84)
					{
						G_B28_0 = 2;
						G_B28_1 = L_83;
						goto IL_02c9_2;
					}
				}
				{
					G_B29_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B29_1 = G_B27_0;
					G_B29_2 = G_B27_1;
					goto IL_02d0_2;
				}

IL_02c9_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_85 = V_7;
					NullCheck(L_85);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_86 = L_85->___value_2;
					G_B29_0 = L_86;
					G_B29_1 = G_B28_0;
					G_B29_2 = G_B28_1;
				}

IL_02d0_2:
				{
					UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_87 = (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E*)il2cpp_codegen_object_new(UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
					NullCheck(L_87);
					UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E(L_87, G_B29_1, G_B29_0, NULL);
					NullCheck(G_B29_2);
					G_B29_2->___value_2 = L_87;
					Il2CppCodeGenWriteBarrier((void**)(&G_B29_2->___value_2), (void*)L_87);
					// break;
					goto IL_0387_2;
				}

IL_02e0_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_88 = __this->___adaptor_8;
					NullCheck(L_88);
					RuntimeObject* L_89;
					L_89 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_88);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_89, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// char_literal28 = (IToken)Match(input, 39, FOLLOW_39_in_unaryExpression805);
					RuntimeObject* L_90 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_91 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_unaryExpression805_109;
					RuntimeObject* L_92;
					L_92 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_90, ((int32_t)39), L_91);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_92, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal28_tree = (CommonTree)adaptor.Create(char_literal28);
					RuntimeObject* L_93 = __this->___adaptor_8;
					RuntimeObject* L_94 = V_4;
					NullCheck(L_93);
					RuntimeObject* L_95;
					L_95 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_93, L_94);
					V_11 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_95, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal28_tree);
					RuntimeObject* L_96 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_97 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_98 = V_11;
					NullCheck(L_96);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_96, L_97, L_98);
					// PushFollow(FOLLOW_primaryExpression_in_unaryExpression807);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_99 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression807_110;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_99, NULL);
					// primaryExpression29 = primaryExpression();
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_100;
					L_100 = NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039(__this, NULL);
					V_8 = L_100;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_101 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_102 = L_101;
					NullCheck(L_102);
					int32_t L_103 = L_102->___followingStackPointer_1;
					NullCheck(L_102);
					L_102->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
					// adaptor.AddChild(root_0, primaryExpression29.Tree);
					RuntimeObject* L_104 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_105 = V_1;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_106 = V_8;
					NullCheck(L_106);
					RuntimeObject* L_107;
					L_107 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_106);
					NullCheck(L_104);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_104, L_105, L_107);
					// retval.value = new UnaryExpression(UnaryExpressionType.Negate, primaryExpression29 != null ? primaryExpression29.value : null);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_108 = V_0;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_109 = V_8;
					G_B31_0 = 1;
					G_B31_1 = L_108;
					if (L_109)
					{
						G_B32_0 = 1;
						G_B32_1 = L_108;
						goto IL_0373_2;
					}
				}
				{
					G_B33_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B33_1 = G_B31_0;
					G_B33_2 = G_B31_1;
					goto IL_037a_2;
				}

IL_0373_2:
				{
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_110 = V_8;
					NullCheck(L_110);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_111 = L_110->___value_2;
					G_B33_0 = L_111;
					G_B33_1 = G_B32_0;
					G_B33_2 = G_B32_1;
				}

IL_037a_2:
				{
					UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_112 = (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E*)il2cpp_codegen_object_new(UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E_il2cpp_TypeInfo_var);
					NullCheck(L_112);
					UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E(L_112, G_B33_1, G_B33_0, NULL);
					NullCheck(G_B33_2);
					G_B33_2->___value_2 = L_112;
					Il2CppCodeGenWriteBarrier((void**)(&G_B33_2->___value_2), (void*)L_112);
					// break;
					goto IL_0387_2;
				}

IL_0387_2:
				{
					// retval.Stop = input.LT(-1);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_113 = V_0;
					RuntimeObject* L_114 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_114);
					RuntimeObject* L_115;
					L_115 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_114, (-1));
					NullCheck(L_113);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_113, L_115);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_116 = V_0;
					RuntimeObject* L_117 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_118 = V_1;
					NullCheck(L_117);
					RuntimeObject* L_119;
					L_119 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_117, L_118);
					NullCheck(L_116);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_116, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_119, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_120 = __this->___adaptor_8;
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_121 = V_0;
					NullCheck(L_121);
					RuntimeObject* L_122;
					L_122 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_121);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_123 = V_0;
					NullCheck(L_123);
					RuntimeObject* L_124;
					L_124 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_123);
					unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_125 = V_0;
					NullCheck(L_125);
					RuntimeObject* L_126;
					L_126 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_125);
					NullCheck(L_120);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_120, L_122, ((RuntimeObject*)Castclass((RuntimeObject*)L_124, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_126, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0431_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_03dd_1;
				}
				throw e;
			}

CATCH_03dd_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_20 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_127 = V_20;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_127);
				// Recover(input, re);
				RuntimeObject* L_128 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_129 = V_20;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_128, L_129);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_130 = V_0;
				RuntimeObject* L_131 = __this->___adaptor_8;
				RuntimeObject* L_132 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_133 = V_0;
				NullCheck(L_133);
				RuntimeObject* L_134;
				L_134 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_133);
				RuntimeObject* L_135 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_135);
				RuntimeObject* L_136;
				L_136 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_135, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_137 = V_20;
				NullCheck(L_131);
				RuntimeObject* L_138;
				L_138 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_131, L_132, ((RuntimeObject*)Castclass((RuntimeObject*)L_134, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_136, L_137);
				NullCheck(L_130);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_130, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_138, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0431_1;
			}// end catch (depth: 2)

IL_0431_1:
			{
				goto IL_0436;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0436:
	{
		// return retval;
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_139 = V_0;
		V_21 = L_139;
		goto IL_043b;
	}

IL_043b:
	{
		// }
		unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* L_140 = V_21;
		return L_140;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::primaryExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* V_4 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_5 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* V_6 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	int32_t V_10 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_21 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* V_22 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B15_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B14_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B16_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B16_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B19_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B18_0 = NULL;
	ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* G_B20_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B20_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B23_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B22_0 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B24_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B24_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B30_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B29_0 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B31_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B31_1 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B33_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B33_1 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B32_0 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B32_1 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B34_0 = NULL;
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* G_B34_1 = NULL;
	primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* G_B34_2 = NULL;
	{
		// var retval = new primaryExpression_return();
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_0 = (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55*)il2cpp_codegen_object_new(primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal30 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken char_literal32 = null;
		V_3 = (RuntimeObject*)NULL;
		// value_return expr = null;
		V_4 = (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA*)NULL;
		// logicalExpression_return logicalExpression31 = null;
		V_5 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		// identifier_return identifier33 = null;
		V_6 = (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D*)NULL;
		// arguments_return arguments34 = null;
		V_7 = (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B*)NULL;
		// CommonTree char_literal30_tree = null;
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal32_tree = null;
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03a2:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// var alt19 = 3;
					V_10 = 3;
					// switch (input.LA(1))
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_13 = L_5;
					int32_t L_6 = V_13;
					V_12 = L_6;
					int32_t L_7 = V_12;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, 4))) > ((uint32_t)5))))
					{
						goto IL_006a_2;
					}
				}
				{
					goto IL_0051_2;
				}

IL_0051_2:
				{
					int32_t L_8 = V_12;
					if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)10)))) > ((uint32_t)1))))
					{
						goto IL_0071_2;
					}
				}
				{
					goto IL_005b_2;
				}

IL_005b_2:
				{
					int32_t L_9 = V_12;
					if ((((int32_t)L_9) == ((int32_t)((int32_t)46))))
					{
						goto IL_0063_2;
					}
				}
				{
					goto IL_0078_2;
				}

IL_0063_2:
				{
					// alt19 = 1;
					V_10 = 1;
					// break;
					goto IL_0090_2;
				}

IL_006a_2:
				{
					// alt19 = 2;
					V_10 = 2;
					// break;
					goto IL_0090_2;
				}

IL_0071_2:
				{
					// alt19 = 3;
					V_10 = 3;
					// break;
					goto IL_0090_2;
				}

IL_0078_2:
				{
					// var nvae_d19s0 =
					//     new NoViableAltException("", 19, 0, input);
					RuntimeObject* L_10 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_11);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)19), 0, L_10, NULL);
					V_11 = L_11;
					// throw nvae_d19s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_12 = V_11;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_primaryExpression_mD64C750787D69BB79620AF9347B994805740C039_RuntimeMethod_var)));
				}

IL_0090_2:
				{
					// switch (alt19)
					int32_t L_13 = V_10;
					V_15 = L_13;
					int32_t L_14 = V_15;
					V_14 = L_14;
					int32_t L_15 = V_14;
					switch (((int32_t)il2cpp_codegen_subtract(L_15, 1)))
					{
						case 0:
						{
							goto IL_00b2_2;
						}
						case 1:
						{
							goto IL_018f_2;
						}
						case 2:
						{
							goto IL_01f6_2;
						}
					}
				}
				{
					goto IL_02f6_2;
				}

IL_00b2_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_16 = __this->___adaptor_8;
					NullCheck(L_16);
					RuntimeObject* L_17;
					L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_16);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_17, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// char_literal30 = (IToken)Match(input, 46, FOLLOW_46_in_primaryExpression829);
					RuntimeObject* L_18 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_19 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_primaryExpression829_111;
					RuntimeObject* L_20;
					L_20 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_18, ((int32_t)46), L_19);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_20, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal30_tree = (CommonTree)adaptor.Create(char_literal30);
					RuntimeObject* L_21 = __this->___adaptor_8;
					RuntimeObject* L_22 = V_2;
					NullCheck(L_21);
					RuntimeObject* L_23;
					L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_21, L_22);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_23, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal30_tree);
					RuntimeObject* L_24 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_25 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_26 = V_8;
					NullCheck(L_24);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_24, L_25, L_26);
					// PushFollow(FOLLOW_logicalExpression_in_primaryExpression831);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_27 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_primaryExpression831_112;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_27, NULL);
					// logicalExpression31 = logicalExpression();
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_28;
					L_28 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_5 = L_28;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_29 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_30 = L_29;
					NullCheck(L_30);
					int32_t L_31 = L_30->___followingStackPointer_1;
					NullCheck(L_30);
					L_30->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
					// adaptor.AddChild(root_0, logicalExpression31.Tree);
					RuntimeObject* L_32 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_33 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_34 = V_5;
					NullCheck(L_34);
					RuntimeObject* L_35;
					L_35 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_34);
					NullCheck(L_32);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_32, L_33, L_35);
					// char_literal32 = (IToken)Match(input, 47, FOLLOW_47_in_primaryExpression833);
					RuntimeObject* L_36 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_37 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_primaryExpression833_113;
					RuntimeObject* L_38;
					L_38 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_36, ((int32_t)47), L_37);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_38, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal32_tree = (CommonTree)adaptor.Create(char_literal32);
					RuntimeObject* L_39 = __this->___adaptor_8;
					RuntimeObject* L_40 = V_3;
					NullCheck(L_39);
					RuntimeObject* L_41;
					L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_39, L_40);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_41, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal32_tree);
					RuntimeObject* L_42 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_43 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_44 = V_9;
					NullCheck(L_42);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_42, L_43, L_44);
					// retval.value = logicalExpression31 != null ? logicalExpression31.value : null;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_45 = V_0;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_46 = V_5;
					G_B14_0 = L_45;
					if (L_46)
					{
						G_B15_0 = L_45;
						goto IL_017d_2;
					}
				}
				{
					G_B16_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B16_1 = G_B14_0;
					goto IL_0184_2;
				}

IL_017d_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_47 = V_5;
					NullCheck(L_47);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_48 = L_47->___value_2;
					G_B16_0 = L_48;
					G_B16_1 = G_B15_0;
				}

IL_0184_2:
				{
					NullCheck(G_B16_1);
					G_B16_1->___value_2 = G_B16_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___value_2), (void*)G_B16_0);
					// break;
					goto IL_02f6_2;
				}

IL_018f_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_49 = __this->___adaptor_8;
					NullCheck(L_49);
					RuntimeObject* L_50;
					L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_49);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_50, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_value_in_primaryExpression843);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_51 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_value_in_primaryExpression843_114;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_51, NULL);
					// expr = value();
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_52;
					L_52 = NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870(__this, NULL);
					V_4 = L_52;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_53 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_54 = L_53;
					NullCheck(L_54);
					int32_t L_55 = L_54->___followingStackPointer_1;
					NullCheck(L_54);
					L_54->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
					// adaptor.AddChild(root_0, expr.Tree);
					RuntimeObject* L_56 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_57 = V_1;
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_58 = V_4;
					NullCheck(L_58);
					RuntimeObject* L_59;
					L_59 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_58);
					NullCheck(L_56);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_56, L_57, L_59);
					// retval.value = expr != null ? expr.value : null;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_60 = V_0;
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_61 = V_4;
					G_B18_0 = L_60;
					if (L_61)
					{
						G_B19_0 = L_60;
						goto IL_01e4_2;
					}
				}
				{
					G_B20_0 = ((ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)(NULL));
					G_B20_1 = G_B18_0;
					goto IL_01eb_2;
				}

IL_01e4_2:
				{
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_62 = V_4;
					NullCheck(L_62);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_63 = L_62->___value_2;
					G_B20_0 = L_63;
					G_B20_1 = G_B19_0;
				}

IL_01eb_2:
				{
					NullCheck(G_B20_1);
					G_B20_1->___value_2 = G_B20_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___value_2), (void*)G_B20_0);
					// break;
					goto IL_02f6_2;
				}

IL_01f6_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_64 = __this->___adaptor_8;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_64);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_65, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_identifier_in_primaryExpression851);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_66 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_identifier_in_primaryExpression851_115;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_66, NULL);
					// identifier33 = identifier();
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_67;
					L_67 = NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53(__this, NULL);
					V_6 = L_67;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_68 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_69 = L_68;
					NullCheck(L_69);
					int32_t L_70 = L_69->___followingStackPointer_1;
					NullCheck(L_69);
					L_69->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_70, 1));
					// adaptor.AddChild(root_0, identifier33.Tree);
					RuntimeObject* L_71 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_72 = V_1;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_73 = V_6;
					NullCheck(L_73);
					RuntimeObject* L_74;
					L_74 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_73);
					NullCheck(L_71);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_71, L_72, L_74);
					// retval.value = (LogicalExpression)(identifier33 != null ? identifier33.value : null);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_75 = V_0;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_76 = V_6;
					G_B22_0 = L_75;
					if (L_76)
					{
						G_B23_0 = L_75;
						goto IL_024b_2;
					}
				}
				{
					G_B24_0 = ((IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)(NULL));
					G_B24_1 = G_B22_0;
					goto IL_0252_2;
				}

IL_024b_2:
				{
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_77 = V_6;
					NullCheck(L_77);
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_78 = L_77->___value_2;
					G_B24_0 = L_78;
					G_B24_1 = G_B23_0;
				}

IL_0252_2:
				{
					NullCheck(G_B24_1);
					G_B24_1->___value_2 = G_B24_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B24_1->___value_2), (void*)G_B24_0);
					// var alt18 = 2;
					V_16 = 2;
					// var LA18_0 = input.LA(1);
					RuntimeObject* L_79 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_79);
					int32_t L_80;
					L_80 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_79, 1);
					V_17 = L_80;
					// if (LA18_0 == 46)
					int32_t L_81 = V_17;
					V_18 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)46)))? 1 : 0);
					bool L_82 = V_18;
					if (!L_82)
					{
						goto IL_0279_2;
					}
				}
				{
					// alt18 = 1;
					V_16 = 1;
				}

IL_0279_2:
				{
					// switch (alt18)
					int32_t L_83 = V_16;
					V_20 = L_83;
					int32_t L_84 = V_20;
					V_19 = L_84;
					int32_t L_85 = V_19;
					if ((((int32_t)L_85) == ((int32_t)1)))
					{
						goto IL_0288_2;
					}
				}
				{
					goto IL_02f3_2;
				}

IL_0288_2:
				{
					// PushFollow(FOLLOW_arguments_in_primaryExpression856);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_86 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_arguments_in_primaryExpression856_116;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_86, NULL);
					// arguments34 = arguments();
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_87;
					L_87 = NCalcParser_arguments_m8382A07E7C283B57AF2D3DECF15F56C6B7708A7C(__this, NULL);
					V_7 = L_87;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_88 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_89 = L_88;
					NullCheck(L_89);
					int32_t L_90 = L_89->___followingStackPointer_1;
					NullCheck(L_89);
					L_89->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_90, 1));
					// adaptor.AddChild(root_0, arguments34.Tree);
					RuntimeObject* L_91 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_92 = V_1;
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_93 = V_7;
					NullCheck(L_93);
					RuntimeObject* L_94;
					L_94 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_93);
					NullCheck(L_91);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_91, L_92, L_94);
					// retval.value = new FunctionExpression(identifier33 != null ? identifier33.value : null, (arguments34 != null ? arguments34.value : null).ToArray());
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_95 = V_0;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_96 = V_6;
					G_B29_0 = L_95;
					if (L_96)
					{
						G_B30_0 = L_95;
						goto IL_02cc_2;
					}
				}
				{
					G_B31_0 = ((IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)(NULL));
					G_B31_1 = G_B29_0;
					goto IL_02d3_2;
				}

IL_02cc_2:
				{
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_97 = V_6;
					NullCheck(L_97);
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_98 = L_97->___value_2;
					G_B31_0 = L_98;
					G_B31_1 = G_B30_0;
				}

IL_02d3_2:
				{
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_99 = V_7;
					G_B32_0 = G_B31_0;
					G_B32_1 = G_B31_1;
					if (L_99)
					{
						G_B33_0 = G_B31_0;
						G_B33_1 = G_B31_1;
						goto IL_02da_2;
					}
				}
				{
					G_B34_0 = ((List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)(NULL));
					G_B34_1 = G_B32_0;
					G_B34_2 = G_B32_1;
					goto IL_02e1_2;
				}

IL_02da_2:
				{
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_100 = V_7;
					NullCheck(L_100);
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_101 = L_100->___value_2;
					G_B34_0 = L_101;
					G_B34_1 = G_B33_0;
					G_B34_2 = G_B33_1;
				}

IL_02e1_2:
				{
					NullCheck(G_B34_0);
					LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_102;
					L_102 = List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572(G_B34_0, List_1_ToArray_m3991F6AFAC337479BBE03A1131E92A90A93EB572_RuntimeMethod_var);
					FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_103 = (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD*)il2cpp_codegen_object_new(FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD_il2cpp_TypeInfo_var);
					NullCheck(L_103);
					FunctionExpression__ctor_m34989F1EE71A2A0D4ECD1FC2704A70E4FB460F2A(L_103, G_B34_1, L_102, NULL);
					NullCheck(G_B34_2);
					G_B34_2->___value_2 = L_103;
					Il2CppCodeGenWriteBarrier((void**)(&G_B34_2->___value_2), (void*)L_103);
					// break;
					goto IL_02f3_2;
				}

IL_02f3_2:
				{
					// break;
					goto IL_02f6_2;
				}

IL_02f6_2:
				{
					// retval.Stop = input.LT(-1);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_104 = V_0;
					RuntimeObject* L_105 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_105);
					RuntimeObject* L_106;
					L_106 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_105, (-1));
					NullCheck(L_104);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_104, L_106);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_107 = V_0;
					RuntimeObject* L_108 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_109 = V_1;
					NullCheck(L_108);
					RuntimeObject* L_110;
					L_110 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_108, L_109);
					NullCheck(L_107);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_107, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_110, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_111 = __this->___adaptor_8;
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_112 = V_0;
					NullCheck(L_112);
					RuntimeObject* L_113;
					L_113 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_112);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_114 = V_0;
					NullCheck(L_114);
					RuntimeObject* L_115;
					L_115 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_114);
					primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_116 = V_0;
					NullCheck(L_116);
					RuntimeObject* L_117;
					L_117 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_116);
					NullCheck(L_111);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_111, L_113, ((RuntimeObject*)Castclass((RuntimeObject*)L_115, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_117, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_03a0_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_034c_1;
				}
				throw e;
			}

CATCH_034c_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_21 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_118 = V_21;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_118);
				// Recover(input, re);
				RuntimeObject* L_119 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_120 = V_21;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_119, L_120);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_121 = V_0;
				RuntimeObject* L_122 = __this->___adaptor_8;
				RuntimeObject* L_123 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_124 = V_0;
				NullCheck(L_124);
				RuntimeObject* L_125;
				L_125 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_124);
				RuntimeObject* L_126 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_126);
				RuntimeObject* L_127;
				L_127 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_126, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_128 = V_21;
				NullCheck(L_122);
				RuntimeObject* L_129;
				L_129 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_122, L_123, ((RuntimeObject*)Castclass((RuntimeObject*)L_125, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_127, L_128);
				NullCheck(L_121);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_121, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_129, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_03a0_1;
			}// end catch (depth: 2)

IL_03a0_1:
			{
				goto IL_03a5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03a5:
	{
		// return retval;
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_130 = V_0;
		V_22 = L_130;
		goto IL_03aa;
	}

IL_03aa:
	{
		// }
		primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* L_131 = V_22;
		return L_131;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_8 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_9 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_10 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_11 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_12 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_13 = NULL;
	int32_t V_14 = 0;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_20 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B15_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B16_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B19_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B18_0 = NULL;
	String_t* G_B20_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B20_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B24_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B23_0 = NULL;
	String_t* G_B25_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B25_1 = NULL;
	NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* G_B28_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B28_1 = NULL;
	NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* G_B27_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B27_1 = NULL;
	String_t* G_B29_0 = NULL;
	NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* G_B29_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B29_2 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B32_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B31_0 = NULL;
	String_t* G_B33_0 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B33_1 = NULL;
	int32_t G_B35_0 = 0;
	String_t* G_B35_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B35_2 = NULL;
	int32_t G_B34_0 = 0;
	String_t* G_B34_1 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B34_2 = NULL;
	String_t* G_B36_0 = NULL;
	int32_t G_B36_1 = 0;
	String_t* G_B36_2 = NULL;
	value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* G_B36_3 = NULL;
	{
		// var retval = new value_return();
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_0 = (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA*)il2cpp_codegen_object_new(value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken INTEGER35 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken FLOAT36 = null;
		V_3 = (RuntimeObject*)NULL;
		// IToken STRING37 = null;
		V_4 = (RuntimeObject*)NULL;
		// IToken DATETIME38 = null;
		V_5 = (RuntimeObject*)NULL;
		// IToken TRUE39 = null;
		V_6 = (RuntimeObject*)NULL;
		// IToken FALSE40 = null;
		V_7 = (RuntimeObject*)NULL;
		// CommonTree INTEGER35_tree = null;
		V_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree FLOAT36_tree = null;
		V_9 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree STRING37_tree = null;
		V_10 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree DATETIME38_tree = null;
		V_11 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree TRUE39_tree = null;
		V_12 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree FALSE40_tree = null;
		V_13 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_045f:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// var alt20 = 6;
					V_14 = 6;
					// switch (input.LA(1))
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_17 = L_5;
					int32_t L_6 = V_17;
					V_16 = L_6;
					int32_t L_7 = V_16;
					switch (((int32_t)il2cpp_codegen_subtract(L_7, 4)))
					{
						case 0:
						{
							goto IL_0077_2;
						}
						case 1:
						{
							goto IL_007e_2;
						}
						case 2:
						{
							goto IL_0085_2;
						}
						case 3:
						{
							goto IL_008c_2;
						}
						case 4:
						{
							goto IL_0093_2;
						}
						case 5:
						{
							goto IL_009a_2;
						}
					}
				}
				{
					goto IL_00a1_2;
				}

IL_0077_2:
				{
					// alt20 = 1;
					V_14 = 1;
					// break;
					goto IL_00b9_2;
				}

IL_007e_2:
				{
					// alt20 = 2;
					V_14 = 2;
					// break;
					goto IL_00b9_2;
				}

IL_0085_2:
				{
					// alt20 = 3;
					V_14 = 3;
					// break;
					goto IL_00b9_2;
				}

IL_008c_2:
				{
					// alt20 = 4;
					V_14 = 4;
					// break;
					goto IL_00b9_2;
				}

IL_0093_2:
				{
					// alt20 = 5;
					V_14 = 5;
					// break;
					goto IL_00b9_2;
				}

IL_009a_2:
				{
					// alt20 = 6;
					V_14 = 6;
					// break;
					goto IL_00b9_2;
				}

IL_00a1_2:
				{
					// var nvae_d20s0 =
					//     new NoViableAltException("", 20, 0, input);
					RuntimeObject* L_8 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_9 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_9);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)20), 0, L_8, NULL);
					V_15 = L_9;
					// throw nvae_d20s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_10 = V_15;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_value_m9F984EDA6B75DB65D007A1F0EE951DCDBD60F870_RuntimeMethod_var)));
				}

IL_00b9_2:
				{
					// switch (alt20)
					int32_t L_11 = V_14;
					V_19 = L_11;
					int32_t L_12 = V_19;
					V_18 = L_12;
					int32_t L_13 = V_18;
					switch (((int32_t)il2cpp_codegen_subtract(L_13, 1)))
					{
						case 0:
						{
							goto IL_00e7_2;
						}
						case 1:
						{
							goto IL_017b_2;
						}
						case 2:
						{
							goto IL_01f8_2;
						}
						case 3:
						{
							goto IL_026b_2;
						}
						case 4:
						{
							goto IL_02f8_2;
						}
						case 5:
						{
							goto IL_0355_2;
						}
					}
				}
				{
					goto IL_03b3_2;
				}

IL_00e7_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_14 = __this->___adaptor_8;
					NullCheck(L_14);
					RuntimeObject* L_15;
					L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_14);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_15, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// INTEGER35 = (IToken)Match(input, INTEGER, FOLLOW_INTEGER_in_value876);
					RuntimeObject* L_16 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_17 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_INTEGER_in_value876_117;
					RuntimeObject* L_18;
					L_18 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_16, 4, L_17);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// INTEGER35_tree = (CommonTree)adaptor.Create(INTEGER35);
					RuntimeObject* L_19 = __this->___adaptor_8;
					RuntimeObject* L_20 = V_2;
					NullCheck(L_19);
					RuntimeObject* L_21;
					L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_19, L_20);
					V_8 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_21, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, INTEGER35_tree);
					RuntimeObject* L_22 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_23 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_24 = V_8;
					NullCheck(L_22);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_22, L_23, L_24);
				}
				try
				{// begin try (depth: 3)
					{
						// retval.value = new ValueExpression(int.Parse(INTEGER35 != null ? INTEGER35.Text : null));
						value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_25 = V_0;
						RuntimeObject* L_26 = V_2;
						G_B14_0 = L_25;
						if (L_26)
						{
							G_B15_0 = L_25;
							goto IL_013b_3;
						}
					}
					{
						G_B16_0 = ((String_t*)(NULL));
						G_B16_1 = G_B14_0;
						goto IL_0141_3;
					}

IL_013b_3:
					{
						RuntimeObject* L_27 = V_2;
						NullCheck(L_27);
						String_t* L_28;
						L_28 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_27);
						G_B16_0 = L_28;
						G_B16_1 = G_B15_0;
					}

IL_0141_3:
					{
						int32_t L_29;
						L_29 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(G_B16_0, NULL);
						ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_30 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
						NullCheck(L_30);
						ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A(L_30, L_29, NULL);
						NullCheck(G_B16_1);
						G_B16_1->___value_2 = L_30;
						Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___value_2), (void*)L_30);
						goto IL_0175_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0153_2;
					}
					throw e;
				}

CATCH_0153_2:
				{// begin catch(System.OverflowException)
					{
						// catch (OverflowException)
						// retval.value = new ValueExpression(long.Parse(INTEGER35 != null ? INTEGER35.Text : null));
						value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_31 = V_0;
						RuntimeObject* L_32 = V_2;
						G_B18_0 = L_31;
						if (L_32)
						{
							G_B19_0 = L_31;
							goto IL_015c_2;
						}
					}
					{
						G_B20_0 = ((String_t*)(NULL));
						G_B20_1 = G_B18_0;
						goto IL_0162_2;
					}

IL_015c_2:
					{
						RuntimeObject* L_33 = V_2;
						NullCheck(L_33);
						String_t* L_34;
						L_34 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), L_33);
						G_B20_0 = L_34;
						G_B20_1 = G_B19_0;
					}

IL_0162_2:
					{
						int64_t L_35;
						L_35 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(G_B20_0, NULL);
						ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_36 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var)));
						NullCheck(L_36);
						ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD(L_36, ((float)L_35), NULL);
						NullCheck(G_B20_1);
						G_B20_1->___value_2 = L_36;
						Il2CppCodeGenWriteBarrier((void**)(&G_B20_1->___value_2), (void*)L_36);
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_0175_2;
					}
				}// end catch (depth: 3)

IL_0175_2:
				{
					// break;
					goto IL_03b3_2;
				}

IL_017b_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_37 = __this->___adaptor_8;
					NullCheck(L_37);
					RuntimeObject* L_38;
					L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_37);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_38, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// FLOAT36 = (IToken)Match(input, FLOAT, FOLLOW_FLOAT_in_value884);
					RuntimeObject* L_39 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_40 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FLOAT_in_value884_118;
					RuntimeObject* L_41;
					L_41 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_39, 5, L_40);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// FLOAT36_tree = (CommonTree)adaptor.Create(FLOAT36);
					RuntimeObject* L_42 = __this->___adaptor_8;
					RuntimeObject* L_43 = V_3;
					NullCheck(L_42);
					RuntimeObject* L_44;
					L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_42, L_43);
					V_9 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_44, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, FLOAT36_tree);
					RuntimeObject* L_45 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_46 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_47 = V_9;
					NullCheck(L_45);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_45, L_46, L_47);
					// retval.value = new ValueExpression(double.Parse(FLOAT36 != null ? FLOAT36.Text : null, NumberStyles.Float, numberFormatInfo));
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_48 = V_0;
					RuntimeObject* L_49 = V_3;
					G_B23_0 = L_48;
					if (L_49)
					{
						G_B24_0 = L_48;
						goto IL_01ce_2;
					}
				}
				{
					G_B25_0 = ((String_t*)(NULL));
					G_B25_1 = G_B23_0;
					goto IL_01d4_2;
				}

IL_01ce_2:
				{
					RuntimeObject* L_50 = V_3;
					NullCheck(L_50);
					String_t* L_51;
					L_51 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_50);
					G_B25_0 = L_51;
					G_B25_1 = G_B24_0;
				}

IL_01d4_2:
				{
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_52 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___numberFormatInfo_58;
					double L_53;
					L_53 = Double_Parse_mA6BD954627BB3B2317D7BA7D4B29DCA53C660058(G_B25_0, ((int32_t)167), L_52, NULL);
					double L_54 = L_53;
					RuntimeObject* L_55 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_54);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_56 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					NullCheck(L_56);
					ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97(L_56, L_55, NULL);
					NullCheck(G_B25_1);
					G_B25_1->___value_2 = L_56;
					Il2CppCodeGenWriteBarrier((void**)(&G_B25_1->___value_2), (void*)L_56);
					// break;
					goto IL_03b3_2;
				}

IL_01f8_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_57 = __this->___adaptor_8;
					NullCheck(L_57);
					RuntimeObject* L_58;
					L_58 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_57);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_58, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// STRING37 = (IToken)Match(input, STRING, FOLLOW_STRING_in_value892);
					RuntimeObject* L_59 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_60 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_STRING_in_value892_119;
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_59, 6, L_60);
					V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_61, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// STRING37_tree = (CommonTree)adaptor.Create(STRING37);
					RuntimeObject* L_62 = __this->___adaptor_8;
					RuntimeObject* L_63 = V_4;
					NullCheck(L_62);
					RuntimeObject* L_64;
					L_64 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_62, L_63);
					V_10 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_64, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, STRING37_tree);
					RuntimeObject* L_65 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_66 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_67 = V_10;
					NullCheck(L_65);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_65, L_66, L_67);
					// retval.value = new ValueExpression(extractString(STRING37 != null ? STRING37.Text : null));
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_68 = V_0;
					RuntimeObject* L_69 = V_4;
					G_B27_0 = __this;
					G_B27_1 = L_68;
					if (L_69)
					{
						G_B28_0 = __this;
						G_B28_1 = L_68;
						goto IL_024f_2;
					}
				}
				{
					G_B29_0 = ((String_t*)(NULL));
					G_B29_1 = G_B27_0;
					G_B29_2 = G_B27_1;
					goto IL_0256_2;
				}

IL_024f_2:
				{
					RuntimeObject* L_70 = V_4;
					NullCheck(L_70);
					String_t* L_71;
					L_71 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_70);
					G_B29_0 = L_71;
					G_B29_1 = G_B28_0;
					G_B29_2 = G_B28_1;
				}

IL_0256_2:
				{
					NullCheck(G_B29_1);
					String_t* L_72;
					L_72 = NCalcParser_extractString_m73496B6994B86DAEB265F627BF23E76FB1B1E14F(G_B29_1, G_B29_0, NULL);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_73 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					NullCheck(L_73);
					ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F(L_73, L_72, NULL);
					NullCheck(G_B29_2);
					G_B29_2->___value_2 = L_73;
					Il2CppCodeGenWriteBarrier((void**)(&G_B29_2->___value_2), (void*)L_73);
					// break;
					goto IL_03b3_2;
				}

IL_026b_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_74 = __this->___adaptor_8;
					NullCheck(L_74);
					RuntimeObject* L_75;
					L_75 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_74);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_75, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// DATETIME38 = (IToken)Match(input, DATETIME, FOLLOW_DATETIME_in_value901);
					RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_77 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_DATETIME_in_value901_120;
					RuntimeObject* L_78;
					L_78 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_76, 7, L_77);
					V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_78, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// DATETIME38_tree = (CommonTree)adaptor.Create(DATETIME38);
					RuntimeObject* L_79 = __this->___adaptor_8;
					RuntimeObject* L_80 = V_5;
					NullCheck(L_79);
					RuntimeObject* L_81;
					L_81 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_79, L_80);
					V_11 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_81, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, DATETIME38_tree);
					RuntimeObject* L_82 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_83 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_84 = V_11;
					NullCheck(L_82);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_82, L_83, L_84);
					// retval.value = new ValueExpression(DateTime.Parse((DATETIME38 != null ? DATETIME38.Text : null).Substring(1, (DATETIME38 != null ? DATETIME38.Text : null).Length - 2)));
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_85 = V_0;
					RuntimeObject* L_86 = V_5;
					G_B31_0 = L_85;
					if (L_86)
					{
						G_B32_0 = L_85;
						goto IL_02c1_2;
					}
				}
				{
					G_B33_0 = ((String_t*)(NULL));
					G_B33_1 = G_B31_0;
					goto IL_02c8_2;
				}

IL_02c1_2:
				{
					RuntimeObject* L_87 = V_5;
					NullCheck(L_87);
					String_t* L_88;
					L_88 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_87);
					G_B33_0 = L_88;
					G_B33_1 = G_B32_0;
				}

IL_02c8_2:
				{
					RuntimeObject* L_89 = V_5;
					G_B34_0 = 1;
					G_B34_1 = G_B33_0;
					G_B34_2 = G_B33_1;
					if (L_89)
					{
						G_B35_0 = 1;
						G_B35_1 = G_B33_0;
						G_B35_2 = G_B33_1;
						goto IL_02d0_2;
					}
				}
				{
					G_B36_0 = ((String_t*)(NULL));
					G_B36_1 = G_B34_0;
					G_B36_2 = G_B34_1;
					G_B36_3 = G_B34_2;
					goto IL_02d7_2;
				}

IL_02d0_2:
				{
					RuntimeObject* L_90 = V_5;
					NullCheck(L_90);
					String_t* L_91;
					L_91 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_90);
					G_B36_0 = L_91;
					G_B36_1 = G_B35_0;
					G_B36_2 = G_B35_1;
					G_B36_3 = G_B35_2;
				}

IL_02d7_2:
				{
					NullCheck(G_B36_0);
					int32_t L_92;
					L_92 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B36_0, NULL);
					NullCheck(G_B36_2);
					String_t* L_93;
					L_93 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(G_B36_2, G_B36_1, ((int32_t)il2cpp_codegen_subtract(L_92, 2)), NULL);
					il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_94;
					L_94 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(L_93, NULL);
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_95 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					NullCheck(L_95);
					ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223(L_95, L_94, NULL);
					NullCheck(G_B36_3);
					G_B36_3->___value_2 = L_95;
					Il2CppCodeGenWriteBarrier((void**)(&G_B36_3->___value_2), (void*)L_95);
					// break;
					goto IL_03b3_2;
				}

IL_02f8_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_96 = __this->___adaptor_8;
					NullCheck(L_96);
					RuntimeObject* L_97;
					L_97 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_96);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_97, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// TRUE39 = (IToken)Match(input, TRUE, FOLLOW_TRUE_in_value908);
					RuntimeObject* L_98 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_99 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_TRUE_in_value908_121;
					RuntimeObject* L_100;
					L_100 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_98, 8, L_99);
					V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_100, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// TRUE39_tree = (CommonTree)adaptor.Create(TRUE39);
					RuntimeObject* L_101 = __this->___adaptor_8;
					RuntimeObject* L_102 = V_6;
					NullCheck(L_101);
					RuntimeObject* L_103;
					L_103 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_101, L_102);
					V_12 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_103, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, TRUE39_tree);
					RuntimeObject* L_104 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_105 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_106 = V_12;
					NullCheck(L_104);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_104, L_105, L_106);
					// retval.value = new ValueExpression(true);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_107 = V_0;
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_108 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					NullCheck(L_108);
					ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A(L_108, (bool)1, NULL);
					NullCheck(L_107);
					L_107->___value_2 = L_108;
					Il2CppCodeGenWriteBarrier((void**)(&L_107->___value_2), (void*)L_108);
					// break;
					goto IL_03b3_2;
				}

IL_0355_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_109 = __this->___adaptor_8;
					NullCheck(L_109);
					RuntimeObject* L_110;
					L_110 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_109);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_110, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// FALSE40 = (IToken)Match(input, FALSE, FOLLOW_FALSE_in_value916);
					RuntimeObject* L_111 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_112 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FALSE_in_value916_122;
					RuntimeObject* L_113;
					L_113 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_111, ((int32_t)9), L_112);
					V_7 = ((RuntimeObject*)Castclass((RuntimeObject*)L_113, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// FALSE40_tree = (CommonTree)adaptor.Create(FALSE40);
					RuntimeObject* L_114 = __this->___adaptor_8;
					RuntimeObject* L_115 = V_7;
					NullCheck(L_114);
					RuntimeObject* L_116;
					L_116 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_114, L_115);
					V_13 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_116, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, FALSE40_tree);
					RuntimeObject* L_117 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_118 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_119 = V_13;
					NullCheck(L_117);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_117, L_118, L_119);
					// retval.value = new ValueExpression(false);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_120 = V_0;
					ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_121 = (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)il2cpp_codegen_object_new(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
					NullCheck(L_121);
					ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A(L_121, (bool)0, NULL);
					NullCheck(L_120);
					L_120->___value_2 = L_121;
					Il2CppCodeGenWriteBarrier((void**)(&L_120->___value_2), (void*)L_121);
					// break;
					goto IL_03b3_2;
				}

IL_03b3_2:
				{
					// retval.Stop = input.LT(-1);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_122 = V_0;
					RuntimeObject* L_123 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_123);
					RuntimeObject* L_124;
					L_124 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_123, (-1));
					NullCheck(L_122);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_122, L_124);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_125 = V_0;
					RuntimeObject* L_126 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_127 = V_1;
					NullCheck(L_126);
					RuntimeObject* L_128;
					L_128 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_126, L_127);
					NullCheck(L_125);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_125, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_128, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_129 = __this->___adaptor_8;
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_130 = V_0;
					NullCheck(L_130);
					RuntimeObject* L_131;
					L_131 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_130);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_132 = V_0;
					NullCheck(L_132);
					RuntimeObject* L_133;
					L_133 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_132);
					value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_134 = V_0;
					NullCheck(L_134);
					RuntimeObject* L_135;
					L_135 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_134);
					NullCheck(L_129);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_129, L_131, ((RuntimeObject*)Castclass((RuntimeObject*)L_133, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_135, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_045d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0409_1;
				}
				throw e;
			}

CATCH_0409_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_20 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_136 = V_20;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_136);
				// Recover(input, re);
				RuntimeObject* L_137 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_138 = V_20;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_137, L_138);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_139 = V_0;
				RuntimeObject* L_140 = __this->___adaptor_8;
				RuntimeObject* L_141 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_142 = V_0;
				NullCheck(L_142);
				RuntimeObject* L_143;
				L_143 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_142);
				RuntimeObject* L_144 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_144);
				RuntimeObject* L_145;
				L_145 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_144, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_146 = V_20;
				NullCheck(L_140);
				RuntimeObject* L_147;
				L_147 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_140, L_141, ((RuntimeObject*)Castclass((RuntimeObject*)L_143, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_145, L_146);
				NullCheck(L_139);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_139, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_147, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_045d_1;
			}// end catch (depth: 2)

IL_045d_1:
			{
				goto IL_0462;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0462:
	{
		// return retval;
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_148 = V_0;
		V_21 = L_148;
		goto IL_0467;
	}

IL_0467:
	{
		// }
		value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* L_149 = V_21;
		return L_149;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53 (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B12_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B13_1 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B16_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B17_1 = NULL;
	int32_t G_B19_0 = 0;
	String_t* G_B19_1 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B19_2 = NULL;
	int32_t G_B18_0 = 0;
	String_t* G_B18_1 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B18_2 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	String_t* G_B20_2 = NULL;
	identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* G_B20_3 = NULL;
	{
		// var retval = new identifier_return();
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_0 = (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D*)il2cpp_codegen_object_new(identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken ID41 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken NAME42 = null;
		V_3 = (RuntimeObject*)NULL;
		// CommonTree ID41_tree = null;
		V_4 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree NAME42_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0226:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// var alt21 = 2;
					V_6 = 2;
					// var LA21_0 = input.LA(1);
					RuntimeObject* L_4 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_4);
					int32_t L_5;
					L_5 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_4, 1);
					V_7 = L_5;
					// if (LA21_0 == ID)
					int32_t L_6 = V_7;
					V_8 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)10)))? 1 : 0);
					bool L_7 = V_8;
					if (!L_7)
					{
						goto IL_004b_2;
					}
				}
				{
					// alt21 = 1;
					V_6 = 1;
					goto IL_0077_2;
				}

IL_004b_2:
				{
					// else if (LA21_0 == NAME)
					int32_t L_8 = V_7;
					V_9 = (bool)((((int32_t)L_8) == ((int32_t)((int32_t)11)))? 1 : 0);
					bool L_9 = V_9;
					if (!L_9)
					{
						goto IL_005e_2;
					}
				}
				{
					// alt21 = 2;
					V_6 = 2;
					goto IL_0077_2;
				}

IL_005e_2:
				{
					// var nvae_d21s0 =
					//     new NoViableAltException("", 21, 0, input);
					RuntimeObject* L_10 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_11 = (NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC_il2cpp_TypeInfo_var)));
					NullCheck(L_11);
					NoViableAltException__ctor_m9F3BB03E0B07DFF714F0AB7282044B2625DDF4F1(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), ((int32_t)21), 0, L_10, NULL);
					V_10 = L_11;
					// throw nvae_d21s0;
					NoViableAltException_tDE7603AE2CB33A63C9B3AB73E70948DE46648EFC* L_12 = V_10;
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NCalcParser_identifier_m697374C0E2B7BAF6C5DF801678F4C78CB13F3F53_RuntimeMethod_var)));
				}

IL_0077_2:
				{
					// switch (alt21)
					int32_t L_13 = V_6;
					V_12 = L_13;
					int32_t L_14 = V_12;
					V_11 = L_14;
					int32_t L_15 = V_11;
					if ((((int32_t)L_15) == ((int32_t)1)))
					{
						goto IL_0090_2;
					}
				}
				{
					goto IL_0086_2;
				}

IL_0086_2:
				{
					int32_t L_16 = V_11;
					if ((((int32_t)L_16) == ((int32_t)2)))
					{
						goto IL_00fa_2;
					}
				}
				{
					goto IL_017a_2;
				}

IL_0090_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_17 = __this->___adaptor_8;
					NullCheck(L_17);
					RuntimeObject* L_18;
					L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_17);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_18, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// ID41 = (IToken)Match(input, ID, FOLLOW_ID_in_identifier934);
					RuntimeObject* L_19 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_20 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_ID_in_identifier934_123;
					RuntimeObject* L_21;
					L_21 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_19, ((int32_t)10), L_20);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_21, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// ID41_tree = (CommonTree)adaptor.Create(ID41);
					RuntimeObject* L_22 = __this->___adaptor_8;
					RuntimeObject* L_23 = V_2;
					NullCheck(L_22);
					RuntimeObject* L_24;
					L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_22, L_23);
					V_4 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_24, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, ID41_tree);
					RuntimeObject* L_25 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_26 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_27 = V_4;
					NullCheck(L_25);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_25, L_26, L_27);
					// retval.value = new IdentifierExpression(ID41 != null ? ID41.Text : null);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_28 = V_0;
					RuntimeObject* L_29 = V_2;
					G_B11_0 = L_28;
					if (L_29)
					{
						G_B12_0 = L_28;
						goto IL_00e4_2;
					}
				}
				{
					G_B13_0 = ((String_t*)(NULL));
					G_B13_1 = G_B11_0;
					goto IL_00ea_2;
				}

IL_00e4_2:
				{
					RuntimeObject* L_30 = V_2;
					NullCheck(L_30);
					String_t* L_31;
					L_31 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_30);
					G_B13_0 = L_31;
					G_B13_1 = G_B12_0;
				}

IL_00ea_2:
				{
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_32 = (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)il2cpp_codegen_object_new(IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var);
					NullCheck(L_32);
					IdentifierExpression__ctor_mD7084F992382FC6882312FF559288E684E3F2196(L_32, G_B13_0, NULL);
					NullCheck(G_B13_1);
					G_B13_1->___value_2 = L_32;
					Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___value_2), (void*)L_32);
					// break;
					goto IL_017a_2;
				}

IL_00fa_2:
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_33 = __this->___adaptor_8;
					NullCheck(L_33);
					RuntimeObject* L_34;
					L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_33);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_34, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// NAME42 = (IToken)Match(input, NAME, FOLLOW_NAME_in_identifier942);
					RuntimeObject* L_35 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_36 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_NAME_in_identifier942_124;
					RuntimeObject* L_37;
					L_37 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_35, ((int32_t)11), L_36);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_37, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// NAME42_tree = (CommonTree)adaptor.Create(NAME42);
					RuntimeObject* L_38 = __this->___adaptor_8;
					RuntimeObject* L_39 = V_3;
					NullCheck(L_38);
					RuntimeObject* L_40;
					L_40 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_38, L_39);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_40, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, NAME42_tree);
					RuntimeObject* L_41 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_42 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_43 = V_5;
					NullCheck(L_41);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_41, L_42, L_43);
					// retval.value = new IdentifierExpression((NAME42 != null ? NAME42.Text : null).Substring(1, (NAME42 != null ? NAME42.Text : null).Length - 2));
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_44 = V_0;
					RuntimeObject* L_45 = V_3;
					G_B15_0 = L_44;
					if (L_45)
					{
						G_B16_0 = L_44;
						goto IL_014e_2;
					}
				}
				{
					G_B17_0 = ((String_t*)(NULL));
					G_B17_1 = G_B15_0;
					goto IL_0154_2;
				}

IL_014e_2:
				{
					RuntimeObject* L_46 = V_3;
					NullCheck(L_46);
					String_t* L_47;
					L_47 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_46);
					G_B17_0 = L_47;
					G_B17_1 = G_B16_0;
				}

IL_0154_2:
				{
					RuntimeObject* L_48 = V_3;
					G_B18_0 = 1;
					G_B18_1 = G_B17_0;
					G_B18_2 = G_B17_1;
					if (L_48)
					{
						G_B19_0 = 1;
						G_B19_1 = G_B17_0;
						G_B19_2 = G_B17_1;
						goto IL_015b_2;
					}
				}
				{
					G_B20_0 = ((String_t*)(NULL));
					G_B20_1 = G_B18_0;
					G_B20_2 = G_B18_1;
					G_B20_3 = G_B18_2;
					goto IL_0161_2;
				}

IL_015b_2:
				{
					RuntimeObject* L_49 = V_3;
					NullCheck(L_49);
					String_t* L_50;
					L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_49);
					G_B20_0 = L_50;
					G_B20_1 = G_B19_0;
					G_B20_2 = G_B19_1;
					G_B20_3 = G_B19_2;
				}

IL_0161_2:
				{
					NullCheck(G_B20_0);
					int32_t L_51;
					L_51 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B20_0, NULL);
					NullCheck(G_B20_2);
					String_t* L_52;
					L_52 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(G_B20_2, G_B20_1, ((int32_t)il2cpp_codegen_subtract(L_51, 2)), NULL);
					IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_53 = (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1*)il2cpp_codegen_object_new(IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1_il2cpp_TypeInfo_var);
					NullCheck(L_53);
					IdentifierExpression__ctor_mD7084F992382FC6882312FF559288E684E3F2196(L_53, L_52, NULL);
					NullCheck(G_B20_3);
					G_B20_3->___value_2 = L_53;
					Il2CppCodeGenWriteBarrier((void**)(&G_B20_3->___value_2), (void*)L_53);
					// break;
					goto IL_017a_2;
				}

IL_017a_2:
				{
					// retval.Stop = input.LT(-1);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_54 = V_0;
					RuntimeObject* L_55 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_55);
					RuntimeObject* L_56;
					L_56 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_55, (-1));
					NullCheck(L_54);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_54, L_56);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_57 = V_0;
					RuntimeObject* L_58 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_59 = V_1;
					NullCheck(L_58);
					RuntimeObject* L_60;
					L_60 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_59);
					NullCheck(L_57);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_57, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_60, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_61 = __this->___adaptor_8;
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_62);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_64 = V_0;
					NullCheck(L_64);
					RuntimeObject* L_65;
					L_65 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_64);
					identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_66 = V_0;
					NullCheck(L_66);
					RuntimeObject* L_67;
					L_67 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_66);
					NullCheck(L_61);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_61, L_63, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_67, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0224_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01d0_1;
				}
				throw e;
			}

CATCH_01d0_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_13 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_68 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_68);
				// Recover(input, re);
				RuntimeObject* L_69 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_70 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_69, L_70);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_71 = V_0;
				RuntimeObject* L_72 = __this->___adaptor_8;
				RuntimeObject* L_73 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_74 = V_0;
				NullCheck(L_74);
				RuntimeObject* L_75;
				L_75 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_74);
				RuntimeObject* L_76 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_76);
				RuntimeObject* L_77;
				L_77 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_76, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_78 = V_13;
				NullCheck(L_72);
				RuntimeObject* L_79;
				L_79 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_72, L_73, ((RuntimeObject*)Castclass((RuntimeObject*)L_75, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_77, L_78);
				NullCheck(L_71);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_71, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_79, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0224_1;
			}// end catch (depth: 2)

IL_0224_1:
			{
				goto IL_0229;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0229:
	{
		// return retval;
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_80 = V_0;
		V_14 = L_80;
		goto IL_022e;
	}

IL_022e:
	{
		// }
		identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* L_81 = V_14;
		return L_81;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::expressionList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* NCalcParser_expressionList_m9714F81848953C3B58959B2E8FA232FC0856231C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_3 = NULL;
	logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_13 = NULL;
	expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B3_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B2_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B4_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B4_1 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B11_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B10_0 = NULL;
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* G_B12_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B12_1 = NULL;
	{
		// var retval = new expressionList_return();
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_0 = (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C*)il2cpp_codegen_object_new(expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal43 = null;
		V_2 = (RuntimeObject*)NULL;
		// logicalExpression_return first = null;
		V_3 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		// logicalExpression_return follow = null;
		V_4 = (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402*)NULL;
		// CommonTree char_literal43_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// var expressions = new List<LogicalExpression>();
		List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_4 = (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)il2cpp_codegen_object_new(List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05(L_4, List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		V_6 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0214:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_5 = __this->___adaptor_8;
					NullCheck(L_5);
					RuntimeObject* L_6;
					L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_5);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_6, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// PushFollow(FOLLOW_logicalExpression_in_expressionList966);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_7 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList966_125;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_7, NULL);
					// first = logicalExpression();
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_8;
					L_8 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_3 = L_8;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_9 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_10 = L_9;
					NullCheck(L_10);
					int32_t L_11 = L_10->___followingStackPointer_1;
					NullCheck(L_10);
					L_10->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
					// adaptor.AddChild(root_0, first.Tree);
					RuntimeObject* L_12 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_13 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_14 = V_3;
					NullCheck(L_14);
					RuntimeObject* L_15;
					L_15 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_14);
					NullCheck(L_12);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_12, L_13, L_15);
					// expressions.Add(first != null ? first.value : null);
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_16 = V_6;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_17 = V_3;
					G_B2_0 = L_16;
					if (L_17)
					{
						G_B3_0 = L_16;
						goto IL_0081_2;
					}
				}
				{
					G_B4_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B4_1 = G_B2_0;
					goto IL_0087_2;
				}

IL_0081_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_18 = V_3;
					NullCheck(L_18);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_19 = L_18->___value_2;
					G_B4_0 = L_19;
					G_B4_1 = G_B3_0;
				}

IL_0087_2:
				{
					NullCheck(G_B4_1);
					List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_inline(G_B4_1, G_B4_0, List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var);
				}

IL_008d_2:
				{
					// var alt22 = 2;
					V_7 = 2;
					// var LA22_0 = input.LA(1);
					RuntimeObject* L_20 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_20, 1);
					V_8 = L_21;
					// if (LA22_0 == 48)
					int32_t L_22 = V_8;
					V_9 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)48)))? 1 : 0);
					bool L_23 = V_9;
					if (!L_23)
					{
						goto IL_00b0_2;
					}
				}
				{
					// alt22 = 1;
					V_7 = 1;
				}

IL_00b0_2:
				{
					// switch (alt22)
					int32_t L_24 = V_7;
					V_11 = L_24;
					int32_t L_25 = V_11;
					V_10 = L_25;
					int32_t L_26 = V_10;
					if ((((int32_t)L_26) == ((int32_t)1)))
					{
						goto IL_00c2_2;
					}
				}
				{
					goto IL_0152_2;
				}

IL_00c2_2:
				{
					// char_literal43 = (IToken)Match(input, 48, FOLLOW_48_in_expressionList973);
					RuntimeObject* L_27 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_28 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_48_in_expressionList973_126;
					RuntimeObject* L_29;
					L_29 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_27, ((int32_t)48), L_28);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal43_tree = (CommonTree)adaptor.Create(char_literal43);
					RuntimeObject* L_30 = __this->___adaptor_8;
					RuntimeObject* L_31 = V_2;
					NullCheck(L_30);
					RuntimeObject* L_32;
					L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_30, L_31);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_32, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal43_tree);
					RuntimeObject* L_33 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_35 = V_5;
					NullCheck(L_33);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_33, L_34, L_35);
					// PushFollow(FOLLOW_logicalExpression_in_expressionList977);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_36 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList977_127;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_36, NULL);
					// follow = logicalExpression();
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_37;
					L_37 = NCalcParser_logicalExpression_m331B36AA673889BE071688BEEBE490840BACF985(__this, NULL);
					V_4 = L_37;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_38 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_39 = L_38;
					NullCheck(L_39);
					int32_t L_40 = L_39->___followingStackPointer_1;
					NullCheck(L_39);
					L_39->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
					// adaptor.AddChild(root_0, follow.Tree);
					RuntimeObject* L_41 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_42 = V_1;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_43 = V_4;
					NullCheck(L_43);
					RuntimeObject* L_44;
					L_44 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_43);
					NullCheck(L_41);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_41, L_42, L_44);
					// expressions.Add(follow != null ? follow.value : null);
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_45 = V_6;
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_46 = V_4;
					G_B10_0 = L_45;
					if (L_46)
					{
						G_B11_0 = L_45;
						goto IL_0142_2;
					}
				}
				{
					G_B12_0 = ((LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465*)(NULL));
					G_B12_1 = G_B10_0;
					goto IL_0149_2;
				}

IL_0142_2:
				{
					logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* L_47 = V_4;
					NullCheck(L_47);
					LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_48 = L_47->___value_2;
					G_B12_0 = L_48;
					G_B12_1 = G_B11_0;
				}

IL_0149_2:
				{
					NullCheck(G_B12_1);
					List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_inline(G_B12_1, G_B12_0, List_1_Add_m954E487BCACC347B8820F48264C03739C2BA944F_RuntimeMethod_var);
					// break;
					goto IL_0154_2;
				}

IL_0152_2:
				{
					// goto loop22;
					goto IL_015d_2;
				}

IL_0154_2:
				{
					// while (true);
					V_12 = (bool)1;
					goto IL_008d_2;
				}

IL_015d_2:
				{
					// retval.value = expressions;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_49 = V_0;
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_50 = V_6;
					NullCheck(L_49);
					L_49->___value_2 = L_50;
					Il2CppCodeGenWriteBarrier((void**)(&L_49->___value_2), (void*)L_50);
					// retval.Stop = input.LT(-1);
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_51 = V_0;
					RuntimeObject* L_52 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_52);
					RuntimeObject* L_53;
					L_53 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_52, (-1));
					NullCheck(L_51);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_51, L_53);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_54 = V_0;
					RuntimeObject* L_55 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_56 = V_1;
					NullCheck(L_55);
					RuntimeObject* L_57;
					L_57 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_55, L_56);
					NullCheck(L_54);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_54, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_57, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_58 = __this->___adaptor_8;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_59 = V_0;
					NullCheck(L_59);
					RuntimeObject* L_60;
					L_60 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_59);
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_61 = V_0;
					NullCheck(L_61);
					RuntimeObject* L_62;
					L_62 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_61);
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_63 = V_0;
					NullCheck(L_63);
					RuntimeObject* L_64;
					L_64 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_63);
					NullCheck(L_58);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_58, L_60, ((RuntimeObject*)Castclass((RuntimeObject*)L_62, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_64, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_0212_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01be_1;
				}
				throw e;
			}

CATCH_01be_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_13 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_65 = V_13;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_65);
				// Recover(input, re);
				RuntimeObject* L_66 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_67 = V_13;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_66, L_67);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_68 = V_0;
				RuntimeObject* L_69 = __this->___adaptor_8;
				RuntimeObject* L_70 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_71 = V_0;
				NullCheck(L_71);
				RuntimeObject* L_72;
				L_72 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_71);
				RuntimeObject* L_73 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_73);
				RuntimeObject* L_74;
				L_74 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_73, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_75 = V_13;
				NullCheck(L_69);
				RuntimeObject* L_76;
				L_76 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_69, L_70, ((RuntimeObject*)Castclass((RuntimeObject*)L_72, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_74, L_75);
				NullCheck(L_68);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_68, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_76, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0212_1;
			}// end catch (depth: 2)

IL_0212_1:
			{
				goto IL_0217;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0217:
	{
		// return retval;
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_77 = V_0;
		V_14 = L_77;
		goto IL_021c;
	}

IL_021c:
	{
		// }
		expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_78 = V_14;
		return L_78;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return Unity.VisualScripting.Dependencies.NCalc.NCalcParser::arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* NCalcParser_arguments_m8382A07E7C283B57AF2D3DECF15F56C6B7708A7C (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* V_0 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* V_4 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_5 = NULL;
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* V_12 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* G_B15_0 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* G_B14_0 = NULL;
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* G_B16_0 = NULL;
	arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* G_B16_1 = NULL;
	{
		// var retval = new arguments_return();
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_0 = (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B*)il2cpp_codegen_object_new(arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384(L_0, NULL);
		V_0 = L_0;
		// retval.Start = input.LT(1);
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_1 = V_0;
		RuntimeObject* L_2 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_2, 1);
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Start(System.Object) */, L_1, L_3);
		// CommonTree root_0 = null;
		V_1 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// IToken char_literal44 = null;
		V_2 = (RuntimeObject*)NULL;
		// IToken char_literal46 = null;
		V_3 = (RuntimeObject*)NULL;
		// expressionList_return expressionList45 = null;
		V_4 = (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C*)NULL;
		// CommonTree char_literal44_tree = null;
		V_5 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// CommonTree char_literal46_tree = null;
		V_6 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)NULL;
		// retval.value = new List<LogicalExpression>();
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_4 = V_0;
		List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_5 = (List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)il2cpp_codegen_object_new(List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05(L_5, List_1__ctor_mB35E06D2B52402201915FCEF0BB0FC8012A2DE05_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___value_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value_2), (void*)L_5);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_020e:
			{// begin finally (depth: 1)
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// root_0 = (CommonTree)adaptor.GetNilNode();
					RuntimeObject* L_6 = __this->___adaptor_8;
					NullCheck(L_6);
					RuntimeObject* L_7;
					L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNilNode() */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_6);
					V_1 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_7, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// char_literal44 = (IToken)Match(input, 46, FOLLOW_46_in_arguments1006);
					RuntimeObject* L_8 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_9 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_arguments1006_128;
					RuntimeObject* L_10;
					L_10 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_8, ((int32_t)46), L_9);
					V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal44_tree = (CommonTree)adaptor.Create(char_literal44);
					RuntimeObject* L_11 = __this->___adaptor_8;
					RuntimeObject* L_12 = V_2;
					NullCheck(L_11);
					RuntimeObject* L_13;
					L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_12);
					V_5 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_13, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal44_tree);
					RuntimeObject* L_14 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_15 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_16 = V_5;
					NullCheck(L_14);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_14, L_15, L_16);
					// var alt23 = 2;
					V_7 = 2;
					// var LA23_0 = input.LA(1);
					RuntimeObject* L_17 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_17);
					int32_t L_18;
					L_18 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IIntStream::LA(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_17, 1);
					V_8 = L_18;
					// if (LA23_0 >= INTEGER && LA23_0 <= NAME || LA23_0 == 39 || LA23_0 >= 43 && LA23_0 <= 46)
					int32_t L_19 = V_8;
					if ((((int32_t)L_19) < ((int32_t)4)))
					{
						goto IL_009e_2;
					}
				}
				{
					int32_t L_20 = V_8;
					if ((((int32_t)L_20) <= ((int32_t)((int32_t)11))))
					{
						goto IL_00b8_2;
					}
				}

IL_009e_2:
				{
					int32_t L_21 = V_8;
					if ((((int32_t)L_21) == ((int32_t)((int32_t)39))))
					{
						goto IL_00b8_2;
					}
				}
				{
					int32_t L_22 = V_8;
					if ((((int32_t)L_22) < ((int32_t)((int32_t)43))))
					{
						goto IL_00b5_2;
					}
				}
				{
					int32_t L_23 = V_8;
					G_B7_0 = ((((int32_t)((((int32_t)L_23) > ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_00b6_2;
				}

IL_00b5_2:
				{
					G_B7_0 = 0;
				}

IL_00b6_2:
				{
					G_B9_0 = G_B7_0;
					goto IL_00b9_2;
				}

IL_00b8_2:
				{
					G_B9_0 = 1;
				}

IL_00b9_2:
				{
					V_9 = (bool)G_B9_0;
					bool L_24 = V_9;
					if (!L_24)
					{
						goto IL_00c4_2;
					}
				}
				{
					// alt23 = 1;
					V_7 = 1;
				}

IL_00c4_2:
				{
					// switch (alt23)
					int32_t L_25 = V_7;
					V_11 = L_25;
					int32_t L_26 = V_11;
					V_10 = L_26;
					int32_t L_27 = V_10;
					if ((((int32_t)L_27) == ((int32_t)1)))
					{
						goto IL_00d3_2;
					}
				}
				{
					goto IL_0126_2;
				}

IL_00d3_2:
				{
					// PushFollow(FOLLOW_expressionList_in_arguments1010);
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_28 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_expressionList_in_arguments1010_129;
					BaseRecognizer_PushFollow_m450F9DA82D1B810E536F7E1FDF9328205FCBCA00(__this, L_28, NULL);
					// expressionList45 = expressionList();
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_29;
					L_29 = NCalcParser_expressionList_m9714F81848953C3B58959B2E8FA232FC0856231C(__this, NULL);
					V_4 = L_29;
					// state.followingStackPointer--;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_30 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
					RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_31 = L_30;
					NullCheck(L_31);
					int32_t L_32 = L_31->___followingStackPointer_1;
					NullCheck(L_31);
					L_31->___followingStackPointer_1 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
					// adaptor.AddChild(root_0, expressionList45.Tree);
					RuntimeObject* L_33 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_34 = V_1;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_35 = V_4;
					NullCheck(L_35);
					RuntimeObject* L_36;
					L_36 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_35);
					NullCheck(L_33);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_33, L_34, L_36);
					// retval.value = expressionList45 != null ? expressionList45.value : null;
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_37 = V_0;
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_38 = V_4;
					G_B14_0 = L_37;
					if (L_38)
					{
						G_B15_0 = L_37;
						goto IL_0117_2;
					}
				}
				{
					G_B16_0 = ((List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF*)(NULL));
					G_B16_1 = G_B14_0;
					goto IL_011e_2;
				}

IL_0117_2:
				{
					expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* L_39 = V_4;
					NullCheck(L_39);
					List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* L_40 = L_39->___value_2;
					G_B16_0 = L_40;
					G_B16_1 = G_B15_0;
				}

IL_011e_2:
				{
					NullCheck(G_B16_1);
					G_B16_1->___value_2 = G_B16_0;
					Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___value_2), (void*)G_B16_0);
					// break;
					goto IL_0126_2;
				}

IL_0126_2:
				{
					// char_literal46 = (IToken)Match(input, 47, FOLLOW_47_in_arguments1017);
					RuntimeObject* L_41 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					il2cpp_codegen_runtime_class_init_inline(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
					BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_42 = ((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_arguments1017_130;
					RuntimeObject* L_43;
					L_43 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, int32_t, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Match(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet) */, __this, L_41, ((int32_t)47), L_42);
					V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_43, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
					// char_literal46_tree = (CommonTree)adaptor.Create(char_literal46);
					RuntimeObject* L_44 = __this->___adaptor_8;
					RuntimeObject* L_45 = V_3;
					NullCheck(L_44);
					RuntimeObject* L_46;
					L_46 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_44, L_45);
					V_6 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_46, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
					// adaptor.AddChild(root_0, char_literal46_tree);
					RuntimeObject* L_47 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_48 = V_1;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_49 = V_6;
					NullCheck(L_47);
					InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_47, L_48, L_49);
					// retval.Stop = input.LT(-1);
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_50 = V_0;
					RuntimeObject* L_51 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
					NullCheck(L_51);
					RuntimeObject* L_52;
					L_52 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var, L_51, (-1));
					NullCheck(L_50);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Stop(System.Object) */, L_50, L_52);
					// retval.Tree = (CommonTree)adaptor.RulePostProcessing(root_0);
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_53 = V_0;
					RuntimeObject* L_54 = __this->___adaptor_8;
					CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_55 = V_1;
					NullCheck(L_54);
					RuntimeObject* L_56;
					L_56 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::RulePostProcessing(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_54, L_55);
					NullCheck(L_53);
					VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_53, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_56, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
					// adaptor.SetTokenBoundaries(retval.Tree, (IToken)retval.Start, (IToken)retval.Stop);
					RuntimeObject* L_57 = __this->___adaptor_8;
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_58 = V_0;
					NullCheck(L_58);
					RuntimeObject* L_59;
					L_59 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Tree() */, L_58);
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_60 = V_0;
					NullCheck(L_60);
					RuntimeObject* L_61;
					L_61 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_60);
					arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_62 = V_0;
					NullCheck(L_62);
					RuntimeObject* L_63;
					L_63 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Stop() */, L_62);
					NullCheck(L_57);
					InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(19 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::SetTokenBoundaries(System.Object,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_57, L_59, ((RuntimeObject*)Castclass((RuntimeObject*)L_61, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)), ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
					goto IL_020c_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_01b8_1;
				}
				throw e;
			}

CATCH_01b8_1:
			{// begin catch(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
				// catch (RecognitionException re)
				V_12 = ((RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*)IL2CPP_GET_ACTIVE_EXCEPTION(RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55*));
				// ReportError(re);
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_64 = V_12;
				VirtualActionInvoker1< RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(10 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::ReportError(Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_64);
				// Recover(input, re);
				RuntimeObject* L_65 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_66 = V_12;
				VirtualActionInvoker2< RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(16 /* System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Recover(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, __this, L_65, L_66);
				// retval.Tree = (CommonTree)adaptor.ErrorNode(input, (IToken)retval.Start, input.LT(-1), re);
				arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_67 = V_0;
				RuntimeObject* L_68 = __this->___adaptor_8;
				RuntimeObject* L_69 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_70 = V_0;
				NullCheck(L_70);
				RuntimeObject* L_71;
				L_71 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::get_Start() */, L_70);
				RuntimeObject* L_72 = ((Parser_t9FB84C4FD675D9FE563150842C05A65AA6261849*)__this)->___input_7;
				NullCheck(L_72);
				RuntimeObject* L_73;
				L_73 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ITokenStream::LT(System.Int32) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITokenStream_tB4C6E28FA049D672D52C8DBD93C0EE8D9015D047_il2cpp_TypeInfo_var)), L_72, (-1));
				RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_74 = V_12;
				NullCheck(L_68);
				RuntimeObject* L_75;
				L_75 = InterfaceFuncInvoker4< RuntimeObject*, RuntimeObject*, RuntimeObject*, RuntimeObject*, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* >::Invoke(4 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::ErrorNode(Unity.VisualScripting.Antlr3.Runtime.ITokenStream,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.IToken,Unity.VisualScripting.Antlr3.Runtime.RecognitionException) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var)), L_68, L_69, ((RuntimeObject*)Castclass((RuntimeObject*)L_71, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))), L_73, L_74);
				NullCheck(L_67);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::set_Tree(System.Object) */, L_67, ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_75, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)))));
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_020c_1;
			}// end catch (depth: 2)

IL_020c_1:
			{
				goto IL_0211;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0211:
	{
		// return retval;
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_76 = V_0;
		V_13 = L_76;
		goto IL_0216;
	}

IL_0216:
	{
		// }
		arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* L_77 = V_13;
		return L_77;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCalcParser__cctor_m1506F7C66600361103AAD3735A5FC8FF472C4792 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AC045CDB107222D470290520872F98BAD304712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1603453E15E296D9A743367FA75358E71A294BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string[] tokenNames = new[]
		// {
		//     "<invalid>",
		//     "<EOR>",
		//     "<DOWN>",
		//     "<UP>",
		//     "INTEGER",
		//     "FLOAT",
		//     "STRING",
		//     "DATETIME",
		//     "TRUE",
		//     "FALSE",
		//     "ID",
		//     "NAME",
		//     "LETTER",
		//     "DIGIT",
		//     "E",
		//     "EscapeSequence",
		//     "UnicodeEscape",
		//     "HexDigit",
		//     "WS",
		//     "'?'",
		//     "':'",
		//     "'||'",
		//     "'or'",
		//     "'&&'",
		//     "'and'",
		//     "'|'",
		//     "'^'",
		//     "'&'",
		//     "'=='",
		//     "'='",
		//     "'!='",
		//     "'<>'",
		//     "'<'",
		//     "'<='",
		//     "'>'",
		//     "'>='",
		//     "'<<'",
		//     "'>>'",
		//     "'+'",
		//     "'-'",
		//     "'*'",
		//     "'/'",
		//     "'%'",
		//     "'!'",
		//     "'not'",
		//     "'~'",
		//     "'('",
		//     "')'",
		//     "','"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)49));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral839BD4C6746730E90C7A6AF91609B7A7DB0BF49E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral43E23BD061A3CB2D12511D97BE7338010A8B05AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral52C5BFED2F51E0C6CACDAF9E8C08D8A4902F5098);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF34E659C4B872B7C5885697D738D61D1CF0D3E4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCB4985E8F90C7FA1F0E650F37DD0D921D1BF99E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral57E1275F35D877D6D4A594D1086A8E00459D30F7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralD48F72658915912FA6CE055AB012D58CF5AB3612);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral3DBD56A88F354EACFAFE433FC930A93888C30822);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral7C9A05991CF6AF87C1471CE7038482BC0F7AA079);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralBC93B6A90A4449B00C828AA910BA86B821FF7C5B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral0AC045CDB107222D470290520872F98BAD304712);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral0AC045CDB107222D470290520872F98BAD304712);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralC3CD665F87FC6202F03A4DC9229A0C7766E7A77C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral1603453E15E296D9A743367FA75358E71A294BFE);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral1603453E15E296D9A743367FA75358E71A294BFE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral54C6E9459BC790C5A4A3CE1930E3327212EA442D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral5805A0FB324E5C6CEA6CC362E56DB2C5050CB030);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralA85E05BB895F5849332207594AD5147BCBB176DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralE4D610383A110907EBBC6E764324DEE77D36FCE6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteralC34ADFCB666054F3E69F6563783A6CF71501C1FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteralDBAF93E807ED829BC77A5BC40002AF92E488B556);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral275367C97244B25D213BEB98B8BBB65D932C1402);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteralD8BD06993FE0DC2B3159161D7E24A4B2B9BF138E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralD6A3D3FD460B612E06CEDB1D52101568E0019F15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral92E65E5CB9CBDB07BF05CBC3BE7E58875C404B95);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteralC1D00124B0DDEC6154F3EF1FC1B1C8935E12B7F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral1715ACFA0FE6E68AD2558687210B00F466D58074);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral685C18BAB6BF03ED87AC8FE6593F9316E98BEC43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralFF53E95B5FDF6317CD9E7F2EA730ACED9ECBE7F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral64145A4C661B03833CF2373FA0DDE5515EFED5DD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteral7AC264B8BFBB8CA05857A9F56C49ED4018187AEC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralBF8B5610C2E749CDA971813F2601B7DDAF980B54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral3514C58630DD3A6AAA4E293DC756A913B746BFAC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral79046067E4AC983F0D2A6ACA479A10CE278A49BF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral2FF5C38C83E12CB32E44510BAAD2BAB11392D5C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral97C0D56A99BE644C010699AC74FC430DB8BB99BC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral0015A3CE03B062AA77C4DBEDB33AF749FADBB80E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral820BC9D70EA6AE8245DB4DEA096E572E9B9A86DC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteralD4408813A01DBBB36D8DFAF744AB10024D68CCAE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral17D8C2CC055B5CA7D4070232202825730C7B58FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteral9BF7C23368DD03F81E3F20769FF59E1F33045650);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteralFFCD9D5AF3761817B9816A4316DE6CA4883E9975);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral9B7A4CD5FB9998F395948B8ACBE2F69A22B8050D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteralC738BB6B953584EFB12E75585300B76B1BD237EE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteralD9566034F4FB3DC59B12BB6CAA454DF680D03522);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteral31C41112B7DD380345C2F6555DB2A970209CCB01);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___tokenNames_57 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___tokenNames_57), (void*)L_49);
		// private static NumberFormatInfo numberFormatInfo = new NumberFormatInfo();
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_50 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_50, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___numberFormatInfo_58 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___numberFormatInfo_58), (void*)L_50);
		// public static readonly BitSet FOLLOW_logicalExpression_in_ncalcExpression56 = new BitSet(new[] { 0x0000000000000000UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_52 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_52, L_51, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_ncalcExpression56_59 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_ncalcExpression56_59), (void*)L_52);
		// public static readonly BitSet FOLLOW_EOF_in_ncalcExpression58 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_54 = L_53;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_55 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_55, L_54, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_EOF_in_ncalcExpression58_60 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_EOF_in_ncalcExpression58_60), (void*)L_55);
		// public static readonly BitSet FOLLOW_conditionalExpression_in_logicalExpression78 = new BitSet(new[] { 0x0000000000080002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)524290)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_58 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_58, L_57, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression78_61 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression78_61), (void*)L_58);
		// public static readonly BitSet FOLLOW_19_in_logicalExpression84 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = L_59;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_61 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_61, L_60, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_19_in_logicalExpression84_62 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_19_in_logicalExpression84_62), (void*)L_61);
		// public static readonly BitSet FOLLOW_conditionalExpression_in_logicalExpression88 = new BitSet(new[] { 0x0000000000100000UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_62 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)1048576)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_64 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_64, L_63, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression88_63 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression88_63), (void*)L_64);
		// public static readonly BitSet FOLLOW_20_in_logicalExpression90 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = L_65;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_67 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_67, L_66, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_20_in_logicalExpression90_64 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_20_in_logicalExpression90_64), (void*)L_67);
		// public static readonly BitSet FOLLOW_conditionalExpression_in_logicalExpression94 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_68 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = L_68;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_70 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_70, L_69, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression94_65 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_logicalExpression94_65), (void*)L_70);
		// public static readonly BitSet FOLLOW_booleanAndExpression_in_conditionalExpression121 = new BitSet(new[] { 0x0000000000600002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)6291458)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_73 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_73, L_72, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_booleanAndExpression_in_conditionalExpression121_66 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_booleanAndExpression_in_conditionalExpression121_66), (void*)L_73);
		// public static readonly BitSet FOLLOW_set_in_conditionalExpression130 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_74 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_76 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_76, L_75, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_conditionalExpression130_67 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_conditionalExpression130_67), (void*)L_76);
		// public static readonly BitSet FOLLOW_conditionalExpression_in_conditionalExpression146 = new BitSet(new[] { 0x0000000000600002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)6291458)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_79 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_79, L_78, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_conditionalExpression146_68 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_conditionalExpression_in_conditionalExpression146_68), (void*)L_79);
		// public static readonly BitSet FOLLOW_bitwiseOrExpression_in_booleanAndExpression180 = new BitSet(new[] { 0x0000000001800002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = L_80;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)25165826)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_82 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_82, L_81, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180_69 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression180_69), (void*)L_82);
		// public static readonly BitSet FOLLOW_set_in_booleanAndExpression189 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_83 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = L_83;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_85 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_85, L_84, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_booleanAndExpression189_70 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_booleanAndExpression189_70), (void*)L_85);
		// public static readonly BitSet FOLLOW_bitwiseOrExpression_in_booleanAndExpression205 = new BitSet(new[] { 0x0000000001800002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_86 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_87 = L_86;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)25165826)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_88 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_88, L_87, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205_71 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_booleanAndExpression205_71), (void*)L_88);
		// public static readonly BitSet FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237 = new BitSet(new[] { 0x0000000002000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = L_89;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)33554434)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_91 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_91);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_91, L_90, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237_72 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseXOrExpression_in_bitwiseOrExpression237_72), (void*)L_91);
		// public static readonly BitSet FOLLOW_25_in_bitwiseOrExpression246 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_92 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = L_92;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_94 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_94);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_94, L_93, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_25_in_bitwiseOrExpression246_73 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_25_in_bitwiseOrExpression246_73), (void*)L_94);
		// public static readonly BitSet FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256 = new BitSet(new[] { 0x0000000002000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = L_95;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)33554434)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_97 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_97, L_96, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256_74 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseOrExpression_in_bitwiseOrExpression256_74), (void*)L_97);
		// public static readonly BitSet FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290 = new BitSet(new[] { 0x0000000004000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_98 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_99 = L_98;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)67108866)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_100 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_100, L_99, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290_75 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression290_75), (void*)L_100);
		// public static readonly BitSet FOLLOW_26_in_bitwiseXOrExpression299 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_102 = L_101;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_103 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_103);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_103, L_102, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_26_in_bitwiseXOrExpression299_76 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_26_in_bitwiseXOrExpression299_76), (void*)L_103);
		// public static readonly BitSet FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309 = new BitSet(new[] { 0x0000000004000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_104 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)67108866)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_106 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_106);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_106, L_105, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309_77 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_bitwiseAndExpression_in_bitwiseXOrExpression309_77), (void*)L_106);
		// public static readonly BitSet FOLLOW_equalityExpression_in_bitwiseAndExpression341 = new BitSet(new[] { 0x0000000008000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_108 = L_107;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)134217730)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_109 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_109);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_109, L_108, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression341_78 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression341_78), (void*)L_109);
		// public static readonly BitSet FOLLOW_27_in_bitwiseAndExpression350 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_111 = L_110;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_112 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_112);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_112, L_111, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_27_in_bitwiseAndExpression350_79 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_27_in_bitwiseAndExpression350_79), (void*)L_112);
		// public static readonly BitSet FOLLOW_equalityExpression_in_bitwiseAndExpression360 = new BitSet(new[] { 0x0000000008000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = L_113;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int32_t)134217730)));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_115 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_115, L_114, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression360_80 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_equalityExpression_in_bitwiseAndExpression360_80), (void*)L_115);
		// public static readonly BitSet FOLLOW_relationalExpression_in_equalityExpression394 = new BitSet(new[] { 0x00000000F0000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_117 = L_116;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-268435454))));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_118 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_118);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_118, L_117, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression394_81 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression394_81), (void*)L_118);
		// public static readonly BitSet FOLLOW_set_in_equalityExpression405 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = L_119;
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_121 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_121);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_121, L_120, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression405_82 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression405_82), (void*)L_121);
		// public static readonly BitSet FOLLOW_set_in_equalityExpression422 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_122 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = L_122;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_124 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_124);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_124, L_123, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression422_83 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_equalityExpression422_83), (void*)L_124);
		// public static readonly BitSet FOLLOW_relationalExpression_in_equalityExpression441 = new BitSet(new[] { 0x00000000F0000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_126 = L_125;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)-268435454))));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_127 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_127);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_127, L_126, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression441_84 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_relationalExpression_in_equalityExpression441_84), (void*)L_127);
		// public static readonly BitSet FOLLOW_shiftExpression_in_relationalExpression474 = new BitSet(new[] { 0x0000000F00000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_128 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_129 = L_128;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)64424509442LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_130 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_130);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_130, L_129, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression474_85 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression474_85), (void*)L_130);
		// public static readonly BitSet FOLLOW_32_in_relationalExpression485 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_131 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = L_131;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_133 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_133);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_133, L_132, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_32_in_relationalExpression485_86 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_32_in_relationalExpression485_86), (void*)L_133);
		// public static readonly BitSet FOLLOW_33_in_relationalExpression495 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_135 = L_134;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_136 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_136);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_136, L_135, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_33_in_relationalExpression495_87 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_33_in_relationalExpression495_87), (void*)L_136);
		// public static readonly BitSet FOLLOW_34_in_relationalExpression506 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_138 = L_137;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_139 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_139);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_139, L_138, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_34_in_relationalExpression506_88 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_34_in_relationalExpression506_88), (void*)L_139);
		// public static readonly BitSet FOLLOW_35_in_relationalExpression516 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_141 = L_140;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_142 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_142);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_142, L_141, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_35_in_relationalExpression516_89 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_35_in_relationalExpression516_89), (void*)L_142);
		// public static readonly BitSet FOLLOW_shiftExpression_in_relationalExpression528 = new BitSet(new[] { 0x0000000F00000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_144 = L_143;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)64424509442LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_145 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_145, L_144, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression528_90 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_shiftExpression_in_relationalExpression528_90), (void*)L_145);
		// public static readonly BitSet FOLLOW_additiveExpression_in_shiftExpression560 = new BitSet(new[] { 0x0000003000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_146 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_147 = L_146;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)206158430210LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_148 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_148);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_148, L_147, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression560_91 = L_148;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression560_91), (void*)L_148);
		// public static readonly BitSet FOLLOW_36_in_shiftExpression571 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_149 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_150 = L_149;
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_151 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_151);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_151, L_150, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_36_in_shiftExpression571_92 = L_151;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_36_in_shiftExpression571_92), (void*)L_151);
		// public static readonly BitSet FOLLOW_37_in_shiftExpression581 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_153 = L_152;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_154 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_154);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_154, L_153, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_37_in_shiftExpression581_93 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_37_in_shiftExpression581_93), (void*)L_154);
		// public static readonly BitSet FOLLOW_additiveExpression_in_shiftExpression593 = new BitSet(new[] { 0x0000003000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_155 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_156 = L_155;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)206158430210LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_157 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_157);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_157, L_156, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression593_94 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_additiveExpression_in_shiftExpression593_94), (void*)L_157);
		// public static readonly BitSet FOLLOW_multiplicativeExpression_in_additiveExpression625 = new BitSet(new[] { 0x000000C000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_158 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = L_158;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)824633720834LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_160 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_160);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_160, L_159, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression625_95 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression625_95), (void*)L_160);
		// public static readonly BitSet FOLLOW_38_in_additiveExpression636 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_161 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_162 = L_161;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_163 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_163);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_163, L_162, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_38_in_additiveExpression636_96 = L_163;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_38_in_additiveExpression636_96), (void*)L_163);
		// public static readonly BitSet FOLLOW_39_in_additiveExpression646 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_165 = L_164;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_166 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_166);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_166, L_165, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_additiveExpression646_97 = L_166;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_additiveExpression646_97), (void*)L_166);
		// public static readonly BitSet FOLLOW_multiplicativeExpression_in_additiveExpression658 = new BitSet(new[] { 0x000000C000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_167 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_168 = L_167;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)824633720834LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_169 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_169);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_169, L_168, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression658_98 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_multiplicativeExpression_in_additiveExpression658_98), (void*)L_169);
		// public static readonly BitSet FOLLOW_unaryExpression_in_multiplicativeExpression690 = new BitSet(new[] { 0x0000070000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_171 = L_170;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)7696581394434LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_172 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_172);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_172, L_171, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression690_99 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression690_99), (void*)L_172);
		// public static readonly BitSet FOLLOW_40_in_multiplicativeExpression701 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_173 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = L_173;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_175 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_175);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_175, L_174, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_40_in_multiplicativeExpression701_100 = L_175;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_40_in_multiplicativeExpression701_100), (void*)L_175);
		// public static readonly BitSet FOLLOW_41_in_multiplicativeExpression711 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_176 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_177 = L_176;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_178 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_178);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_178, L_177, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_41_in_multiplicativeExpression711_101 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_41_in_multiplicativeExpression711_101), (void*)L_178);
		// public static readonly BitSet FOLLOW_42_in_multiplicativeExpression721 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = L_179;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_181 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_181);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_181, L_180, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_42_in_multiplicativeExpression721_102 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_42_in_multiplicativeExpression721_102), (void*)L_181);
		// public static readonly BitSet FOLLOW_unaryExpression_in_multiplicativeExpression733 = new BitSet(new[] { 0x0000070000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_182 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_183 = L_182;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)7696581394434LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_184 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_184);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_184, L_183, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression733_103 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_unaryExpression_in_multiplicativeExpression733_103), (void*)L_184);
		// public static readonly BitSet FOLLOW_primaryExpression_in_unaryExpression760 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_186 = L_185;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_187 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_187);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_187, L_186, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression760_104 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression760_104), (void*)L_187);
		// public static readonly BitSet FOLLOW_set_in_unaryExpression771 = new BitSet(new[] { 0x0000400000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_189 = L_188;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744181744LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_190 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_190);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_190, L_189, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_unaryExpression771_105 = L_190;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_set_in_unaryExpression771_105), (void*)L_190);
		// public static readonly BitSet FOLLOW_primaryExpression_in_unaryExpression779 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_191 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_192 = L_191;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_193 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_193);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_193, L_192, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression779_106 = L_193;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression779_106), (void*)L_193);
		// public static readonly BitSet FOLLOW_45_in_unaryExpression791 = new BitSet(new[] { 0x0000400000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_194 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = L_194;
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744181744LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_196 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_196);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_196, L_195, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_45_in_unaryExpression791_107 = L_196;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_45_in_unaryExpression791_107), (void*)L_196);
		// public static readonly BitSet FOLLOW_primaryExpression_in_unaryExpression794 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_198 = L_197;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_199 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_199);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_199, L_198, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression794_108 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression794_108), (void*)L_199);
		// public static readonly BitSet FOLLOW_39_in_unaryExpression805 = new BitSet(new[] { 0x0000400000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_200 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_201 = L_200;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744181744LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_202 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_202);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_202, L_201, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_unaryExpression805_109 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_39_in_unaryExpression805_109), (void*)L_202);
		// public static readonly BitSet FOLLOW_primaryExpression_in_unaryExpression807 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_203 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = L_203;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_205 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_205);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_205, L_204, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression807_110 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_primaryExpression_in_unaryExpression807_110), (void*)L_205);
		// public static readonly BitSet FOLLOW_46_in_primaryExpression829 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_206 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_207 = L_206;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_208 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_208);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_208, L_207, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_primaryExpression829_111 = L_208;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_primaryExpression829_111), (void*)L_208);
		// public static readonly BitSet FOLLOW_logicalExpression_in_primaryExpression831 = new BitSet(new[] { 0x0000800000000000UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_209 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_210 = L_209;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)140737488355328LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_211 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_211);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_211, L_210, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_primaryExpression831_112 = L_211;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_primaryExpression831_112), (void*)L_211);
		// public static readonly BitSet FOLLOW_47_in_primaryExpression833 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_212 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = L_212;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_214 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_214);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_214, L_213, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_primaryExpression833_113 = L_214;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_primaryExpression833_113), (void*)L_214);
		// public static readonly BitSet FOLLOW_value_in_primaryExpression843 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_215 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_216 = L_215;
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_217 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_217);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_217, L_216, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_value_in_primaryExpression843_114 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_value_in_primaryExpression843_114), (void*)L_217);
		// public static readonly BitSet FOLLOW_identifier_in_primaryExpression851 = new BitSet(new[] { 0x0000400000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_218 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_219 = L_218;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744177666LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_220 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_220);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_220, L_219, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_identifier_in_primaryExpression851_115 = L_220;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_identifier_in_primaryExpression851_115), (void*)L_220);
		// public static readonly BitSet FOLLOW_arguments_in_primaryExpression856 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_221 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_222 = L_221;
		NullCheck(L_222);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_223 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_223);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_223, L_222, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_arguments_in_primaryExpression856_116 = L_223;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_arguments_in_primaryExpression856_116), (void*)L_223);
		// public static readonly BitSet FOLLOW_INTEGER_in_value876 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_224 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_225 = L_224;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_226 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_226);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_226, L_225, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_INTEGER_in_value876_117 = L_226;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_INTEGER_in_value876_117), (void*)L_226);
		// public static readonly BitSet FOLLOW_FLOAT_in_value884 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_227 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_228 = L_227;
		NullCheck(L_228);
		(L_228)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_229 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_229);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_229, L_228, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FLOAT_in_value884_118 = L_229;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FLOAT_in_value884_118), (void*)L_229);
		// public static readonly BitSet FOLLOW_STRING_in_value892 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_230 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_231 = L_230;
		NullCheck(L_231);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_232 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_232);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_232, L_231, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_STRING_in_value892_119 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_STRING_in_value892_119), (void*)L_232);
		// public static readonly BitSet FOLLOW_DATETIME_in_value901 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_233 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_234 = L_233;
		NullCheck(L_234);
		(L_234)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_235 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_235);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_235, L_234, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_DATETIME_in_value901_120 = L_235;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_DATETIME_in_value901_120), (void*)L_235);
		// public static readonly BitSet FOLLOW_TRUE_in_value908 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_236 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_237 = L_236;
		NullCheck(L_237);
		(L_237)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_238 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_238);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_238, L_237, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_TRUE_in_value908_121 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_TRUE_in_value908_121), (void*)L_238);
		// public static readonly BitSet FOLLOW_FALSE_in_value916 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_239 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_240 = L_239;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_241 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_241);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_241, L_240, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FALSE_in_value916_122 = L_241;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_FALSE_in_value916_122), (void*)L_241);
		// public static readonly BitSet FOLLOW_ID_in_identifier934 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_242 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_243 = L_242;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_244 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_244);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_244, L_243, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_ID_in_identifier934_123 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_ID_in_identifier934_123), (void*)L_244);
		// public static readonly BitSet FOLLOW_NAME_in_identifier942 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_245 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_246 = L_245;
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_247 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_247);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_247, L_246, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_NAME_in_identifier942_124 = L_247;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_NAME_in_identifier942_124), (void*)L_247);
		// public static readonly BitSet FOLLOW_logicalExpression_in_expressionList966 = new BitSet(new[] { 0x0001000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_248 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_249 = L_248;
		NullCheck(L_249);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)281474976710658LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_250 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_250);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_250, L_249, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList966_125 = L_250;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList966_125), (void*)L_250);
		// public static readonly BitSet FOLLOW_48_in_expressionList973 = new BitSet(new[] { 0x0000788000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_251 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_252 = L_251;
		NullCheck(L_252);
		(L_252)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)132491151151088LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_253 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_253);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_253, L_252, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_48_in_expressionList973_126 = L_253;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_48_in_expressionList973_126), (void*)L_253);
		// public static readonly BitSet FOLLOW_logicalExpression_in_expressionList977 = new BitSet(new[] { 0x0001000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_254 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_255 = L_254;
		NullCheck(L_255);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)281474976710658LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_256 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_256);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_256, L_255, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList977_127 = L_256;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_logicalExpression_in_expressionList977_127), (void*)L_256);
		// public static readonly BitSet FOLLOW_46_in_arguments1006 = new BitSet(new[] { 0x0000F88000000FF0UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_257 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_258 = L_257;
		NullCheck(L_258);
		(L_258)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)273228639506416LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_259 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_259);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_259, L_258, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_arguments1006_128 = L_259;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_46_in_arguments1006_128), (void*)L_259);
		// public static readonly BitSet FOLLOW_expressionList_in_arguments1010 = new BitSet(new[] { 0x0000800000000000UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_260 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_261 = L_260;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)140737488355328LL));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_262 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_262);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_262, L_261, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_expressionList_in_arguments1010_129 = L_262;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_expressionList_in_arguments1010_129), (void*)L_262);
		// public static readonly BitSet FOLLOW_47_in_arguments1017 = new BitSet(new[] { 0x0000000000000002UL });
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_263 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_264 = L_263;
		NullCheck(L_264);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2));
		BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* L_265 = (BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6*)il2cpp_codegen_object_new(BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_il2cpp_TypeInfo_var);
		NullCheck(L_265);
		BitSet__ctor_mF3C3A7DF9A1BA831EA86093FFF8ADE66BFA50B57(L_265, L_264, NULL);
		((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_arguments1017_130 = L_265;
		Il2CppCodeGenWriteBarrier((void**)(&((NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_StaticFields*)il2cpp_codegen_static_fields_for(NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0_il2cpp_TypeInfo_var))->___FOLLOW_47_in_arguments1017_130), (void*)L_265);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ncalcExpression_return_get_Tree_m25FA69C84C0E7B4D9FAB6B2FBDE8BDA6B226E48B (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return_set_Tree_m526E16C672F4A31CCF5B6BBF6A62C34EDDCE18D3 (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* logicalExpression_return_get_Tree_m47FC55BA1965114A63281798B470109FF06A5FC6 (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return_set_Tree_m37615E3C802912EF29AABF3131391A21472A6A1F (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* conditionalExpression_return_get_Tree_m7B00F4BCC18C932058B8878CFB6FE23E6EAE5888 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return_set_Tree_m4DCA1F66FEA8A6D2089F4E3D303A1F337043E849 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* booleanAndExpression_return_get_Tree_m4A3DBEDA3FEEB27060C343E3AC1312A9FE1AA965 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return_set_Tree_m804E06B46D0C9D966E08D2183E2573437779CC14 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseOrExpression_return_get_Tree_m7616E8D8DBA134F58E0CDE0A3E00211CE135683B (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return_set_Tree_mA8B42B36ED141EF81ECC7BCF3AEE279FC7DDFA03 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseXOrExpression_return_get_Tree_mDCD92F7B30C5C0C2082CBE367160D3FE6D4E9622 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return_set_Tree_mF42C5260CAEAE16659EB23CE30503DDE935DB599 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseAndExpression_return_get_Tree_mFEF73BA1F82770B77896085106AB6A4C1C940040 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return_set_Tree_mFA1C91FF73AD56348572CD428DAD444076BDF5E8 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* equalityExpression_return_get_Tree_m62DE6B858A75C7C1263EDA6801016507981C88F5 (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return_set_Tree_m1EAFCEDC072CAB7C92A09A8E86888D05A9EE52D1 (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* relationalExpression_return_get_Tree_mCAE9CDD4E575A356921EF4954880B98A2CA775BA (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return_set_Tree_mCD9919CCC08608D2DE71E5F87F3FA042599F7919 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* shiftExpression_return_get_Tree_mC7FB6F92729DCADB2B13440C7289DF494F1100EA (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return_set_Tree_mDB7F9948616A4E701032595D7DE599B85F7705B7 (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* additiveExpression_return_get_Tree_m251D5360DEC7D9C6870284A8D8604A51F53339BD (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return_set_Tree_mE782367D93C327CFD39BCFB5602D2C4E9E4FAF98 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* multiplicativeExpression_return_get_Tree_m91EBDD30267B15C0F1FC2ACE126F9AB0B38D40DB (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return_set_Tree_mBA83AC1DE18FD7E1D4BEF0F19815A02CF5F2A8AE (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unaryExpression_return_get_Tree_mE07C150C325AE6DB206226A63D022E8D986042D8 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return_set_Tree_mA24F81046099E1E681E95090F5EA88F4E8568BB3 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* primaryExpression_return_get_Tree_mCB8524A9E1AA313BCF8710D2E8686D3104214205 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return_set_Tree_m4FDF089D1628CD32FDC6D066DFA132ADEFEFA5E0 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* value_return_get_Tree_m7F398FCF1A6F68554E94F9CB20A9F2C8A0665594 (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return_set_Tree_m9AA445CFA3DA5B81A338DE2F944A7D0EF2A26D81 (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* identifier_return_get_Tree_mC911B456349FB5AF7A896EF70089D24023406D4D (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return_set_Tree_mA1DEFC2FF6BF66309052BA15F9D0BDB2C269AD67 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* expressionList_return_get_Tree_m7492B83626B037F9D2FE29E5B1BCDD25DA9EC72D (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return_set_Tree_m3E9798B55F6865DC07A4C738440BC9AA4769953A (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7 (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* arguments_return_get_Tree_m6BDE202D6590A78646A6B0D16500B4D92E595DDD (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return_set_Tree_mAA2BAF43843A5E5A57F044054FCCFB32F07D3164 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
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
// System.Object Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterArgs_get_Result_m0C577BECCB47D7097879C041C6EF76D7AB597AB7 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return _result;
		RuntimeObject* L_0 = __this->____result_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::set_Result(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_Result_mEB9F6FC8CA211EF0F80C66161F5A91A94A205BD8 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _result = value;
		RuntimeObject* L_0 = ___value0;
		__this->____result_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____result_1), (void*)L_0);
		// HasResult = true;
		ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::get_HasResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterArgs_get_HasResult_m00CBA2CBCC312D378EAAF7665634BB5B0CE2F444 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasResult { get; set; }
		bool L_0 = __this->___U3CHasResultU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::set_HasResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool HasResult { get; set; }
		bool L_0 = ___value0;
		__this->___U3CHasResultU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs__ctor_m8AE187E045B505540DE24CDB377ECE4B14F96E42 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
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
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor__ctor_m375F92459AC15A3D38B7941759CB2727AD953C42 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SerializationVisitor()
		LogicalExpressionVisitor__ctor_m24C7C345ACEE6EADDD7106CAC9D789BFEBB0F3D9(__this, NULL);
		// Result = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline(__this, L_0, NULL);
		// _numberFormatInfo = new NumberFormatInfo { NumberDecimalSeparator = "." };
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_1, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = L_1;
		NullCheck(L_2);
		NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		__this->____numberFormatInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numberFormatInfo_0), (void*)L_2);
		// }
		return;
	}
}
// System.Text.StringBuilder Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::set_Result(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.TernaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mF41318032810D31B1C2AA564FA7DE48DF8152B47 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* ___ternary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EncapsulateNoValue(ternary.LeftExpression);
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_0 = ___ternary0;
		NullCheck(L_0);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1;
		L_1 = TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline(L_0, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_1, NULL);
		// Result.Append("? ");
		StringBuilder_t* L_2;
		L_2 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920, NULL);
		// EncapsulateNoValue(ternary.MiddleExpression);
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_4 = ___ternary0;
		NullCheck(L_4);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_5;
		L_5 = TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline(L_4, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_5, NULL);
		// Result.Append(": ");
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		// EncapsulateNoValue(ternary.RightExpression);
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_8 = ___ternary0;
		NullCheck(L_8);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_9;
		L_9 = TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline(L_8, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.BinaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m6E14C2211C9FAF620D5D07FA6C4EC16F8A45668D (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* ___binary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC47381A312D0BE38226537F85448FFF2264564C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// EncapsulateNoValue(binary.LeftExpression);
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_0 = ___binary0;
		NullCheck(L_0);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1;
		L_1 = BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline(L_0, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_1, NULL);
		// switch (binary.Type)
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_2 = ___binary0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_0146;
			}
			case 3:
			{
				goto IL_0104;
			}
			case 4:
			{
				goto IL_00d8;
			}
			case 5:
			{
				goto IL_00ee;
			}
			case 6:
			{
				goto IL_00c2;
			}
			case 7:
			{
				goto IL_00ac;
			}
			case 8:
			{
				goto IL_011a;
			}
			case 9:
			{
				goto IL_015c;
			}
			case 10:
			{
				goto IL_0130;
			}
			case 11:
			{
				goto IL_0096;
			}
			case 12:
			{
				goto IL_016f;
			}
			case 13:
			{
				goto IL_0195;
			}
			case 14:
			{
				goto IL_0182;
			}
			case 15:
			{
				goto IL_01a8;
			}
			case 16:
			{
				goto IL_01bb;
			}
			case 17:
			{
				goto IL_01ce;
			}
		}
	}
	{
		goto IL_01e1;
	}

IL_006a:
	{
		// Result.Append("and ");
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9, NULL);
		// break;
		goto IL_01e1;
	}

IL_0080:
	{
		// Result.Append("or ");
		StringBuilder_t* L_8;
		L_8 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC, NULL);
		// break;
		goto IL_01e1;
	}

IL_0096:
	{
		// Result.Append("/ ");
		StringBuilder_t* L_10;
		L_10 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20, NULL);
		// break;
		goto IL_01e1;
	}

IL_00ac:
	{
		// Result.Append("= ");
		StringBuilder_t* L_12;
		L_12 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E, NULL);
		// break;
		goto IL_01e1;
	}

IL_00c2:
	{
		// Result.Append("> ");
		StringBuilder_t* L_14;
		L_14 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, NULL);
		// break;
		goto IL_01e1;
	}

IL_00d8:
	{
		// Result.Append(">= ");
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9, NULL);
		// break;
		goto IL_01e1;
	}

IL_00ee:
	{
		// Result.Append("< ");
		StringBuilder_t* L_18;
		L_18 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3, NULL);
		// break;
		goto IL_01e1;
	}

IL_0104:
	{
		// Result.Append("<= ");
		StringBuilder_t* L_20;
		L_20 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987, NULL);
		// break;
		goto IL_01e1;
	}

IL_011a:
	{
		// Result.Append("- ");
		StringBuilder_t* L_22;
		L_22 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32, NULL);
		// break;
		goto IL_01e1;
	}

IL_0130:
	{
		// Result.Append("% ");
		StringBuilder_t* L_24;
		L_24 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C, NULL);
		// break;
		goto IL_01e1;
	}

IL_0146:
	{
		// Result.Append("!= ");
		StringBuilder_t* L_26;
		L_26 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B, NULL);
		// break;
		goto IL_01e1;
	}

IL_015c:
	{
		// Result.Append("+ ");
		StringBuilder_t* L_28;
		L_28 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66, NULL);
		// break;
		goto IL_01e1;
	}

IL_016f:
	{
		// Result.Append("* ");
		StringBuilder_t* L_30;
		L_30 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52, NULL);
		// break;
		goto IL_01e1;
	}

IL_0182:
	{
		// Result.Append("& ");
		StringBuilder_t* L_32;
		L_32 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13, NULL);
		// break;
		goto IL_01e1;
	}

IL_0195:
	{
		// Result.Append("| ");
		StringBuilder_t* L_34;
		L_34 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D, NULL);
		// break;
		goto IL_01e1;
	}

IL_01a8:
	{
		// Result.Append("~ ");
		StringBuilder_t* L_36;
		L_36 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882, NULL);
		// break;
		goto IL_01e1;
	}

IL_01bb:
	{
		// Result.Append("<< ");
		StringBuilder_t* L_38;
		L_38 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2, NULL);
		// break;
		goto IL_01e1;
	}

IL_01ce:
	{
		// Result.Append(">> ");
		StringBuilder_t* L_40;
		L_40 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5, NULL);
		// break;
		goto IL_01e1;
	}

IL_01e1:
	{
		// EncapsulateNoValue(binary.RightExpression);
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_42 = ___binary0;
		NullCheck(L_42);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_43;
		L_43 = BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline(L_42, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_43, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mA2167A9765FE3128958F0CB0D0AA1A94CF33B896 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* ___unary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (unary.Type)
		UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_0 = ___unary0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_001e:
	{
		// Result.Append("!");
		StringBuilder_t* L_4;
		L_4 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		// break;
		goto IL_0057;
	}

IL_0031:
	{
		// Result.Append("-");
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		// break;
		goto IL_0057;
	}

IL_0044:
	{
		// Result.Append("~");
		StringBuilder_t* L_8;
		L_8 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D, NULL);
		// break;
		goto IL_0057;
	}

IL_0057:
	{
		// EncapsulateNoValue(unary.Expression);
		UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_10 = ___unary0;
		NullCheck(L_10);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_11;
		L_11 = UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline(L_10, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.ValueExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mAF3BD72EE9DAF030DB798A90E571B62E3F08D2AC (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// switch (value.Type)
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_00b5;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0105;
	}

IL_0029:
	{
		// Result.Append(value.Value).Append(" ");
		StringBuilder_t* L_4;
		L_4 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_5 = ___value0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_5, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_6, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		goto IL_0105;
	}

IL_004a:
	{
		// Result.Append("#").Append(value.Value).Append("#").Append(" ");
		StringBuilder_t* L_9;
		L_9 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_11 = ___value0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_11, NULL);
		NullCheck(L_10);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_12, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		goto IL_0105;
	}

IL_007f:
	{
		// Result.Append(decimal.Parse(value.Value.ToString()).ToString(_numberFormatInfo)).Append(" ");
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_17 = ___value0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_20;
		L_20 = Decimal_Parse_mF59EB26DED52ED2D5E804452CFC9102E3347C10D(L_19, NULL);
		V_2 = L_20;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_21 = __this->____numberFormatInfo_0;
		String_t* L_22;
		L_22 = Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762((&V_2), L_21, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_22, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		goto IL_0105;
	}

IL_00b5:
	{
		// Result.Append(value.Value).Append(" ");
		StringBuilder_t* L_25;
		L_25 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_26 = ___value0;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_26, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_25, L_27, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		goto IL_0105;
	}

IL_00d3:
	{
		// Result.Append("'").Append(value.Value).Append("'").Append(" ");
		StringBuilder_t* L_30;
		L_30 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_32 = ___value0;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_32, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_31, L_33, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		goto IL_0105;
	}

IL_0105:
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.FunctionExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m61FDF5B476F37E1A8710A3532564AB9790487D65 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* ___function0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// Result.Append(function.Identifier.Name);
		StringBuilder_t* L_0;
		L_0 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_1 = ___function0;
		NullCheck(L_1);
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_2;
		L_2 = FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline(L_2, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_3, NULL);
		// Result.Append("(");
		StringBuilder_t* L_5;
		L_5 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		// for (var i = 0; i < function.Expressions.Length; i++)
		V_0 = 0;
		goto IL_0080;
	}

IL_002d:
	{
		// function.Expressions[i].Accept(this);
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_7 = ___function0;
		NullCheck(L_7);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_8;
		L_8 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_7, NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor) */, L_11, __this);
		// if (i < function.Expressions.Length - 1)
		int32_t L_12 = V_0;
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_13 = ___function0;
		NullCheck(L_13);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_14;
		L_14 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_13, NULL);
		NullCheck(L_14);
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1))))? 1 : 0);
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// Result.Remove(Result.Length - 1, 1);
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_17;
		L_17 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_17, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_16, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), 1, NULL);
		// Result.Append(", ");
		StringBuilder_t* L_20;
		L_20 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_007b:
	{
		// for (var i = 0; i < function.Expressions.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0080:
	{
		// for (var i = 0; i < function.Expressions.Length; i++)
		int32_t L_23 = V_0;
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_24 = ___function0;
		NullCheck(L_24);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_25;
		L_25 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_24, NULL);
		NullCheck(L_25);
		V_2 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))? 1 : 0);
		bool L_26 = V_2;
		if (L_26)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_00ad;
	}

IL_0091:
	{
		// Result.Remove(Result.Length - 1, 1);
		StringBuilder_t* L_27;
		L_27 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_28;
		L_28 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_28, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_27, ((int32_t)il2cpp_codegen_subtract(L_29, 1)), 1, NULL);
	}

IL_00ad:
	{
		// while (Result[Result.Length - 1] == ' ')
		StringBuilder_t* L_31;
		L_31 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_32;
		L_32 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_32, NULL);
		NullCheck(L_31);
		Il2CppChar L_34;
		L_34 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_31, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), NULL);
		V_3 = (bool)((((int32_t)L_34) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_35 = V_3;
		if (L_35)
		{
			goto IL_0091;
		}
	}
	{
		// Result.Append(") ");
		StringBuilder_t* L_36;
		L_36 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mF388B7819484B208F634D64AEAD4A61A409959F8 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Result.Append("[").Append(identifier.Name).Append("] ");
		StringBuilder_t* L_0;
		L_0 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_2 = ___identifier0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::EncapsulateNoValue(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (expression is ValueExpression)
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___expression0;
		V_0 = (bool)((!(((RuntimeObject*)(ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)((ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)IsInstClass((RuntimeObject*)L_0, ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// expression.Accept(this);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_2 = ___expression0;
		NullCheck(L_2);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor) */, L_2, __this);
		goto IL_0084;
	}

IL_001a:
	{
		// Result.Append("(");
		StringBuilder_t* L_3;
		L_3 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		// expression.Accept(this);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_5 = ___expression0;
		NullCheck(L_5);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor) */, L_5, __this);
		goto IL_0052;
	}

IL_0036:
	{
		// Result.Remove(Result.Length - 1, 1);
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_7;
		L_7 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), 1, NULL);
	}

IL_0052:
	{
		// while (Result[Result.Length - 1] == ' ')
		StringBuilder_t* L_10;
		L_10 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_11;
		L_11 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_11, NULL);
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0036;
		}
	}
	{
		// Result.Append(") ");
		StringBuilder_t* L_15;
		L_15 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
	}

IL_0084:
	{
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
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___leftExpression0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___middleExpression1, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___rightExpression2, const RuntimeMethod* method) 
{
	{
		// public TernaryExpression(LogicalExpression leftExpression, LogicalExpression middleExpression, LogicalExpression rightExpression)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// LeftExpression = leftExpression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___leftExpression0;
		TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline(__this, L_0, NULL);
		// MiddleExpression = middleExpression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___middleExpression1;
		TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline(__this, L_1, NULL);
		// RightExpression = rightExpression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_2 = ___rightExpression2;
		TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_LeftExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_LeftExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CLeftExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_MiddleExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CMiddleExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_MiddleExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CMiddleExpressionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMiddleExpressionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_RightExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_RightExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CRightExpressionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightExpressionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_Accept_m87285AA7D23F48EBC1D65506490B17EA950C2822 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___visitor0, const RuntimeMethod* method) 
{
	{
		// visitor.Visit(this);
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.TernaryExpression) */, L_0, __this);
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
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___type0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression1, const RuntimeMethod* method) 
{
	{
		// public UnaryExpression(UnaryExpressionType type, LogicalExpression expression)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Type = type;
		int32_t L_0 = ___type0;
		UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline(__this, L_0, NULL);
		// Expression = expression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___expression1;
		UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Expression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_Accept_m3A43817A0CF736373B199C035BF99EFD9BCF65C5 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___visitor0, const RuntimeMethod* method) 
{
	{
		// visitor.Visit(this);
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* >::Invoke(6 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.UnaryExpression) */, L_0, __this);
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
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Object,Unity.VisualScripting.Dependencies.NCalc.ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m824D9FF0F53B0C67CA4DF6DA22DC29D1C18A9ECB (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) 
{
	{
		// public ValueExpression(object value, ValueType type)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		RuntimeObject* L_0 = ___value0;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_0, NULL);
		// Type = type;
		int32_t L_1 = ___type1;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		// public ValueExpression(object value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// switch (System.Type.GetTypeCode(value.GetType()))
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Type_GetTypeCode_m2CE476933AF4B381D7A52F4343B70E9878FDF466(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_0092;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_007e;
			}
			case 5:
			{
				goto IL_007e;
			}
			case 6:
			{
				goto IL_007e;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_007e;
			}
			case 9:
			{
				goto IL_007e;
			}
			case 10:
			{
				goto IL_0074;
			}
			case 11:
			{
				goto IL_0074;
			}
			case 12:
			{
				goto IL_0074;
			}
			case 13:
			{
				goto IL_006a;
			}
			case 14:
			{
				goto IL_0092;
			}
			case 15:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_0092;
	}

IL_0060:
	{
		// Type = ValueType.Boolean;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 4, NULL);
		// break;
		goto IL_00ae;
	}

IL_006a:
	{
		// Type = ValueType.DateTime;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 2, NULL);
		// break;
		goto IL_00ae;
	}

IL_0074:
	{
		// Type = ValueType.Float;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 3, NULL);
		// break;
		goto IL_00ae;
	}

IL_007e:
	{
		// Type = ValueType.Integer;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 0, NULL);
		// break;
		goto IL_00ae;
	}

IL_0088:
	{
		// Type = ValueType.String;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 1, NULL);
		// break;
		goto IL_00ae;
	}

IL_0092:
	{
		// throw new EvaluationException("This value could not be handled: " + value);
		RuntimeObject* L_5 = ___value0;
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
		if (L_5)
		{
			G_B9_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
			goto IL_009d;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_00a3;
	}

IL_009d:
	{
		RuntimeObject* L_6 = ___value0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B10_0 = L_7;
		G_B10_1 = G_B9_0;
	}

IL_00a3:
	{
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B10_1, G_B10_0, NULL);
		EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E* L_9 = (EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		EvaluationException__ctor_mC3545B04D76AEAFC2007507CC0D00D12D4CC6BFE(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97_RuntimeMethod_var)));
	}

IL_00ae:
	{
		// Value = value;
		RuntimeObject* L_10 = ___value0;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public ValueExpression(string value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		String_t* L_0 = ___value0;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_0, NULL);
		// Type = ValueType.String;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(int value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.Integer;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(float value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		float L_0 = ___value0;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.Float;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 3, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(DateTime value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = L_0;
		RuntimeObject* L_2 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.DateTime;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 2, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(bool value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.Boolean;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 4, NULL);
		// }
		return;
	}
}
// System.Object Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.ValueType Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_Accept_mE406F7BBE8CCC32F795063829B71C5577AC99E07 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___visitor0, const RuntimeMethod* method) 
{
	{
		// visitor.Visit(this);
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* >::Invoke(7 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.ValueExpression) */, L_0, __this);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mCD31B865A41BB2F8FD3279C909302AD1BB45C92F (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NCalcParser_get_Errors_m9830250BEAD55AE399B54776A01EDA305F609F22_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> Errors { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CErrorsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCalcParser_set_Errors_mA917A8CA379FE5DD8B62A582FD3D196C5C36DD75_inline (NCalcParser_tF9BBD0EBBDC2CC789FE5A5F0651952F654B2BFA0* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> Errors { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CErrorsU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorsU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool HasResult { get; set; }
		bool L_0 = ___value0;
		__this->___U3CHasResultU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CMiddleExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		// public BinaryExpressionType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) 
{
	{
		// public IdentifierExpression Identifier { get; set; }
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_0 = __this->___U3CIdentifierU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression[] Expressions { get; set; }
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_0 = __this->___U3CExpressionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CLeftExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CMiddleExpressionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMiddleExpressionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CRightExpressionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightExpressionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
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
