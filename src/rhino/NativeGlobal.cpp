#include "rhino/NativeGlobal.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "java/lang/Boolean.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "rhino/NativeGlobal.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/Enum.h"
#include "rhino/NativeError.h"
#include "rhino/Undefined.h"
#include "rhino/EvaluatorException.h"
#include "rhino/NativeNumber.h"
#include "java/lang/Object.h"
#include "rhino/IdFunctionCall.h"
#include "rhino/Kit.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/TopLevel_NativeErrors.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/RuntimeException.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Double.h"

extern "C" {

jlong SF_rhino_NativeGlobal_serialVersionUID;
jobject SF_rhino_NativeGlobal_URI_DECODE_RESERVED;
jint SF_rhino_NativeGlobal_INVALID_UTF8;
jobject SF_rhino_NativeGlobal_FTAG;
jint SF_rhino_NativeGlobal_Id_decodeURI;
jint SF_rhino_NativeGlobal_Id_decodeURIComponent;
jint SF_rhino_NativeGlobal_Id_encodeURI;
jint SF_rhino_NativeGlobal_Id_encodeURIComponent;
jint SF_rhino_NativeGlobal_Id_escape;
jint SF_rhino_NativeGlobal_Id_eval;
jint SF_rhino_NativeGlobal_Id_isFinite;
jint SF_rhino_NativeGlobal_Id_isNaN;
jint SF_rhino_NativeGlobal_Id_isXMLName;
jint SF_rhino_NativeGlobal_Id_parseFloat;
jint SF_rhino_NativeGlobal_Id_parseInt;
jint SF_rhino_NativeGlobal_Id_unescape;
jint SF_rhino_NativeGlobal_Id_uneval;
jint SF_rhino_NativeGlobal_LAST_SCOPE_FUNCTION_ID;
jint SF_rhino_NativeGlobal_Id_new_CommonError;

void mark_rhino_NativeGlobal(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeGlobal_URI_DECODE_RESERVED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeGlobal_URI_DECODE_RESERVED)->clazz)->markFunction)((jobject) SF_rhino_NativeGlobal_URI_DECODE_RESERVED, mark, depth + 1);
		if (SF_rhino_NativeGlobal_FTAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeGlobal_FTAG)->clazz)->markFunction)((jobject) SF_rhino_NativeGlobal_FTAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeGlobal *) object;
}

void init_rhino_NativeGlobal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeGlobal_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:init", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(17);
	clinit_rhino_NativeGlobal(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeGlobal);
	init_rhino_NativeGlobal(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(19);
	frame[4].i = (jint(1));
	}
label_2:;
	{
	if ((frame[4].i) > (13)) goto label_3;
	}
	{
	LINE_NUMBER(21);
	frame[6].i = (jint(1));
	LINE_NUMBER(22);
	switch((frame[4].i)) {
		case 1: goto label_6;
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		case 5: goto label_10;
		case 6: goto label_11;
		case 7: goto label_12;
		case 8: goto label_13;
		case 9: goto label_14;
		case 10: goto label_15;
		case 11: goto label_16;
		case 12: goto label_17;
		case 13: goto label_18;
		default: goto label_19;
	}
	}
label_6:;
	{
	LINE_NUMBER(24);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"decodeURI"_j)));
	LINE_NUMBER(25);
	goto label_21;
	}
label_7:;
	{
	LINE_NUMBER(27);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"decodeURIComponent"_j)));
	LINE_NUMBER(28);
	goto label_21;
	}
label_8:;
	{
	LINE_NUMBER(30);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"encodeURI"_j)));
	LINE_NUMBER(31);
	goto label_21;
	}
label_9:;
	{
	LINE_NUMBER(33);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"encodeURIComponent"_j)));
	LINE_NUMBER(34);
	goto label_21;
	}
label_10:;
	{
	LINE_NUMBER(36);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"escape"_j)));
	LINE_NUMBER(37);
	goto label_21;
	}
label_11:;
	{
	LINE_NUMBER(39);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"eval"_j)));
	LINE_NUMBER(40);
	goto label_21;
	}
label_12:;
	{
	LINE_NUMBER(42);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"isFinite"_j)));
	LINE_NUMBER(43);
	goto label_21;
	}
label_13:;
	{
	LINE_NUMBER(45);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"isNaN"_j)));
	LINE_NUMBER(46);
	goto label_21;
	}
label_14:;
	{
	LINE_NUMBER(48);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"isXMLName"_j)));
	LINE_NUMBER(49);
	goto label_21;
	}
label_15:;
	{
	LINE_NUMBER(51);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"parseFloat"_j)));
	LINE_NUMBER(52);
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(54);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"parseInt"_j)));
	LINE_NUMBER(55);
	frame[6].i = (jint(2));
	LINE_NUMBER(56);
	goto label_21;
	}
label_17:;
	{
	LINE_NUMBER(58);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"unescape"_j)));
	LINE_NUMBER(59);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(61);
	frame[5].o = (((jobject) createStringLiteral(ctx, u8"uneval"_j)));
	LINE_NUMBER(62);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(66);
	clinit_rhino_IdFunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObject);
	sp[1].o = frame[3].o;
	clinit_rhino_NativeGlobal(ctx);
	sp[2].o = (jobject)SF_rhino_NativeGlobal_FTAG;
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].i), (frame[5].o), (frame[6].i), (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(68);
	if ((frame[2].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(69);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[7].o));
	}
label_36:;
	{
	LINE_NUMBER(71);
	((func_rhino_IdFunctionObject_exportAsScopeProperty) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_IdFunctionObject_exportAsScopeProperty])(ctx, (frame[7].o));
	LINE_NUMBER(19);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"NaN"_j));
	clinit_rhino_ScriptRuntime(ctx);
	sp[2].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, sp[2].o, (7));
	LINE_NUMBER(77);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Infinity"_j));
	jdouble temp0 = jdouble(std::numeric_limits<double>::infinity());
	LINE_NUMBER(79);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	jint temp1 = 7;
	LINE_NUMBER(77);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, sp[2].o, temp1);
	LINE_NUMBER(81);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, sp[0].o, sp[1].o, sp[2].o, (7));
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_rhino_TopLevel$NativeErrors_values_R_Array1_rhino_TopLevel$NativeErrors(ctx);
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_44:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_45;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(90);
	sp[0].o = frame[7].o;
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_Error;
	if (sp[0].o != sp[1].o) goto label_47;
	}
	LINE_NUMBER(92);
	goto label_49;
label_47:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_rhino_TopLevel$NativeErrors_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_TopLevel$NativeErrors_name_R_java_lang_String])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Error;
	clinit_rhino_ScriptRuntime(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_newBuiltinObject_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_Array1_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[9].o = (checkCast(ctx, &class_rhino_ScriptableObject, sp[0].o));
	LINE_NUMBER(99);
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[9].o), (frame[8].o));
	LINE_NUMBER(100);
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"message"_j))), (frame[9].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(101);
	clinit_rhino_IdFunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObject);
	sp[1].o = frame[3].o;
	clinit_rhino_NativeGlobal(ctx);
	sp[2].o = (jobject)SF_rhino_NativeGlobal_FTAG;
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o, (14), (frame[8].o), (jint(1)), (frame[1].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(104);
	((func_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable])(ctx, (frame[10].o), (frame[9].o));
	LINE_NUMBER(105);
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (frame[9].o), (frame[10].o));
	LINE_NUMBER(106);
	((func_rhino_ScriptableObject_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_setAttributes_java_lang_String_int])(ctx, (frame[9].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (jint(2)));
	LINE_NUMBER(107);
	if ((frame[2].i) == 0) goto label_59;
	}
	{
	LINE_NUMBER(108);
	((func_rhino_ScriptableObject_sealObject) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_rhino_ScriptableObject_sealObject])(ctx, (frame[9].o));
	LINE_NUMBER(109);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[10].o));
	}
label_59:;
	{
	LINE_NUMBER(111);
	((func_rhino_IdFunctionObject_exportAsScopeProperty) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_rhino_IdFunctionObject_exportAsScopeProperty])(ctx, (frame[10].o));
	}
label_49:;
	{
	LINE_NUMBER(89);
	INST_IINC(6, 1);
	goto label_44;
	}
label_45:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeGlobal(ctx);
	sp[1].o = (jobject)SF_rhino_NativeGlobal_FTAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(120);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		case 8: goto label_9;
		case 9: goto label_1;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		case 14: goto label_14;
		default: goto label_1;
	}
	}
label_4:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[5].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = frame[7].o;
	sp += 1;
	if ((frame[6].i) != (jint(1))) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	POP_N(2); // Pop method args
	sp->o = (jobject)SM_rhino_NativeGlobal_decode_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[5].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(130);
	sp[0].o = frame[7].o;
	sp += 1;
	if ((frame[6].i) != (jint(3))) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	POP_N(2); // Pop method args
	sp->o = (jobject)SM_rhino_NativeGlobal_encode_java_lang_String_boolean_R_java_lang_String(ctx, sp[0].o, sp[1].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)M_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)M_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(140);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(141);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_rhino_NativeNumber_isFinite_java_lang_Object_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(149);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(150);
	frame[7].i = (jint(1));
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(152);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[8].d = temp0;
	LINE_NUMBER(153);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	frame[7].i = temp1;
	}
label_26:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, (frame[7].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_js_parseFloat_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_js_parseInt_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)M_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(168);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp += 1;
	goto label_29;
	}
label_28:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
label_29:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_uneval_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_String(ctx, (frame[2].o), (frame[3].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)SM_rhino_NativeError_make_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_rhino_NativeError(ctx, (frame[2].o), (frame[3].o), (frame[1].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException])(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeGlobal_js_parseInt_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:js_parseInt", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[0].o), (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(187);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toInt32_Array1_java_lang_Object_int_R_int(ctx, (frame[0].o), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(189);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(190);
	if ((frame[3].i) != 0) goto label_4;
	}
	{
	LINE_NUMBER(191);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(193);
	frame[4].i = (jint(0));
	LINE_NUMBER(194);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(197);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(198);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean(ctx, (frame[6].i));
	if (temp1 != 0) goto label_9;
	}
	LINE_NUMBER(199);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(200);
	INST_IINC(5, 1);
	LINE_NUMBER(201);
	if ((frame[5].i) < (frame[3].i)) goto label_7;
	}
label_11:;
	{
	LINE_NUMBER(203);
	if ((frame[6].i) == (43)) goto label_13;
	}
	{
	if ((frame[6].i) != (45)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	if (sp[0].i == 0) goto label_16;
	}
label_13:;
	LINE_NUMBER(204);
	INST_IINC(5, 1);
label_16:;
	{
	LINE_NUMBER(206);
	frame[7].i = (jint(-1));
	LINE_NUMBER(207);
	if ((frame[2].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(208);
	frame[2].i = (jint(-1));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(209);
	if ((frame[2].i) < (jint(2))) goto label_21;
	}
	{
	if ((frame[2].i) <= (36)) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(210);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(211);
	if ((frame[2].i) != (16)) goto label_20;
	}
	{
	if (((frame[3].i) - (frame[5].i)) <= (jint(1))) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	if (temp0 != (48)) goto label_20;
	}
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[5].i) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(213);
	if ((frame[6].i) == (120)) goto label_25;
	}
	{
	if ((frame[6].i) != (88)) goto label_20;
	}
label_25:;
	LINE_NUMBER(214);
	INST_IINC(5, 2);
label_20:;
	{
	LINE_NUMBER(217);
	if ((frame[2].i) != (jint(-1))) goto label_26;
	}
	{
	LINE_NUMBER(218);
	frame[2].i = (10);
	LINE_NUMBER(219);
	if (((frame[3].i) - (frame[5].i)) <= (jint(1))) goto label_26;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	if (temp0 != (48)) goto label_26;
	}
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[5].i) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(221);
	if ((frame[6].i) == (120)) goto label_31;
	}
	{
	if ((frame[6].i) != (88)) goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(222);
	frame[2].i = (16);
	LINE_NUMBER(223);
	INST_IINC(5, 2);
	goto label_26;
	}
label_32:;
	{
	LINE_NUMBER(224);
	if ((48) > (frame[6].i)) goto label_26;
	}
	{
	if ((frame[6].i) > (57)) goto label_26;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[8].o = sp[0].o;
	LINE_NUMBER(226);
	if ((frame[8].o) == nullptr) goto label_36;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[8].o));
	if (temp0 >= (150)) goto label_26;
	}
label_36:;
	{
	LINE_NUMBER(227);
	frame[2].i = (8);
	LINE_NUMBER(228);
	INST_IINC(5, 1);
	}
label_26:;
	{
	LINE_NUMBER(234);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_stringPrefixToNumber_java_lang_String_int_int_R_double(ctx, (frame[1].o), (frame[5].i), (frame[2].i));
	frame[8].d = temp0;
	LINE_NUMBER(235);
	if ((frame[4].i) == 0) goto label_39;
	}
	{
	jdouble temp0 = -(frame[8].d);
	sp[0].d = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	INST_DLOAD(8);
label_40:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, sp[0].d);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_NativeGlobal_js_parseFloat_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:js_parseFloat", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(243);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) >= (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(244);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(248);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(252);
	if ((frame[3].i) != (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(253);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(256);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_isStrWhiteSpaceChar_int_R_boolean(ctx, (frame[4].i));
	if (temp1 != 0) goto label_13;
	}
	LINE_NUMBER(257);
	goto label_15;
label_13:;
	{
	LINE_NUMBER(259);
	INST_IINC(3, 1);
	goto label_9;
	}
label_15:;
	{
	LINE_NUMBER(262);
	frame[5].i = (frame[3].i);
	LINE_NUMBER(263);
	if ((frame[4].i) == (43)) goto label_17;
	}
	{
	if ((frame[4].i) != (45)) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(264);
	INST_IINC(5, 1);
	LINE_NUMBER(265);
	if ((frame[5].i) != (frame[2].i)) goto label_20;
	}
	{
	LINE_NUMBER(266);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	frame[4].i = temp0;
	}
label_18:;
	{
	LINE_NUMBER(271);
	if ((frame[4].i) != (73)) goto label_22;
	}
	{
	LINE_NUMBER(273);
	if (((frame[5].i) + (8)) > (frame[2].i)) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean])(ctx, (frame[1].o), (frame[5].i), (((jobject) createStringLiteral(ctx, u8"Infinity"_j))), (jint(0)), (8));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	if (temp0 != (45)) goto label_26;
	}
	{
	LINE_NUMBER(276);
	frame[6].d = (jdouble(-std::numeric_limits<double>::infinity()));
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(278);
	frame[6].d = (jdouble(std::numeric_limits<double>::infinity()));
	}
label_29:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[6].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(282);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(286);
	frame[6].i = (jint(-1));
	LINE_NUMBER(287);
	frame[7].i = (jint(-1));
	LINE_NUMBER(288);
	frame[8].i = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(289);
	if ((frame[5].i) >= (frame[2].i)) goto label_33;
	}
	{
	LINE_NUMBER(290);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	switch(temp0) {
		case 43: goto label_35;
		case 44: goto label_36;
		case 45: goto label_35;
		case 46: goto label_37;
		case 47: goto label_36;
		case 48: goto label_38;
		case 49: goto label_38;
		case 50: goto label_38;
		case 51: goto label_38;
		case 52: goto label_38;
		case 53: goto label_38;
		case 54: goto label_38;
		case 55: goto label_38;
		case 56: goto label_38;
		case 57: goto label_38;
		case 58: goto label_36;
		case 59: goto label_36;
		case 60: goto label_36;
		case 61: goto label_36;
		case 62: goto label_36;
		case 63: goto label_36;
		case 64: goto label_36;
		case 65: goto label_36;
		case 66: goto label_36;
		case 67: goto label_36;
		case 68: goto label_36;
		case 69: goto label_39;
		case 70: goto label_36;
		case 71: goto label_36;
		case 72: goto label_36;
		case 73: goto label_36;
		case 74: goto label_36;
		case 75: goto label_36;
		case 76: goto label_36;
		case 77: goto label_36;
		case 78: goto label_36;
		case 79: goto label_36;
		case 80: goto label_36;
		case 81: goto label_36;
		case 82: goto label_36;
		case 83: goto label_36;
		case 84: goto label_36;
		case 85: goto label_36;
		case 86: goto label_36;
		case 87: goto label_36;
		case 88: goto label_36;
		case 89: goto label_36;
		case 90: goto label_36;
		case 91: goto label_36;
		case 92: goto label_36;
		case 93: goto label_36;
		case 94: goto label_36;
		case 95: goto label_36;
		case 96: goto label_36;
		case 97: goto label_36;
		case 98: goto label_36;
		case 99: goto label_36;
		case 100: goto label_36;
		case 101: goto label_39;
		default: goto label_36;
	}
	}
label_37:;
	{
	LINE_NUMBER(292);
	if ((frame[6].i) == (jint(-1))) goto label_40;
	}
	LINE_NUMBER(293);
	goto label_33;
label_40:;
	{
	LINE_NUMBER(294);
	frame[6].i = (frame[5].i);
	LINE_NUMBER(295);
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(299);
	if ((frame[7].i) == (jint(-1))) goto label_44;
	}
	LINE_NUMBER(300);
	goto label_33;
label_44:;
	{
	LINE_NUMBER(301);
	if ((frame[5].i) != ((frame[2].i) - (jint(1)))) goto label_46;
	}
	LINE_NUMBER(302);
	goto label_33;
label_46:;
	{
	LINE_NUMBER(304);
	frame[7].i = (frame[5].i);
	LINE_NUMBER(305);
	goto label_43;
	}
label_35:;
	{
	LINE_NUMBER(310);
	if ((frame[7].i) == ((frame[5].i) - (jint(1)))) goto label_49;
	}
	LINE_NUMBER(311);
	goto label_33;
label_49:;
	{
	LINE_NUMBER(312);
	if ((frame[5].i) != ((frame[2].i) - (jint(1)))) goto label_43;
	}
	{
	LINE_NUMBER(313);
	INST_IINC(5, -1);
	LINE_NUMBER(314);
	goto label_33;
	}
label_38:;
	{
	LINE_NUMBER(328);
	if ((frame[7].i) == (jint(-1))) goto label_43;
	}
	{
	LINE_NUMBER(329);
	frame[8].i = (jint(1));
	goto label_43;
	}
label_36:;
	LINE_NUMBER(334);
	goto label_33;
label_43:;
	{
	LINE_NUMBER(289);
	INST_IINC(5, 1);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(338);
	if ((frame[7].i) == (jint(-1))) goto label_54;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_54;
	{
	LINE_NUMBER(339);
	frame[5].i = (frame[7].i);
	}
label_54:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[3].i), (frame[5].i));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_java_lang_String_R_java_lang_Double(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(344);
	frame[9].o = sp[0].o;
	LINE_NUMBER(345);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:js_escape", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(359);
	frame[2].i = (jint(1));
	LINE_NUMBER(360);
	frame[3].i = (jint(2));
	LINE_NUMBER(361);
	frame[4].i = (jint(4));
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[1].o), (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(365);
	frame[6].i = (7);
	LINE_NUMBER(366);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(367);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	frame[7].d = temp0;
	LINE_NUMBER(368);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[7].d));
	if (temp1 != 0) goto label_9;
	}
	{
	jint temp0 = jint((frame[7].d));
	frame[6].i = temp0;
	if ((doubleCompare((jdouble(temp0)), (frame[7].d), -1)) != 0) goto label_9;
	}
	{
	if ((jint(0)) == ((frame[6].i) & (-8))) goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.bad.esc.mask"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(374);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(375);
	frame[8].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	frame[9].i = temp0;
	}
label_12:;
	{
	if ((frame[8].i) == (frame[9].i)) goto label_13;
	}
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[5].o), (frame[8].i));
	frame[10].i = temp0;
	LINE_NUMBER(377);
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	if ((frame[10].i) < (48)) goto label_17;
	}
	{
	if ((frame[10].i) <= (57)) goto label_18;
	}
label_17:;
	{
	if ((frame[10].i) < (65)) goto label_19;
	}
	{
	if ((frame[10].i) <= (90)) goto label_18;
	}
label_19:;
	{
	if ((frame[10].i) < (97)) goto label_20;
	}
	{
	if ((frame[10].i) <= (122)) goto label_18;
	}
label_20:;
	{
	if ((frame[10].i) == (64)) goto label_18;
	}
	{
	if ((frame[10].i) == (42)) goto label_18;
	}
	{
	if ((frame[10].i) == (95)) goto label_18;
	}
	{
	if ((frame[10].i) == (45)) goto label_18;
	}
	{
	if ((frame[10].i) == (46)) goto label_18;
	}
	{
	if ((jint(0)) == ((frame[6].i) & (jint(4)))) goto label_16;
	}
	{
	if ((frame[10].i) == (47)) goto label_18;
	}
	{
	if ((frame[10].i) != (43)) goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(382);
	if ((frame[7].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (jchar((frame[10].i))));
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(386);
	if ((frame[7].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(387);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((frame[9].i) + (jint(3))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (frame[5].o));
	LINE_NUMBER(389);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[7].o), (frame[8].i));
	}
label_23:;
	{
	LINE_NUMBER(393);
	if ((frame[10].i) >= (256)) goto label_27;
	}
	{
	LINE_NUMBER(394);
	if ((frame[10].i) != (32)) goto label_29;
	}
	{
	if ((frame[6].i) != (jint(2))) goto label_29;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (43));
	LINE_NUMBER(396);
	goto label_21;
	}
label_29:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (37));
	LINE_NUMBER(399);
	frame[11].i = (jint(2));
	goto label_34;
	}
label_27:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (37));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (117));
	LINE_NUMBER(403);
	frame[11].i = (jint(4));
	}
label_34:;
	{
	LINE_NUMBER(407);
	frame[12].i = (((frame[11].i) - (jint(1))) * (jint(4)));
	}
label_37:;
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_21;
	{
	LINE_NUMBER(408);
	frame[13].i = ((15) & ((frame[10].i) >> (frame[12].i)));
	LINE_NUMBER(409);
	if ((frame[13].i) >= (10)) goto label_40;
	}
	{
	jint temp0 = (48) + (frame[13].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_41;
	}
label_40:;
	{
	jint temp0 = (55) + (frame[13].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_41:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (jchar((frame[14].i))));
	LINE_NUMBER(407);
	INST_IINC(12, -4);
	goto label_37;
	}
label_21:;
	{
	LINE_NUMBER(375);
	INST_IINC(8, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(415);
	if ((frame[7].o) != nullptr) goto label_44;
	}
	INST_ALOAD(5);
	goto label_45;
label_44:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_45:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:js_unescape", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[1].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(424);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (37));
	frame[3].i = temp0;
	LINE_NUMBER(425);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(426);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(428);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(429);
	frame[7].i = (frame[3].i);
	}
label_8:;
	{
	if ((frame[7].i) == (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(430);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(431);
	INST_IINC(7, 1);
	LINE_NUMBER(432);
	if ((frame[8].i) != (37)) goto label_13;
	}
	{
	if ((frame[7].i) == (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(434);
	if (((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[7].i))) != (117)) goto label_15;
	}
	{
	LINE_NUMBER(435);
	frame[10].i = ((frame[7].i) + (jint(1)));
	LINE_NUMBER(436);
	frame[9].i = ((frame[7].i) + (jint(5)));
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(438);
	frame[10].i = (frame[7].i);
	LINE_NUMBER(439);
	frame[9].i = ((frame[7].i) + (jint(2)));
	}
label_19:;
	{
	LINE_NUMBER(441);
	if ((frame[9].i) > (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(442);
	frame[11].i = (jint(0));
	LINE_NUMBER(443);
	frame[12].i = (frame[10].i);
	}
label_23:;
	{
	if ((frame[12].i) == (frame[9].i)) goto label_24;
	}
	{
	LINE_NUMBER(444);
	jint temp0 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[12].i))), (frame[11].i));
	frame[11].i = temp0;
	LINE_NUMBER(443);
	INST_IINC(12, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(446);
	if ((frame[11].i) < 0) goto label_13;
	}
	{
	LINE_NUMBER(447);
	frame[8].i = (jchar((frame[11].i)));
	LINE_NUMBER(448);
	frame[7].i = (frame[9].i);
	}
label_13:;
	{
	LINE_NUMBER(452);
	ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i)) = (frame[8].i);
	LINE_NUMBER(453);
	INST_IINC(6, 1);
	LINE_NUMBER(454);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(455);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[5].o), (jint(0)), (frame[6].i));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:js_eval", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(466);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_evalSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_Array1_java_lang_Object_java_lang_String_int_R_java_lang_Object(ctx, (frame[1].o), (frame[4].o), (frame[4].o), (frame[3].o), (((jobject) createStringLiteral(ctx, u8"eval code"_j))), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_NativeGlobal_isEvalFunction_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:isEvalFunction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(470);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_IdFunctionObject)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(471);
	frame[1].o = (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[0].o)));
	LINE_NUMBER(472);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeGlobal(ctx);
	sp[1].o = (jobject)SF_rhino_NativeGlobal_FTAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	if (temp0 != (6)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeGlobal_encode_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:encode", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(485);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(486);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(488);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	}
label_4:;
	{
	if ((frame[4].i) == (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(489);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[6].i = temp0;
	LINE_NUMBER(490);
	jint temp1 = (jint)SM_rhino_NativeGlobal_encodeUnescaped_char_boolean_R_boolean(ctx, (frame[6].i), (frame[1].i));
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(491);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[6].i));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(495);
	if ((frame[3].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(496);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((frame[5].i) + (jint(3))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(498);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[3].o), (frame[4].i));
	LINE_NUMBER(499);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (6));
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(501);
	if ((jint(56320)) > (frame[6].i)) goto label_17;
	}
	{
	if ((frame[6].i) > (jint(57343))) goto label_17;
	}
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(505);
	if ((frame[6].i) < (jint(55296))) goto label_19;
	}
	{
	if ((jint(56319)) >= (frame[6].i)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(506);
	frame[7].i = (frame[6].i);
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(508);
	INST_IINC(4, 1);
	LINE_NUMBER(509);
	if ((frame[4].i) != (frame[5].i)) goto label_24;
	}
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(512);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[8].i = temp0;
	LINE_NUMBER(513);
	if ((jint(56320)) > (frame[8].i)) goto label_27;
	}
	{
	if ((frame[8].i) <= (jint(57343))) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(516);
	frame[7].i = (((((frame[6].i) - (jint(55296))) << (10)) + ((frame[8].i) - (jint(56320)))) + (jint(65536)));
	}
label_22:;
	{
	LINE_NUMBER(518);
	jint temp0 = (jint)SM_rhino_NativeGlobal_oneUcs4ToUtf8Char_Array1_byte_int_R_int(ctx, (frame[2].o), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(519);
	frame[9].i = (jint(0));
	}
label_30:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_10;
	}
	{
	LINE_NUMBER(520);
	frame[10].i = ((255) & ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[9].i))));
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (37));
	LINE_NUMBER(522);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_rhino_NativeGlobal_toHexChar_int_R_char(ctx, (bit_cast<jint>(bit_cast<uint32_t>((frame[10].i)) >> (jint(4)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(523);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)SM_rhino_NativeGlobal_toHexChar_int_R_char(ctx, ((frame[10].i) & (15)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	LINE_NUMBER(519);
	INST_IINC(9, 1);
	goto label_30;
	}
label_10:;
	{
	LINE_NUMBER(488);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(527);
	if ((frame[3].o) != nullptr) goto label_36;
	}
	INST_ALOAD(0);
	goto label_37;
label_36:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_37:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jchar SM_rhino_NativeGlobal_toHexChar_int_R_char(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:toHexChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(531);
	if (((frame[0].i) >> (jint(4))) == 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(532);
	if ((frame[0].i) >= (10)) goto label_2;
	}
	{
	jint temp0 = (frame[0].i) + (48);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jint temp0 = ((frame[0].i) - (10)) + (65);
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	INST_I2C();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeGlobal_unHex_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:unHex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(536);
	if ((65) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (70)) goto label_1;
	}
	{
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (((frame[0].i) - (65)) + (10));
	}
label_1:;
	{
	LINE_NUMBER(538);
	if ((97) > (frame[0].i)) goto label_3;
	}
	{
	if ((frame[0].i) > (102)) goto label_3;
	}
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (((frame[0].i) - (97)) + (10));
	}
label_3:;
	{
	LINE_NUMBER(540);
	if ((48) > (frame[0].i)) goto label_5;
	}
	{
	if ((frame[0].i) > (57)) goto label_5;
	}
	{
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return ((frame[0].i) - (48));
	}
label_5:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeGlobal_unHex_char_char_R_int(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:unHex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(548);
	jint temp0 = (jint)SM_rhino_NativeGlobal_unHex_char_R_int(ctx, (frame[0].i));
	frame[2].i = temp0;
	LINE_NUMBER(549);
	jint temp1 = (jint)SM_rhino_NativeGlobal_unHex_char_R_int(ctx, (frame[1].i));
	frame[3].i = temp1;
	LINE_NUMBER(550);
	if ((frame[2].i) < 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return (((frame[2].i) << (jint(4))) | (frame[3].i));
	}
label_3:;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeGlobal_decode_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:decode", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(557);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(558);
	frame[3].i = (jint(0));
	LINE_NUMBER(560);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	}
label_4:;
	{
	if ((frame[4].i) == (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(561);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[6].i = temp0;
	LINE_NUMBER(562);
	if ((frame[6].i) == (37)) goto label_8;
	}
	{
	LINE_NUMBER(563);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[6].i);
	}
label_10:;
	{
	LINE_NUMBER(566);
	INST_IINC(4, 1);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(568);
	if ((frame[2].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[5].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(572);
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, (frame[0].o), (jint(0)), (frame[4].i), (frame[2].o), (jint(0)));
	LINE_NUMBER(573);
	frame[3].i = (frame[4].i);
	}
label_13:;
	{
	LINE_NUMBER(575);
	frame[7].i = (frame[4].i);
	LINE_NUMBER(576);
	if (((frame[4].i) + (jint(3))) <= (frame[5].i)) goto label_18;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(578);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[4].i) + (jint(1))));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[4].i) + (jint(2))));
	jint temp2 = (jint)SM_rhino_NativeGlobal_unHex_char_char_R_int(ctx, temp0, temp1);
	frame[8].i = temp2;
	LINE_NUMBER(579);
	if ((frame[8].i) >= 0) goto label_21;
	}
	sp->o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	sp++;
	INST_ATHROW();
	label_21:;
	{
	LINE_NUMBER(580);
	INST_IINC(4, 3);
	LINE_NUMBER(581);
	if (((frame[8].i) & (128)) != 0) goto label_23;
	}
	{
	LINE_NUMBER(582);
	frame[6].i = (jchar((frame[8].i)));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(587);
	if (((frame[8].i) & (192)) != (128)) goto label_26;
	}
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(590);
	if (((frame[8].i) & (32)) != 0) goto label_28;
	}
	{
	LINE_NUMBER(591);
	frame[9].i = (jint(1));
	LINE_NUMBER(592);
	frame[10].i = ((frame[8].i) & (31));
	LINE_NUMBER(593);
	frame[11].i = (128);
	goto label_33;
	}
label_28:;
	{
	LINE_NUMBER(594);
	if (((frame[8].i) & (16)) != 0) goto label_34;
	}
	{
	LINE_NUMBER(595);
	frame[9].i = (jint(2));
	LINE_NUMBER(596);
	frame[10].i = ((frame[8].i) & (15));
	LINE_NUMBER(597);
	frame[11].i = (2048);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(598);
	if (((frame[8].i) & (8)) != 0) goto label_39;
	}
	{
	LINE_NUMBER(599);
	frame[9].i = (jint(3));
	LINE_NUMBER(600);
	frame[10].i = ((frame[8].i) & (7));
	LINE_NUMBER(601);
	frame[11].i = (jint(65536));
	goto label_33;
	}
label_39:;
	{
	LINE_NUMBER(602);
	if (((frame[8].i) & (jint(4))) != 0) goto label_44;
	}
	{
	LINE_NUMBER(603);
	frame[9].i = (jint(4));
	LINE_NUMBER(604);
	frame[10].i = ((frame[8].i) & (jint(3)));
	LINE_NUMBER(605);
	frame[11].i = (jint(2097152));
	goto label_33;
	}
label_44:;
	{
	LINE_NUMBER(606);
	if (((frame[8].i) & (jint(2))) != 0) goto label_49;
	}
	{
	LINE_NUMBER(607);
	frame[9].i = (jint(5));
	LINE_NUMBER(608);
	frame[10].i = ((frame[8].i) & (jint(1)));
	LINE_NUMBER(609);
	frame[11].i = (jint(67108864));
	goto label_33;
	}
label_49:;
	{
	LINE_NUMBER(612);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_33:;
	{
	LINE_NUMBER(614);
	if (((frame[4].i) + ((jint(3)) * (frame[9].i))) <= (frame[5].i)) goto label_54;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_54:;
	{
	LINE_NUMBER(616);
	frame[12].i = (jint(0));
	}
label_56:;
	{
	if ((frame[12].i) == (frame[9].i)) goto label_57;
	}
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	if (temp0 == (37)) goto label_59;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_59:;
	{
	LINE_NUMBER(619);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[4].i) + (jint(1))));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[4].i) + (jint(2))));
	jint temp2 = (jint)SM_rhino_NativeGlobal_unHex_char_char_R_int(ctx, temp0, temp1);
	frame[8].i = temp2;
	LINE_NUMBER(620);
	if ((frame[8].i) < 0) goto label_62;
	}
	{
	if (((frame[8].i) & (192)) == (128)) goto label_63;
	}
label_62:;
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_63:;
	{
	LINE_NUMBER(622);
	frame[10].i = (((frame[10].i) << (6)) | ((frame[8].i) & (63)));
	LINE_NUMBER(623);
	INST_IINC(4, 3);
	LINE_NUMBER(616);
	INST_IINC(12, 1);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(626);
	if ((frame[10].i) < (frame[11].i)) goto label_66;
	}
	{
	if ((frame[10].i) < (jint(55296))) goto label_67;
	}
	{
	if ((frame[10].i) > (jint(57343))) goto label_67;
	}
label_66:;
	{
	LINE_NUMBER(628);
	frame[10].i = (jint(2147483647));
	goto label_68;
	}
label_67:;
	{
	LINE_NUMBER(629);
	if ((frame[10].i) == (jint(65534))) goto label_69;
	}
	{
	if ((frame[10].i) != (jint(65535))) goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(630);
	frame[10].i = (jint(65533));
	}
label_68:;
	{
	LINE_NUMBER(632);
	if ((frame[10].i) < (jint(65536))) goto label_70;
	}
	{
	LINE_NUMBER(633);
	frame[10].i = ((frame[10].i) - (jint(65536)));
	LINE_NUMBER(634);
	if ((frame[10].i) <= (jint(1048575))) goto label_73;
	}
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(ctx);
	throwException(ctx, sp[0].o);	}
label_73:;
	{
	LINE_NUMBER(637);
	frame[12].i = (jchar(((bit_cast<jint>(bit_cast<uint32_t>((frame[10].i)) >> (10))) + (jint(55296)))));
	LINE_NUMBER(638);
	frame[6].i = (jchar((((frame[10].i) & (1023)) + (jint(56320)))));
	LINE_NUMBER(639);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[12].i);
	LINE_NUMBER(640);
	goto label_25;
	}
label_70:;
	{
	LINE_NUMBER(641);
	frame[6].i = (jchar((frame[10].i)));
	}
label_25:;
	{
	LINE_NUMBER(644);
	if ((frame[1].i) == 0) goto label_78;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8";/?:@&=+$,#"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8";/?:@&=+$,#"_j))), (frame[6].i));
	if (temp0 < 0) goto label_78;
	}
	{
	LINE_NUMBER(645);
	frame[9].i = (frame[7].i);
	}
label_80:;
	{
	if ((frame[9].i) == (frame[4].i)) goto label_81;
	}
	{
	LINE_NUMBER(646);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[9].i));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(645);
	INST_IINC(9, 1);
	goto label_80;
	}
label_81:;
	goto label_12;
label_78:;
	{
	LINE_NUMBER(649);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[6].i);
	}
label_12:;
	LINE_NUMBER(652);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(653);
	if ((frame[2].o) != nullptr) goto label_84;
	}
	INST_ALOAD(0);
	goto label_85;
label_84:;
	{
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[2].o), (jint(0)), (frame[3].i));
	sp += 1;
	}
label_85:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_NativeGlobal_encodeUnescaped_char_boolean_R_boolean(jcontext ctx, jchar param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:encodeUnescaped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(657);
	if ((65) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) <= (90)) goto label_2;
	}
label_1:;
	{
	if ((97) > (frame[0].i)) goto label_3;
	}
	{
	if ((frame[0].i) <= (122)) goto label_2;
	}
label_3:;
	{
	if ((48) > (frame[0].i)) goto label_4;
	}
	{
	if ((frame[0].i) > (57)) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(661);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"-_.!~*'()"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"-_.!~*'()"_j))), (frame[0].i));
	if (temp0 < 0) goto label_5;
	}
	{
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(664);
	if ((frame[1].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8";/?:@&=+$,#"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8";/?:@&=+$,#"_j))), (frame[0].i));
	if (temp0 < 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:uriError", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	{
	LINE_NUMBER(671);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"URIError"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.uri"_j));
	LINE_NUMBER(672);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(671);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeGlobal_oneUcs4ToUtf8Char_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:oneUcs4ToUtf8Char", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(682);
	frame[2].i = (jint(1));
	LINE_NUMBER(685);
	if (((frame[1].i) & (-128)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(686);
	ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))) = (jbyte((frame[1].i)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(689);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (11)));
	LINE_NUMBER(690);
	frame[2].i = (jint(2));
	}
label_6:;
	{
	LINE_NUMBER(691);
	if ((frame[4].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(692);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (jint(5))));
	LINE_NUMBER(693);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(695);
	frame[3].i = (frame[2].i);
	}
label_10:;
	{
	LINE_NUMBER(696);
	INST_IINC(3, -1);
	if ((frame[3].i) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(697);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[3].i)) = (jbyte((((frame[1].i) & (63)) | (128))));
	LINE_NUMBER(698);
	frame[1].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (6)));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(700);
	ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))) = (jbyte((((256) - ((jint(1)) << ((8) - (frame[2].i)))) + (frame[1].i))));
	}
label_4:;
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeGlobal(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_NativeGlobal_serialVersionUID = jlong(6080442165748707530ll);
	SF_rhino_NativeGlobal_URI_DECODE_RESERVED = ((jobject) createStringLiteral(ctx, u8";/?:@&=+$,#"_j));
	SF_rhino_NativeGlobal_INVALID_UTF8 = jint(2147483647);
	SF_rhino_NativeGlobal_Id_decodeURI = jint(1);
	SF_rhino_NativeGlobal_Id_decodeURIComponent = jint(2);
	SF_rhino_NativeGlobal_Id_encodeURI = jint(3);
	SF_rhino_NativeGlobal_Id_encodeURIComponent = jint(4);
	SF_rhino_NativeGlobal_Id_escape = jint(5);
	SF_rhino_NativeGlobal_Id_eval = jint(6);
	SF_rhino_NativeGlobal_Id_isFinite = jint(7);
	SF_rhino_NativeGlobal_Id_isNaN = jint(8);
	SF_rhino_NativeGlobal_Id_isXMLName = jint(9);
	SF_rhino_NativeGlobal_Id_parseFloat = jint(10);
	SF_rhino_NativeGlobal_Id_parseInt = jint(11);
	SF_rhino_NativeGlobal_Id_unescape = jint(12);
	SF_rhino_NativeGlobal_Id_uneval = jint(13);
	SF_rhino_NativeGlobal_LAST_SCOPE_FUNCTION_ID = jint(13);
	SF_rhino_NativeGlobal_Id_new_CommonError = jint(14);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeGlobal:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeGlobal(ctx);
	{
	LINE_NUMBER(705);
	clinit_rhino_NativeGlobal(ctx);
	SF_rhino_NativeGlobal_FTAG = (((jobject) createStringLiteral(ctx, u8"Global"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeGlobal[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_escape", "([Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_unescape", "([Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "js_eval", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_rhino_IdFunctionCall, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_rhino_NativeGlobal_serialVersionUID, "J", 24 },
	{ "URI_DECODE_RESERVED", &class_java_lang_String, (intptr_t) &SF_rhino_NativeGlobal_URI_DECODE_RESERVED, "Ljava/lang/String;", 26 },
	{ "INVALID_UTF8", &class_int, (intptr_t) &SF_rhino_NativeGlobal_INVALID_UTF8, "I", 26 },
	{ "FTAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeGlobal_FTAG, "Ljava/lang/Object;", 26 },
	{ "Id_decodeURI", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_decodeURI, "I", 26 },
	{ "Id_decodeURIComponent", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_decodeURIComponent, "I", 26 },
	{ "Id_encodeURI", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_encodeURI, "I", 26 },
	{ "Id_encodeURIComponent", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_encodeURIComponent, "I", 26 },
	{ "Id_escape", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_escape, "I", 26 },
	{ "Id_eval", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_eval, "I", 26 },
	{ "Id_isFinite", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_isFinite, "I", 26 },
	{ "Id_isNaN", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_isNaN, "I", 26 },
	{ "Id_isXMLName", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_isXMLName, "I", 26 },
	{ "Id_parseFloat", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_parseFloat, "I", 26 },
	{ "Id_parseInt", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_parseInt, "I", 26 },
	{ "Id_unescape", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_unescape, "I", 26 },
	{ "Id_uneval", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_uneval, "I", 26 },
	{ "LAST_SCOPE_FUNCTION_ID", &class_int, (intptr_t) &SF_rhino_NativeGlobal_LAST_SCOPE_FUNCTION_ID, "I", 26 },
	{ "Id_new_CommonError", &class_int, (intptr_t) &SF_rhino_NativeGlobal_Id_new_CommonError, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeGlobal, 0, "()V", 1 },
	{ "init", (intptr_t) SM_rhino_NativeGlobal_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "execIdCall", (intptr_t) M_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeGlobal_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "js_parseInt", (intptr_t) SM_rhino_NativeGlobal_js_parseInt_Array1_java_lang_Object_R_java_lang_Object, 0, "([Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "js_parseFloat", (intptr_t) SM_rhino_NativeGlobal_js_parseFloat_Array1_java_lang_Object_R_java_lang_Object, 0, "([Ljava/lang/Object;)Ljava/lang/Object;", 8 },
	{ "js_escape", (intptr_t) M_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeGlobal_js_escape_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_unescape", (intptr_t) M_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeGlobal_js_unescape_Array1_java_lang_Object_R_java_lang_Object, "([Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "js_eval", (intptr_t) M_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeGlobal_js_eval_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 2 },
	{ "isEvalFunction", (intptr_t) SM_rhino_NativeGlobal_isEvalFunction_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 8 },
	{ "encode", (intptr_t) SM_rhino_NativeGlobal_encode_java_lang_String_boolean_R_java_lang_String, 0, "(Ljava/lang/String;Z)Ljava/lang/String;", 10 },
	{ "toHexChar", (intptr_t) SM_rhino_NativeGlobal_toHexChar_int_R_char, 0, "(I)C", 10 },
	{ "unHex", (intptr_t) SM_rhino_NativeGlobal_unHex_char_R_int, 0, "(C)I", 10 },
	{ "unHex", (intptr_t) SM_rhino_NativeGlobal_unHex_char_char_R_int, 0, "(CC)I", 10 },
	{ "decode", (intptr_t) SM_rhino_NativeGlobal_decode_java_lang_String_boolean_R_java_lang_String, 0, "(Ljava/lang/String;Z)Ljava/lang/String;", 10 },
	{ "encodeUnescaped", (intptr_t) SM_rhino_NativeGlobal_encodeUnescaped_char_boolean_R_boolean, 0, "(CZ)Z", 10 },
	{ "uriError", (intptr_t) SM_rhino_NativeGlobal_uriError_R_rhino_EcmaError, 0, "()Lrhino/EcmaError;", 10 },
	{ "oneUcs4ToUtf8Char", (intptr_t) SM_rhino_NativeGlobal_oneUcs4ToUtf8Char_Array1_byte_int_R_int, 0, "([BI)I", 10 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeGlobal, 0, "()V", 8 },
};

Class class_rhino_NativeGlobal{
		.nativeName = (intptr_t) "rhino/NativeGlobal",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeGlobal),
		.classVtable = (intptr_t) vtable_rhino_NativeGlobal,
		.staticInitializer = (intptr_t) clinit_rhino_NativeGlobal,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeGlobal,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeGlobal = registerClass(&class_rhino_NativeGlobal);

}
