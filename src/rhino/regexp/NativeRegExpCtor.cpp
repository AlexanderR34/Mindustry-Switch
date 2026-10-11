#include "rhino/regexp/NativeRegExpCtor.h"
#include "rhino/regexp/NativeRegExp.h"
#include "java/lang/Boolean.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/regexp/RegExpImpl.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/RegExpProxy.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/regexp/SubString.h"
#include "rhino/regexp/NativeRegExpCtor.h"
#include "rhino/TopLevel_Builtins.h"

extern "C" {

jint SF_rhino_regexp_NativeRegExpCtor_Id_multiline;
jint SF_rhino_regexp_NativeRegExpCtor_Id_STAR;
jint SF_rhino_regexp_NativeRegExpCtor_Id_input;
jint SF_rhino_regexp_NativeRegExpCtor_Id_UNDERSCORE;
jint SF_rhino_regexp_NativeRegExpCtor_Id_lastMatch;
jint SF_rhino_regexp_NativeRegExpCtor_Id_AMPERSAND;
jint SF_rhino_regexp_NativeRegExpCtor_Id_lastParen;
jint SF_rhino_regexp_NativeRegExpCtor_Id_PLUS;
jint SF_rhino_regexp_NativeRegExpCtor_Id_leftContext;
jint SF_rhino_regexp_NativeRegExpCtor_Id_BACK_QUOTE;
jint SF_rhino_regexp_NativeRegExpCtor_Id_rightContext;
jint SF_rhino_regexp_NativeRegExpCtor_Id_QUOTE;
jint SF_rhino_regexp_NativeRegExpCtor_DOLLAR_ID_BASE;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_1;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_2;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_3;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_4;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_5;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_6;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_7;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_8;
jint SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_9;
jint SF_rhino_regexp_NativeRegExpCtor_MAX_INSTANCE_ID;

void mark_rhino_regexp_NativeRegExpCtor(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_BaseFunction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_regexp_NativeRegExpCtor *) object;
}

void clinit_rhino_regexp_NativeRegExpCtor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_BaseFunction(ctx);
	SF_rhino_regexp_NativeRegExpCtor_Id_multiline = jint(1);
	SF_rhino_regexp_NativeRegExpCtor_Id_STAR = jint(2);
	SF_rhino_regexp_NativeRegExpCtor_Id_input = jint(3);
	SF_rhino_regexp_NativeRegExpCtor_Id_UNDERSCORE = jint(4);
	SF_rhino_regexp_NativeRegExpCtor_Id_lastMatch = jint(5);
	SF_rhino_regexp_NativeRegExpCtor_Id_AMPERSAND = jint(6);
	SF_rhino_regexp_NativeRegExpCtor_Id_lastParen = jint(7);
	SF_rhino_regexp_NativeRegExpCtor_Id_PLUS = jint(8);
	SF_rhino_regexp_NativeRegExpCtor_Id_leftContext = jint(9);
	SF_rhino_regexp_NativeRegExpCtor_Id_BACK_QUOTE = jint(10);
	SF_rhino_regexp_NativeRegExpCtor_Id_rightContext = jint(11);
	SF_rhino_regexp_NativeRegExpCtor_Id_QUOTE = jint(12);
	SF_rhino_regexp_NativeRegExpCtor_DOLLAR_ID_BASE = jint(12);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_1 = jint(13);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_2 = jint(14);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_3 = jint(15);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_4 = jint(16);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_5 = jint(17);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_6 = jint(18);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_7 = jint(19);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_8 = jint(20);
	SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_9 = jint(21);
	SF_rhino_regexp_NativeRegExpCtor_MAX_INSTANCE_ID = jint(21);
}

void init_rhino_regexp_NativeRegExpCtor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExpCtor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(421);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_multilineAttr = (jint(4));
	LINE_NUMBER(422);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_starAttr = (jint(4));
	LINE_NUMBER(423);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_inputAttr = (jint(4));
	LINE_NUMBER(424);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_underscoreAttr = (jint(4));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExpCtor_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RegExp"_j)));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExpCtor_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExpCtor_getArity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getArity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jint(2));
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExpCtor_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:call", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(39);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= 0) goto label_1;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), &class_rhino_regexp_NativeRegExp)) == 0) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) == (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0))));
	}
label_1:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExpCtor_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_NativeRegExpCtor_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExpCtor_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:construct", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(48);
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_NativeRegExp);
	init_rhino_regexp_NativeRegExp(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(50);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_RegExp;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_NativeRegExpCtor_getImpl_R_rhino_regexp_RegExpImpl(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getImpl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExpCtor(ctx);
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_regexp_RegExpImpl, sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExpCtor_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getMaxInstanceId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	jint temp0 = (jint)M_rhino_BaseFunction_getMaxInstanceId_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + (21));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExpCtor_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:findInstanceIdInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	frame[2].i = (jint(0));
	LINE_NUMBER(107);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_4;
		case 7: goto label_4;
		case 8: goto label_4;
		case 9: goto label_6;
		case 10: goto label_4;
		case 11: goto label_7;
		case 12: goto label_8;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	switch(temp0) {
		case 38: goto label_9;
		case 39: goto label_10;
		case 40: goto label_11;
		case 41: goto label_11;
		case 42: goto label_12;
		case 43: goto label_13;
		case 44: goto label_11;
		case 45: goto label_11;
		case 46: goto label_11;
		case 47: goto label_11;
		case 48: goto label_11;
		case 49: goto label_14;
		case 50: goto label_15;
		case 51: goto label_16;
		case 52: goto label_17;
		case 53: goto label_18;
		case 54: goto label_19;
		case 55: goto label_20;
		case 56: goto label_21;
		case 57: goto label_22;
		case 58: goto label_11;
		case 59: goto label_11;
		case 60: goto label_11;
		case 61: goto label_11;
		case 62: goto label_11;
		case 63: goto label_11;
		case 64: goto label_11;
		case 65: goto label_11;
		case 66: goto label_11;
		case 67: goto label_11;
		case 68: goto label_11;
		case 69: goto label_11;
		case 70: goto label_11;
		case 71: goto label_11;
		case 72: goto label_11;
		case 73: goto label_11;
		case 74: goto label_11;
		case 75: goto label_11;
		case 76: goto label_11;
		case 77: goto label_11;
		case 78: goto label_11;
		case 79: goto label_11;
		case 80: goto label_11;
		case 81: goto label_11;
		case 82: goto label_11;
		case 83: goto label_11;
		case 84: goto label_11;
		case 85: goto label_11;
		case 86: goto label_11;
		case 87: goto label_11;
		case 88: goto label_11;
		case 89: goto label_11;
		case 90: goto label_11;
		case 91: goto label_11;
		case 92: goto label_11;
		case 93: goto label_11;
		case 94: goto label_11;
		case 95: goto label_23;
		case 96: goto label_24;
		default: goto label_11;
	}
	}
label_9:;
	{
	LINE_NUMBER(114);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(115);
	frame[2].i = (6);
	LINE_NUMBER(116);
	goto label_27;
	}
label_10:;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(121);
	frame[2].i = (12);
	LINE_NUMBER(122);
	goto label_27;
	}
label_12:;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(127);
	frame[2].i = (jint(2));
	LINE_NUMBER(128);
	goto label_27;
	}
label_13:;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(133);
	frame[2].i = (8);
	LINE_NUMBER(134);
	goto label_27;
	}
label_14:;
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(139);
	frame[2].i = (13);
	LINE_NUMBER(140);
	goto label_27;
	}
label_15:;
	{
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(145);
	frame[2].i = (14);
	LINE_NUMBER(146);
	goto label_27;
	}
label_16:;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(151);
	frame[2].i = (15);
	LINE_NUMBER(152);
	goto label_27;
	}
label_17:;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(157);
	frame[2].i = (16);
	LINE_NUMBER(158);
	goto label_27;
	}
label_18:;
	{
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(163);
	frame[2].i = (17);
	LINE_NUMBER(164);
	goto label_27;
	}
label_19:;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(169);
	frame[2].i = (18);
	LINE_NUMBER(170);
	goto label_27;
	}
label_20:;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(175);
	frame[2].i = (19);
	LINE_NUMBER(176);
	goto label_27;
	}
label_21:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(181);
	frame[2].i = (20);
	LINE_NUMBER(182);
	goto label_27;
	}
label_22:;
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(187);
	frame[2].i = (21);
	LINE_NUMBER(188);
	goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(193);
	frame[2].i = (jint(4));
	LINE_NUMBER(194);
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (36)) goto label_4;
	}
	{
	LINE_NUMBER(199);
	frame[2].i = (10);
	LINE_NUMBER(200);
	goto label_27;
	}
label_11:;
	LINE_NUMBER(204);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(206);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"input"_j)));
	LINE_NUMBER(207);
	frame[2].i = (jint(3));
	LINE_NUMBER(208);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(4)));
	frame[4].i = temp0;
	LINE_NUMBER(211);
	if ((frame[4].i) != (77)) goto label_59;
	}
	{
	LINE_NUMBER(212);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"lastMatch"_j)));
	LINE_NUMBER(213);
	frame[2].i = (jint(5));
	goto label_4;
	}
label_59:;
	{
	LINE_NUMBER(214);
	if ((frame[4].i) != (80)) goto label_62;
	}
	{
	LINE_NUMBER(215);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"lastParen"_j)));
	LINE_NUMBER(216);
	frame[2].i = (7);
	goto label_4;
	}
label_62:;
	{
	LINE_NUMBER(217);
	if ((frame[4].i) != (105)) goto label_4;
	}
	{
	LINE_NUMBER(218);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"multiline"_j)));
	LINE_NUMBER(219);
	frame[2].i = (jint(1));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(223);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"leftContext"_j)));
	LINE_NUMBER(224);
	frame[2].i = (9);
	LINE_NUMBER(225);
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(227);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"rightContext"_j)));
	LINE_NUMBER(228);
	frame[2].i = (11);
	}
label_4:;
	{
	LINE_NUMBER(231);
	if ((frame[3].o) == nullptr) goto label_27;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_27;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_27;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_27:;
	{
	LINE_NUMBER(235);
	if ((frame[2].i) != 0) goto label_70;
	}
	{
	jint temp0 = (jint)M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_70:;
	{
	LINE_NUMBER(238);
	switch((frame[2].i)) {
		case 1: goto label_71;
		case 2: goto label_72;
		case 3: goto label_73;
		case 4: goto label_74;
		default: goto label_75;
	}
	}
label_71:;
	{
	LINE_NUMBER(240);
	frame[3].i = ((jint)((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_multilineAttr);
	LINE_NUMBER(241);
	goto label_77;
	}
label_72:;
	{
	LINE_NUMBER(243);
	frame[3].i = ((jint)((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_starAttr);
	LINE_NUMBER(244);
	goto label_77;
	}
label_73:;
	{
	LINE_NUMBER(246);
	frame[3].i = ((jint)((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_inputAttr);
	LINE_NUMBER(247);
	goto label_77;
	}
label_74:;
	{
	LINE_NUMBER(249);
	frame[3].i = ((jint)((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_underscoreAttr);
	LINE_NUMBER(250);
	goto label_77;
	}
label_75:;
	{
	LINE_NUMBER(252);
	frame[3].i = (jint(5));
	}
label_77:;
	{
	LINE_NUMBER(256);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_rhino_BaseFunction_getMaxInstanceId_R_int(ctx, (frame[0].o));
	jint temp2 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, temp0, (temp1 + (frame[2].i)));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExpCtor_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getInstanceIdName", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(263);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_BaseFunction_getMaxInstanceId_R_int(ctx, (frame[0].o));
	frame[2].i = (temp0 - temp1);
	LINE_NUMBER(264);
	if ((jint(1)) > (frame[2].i)) goto label_2;
	}
	{
	if ((frame[2].i) > (21)) goto label_2;
	}
	{
	LINE_NUMBER(265);
	switch((frame[2].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_7;
		case 5: goto label_8;
		case 6: goto label_9;
		case 7: goto label_10;
		case 8: goto label_11;
		case 9: goto label_12;
		case 10: goto label_13;
		case 11: goto label_14;
		case 12: goto label_15;
		default: goto label_16;
	}
	}
label_4:;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"multiline"_j)));
	}
label_5:;
	{
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"$*"_j)));
	}
label_6:;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"input"_j)));
	}
label_7:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"$_"_j)));
	}
label_8:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"lastMatch"_j)));
	}
label_9:;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"$&"_j)));
	}
label_10:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"lastParen"_j)));
	}
label_11:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"$+"_j)));
	}
label_12:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"leftContext"_j)));
	}
label_13:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"$`"_j)));
	}
label_14:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"rightContext"_j)));
	}
label_15:;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"$'"_j)));
	}
label_16:;
	{
	LINE_NUMBER(297);
	frame[3].i = (((frame[2].i) - (12)) - (jint(1)));
	LINE_NUMBER(298);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(2)));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (36);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (jchar(((49) + (frame[3].i))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(299);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExpCtor_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:getInstanceIdValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(306);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_BaseFunction_getMaxInstanceId_R_int(ctx, (frame[0].o));
	frame[2].i = (temp0 - temp1);
	LINE_NUMBER(307);
	if ((jint(1)) > (frame[2].i)) goto label_2;
	}
	{
	if ((frame[2].i) > (21)) goto label_2;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExpCtor_getImpl_R_rhino_regexp_RegExpImpl(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(310);
	switch((frame[2].i)) {
		case 1: goto label_5;
		case 2: goto label_5;
		case 3: goto label_6;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_7;
		case 7: goto label_8;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_9;
		case 11: goto label_10;
		case 12: goto label_10;
		default: goto label_11;
	}
	}
label_5:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, ((jint)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_multiline));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_input;
	frame[4].o = sp[0].o;
	LINE_NUMBER(318);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastMatch;
	frame[4].o = sp[0].o;
	LINE_NUMBER(323);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastParen;
	frame[4].o = sp[0].o;
	LINE_NUMBER(328);
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	frame[4].o = sp[0].o;
	LINE_NUMBER(333);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_rightContext;
	frame[4].o = sp[0].o;
	LINE_NUMBER(338);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(342);
	frame[5].i = (((frame[2].i) - (12)) - (jint(1)));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString])(ctx, (frame[3].o), (frame[5].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(344);
	goto label_13;
	}
label_13:;
	{
	LINE_NUMBER(347);
	if ((frame[4].o) != nullptr) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_21;
label_20:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_21:;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_regexp_NativeRegExpCtor_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:setInstanceIdValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(354);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_BaseFunction_getMaxInstanceId_R_int(ctx, (frame[0].o));
	frame[3].i = (temp0 - temp1);
	LINE_NUMBER(355);
	switch((frame[3].i)) {
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_4;
		case 7: goto label_4;
		case 8: goto label_4;
		case 9: goto label_4;
		case 10: goto label_4;
		case 11: goto label_4;
		case 12: goto label_4;
		default: goto label_5;
	}
	}
label_2:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExpCtor_getImpl_R_rhino_regexp_RegExpImpl(ctx);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toBoolean_java_lang_Object_R_boolean(ctx, (frame[2].o));
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_multiline = temp0;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExpCtor_getImpl_R_rhino_regexp_RegExpImpl(ctx);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}
label_4:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(376);
	frame[4].i = (((frame[3].i) - (12)) - (jint(1)));
	LINE_NUMBER(377);
	if ((jint(0)) > (frame[4].i)) goto label_9;
	}
	{
	if ((frame[4].i) > (8)) goto label_9;
	}
	LINE_NUMBER(378);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(381);
	M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_regexp_NativeRegExpCtor_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExpCtor:setInstanceIdAttributes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(386);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_rhino_BaseFunction_getMaxInstanceId_R_int(ctx, (frame[0].o));
	frame[3].i = (temp0 - temp1);
	LINE_NUMBER(387);
	switch((frame[3].i)) {
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_6;
		case 7: goto label_6;
		case 8: goto label_6;
		case 9: goto label_6;
		case 10: goto label_6;
		case 11: goto label_6;
		case 12: goto label_6;
		default: goto label_7;
	}
	}
label_2:;
	{
	LINE_NUMBER(389);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_multilineAttr = (frame[2].i);
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(392);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_starAttr = (frame[2].i);
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(395);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_inputAttr = (frame[2].i);
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(398);
	((rhino_regexp_NativeRegExpCtor *) NULL_CHECK((frame[0].o)))->F_underscoreAttr = (frame[2].i);
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return;
	}
label_6:;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(412);
	frame[4].i = (((frame[3].i) - (12)) - (jint(1)));
	LINE_NUMBER(413);
	if ((jint(0)) > (frame[4].i)) goto label_13;
	}
	{
	if ((frame[4].i) > (8)) goto label_13;
	}
	LINE_NUMBER(415);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(418);
	M_rhino_BaseFunction_setInstanceIdAttributes_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_NativeRegExpCtor[] {
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
	(void *) M_rhino_BaseFunction_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_BaseFunction_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExpCtor_getMaxInstanceId_R_int,
	(void *) M_rhino_regexp_NativeRegExpCtor_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_regexp_NativeRegExpCtor_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_regexp_NativeRegExpCtor_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExpCtor_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExpCtor_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_BaseFunction_initPrototypeId_int,
	(void *) M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_regexp_NativeRegExpCtor_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExpCtor_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_regexp_NativeRegExpCtor_getArity_R_int,
	(void *) M_rhino_regexp_NativeRegExpCtor_getLength_R_int,
	(void *) M_rhino_regexp_NativeRegExpCtor_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "isGeneratorFunction", "()Z" },
	{ "realFunction", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/BaseFunction;" },
	{ "setImmunePrototypeProperty", "(Ljava/lang/Object;)V" },
	{ "getClassPrototype", "()Lrhino/Scriptable;" },
	{ "createObject", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;" },
	{ "decompile", "(II)Ljava/lang/String;" },
	{ "getArity", "()I" },
	{ "getLength", "()I" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "hasPrototypeProperty", "()Z" },
	{ "getPrototypeProperty", "()Ljava/lang/Object;" },
	{ "setupDefaultPrototype", "()Ljava/lang/Object;" },
	{ "getArguments", "()Ljava/lang/Object;" },
	{ "jsConstructor", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "Id_multiline", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_multiline, "I", 26 },
	{ "Id_STAR", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_STAR, "I", 26 },
	{ "Id_input", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_input, "I", 26 },
	{ "Id_UNDERSCORE", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_UNDERSCORE, "I", 26 },
	{ "Id_lastMatch", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_lastMatch, "I", 26 },
	{ "Id_AMPERSAND", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_AMPERSAND, "I", 26 },
	{ "Id_lastParen", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_lastParen, "I", 26 },
	{ "Id_PLUS", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_PLUS, "I", 26 },
	{ "Id_leftContext", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_leftContext, "I", 26 },
	{ "Id_BACK_QUOTE", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_BACK_QUOTE, "I", 26 },
	{ "Id_rightContext", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_rightContext, "I", 26 },
	{ "Id_QUOTE", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_QUOTE, "I", 26 },
	{ "DOLLAR_ID_BASE", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_DOLLAR_ID_BASE, "I", 26 },
	{ "Id_DOLLAR_1", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_1, "I", 26 },
	{ "Id_DOLLAR_2", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_2, "I", 26 },
	{ "Id_DOLLAR_3", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_3, "I", 26 },
	{ "Id_DOLLAR_4", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_4, "I", 26 },
	{ "Id_DOLLAR_5", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_5, "I", 26 },
	{ "Id_DOLLAR_6", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_6, "I", 26 },
	{ "Id_DOLLAR_7", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_7, "I", 26 },
	{ "Id_DOLLAR_8", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_8, "I", 26 },
	{ "Id_DOLLAR_9", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_Id_DOLLAR_9, "I", 26 },
	{ "MAX_INSTANCE_ID", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExpCtor_MAX_INSTANCE_ID, "I", 26 },
	{ "multilineAttr", &class_int, offsetof(rhino_regexp_NativeRegExpCtor, F_multilineAttr), "I", 2 },
	{ "starAttr", &class_int, offsetof(rhino_regexp_NativeRegExpCtor, F_starAttr), "I", 2 },
	{ "inputAttr", &class_int, offsetof(rhino_regexp_NativeRegExpCtor, F_inputAttr), "I", 2 },
	{ "underscoreAttr", &class_int, offsetof(rhino_regexp_NativeRegExpCtor, F_underscoreAttr), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_NativeRegExpCtor, 0, "()V", 0 },
	{ "getFunctionName", (intptr_t) M_rhino_regexp_NativeRegExpCtor_getFunctionName_R_java_lang_String, VTABLE_rhino_regexp_NativeRegExpCtor_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getLength", (intptr_t) M_rhino_regexp_NativeRegExpCtor_getLength_R_int, VTABLE_rhino_regexp_NativeRegExpCtor_getLength_R_int, "()I", 1 },
	{ "getArity", (intptr_t) M_rhino_regexp_NativeRegExpCtor_getArity_R_int, VTABLE_rhino_regexp_NativeRegExpCtor_getArity_R_int, "()I", 1 },
	{ "call", (intptr_t) M_rhino_regexp_NativeRegExpCtor_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExpCtor_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_regexp_NativeRegExpCtor_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_regexp_NativeRegExpCtor_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "getImpl", (intptr_t) SM_rhino_regexp_NativeRegExpCtor_getImpl_R_rhino_regexp_RegExpImpl, 0, "()Lrhino/regexp/RegExpImpl;", 10 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_regexp_NativeRegExpCtor_getMaxInstanceId_R_int, VTABLE_rhino_regexp_NativeRegExpCtor_getMaxInstanceId_R_int, "()I", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_regexp_NativeRegExpCtor_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_regexp_NativeRegExpCtor_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_regexp_NativeRegExpCtor_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_regexp_NativeRegExpCtor_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_regexp_NativeRegExpCtor_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExpCtor_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_regexp_NativeRegExpCtor_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_regexp_NativeRegExpCtor_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
	{ "setInstanceIdAttributes", (intptr_t) M_rhino_regexp_NativeRegExpCtor_setInstanceIdAttributes_int_int, VTABLE_rhino_regexp_NativeRegExpCtor_setInstanceIdAttributes_int_int, "(II)V", 4 },
};

Class class_rhino_regexp_NativeRegExpCtor{
		.nativeName = (intptr_t) "rhino/regexp/NativeRegExpCtor",
		.parentClass = (intptr_t) &class_rhino_BaseFunction,
		.size = sizeof(rhino_regexp_NativeRegExpCtor),
		.classVtable = (intptr_t) vtable_rhino_regexp_NativeRegExpCtor,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_NativeRegExpCtor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_NativeRegExpCtor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 27,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 129,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_NativeRegExpCtor = registerClass(&class_rhino_regexp_NativeRegExpCtor);

}
