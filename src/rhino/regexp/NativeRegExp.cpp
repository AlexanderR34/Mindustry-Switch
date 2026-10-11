#include "rhino/regexp/NativeRegExp.h"
#include "rhino/regexp/NativeRegExp.h"
#include "rhino/Function.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/regexp/RECompiled.h"
#include "java/lang/Boolean.h"
#include "rhino/regexp/RegExpImpl.h"
#include "rhino/regexp/REGlobalData.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/regexp/CompilerState.h"
#include "rhino/EvaluatorException.h"
#include "rhino/regexp/REProgState.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Throwable.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/regexp/REBackTrackData.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/CharSequence.h"
#include "rhino/RegExpProxy.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/regexp/RECharSet.h"
#include "java/lang/AssertionError.h"
#include "rhino/regexp/SubString.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/regexp/NativeRegExpCtor.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "rhino/regexp/RENode.h"

extern "C" {

jobject SF_rhino_regexp_NativeRegExp_REGEXP_TAG;
jint SF_rhino_regexp_NativeRegExp_JSREG_GLOB;
jint SF_rhino_regexp_NativeRegExp_JSREG_FOLD;
jint SF_rhino_regexp_NativeRegExp_JSREG_MULTILINE;
jint SF_rhino_regexp_NativeRegExp_TEST;
jint SF_rhino_regexp_NativeRegExp_MATCH;
jint SF_rhino_regexp_NativeRegExp_PREFIX;
jbool SF_rhino_regexp_NativeRegExp_debug;
jbyte SF_rhino_regexp_NativeRegExp_REOP_SIMPLE_START;
jbyte SF_rhino_regexp_NativeRegExp_REOP_EMPTY;
jbyte SF_rhino_regexp_NativeRegExp_REOP_BOL;
jbyte SF_rhino_regexp_NativeRegExp_REOP_EOL;
jbyte SF_rhino_regexp_NativeRegExp_REOP_WBDRY;
jbyte SF_rhino_regexp_NativeRegExp_REOP_WNONBDRY;
jbyte SF_rhino_regexp_NativeRegExp_REOP_DOT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_DIGIT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_NONDIGIT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ALNUM;
jbyte SF_rhino_regexp_NativeRegExp_REOP_NONALNUM;
jbyte SF_rhino_regexp_NativeRegExp_REOP_SPACE;
jbyte SF_rhino_regexp_NativeRegExp_REOP_NONSPACE;
jbyte SF_rhino_regexp_NativeRegExp_REOP_BACKREF;
jbyte SF_rhino_regexp_NativeRegExp_REOP_FLAT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_FLAT1;
jbyte SF_rhino_regexp_NativeRegExp_REOP_FLATi;
jbyte SF_rhino_regexp_NativeRegExp_REOP_FLAT1i;
jbyte SF_rhino_regexp_NativeRegExp_REOP_UCFLAT1;
jbyte SF_rhino_regexp_NativeRegExp_REOP_UCFLAT1i;
jbyte SF_rhino_regexp_NativeRegExp_REOP_CLASS;
jbyte SF_rhino_regexp_NativeRegExp_REOP_NCLASS;
jbyte SF_rhino_regexp_NativeRegExp_REOP_SIMPLE_END;
jbyte SF_rhino_regexp_NativeRegExp_REOP_QUANT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_STAR;
jbyte SF_rhino_regexp_NativeRegExp_REOP_PLUS;
jbyte SF_rhino_regexp_NativeRegExp_REOP_OPT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_LPAREN;
jbyte SF_rhino_regexp_NativeRegExp_REOP_RPAREN;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ALT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_JUMP;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ASSERT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ASSERT_NOT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ASSERTTEST;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ASSERTNOTTEST;
jbyte SF_rhino_regexp_NativeRegExp_REOP_MINIMALSTAR;
jbyte SF_rhino_regexp_NativeRegExp_REOP_MINIMALPLUS;
jbyte SF_rhino_regexp_NativeRegExp_REOP_MINIMALOPT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_MINIMALQUANT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ENDCHILD;
jbyte SF_rhino_regexp_NativeRegExp_REOP_REPEAT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_MINIMALREPEAT;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQ;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQi;
jbyte SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQ2;
jbyte SF_rhino_regexp_NativeRegExp_REOP_END;
jint SF_rhino_regexp_NativeRegExp_ANCHOR_BOL;
jint SF_rhino_regexp_NativeRegExp_INDEX_LEN;
jint SF_rhino_regexp_NativeRegExp_Id_lastIndex;
jint SF_rhino_regexp_NativeRegExp_Id_source;
jint SF_rhino_regexp_NativeRegExp_Id_global;
jint SF_rhino_regexp_NativeRegExp_Id_ignoreCase;
jint SF_rhino_regexp_NativeRegExp_Id_multiline;
jint SF_rhino_regexp_NativeRegExp_MAX_INSTANCE_ID;
jint SF_rhino_regexp_NativeRegExp_Id_compile;
jint SF_rhino_regexp_NativeRegExp_Id_toString;
jint SF_rhino_regexp_NativeRegExp_Id_toSource;
jint SF_rhino_regexp_NativeRegExp_Id_exec;
jint SF_rhino_regexp_NativeRegExp_Id_test;
jint SF_rhino_regexp_NativeRegExp_Id_prefix;
jint SF_rhino_regexp_NativeRegExp_MAX_PROTOTYPE_ID;
jbool SF_rhino_regexp_NativeRegExp_$assertionsDisabled;

void mark_rhino_regexp_NativeRegExp(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_regexp_NativeRegExp_REGEXP_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_regexp_NativeRegExp_REGEXP_TAG)->clazz)->markFunction)((jobject) SF_rhino_regexp_NativeRegExp_REGEXP_TAG, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_regexp_NativeRegExp *) object;
	if (self->F_re)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_re)->clazz)->markFunction)((jobject) self->F_re, mark, depth + 1);
	if (self->F_lastIndex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastIndex)->clazz)->markFunction)((jobject) self->F_lastIndex, mark, depth + 1);
}

void SM_rhino_regexp_NativeRegExp_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:init", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(93);
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_NativeRegExp);
	init_rhino_regexp_NativeRegExp(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (jobject(nullptr)), (jint(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_re = (jref) sp[1].o;
	LINE_NUMBER(95);
	((func_rhino_regexp_NativeRegExp_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_activatePrototypeMap_int])(ctx, (frame[3].o), (6));
	LINE_NUMBER(96);
	((func_rhino_regexp_NativeRegExp_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_setParentScope_rhino_Scriptable])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(97);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	((func_rhino_regexp_NativeRegExp_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_regexp_NativeRegExp_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	clinit_rhino_regexp_NativeRegExpCtor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_NativeRegExpCtor);
	init_rhino_regexp_NativeRegExpCtor(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(102);
	((func_rhino_regexp_NativeRegExp_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (frame[4].o), (jint(2)));
	LINE_NUMBER(104);
	SM_rhino_ScriptRuntime_setFunctionProtoAndParent_rhino_BaseFunction_rhino_Scriptable(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(106);
	((func_rhino_regexp_NativeRegExpCtor_setImmunePrototypeProperty_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_regexp_NativeRegExpCtor_setImmunePrototypeProperty_java_lang_Object])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(108);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(109);
	((func_rhino_regexp_NativeRegExp_sealObject) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_sealObject])(ctx, (frame[3].o));
	LINE_NUMBER(110);
	((func_rhino_regexp_NativeRegExpCtor_sealObject) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_regexp_NativeRegExpCtor_sealObject])(ctx, (frame[4].o));
	}
label_10:;
	{
	LINE_NUMBER(113);
	SM_rhino_ScriptableObject_defineProperty_rhino_Scriptable_java_lang_String_java_lang_Object_int(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"RegExp"_j))), (frame[4].o), (jint(2)));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_regexp_NativeRegExp_rhino_Scriptable_rhino_regexp_RECompiled(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(116);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(2718);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(2719);
	((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndexAttr = (6);
	LINE_NUMBER(117);
	((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re = (jref) (frame[2].o);
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_RegExp;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"RegExp"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_getTypeOf_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getTypeOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"object"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:call", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 >= (200)) goto label_1;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:construct", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 >= (200)) goto label_1;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(1)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_notFunctionError_java_lang_Object_R_java_lang_RuntimeException(ctx, (frame[0].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:compile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(156);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= 0) goto label_1;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), &class_rhino_regexp_NativeRegExp)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= (jint(1))) goto label_3;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.bad.regexp.compile"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(161);
	frame[4].o = (checkCast(ctx, &class_rhino_regexp_NativeRegExp, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0))))));
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[4].o)))->F_re;
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_re = (jref) sp[1].o;
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[4].o)))->F_lastIndex;
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(166);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) == 0) goto label_8;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), &class_rhino_Undefined)) == 0) goto label_9;
	}
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_10;
label_9:;
	{
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_escapeRegExp_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	sp += 1;
	}
label_10:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(167);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) <= (jint(1))) goto label_12;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)));
	LINE_NUMBER(168);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_12:;
	INST_ACONST_NULL();
label_14:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled(ctx, (frame[1].o), (frame[4].o), (frame[5].o), (jint(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_re = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (47));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_3;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[1].o))->F_source;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"(?:)"_j))));
	}
label_5:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (47));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(1))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (103));
	}
label_7:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(2))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (105));
	}
label_9:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(4))) == 0) goto label_11;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (109));
	}
label_11:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_rhino_regexp_NativeRegExp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(195);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(2718);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(2719);
	((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndexAttr = (6);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_NativeRegExp_getImpl_rhino_Context_R_rhino_regexp_RegExpImpl(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getImpl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_regexp_RegExpImpl, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_NativeRegExp_escapeRegExp_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:escapeRegExp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(205);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(206);
	frame[3].i = (jint(0));
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (47));
	frame[4].i = temp0;
	}
label_4:;
	{
	LINE_NUMBER(208);
	if ((frame[4].i) <= (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(209);
	if ((frame[4].i) == (frame[3].i)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[4].i) - (jint(1))));
	if (temp0 == (92)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(210);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(211);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[1].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\/"_j))));
	LINE_NUMBER(215);
	frame[3].i = ((frame[4].i) + (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (47), ((frame[4].i) + (jint(1))));
	frame[4].i = temp0;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(219);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	frame[1].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:execSub", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_getImpl_rhino_Context_R_rhino_regexp_RegExpImpl(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(230);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_2;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[5].o)))->F_input;
	frame[6].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[6].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(233);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))));
	frame[6].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(238);
	frame[7].d = (jdouble(0));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(1))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndex;
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, sp[0].o);
	frame[7].d = temp0;
	}
label_8:;
	{
	LINE_NUMBER(244);
	if ((doubleCompare((frame[7].d), (jdouble(0)), 1)) < 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	if ((doubleCompare((jdouble(temp0)), (frame[7].d), 1)) >= 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(246);
	frame[9].o = (jobject(nullptr));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint((frame[7].d)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[5].o), (frame[6].o), (frame[10].o), (frame[4].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(250);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(1))) == 0) goto label_14;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[9].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[9].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_19;
	}
label_18:;
	INST_DCONST(0);
	goto label_20;
label_19:;
	{
	jdouble temp0 = jdouble(((jint)ARRAY_ACCESS(jint, (frame[10].o), (jint(0)))));
	sp[0].d = temp0;
	sp += 1;
	}
label_20:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, sp[0].d);
	sp++;
	sp -= 2;
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
label_14:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:compileRE", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(259);
	clinit_rhino_regexp_RECompiled(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_RECompiled);
	init_rhino_regexp_RECompiled_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(261);
	frame[6].i = (jint(0));
	LINE_NUMBER(262);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(263);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(265);
	frame[9].i = (jint(0));
	LINE_NUMBER(266);
	if ((frame[8].i) != (103)) goto label_10;
	}
	{
	LINE_NUMBER(267);
	frame[9].i = (jint(1));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(268);
	if ((frame[8].i) != (105)) goto label_13;
	}
	{
	LINE_NUMBER(269);
	frame[9].i = (jint(2));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(270);
	if ((frame[8].i) != (109)) goto label_15;
	}
	{
	LINE_NUMBER(271);
	frame[9].i = (jint(4));
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(273);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.invalid.re.flag"_j));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[8].i));
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(275);
	if (((frame[6].i) & (frame[9].i)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.invalid.re.flag"_j));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[8].i));
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(278);
	frame[6].i = ((frame[6].i) | (frame[9].i));
	LINE_NUMBER(263);
	INST_IINC(7, 1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(281);
	((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_flags = (frame[6].i);
	LINE_NUMBER(283);
	clinit_rhino_regexp_CompilerState(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_CompilerState);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_source;
	init_rhino_regexp_CompilerState_rhino_Context_Array1_char_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(284);
	if ((frame[3].i) == 0) goto label_22;
	}
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_22;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[7].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (14));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(289);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_result;
	sp[1].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_cpbegin;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (jint(0))));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_length = (frame[5].i);
	LINE_NUMBER(291);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_flatIndex = (jint(0));
	LINE_NUMBER(292);
	sp[0].o = frame[7].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(5)));
	goto label_28;
	}
label_22:;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_parseDisjunction_rhino_regexp_CompilerState_R_boolean(ctx, (frame[7].o));
	if (temp0 != 0) goto label_29;
	}
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(299);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_maxBackReference) <= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_parenCount)) goto label_28;
	}
	{
	LINE_NUMBER(300);
	clinit_rhino_regexp_CompilerState(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_CompilerState);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_source;
	init_rhino_regexp_CompilerState_rhino_Context_Array1_char_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(301);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_backReferenceLimit = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_parenCount);
	LINE_NUMBER(302);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_parseDisjunction_rhino_regexp_CompilerState_R_boolean(ctx, (frame[7].o));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_28:;
	{
	LINE_NUMBER(307);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_progLength) + (jint(1))));
	((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_program = (jref) sp[1].o;
	LINE_NUMBER(308);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_classCount) == 0) goto label_36;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_regexp_RECharSet, ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_classCount));
	((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_classList = (jref) sp[1].o;
	LINE_NUMBER(310);
	((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_classCount = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_classCount);
	}
label_36:;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[7].o;
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_result;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[8].i = temp1;
	LINE_NUMBER(313);
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_program;
	jint temp2 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (57);
	LINE_NUMBER(323);
	((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_parenCount = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_parenCount);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_program;
	switch(((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))))) {
		case 2: goto label_42;
		case 3: goto label_43;
		case 4: goto label_43;
		case 5: goto label_43;
		case 6: goto label_43;
		case 7: goto label_43;
		case 8: goto label_43;
		case 9: goto label_43;
		case 10: goto label_43;
		case 11: goto label_43;
		case 12: goto label_43;
		case 13: goto label_43;
		case 14: goto label_44;
		case 15: goto label_45;
		case 16: goto label_44;
		case 17: goto label_45;
		case 18: goto label_46;
		case 19: goto label_46;
		case 20: goto label_43;
		case 21: goto label_43;
		case 22: goto label_43;
		case 23: goto label_43;
		case 24: goto label_43;
		case 25: goto label_43;
		case 26: goto label_43;
		case 27: goto label_43;
		case 28: goto label_43;
		case 29: goto label_43;
		case 30: goto label_43;
		case 31: goto label_47;
		default: goto label_43;
	}
	}
label_46:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_program;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, sp[1].o, (jint(1)));
	((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_anchorCh = (jchar(temp0));
	LINE_NUMBER(330);
	goto label_43;
	}
label_45:;
	{
	LINE_NUMBER(333);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_program;
	((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_anchorCh = (jchar((((jint)ARRAY_ACCESS(jbyte, sp[1].o, (jint(1)))) & (255))));
	LINE_NUMBER(334);
	goto label_43;
	}
label_44:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_program;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, sp[0].o, (jint(1)));
	frame[9].i = temp0;
	LINE_NUMBER(338);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_source;
	((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_anchorCh = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[9].i)));
	LINE_NUMBER(339);
	goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(341);
	((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_anchorCh = (-2);
	LINE_NUMBER(342);
	goto label_43;
	}
label_47:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[7].o)))->F_result;
	frame[10].o = sp[0].o;
	LINE_NUMBER(345);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[10].o)))->F_kid;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (jint(2))) goto label_43;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[10].o)))->F_kid2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (jint(2))) goto label_43;
	}
	{
	LINE_NUMBER(346);
	((rhino_regexp_RECompiled *) NULL_CHECK((frame[4].o)))->F_anchorCh = (-2);
	}
label_43:;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:isDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(360);
	if ((48) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (57)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:isWord", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(364);
	if ((97) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) <= (122)) goto label_2;
	}
label_1:;
	{
	if ((65) > (frame[0].i)) goto label_3;
	}
	{
	if ((frame[0].i) <= (90)) goto label_2;
	}
label_3:;
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_2;
	}
	{
	if ((frame[0].i) != (95)) goto label_4;
	}
label_2:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_isControlLetter_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:isControlLetter", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(368);
	if ((97) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) <= (122)) goto label_2;
	}
label_1:;
	{
	if ((65) > (frame[0].i)) goto label_3;
	}
	{
	if ((frame[0].i) > (90)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_isLineTerm_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:isLineTerm", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_isREWhiteSpace_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:isREWhiteSpace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar SM_rhino_regexp_NativeRegExp_upcase_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:upcase", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(391);
	if ((frame[0].i) >= (128)) goto label_1;
	}
	{
	LINE_NUMBER(392);
	if ((97) > (frame[0].i)) goto label_3;
	}
	{
	if ((frame[0].i) > (122)) goto label_3;
	}
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (jchar(((frame[0].i) + (-32))));
	}
label_3:;
	{
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_1:;
	{
	LINE_NUMBER(397);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, (frame[0].i));
	frame[1].i = temp0;
	LINE_NUMBER(398);
	if ((frame[1].i) >= (128)) goto label_6;
	}
	INST_ILOAD(0);
	goto label_7;
label_6:;
	INST_ILOAD(1);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar SM_rhino_regexp_NativeRegExp_downcase_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:downcase", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(402);
	if ((frame[0].i) >= (128)) goto label_1;
	}
	{
	LINE_NUMBER(403);
	if ((65) > (frame[0].i)) goto label_3;
	}
	{
	if ((frame[0].i) > (90)) goto label_3;
	}
	{
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (jchar(((frame[0].i) + (32))));
	}
label_3:;
	{
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[0].i);
	}
label_1:;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[0].i));
	frame[1].i = temp0;
	LINE_NUMBER(409);
	if ((frame[1].i) >= (128)) goto label_6;
	}
	INST_ILOAD(0);
	goto label_7;
label_6:;
	INST_ILOAD(1);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_toASCIIHexDigit_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:toASCIIHexDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(417);
	if ((frame[0].i) >= (48)) goto label_1;
	}
	{
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(419);
	if ((frame[0].i) > (57)) goto label_3;
	}
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return ((frame[0].i) - (48));
	}
label_3:;
	{
	LINE_NUMBER(422);
	frame[0].i = ((frame[0].i) | (32));
	LINE_NUMBER(423);
	if ((97) > (frame[0].i)) goto label_6;
	}
	{
	if ((frame[0].i) > (102)) goto label_6;
	}
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (((frame[0].i) - (97)) + (10));
	}
label_6:;
	{
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_parseDisjunction_rhino_regexp_CompilerState_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:parseDisjunction", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(436);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_parseAlternative_rhino_regexp_CompilerState_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpbegin;
	frame[1].o = sp[0].o;
	LINE_NUMBER(439);
	frame[2].i = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp);
	LINE_NUMBER(440);
	if ((frame[2].i) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i))) != (124)) goto label_5;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(443);
	clinit_rhino_regexp_RENode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[0].o, (31));
	frame[3].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_kid = (jref) sp[1].o;
	LINE_NUMBER(445);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_parseDisjunction_rhino_regexp_CompilerState_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(447);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_kid2 = (jref) sp[1].o;
	LINE_NUMBER(448);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[3].o);
	LINE_NUMBER(453);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (14)) goto label_14;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (14)) goto label_14;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) != 0) goto label_16;
	}
	INST_BIPUSH(53);
	goto label_17;
label_16:;
	INST_BIPUSH(54);
label_17:;
	{
	sp -= 2;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op = sp[1].i;
	LINE_NUMBER(456);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_chr);
	LINE_NUMBER(457);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_index = ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_chr);
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (13));
	goto label_5;
	}
label_14:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (22)) goto label_21;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_index) >= (256)) goto label_21;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (14)) goto label_21;
	}
	{
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(463);
	((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_op = (55);
	LINE_NUMBER(464);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_chr);
	LINE_NUMBER(465);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_index = ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_index);
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (13));
	goto label_5;
	}
label_21:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (14)) goto label_26;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (22)) goto label_26;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_index) >= (256)) goto label_26;
	}
	{
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) != 0) goto label_26;
	}
	{
	LINE_NUMBER(471);
	((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_op = (55);
	LINE_NUMBER(472);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_chr);
	LINE_NUMBER(473);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_index = ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_index);
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (13));
	goto label_5;
	}
label_26:;
	{
	LINE_NUMBER(479);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (9));
	}
label_5:;
	{
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_parseAlternative_rhino_regexp_CompilerState_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:parseAlternative", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(490);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(491);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(492);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpbegin;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(494);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) == ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_4;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) == (124)) goto label_4;
	}
	{
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_parenNesting) == 0) goto label_5;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) != (41)) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(496);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (jint(1)));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(499);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(502);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_parseTerm_rhino_regexp_CompilerState_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(503);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(504);
	if ((frame[1].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	frame[1].o = sp[0].o;
	LINE_NUMBER(506);
	frame[2].o = (frame[1].o);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(508);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_14;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_calculateBitmapSize_rhino_regexp_CompilerState_rhino_regexp_RENode_Array1_char_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:calculateBitmapSize", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(517);
	frame[5].i = (jint(0));
	LINE_NUMBER(522);
	frame[10].i = (jint(0));
	LINE_NUMBER(523);
	frame[11].i = (jint(0));
	LINE_NUMBER(525);
	((rhino_regexp_RENode *) NULL_CHECK((frame[1].o)))->F_bmsize = (jint(0));
	LINE_NUMBER(526);
	((rhino_regexp_RENode *) NULL_CHECK((frame[1].o)))->F_sense = (jint(1));
	LINE_NUMBER(528);
	if ((frame[3].i) != (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(531);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) != (94)) goto label_8;
	}
	{
	LINE_NUMBER(532);
	INST_IINC(3, 1);
	LINE_NUMBER(533);
	((rhino_regexp_RENode *) NULL_CHECK((frame[1].o)))->F_sense = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(536);
	if ((frame[3].i) == (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(538);
	frame[8].i = (jint(2));
	LINE_NUMBER(539);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i)))) {
		case 92: goto label_14;
		default: goto label_15;
	}
	}
label_14:;
	{
	LINE_NUMBER(541);
	INST_IINC(3, 1);
	LINE_NUMBER(542);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(543);
	switch((frame[6].i)) {
		case 48: goto label_18;
		case 49: goto label_18;
		case 50: goto label_18;
		case 51: goto label_18;
		case 52: goto label_18;
		case 53: goto label_18;
		case 54: goto label_18;
		case 55: goto label_18;
		case 56: goto label_19;
		case 57: goto label_19;
		case 58: goto label_19;
		case 59: goto label_19;
		case 60: goto label_19;
		case 61: goto label_19;
		case 62: goto label_19;
		case 63: goto label_19;
		case 64: goto label_19;
		case 65: goto label_19;
		case 66: goto label_19;
		case 67: goto label_19;
		case 68: goto label_20;
		case 69: goto label_19;
		case 70: goto label_19;
		case 71: goto label_19;
		case 72: goto label_19;
		case 73: goto label_19;
		case 74: goto label_19;
		case 75: goto label_19;
		case 76: goto label_19;
		case 77: goto label_19;
		case 78: goto label_19;
		case 79: goto label_19;
		case 80: goto label_19;
		case 81: goto label_19;
		case 82: goto label_19;
		case 83: goto label_20;
		case 84: goto label_19;
		case 85: goto label_19;
		case 86: goto label_19;
		case 87: goto label_20;
		case 88: goto label_19;
		case 89: goto label_19;
		case 90: goto label_19;
		case 91: goto label_19;
		case 92: goto label_19;
		case 93: goto label_19;
		case 94: goto label_19;
		case 95: goto label_19;
		case 96: goto label_19;
		case 97: goto label_19;
		case 98: goto label_21;
		case 99: goto label_22;
		case 100: goto label_23;
		case 101: goto label_19;
		case 102: goto label_24;
		case 103: goto label_19;
		case 104: goto label_19;
		case 105: goto label_19;
		case 106: goto label_19;
		case 107: goto label_19;
		case 108: goto label_19;
		case 109: goto label_19;
		case 110: goto label_25;
		case 111: goto label_19;
		case 112: goto label_19;
		case 113: goto label_19;
		case 114: goto label_26;
		case 115: goto label_20;
		case 116: goto label_27;
		case 117: goto label_28;
		case 118: goto label_29;
		case 119: goto label_20;
		case 120: goto label_30;
		default: goto label_19;
	}
	}
label_21:;
	{
	LINE_NUMBER(545);
	frame[12].i = (8);
	LINE_NUMBER(546);
	goto label_32;
	}
label_24:;
	{
	LINE_NUMBER(548);
	frame[12].i = (12);
	LINE_NUMBER(549);
	goto label_32;
	}
label_25:;
	{
	LINE_NUMBER(551);
	frame[12].i = (10);
	LINE_NUMBER(552);
	goto label_32;
	}
label_26:;
	{
	LINE_NUMBER(554);
	frame[12].i = (13);
	LINE_NUMBER(555);
	goto label_32;
	}
label_27:;
	{
	LINE_NUMBER(557);
	frame[12].i = (9);
	LINE_NUMBER(558);
	goto label_32;
	}
label_29:;
	{
	LINE_NUMBER(560);
	frame[12].i = (11);
	LINE_NUMBER(561);
	goto label_32;
	}
label_22:;
	{
	LINE_NUMBER(563);
	if ((frame[3].i) >= (frame[4].i)) goto label_38;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isControlLetter_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[12].i = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) & (31))));
	goto label_41;
	}
label_38:;
	LINE_NUMBER(566);
	INST_IINC(3, -1);
label_41:;
	{
	LINE_NUMBER(567);
	frame[12].i = (92);
	LINE_NUMBER(568);
	goto label_32;
	}
label_28:;
	LINE_NUMBER(570);
	INST_IINC(8, 2);
label_30:;
	{
	LINE_NUMBER(573);
	frame[7].i = (jint(0));
	LINE_NUMBER(574);
	frame[9].i = (jint(0));
	}
label_44:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_45;
	}
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_45;
	}
	{
	LINE_NUMBER(575);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(576);
	jint temp1 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[6].i), (frame[7].i));
	frame[7].i = temp1;
	LINE_NUMBER(577);
	if ((frame[7].i) >= 0) goto label_49;
	}
	{
	LINE_NUMBER(580);
	frame[3].i = ((frame[3].i) - ((frame[9].i) + (jint(1))));
	LINE_NUMBER(581);
	frame[7].i = (92);
	LINE_NUMBER(582);
	goto label_45;
	}
label_49:;
	{
	LINE_NUMBER(574);
	INST_IINC(9, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(585);
	frame[12].i = (frame[7].i);
	LINE_NUMBER(586);
	goto label_32;
	}
label_23:;
	{
	LINE_NUMBER(588);
	if ((frame[11].i) == 0) goto label_54;
	}
	{
	LINE_NUMBER(589);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.bad.range"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return (jint(0));
	}
label_54:;
	{
	LINE_NUMBER(592);
	frame[12].i = (57);
	LINE_NUMBER(593);
	goto label_32;
	}
label_20:;
	{
	LINE_NUMBER(599);
	if ((frame[11].i) == 0) goto label_58;
	}
	{
	LINE_NUMBER(600);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.bad.range"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return (jint(0));
	}
label_58:;
	{
	LINE_NUMBER(603);
	((rhino_regexp_RENode *) NULL_CHECK((frame[1].o)))->F_bmsize = (jint(65536));
	LINE_NUMBER(604);
	popStackFrame(ctx);
	return (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(619);
	frame[7].i = ((frame[6].i) - (48));
	LINE_NUMBER(620);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(621);
	if ((48) > (frame[6].i)) goto label_64;
	}
	{
	if ((frame[6].i) > (55)) goto label_64;
	}
	{
	LINE_NUMBER(622);
	INST_IINC(3, 1);
	LINE_NUMBER(623);
	frame[7].i = (((8) * (frame[7].i)) + ((frame[6].i) - (48)));
	LINE_NUMBER(624);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(625);
	if ((48) > (frame[6].i)) goto label_64;
	}
	{
	if ((frame[6].i) > (55)) goto label_64;
	}
	{
	LINE_NUMBER(626);
	INST_IINC(3, 1);
	LINE_NUMBER(627);
	frame[9].i = (((8) * (frame[7].i)) + ((frame[6].i) - (48)));
	LINE_NUMBER(628);
	if ((frame[9].i) > (255)) goto label_72;
	}
	{
	LINE_NUMBER(629);
	frame[7].i = (frame[9].i);
	goto label_64;
	}
label_72:;
	LINE_NUMBER(631);
	INST_IINC(3, -1);
label_64:;
	{
	LINE_NUMBER(634);
	frame[12].i = (frame[7].i);
	LINE_NUMBER(635);
	goto label_32;
	}
label_19:;
	{
	LINE_NUMBER(638);
	frame[12].i = (frame[6].i);
	LINE_NUMBER(639);
	goto label_32;
	}
label_15:;
	{
	LINE_NUMBER(643);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	}
label_32:;
	{
	LINE_NUMBER(646);
	if ((frame[11].i) == 0) goto label_76;
	}
	{
	LINE_NUMBER(647);
	if ((frame[5].i) <= (frame[12].i)) goto label_78;
	}
	{
	LINE_NUMBER(648);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.bad.range"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(649);
	popStackFrame(ctx);
	return (jint(0));
	}
label_78:;
	{
	LINE_NUMBER(651);
	frame[11].i = (jint(0));
	goto label_81;
	}
label_76:;
	{
	LINE_NUMBER(653);
	if ((frame[3].i) >= ((frame[4].i) - (jint(1)))) goto label_81;
	}
	{
	LINE_NUMBER(654);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[3].i))) != (45)) goto label_81;
	}
	{
	LINE_NUMBER(655);
	INST_IINC(3, 1);
	LINE_NUMBER(656);
	frame[11].i = (jint(1));
	LINE_NUMBER(657);
	frame[5].i = (jchar((frame[12].i)));
	LINE_NUMBER(658);
	goto label_8;
	}
label_81:;
	{
	LINE_NUMBER(662);
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) == 0) goto label_87;
	}
	{
	LINE_NUMBER(663);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (jchar((frame[12].i))));
	frame[13].i = temp0;
	LINE_NUMBER(664);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_downcase_char_R_char(ctx, (jchar((frame[12].i))));
	frame[14].i = temp1;
	LINE_NUMBER(665);
	if ((frame[13].i) < (frame[14].i)) goto label_91;
	}
	INST_ILOAD(13);
	goto label_92;
label_91:;
	INST_ILOAD(14);
label_92:;
	INST_ISTORE(12);
label_87:;
	{
	LINE_NUMBER(667);
	if ((frame[12].i) <= (frame[10].i)) goto label_93;
	}
	{
	LINE_NUMBER(668);
	frame[10].i = (frame[12].i);
	}
label_93:;
	LINE_NUMBER(669);
	goto label_8;
label_11:;
	{
	LINE_NUMBER(670);
	((rhino_regexp_RENode *) NULL_CHECK((frame[1].o)))->F_bmsize = ((frame[10].i) + (jint(1)));
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:doFlat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(729);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (14));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(730);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = (frame[1].i);
	LINE_NUMBER(731);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_length = (jint(1));
	LINE_NUMBER(732);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_flatIndex = (jint(-1));
	LINE_NUMBER(733);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(3)));
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_getDecimalValue_char_rhino_regexp_CompilerState_int_java_lang_String_R_int(jcontext ctx, jchar param0, jobject param1, jint param2, jobject param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getDecimalValue", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(739);
	frame[4].i = (jint(0));
	LINE_NUMBER(740);
	frame[5].i = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[1].o)))->F_cp);
	LINE_NUMBER(741);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[1].o)))->F_cpbegin;
	frame[6].o = sp[0].o;
	LINE_NUMBER(742);
	frame[7].i = ((frame[0].i) - (48));
	}
label_4:;
	{
	LINE_NUMBER(743);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[1].o)))->F_cp) == ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[1].o)))->F_cpend)) goto label_5;
	}
	{
	LINE_NUMBER(744);
	frame[0].i = ((jint)ARRAY_ACCESS(jchar, (frame[6].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[1].o)))->F_cp)));
	LINE_NUMBER(745);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_8;
	}
	LINE_NUMBER(746);
	goto label_5;
label_8:;
	{
	LINE_NUMBER(748);
	if ((frame[4].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(749);
	frame[8].i = (((frame[7].i) * (10)) + ((frame[0].i) - (48)));
	LINE_NUMBER(750);
	if ((frame[8].i) >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(751);
	frame[7].i = (frame[8].i);
	goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(753);
	frame[4].i = (jint(1));
	LINE_NUMBER(754);
	frame[7].i = (frame[2].i);
	}
label_10:;
	{
	LINE_NUMBER(743);
	sp[0].o = frame[1].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(758);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = frame[3].o;
	sp[1].o = frame[6].o;
	jint temp0 = frame[5].i;
	jint temp1 = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[1].o)))->F_cp) - (frame[5].i);
	LINE_NUMBER(760);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(ctx, sp[1].o, temp0, temp1);
	LINE_NUMBER(759);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_parseTerm_rhino_regexp_CompilerState_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:parseTerm", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpbegin;
	frame[1].o = sp[0].o;
	LINE_NUMBER(768);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp = (temp0 + (jint(1)));
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(769);
	frame[3].i = (jint(2));
	LINE_NUMBER(770);
	frame[4].i = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_parenCount);
	LINE_NUMBER(775);
	switch((frame[2].i)) {
		case 36: goto label_5;
		case 40: goto label_6;
		case 41: goto label_7;
		case 42: goto label_8;
		case 43: goto label_8;
		case 46: goto label_9;
		case 63: goto label_8;
		case 91: goto label_10;
		case 92: goto label_11;
		case 94: goto label_12;
		default: goto label_13;
	}
	}
label_12:;
	{
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (jint(2)));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(779);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(780);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(782);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (jint(3)));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(783);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(784);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(786);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_18;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp = (temp0 + (jint(1)));
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(788);
	switch((frame[2].i)) {
		case 48: goto label_21;
		case 49: goto label_22;
		case 50: goto label_22;
		case 51: goto label_22;
		case 52: goto label_22;
		case 53: goto label_22;
		case 54: goto label_22;
		case 55: goto label_22;
		case 56: goto label_22;
		case 57: goto label_22;
		case 58: goto label_23;
		case 59: goto label_23;
		case 60: goto label_23;
		case 61: goto label_23;
		case 62: goto label_23;
		case 63: goto label_23;
		case 64: goto label_23;
		case 65: goto label_23;
		case 66: goto label_24;
		case 67: goto label_23;
		case 68: goto label_25;
		case 69: goto label_23;
		case 70: goto label_23;
		case 71: goto label_23;
		case 72: goto label_23;
		case 73: goto label_23;
		case 74: goto label_23;
		case 75: goto label_23;
		case 76: goto label_23;
		case 77: goto label_23;
		case 78: goto label_23;
		case 79: goto label_23;
		case 80: goto label_23;
		case 81: goto label_23;
		case 82: goto label_23;
		case 83: goto label_26;
		case 84: goto label_23;
		case 85: goto label_23;
		case 86: goto label_23;
		case 87: goto label_27;
		case 88: goto label_23;
		case 89: goto label_23;
		case 90: goto label_23;
		case 91: goto label_23;
		case 92: goto label_23;
		case 93: goto label_23;
		case 94: goto label_23;
		case 95: goto label_23;
		case 96: goto label_23;
		case 97: goto label_23;
		case 98: goto label_28;
		case 99: goto label_29;
		case 100: goto label_30;
		case 101: goto label_23;
		case 102: goto label_31;
		case 103: goto label_23;
		case 104: goto label_23;
		case 105: goto label_23;
		case 106: goto label_23;
		case 107: goto label_23;
		case 108: goto label_23;
		case 109: goto label_23;
		case 110: goto label_32;
		case 111: goto label_23;
		case 112: goto label_23;
		case 113: goto label_23;
		case 114: goto label_33;
		case 115: goto label_34;
		case 116: goto label_35;
		case 117: goto label_36;
		case 118: goto label_37;
		case 119: goto label_38;
		case 120: goto label_39;
		default: goto label_23;
	}
	}
label_28:;
	{
	LINE_NUMBER(791);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (jint(4)));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(792);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(795);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (jint(5)));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cx;
	SM_rhino_regexp_NativeRegExp_reportWarning_rhino_Context_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.bad.backref"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(808);
	frame[5].i = (jint(0));
	}
label_45:;
	{
	LINE_NUMBER(811);
	if ((frame[5].i) >= (32)) goto label_46;
	}
	{
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_46;
	}
	{
	LINE_NUMBER(812);
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp)));
	LINE_NUMBER(813);
	if ((frame[2].i) < (48)) goto label_46;
	}
	{
	if ((frame[2].i) > (55)) goto label_46;
	}
	{
	LINE_NUMBER(814);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(815);
	frame[5].i = (((8) * (frame[5].i)) + ((frame[2].i) - (48)));
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(819);
	frame[2].i = (jchar((frame[5].i)));
	LINE_NUMBER(820);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(821);
	goto label_53;
	}
label_22:;
	{
	LINE_NUMBER(831);
	frame[7].i = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1)));
	LINE_NUMBER(832);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getDecimalValue_char_rhino_regexp_CompilerState_int_java_lang_String_R_int(ctx, (frame[2].i), (frame[0].o), (jint(65535)), (((jobject) createStringLiteral(ctx, u8"msg.overlarge.backref"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(834);
	if ((frame[5].i) <= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_backReferenceLimit)) goto label_56;
	}
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cx;
	SM_rhino_regexp_NativeRegExp_reportWarning_rhino_Context_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.bad.backref"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_56:;
	{
	LINE_NUMBER(840);
	if ((frame[5].i) <= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_backReferenceLimit)) goto label_58;
	}
	{
	LINE_NUMBER(841);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp = (frame[7].i);
	LINE_NUMBER(842);
	if ((frame[2].i) < (56)) goto label_61;
	}
	{
	LINE_NUMBER(845);
	frame[2].i = (92);
	LINE_NUMBER(846);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(847);
	goto label_53;
	}
label_61:;
	{
	LINE_NUMBER(849);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(850);
	frame[5].i = ((frame[2].i) - (48));
	}
label_66:;
	{
	LINE_NUMBER(851);
	if ((frame[5].i) >= (32)) goto label_67;
	}
	{
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_67;
	}
	{
	LINE_NUMBER(852);
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp)));
	LINE_NUMBER(853);
	if ((frame[2].i) < (48)) goto label_67;
	}
	{
	if ((frame[2].i) > (55)) goto label_67;
	}
	{
	LINE_NUMBER(854);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(855);
	frame[5].i = (((8) * (frame[5].i)) + ((frame[2].i) - (48)));
	goto label_66;
	}
label_67:;
	{
	LINE_NUMBER(859);
	frame[2].i = (jchar((frame[5].i)));
	LINE_NUMBER(860);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(861);
	goto label_53;
	}
label_58:;
	{
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (13));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(865);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_parenIndex = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(3)));
	LINE_NUMBER(867);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_maxBackReference) >= (frame[5].i)) goto label_53;
	}
	{
	LINE_NUMBER(868);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_maxBackReference = (frame[5].i);
	goto label_53;
	}
label_31:;
	{
	LINE_NUMBER(873);
	frame[2].i = (12);
	LINE_NUMBER(874);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(875);
	goto label_53;
	}
label_32:;
	{
	LINE_NUMBER(877);
	frame[2].i = (10);
	LINE_NUMBER(878);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(879);
	goto label_53;
	}
label_33:;
	{
	LINE_NUMBER(881);
	frame[2].i = (13);
	LINE_NUMBER(882);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(883);
	goto label_53;
	}
label_35:;
	{
	LINE_NUMBER(885);
	frame[2].i = (9);
	LINE_NUMBER(886);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(887);
	goto label_53;
	}
label_37:;
	{
	LINE_NUMBER(889);
	frame[2].i = (11);
	LINE_NUMBER(890);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(891);
	goto label_53;
	}
label_29:;
	{
	LINE_NUMBER(894);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_88;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp));
	LINE_NUMBER(895);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isControlLetter_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_88;
	}
	{
	LINE_NUMBER(896);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp = (temp0 + (jint(1)));
	frame[2].i = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) & (31))));
	goto label_91;
	}
label_88:;
	{
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) - (jint(1)));
	LINE_NUMBER(900);
	frame[2].i = (92);
	}
label_91:;
	{
	LINE_NUMBER(902);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(903);
	goto label_53;
	}
label_36:;
	LINE_NUMBER(906);
	INST_IINC(3, 2);
label_39:;
	{
	LINE_NUMBER(909);
	frame[8].i = (jint(0));
	LINE_NUMBER(911);
	frame[9].i = (jint(0));
	}
label_95:;
	{
	LINE_NUMBER(912);
	if ((frame[9].i) >= (frame[3].i)) goto label_96;
	}
	{
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_96;
	}
	{
	LINE_NUMBER(913);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp = (temp0 + (jint(1)));
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(914);
	jint temp3 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[2].i), (frame[8].i));
	frame[8].i = temp3;
	LINE_NUMBER(915);
	if ((frame[8].i) >= 0) goto label_100;
	}
	{
	LINE_NUMBER(918);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) - ((frame[9].i) + (jint(2))));
	LINE_NUMBER(919);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_cp = (temp0 + (jint(1)));
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(920);
	goto label_96;
	}
label_100:;
	{
	LINE_NUMBER(912);
	INST_IINC(9, 1);
	goto label_95;
	}
label_96:;
	{
	LINE_NUMBER(923);
	frame[2].i = (jchar((frame[8].i)));
	LINE_NUMBER(925);
	SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(926);
	goto label_53;
	}
label_30:;
	{
	LINE_NUMBER(929);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (7));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(930);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(931);
	goto label_53;
	}
label_25:;
	{
	LINE_NUMBER(933);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (8));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(934);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(935);
	goto label_53;
	}
label_34:;
	{
	LINE_NUMBER(937);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (11));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(938);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(939);
	goto label_53;
	}
label_26:;
	{
	LINE_NUMBER(941);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (12));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(942);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(943);
	goto label_53;
	}
label_38:;
	{
	LINE_NUMBER(945);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (9));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(946);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(947);
	goto label_53;
	}
label_27:;
	{
	LINE_NUMBER(949);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (10));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(950);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(951);
	goto label_53;
	}
label_23:;
	{
	LINE_NUMBER(954);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (14));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(955);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = (frame[2].i);
	LINE_NUMBER(956);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_length = (jint(1));
	LINE_NUMBER(957);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_flatIndex = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1)));
	LINE_NUMBER(958);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(3)));
	LINE_NUMBER(959);
	goto label_53;
	}
label_18:;
	{
	LINE_NUMBER(964);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.trail.backslash"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(965);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(967);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(968);
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) + (jint(1))) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_125;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) != (63)) goto label_125;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) + (jint(1))));
	frame[2].i = temp0;
	if (temp0 == (61)) goto label_126;
	}
	{
	if ((frame[2].i) == (33)) goto label_126;
	}
	{
	if ((frame[2].i) != (58)) goto label_125;
	}
label_126:;
	{
	LINE_NUMBER(970);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(2)));
	LINE_NUMBER(971);
	if ((frame[2].i) != (61)) goto label_128;
	}
	{
	LINE_NUMBER(972);
	clinit_rhino_regexp_RENode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[0].o, (41));
	frame[8].o = sp[0].o;
	LINE_NUMBER(974);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(4)));
	goto label_131;
	}
label_128:;
	{
	LINE_NUMBER(975);
	if ((frame[2].i) != (33)) goto label_131;
	}
	{
	LINE_NUMBER(976);
	clinit_rhino_regexp_RENode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[0].o, (42));
	frame[8].o = sp[0].o;
	LINE_NUMBER(978);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(4)));
	goto label_131;
	}
label_125:;
	{
	LINE_NUMBER(981);
	clinit_rhino_regexp_RENode(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[0].o, (29));
	frame[8].o = sp[0].o;
	LINE_NUMBER(983);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (6));
	LINE_NUMBER(984);
	sp[0].o = frame[8].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_parenCount;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_parenCount = (temp0 + (jint(1)));
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_parenIndex = temp0;
	}
label_131:;
	{
	LINE_NUMBER(986);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_parenNesting = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_parenNesting) + (jint(1)));
	LINE_NUMBER(987);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_parseDisjunction_rhino_regexp_CompilerState_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_137;
	}
	{
	LINE_NUMBER(988);
	popStackFrame(ctx);
	return (jint(0));
	}
label_137:;
	{
	LINE_NUMBER(989);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) == ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_139;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) == (41)) goto label_140;
	}
label_139:;
	{
	LINE_NUMBER(990);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.unterm.paren"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(991);
	popStackFrame(ctx);
	return (jint(0));
	}
label_140:;
	{
	LINE_NUMBER(993);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(994);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_parenNesting = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_parenNesting) - (jint(1)));
	LINE_NUMBER(995);
	if ((frame[8].o) == nullptr) goto label_53;
	}
	{
	LINE_NUMBER(996);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_kid = (jref) sp[1].o;
	LINE_NUMBER(997);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[8].o);
	goto label_53;
	}
label_7:;
	{
	LINE_NUMBER(1002);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.re.unmatched.right.paren"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(1005);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (22));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1006);
	frame[7].i = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp);
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_startIndex = (frame[7].i);
	}
label_149:;
	{
	LINE_NUMBER(1009);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) != ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_150;
	}
	{
	LINE_NUMBER(1010);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.unterm.class"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(1011);
	popStackFrame(ctx);
	return (jint(0));
	}
label_150:;
	{
	LINE_NUMBER(1013);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) != (92)) goto label_153;
	}
	{
	LINE_NUMBER(1014);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_155;
	}
label_153:;
	{
	LINE_NUMBER(1016);
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) != (93)) goto label_155;
	}
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_kidlen = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) - (frame[7].i));
	LINE_NUMBER(1018);
	goto label_158;
	}
label_155:;
	{
	LINE_NUMBER(1021);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_149;
	}
label_158:;
	{
	LINE_NUMBER(1023);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_classCount;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[1].o))->F_classCount = (temp0 + (jint(1)));
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_index = temp0;
	LINE_NUMBER(1028);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	sp[2].o = frame[1].o;
	jint temp3 = frame[7].i;
	sp[3].o = frame[0].o;
	jint temp4 = (jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[3].o))->F_cp;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[3].o))->F_cp = (temp4 + (jint(1)));
	jint temp7 = (jint)SM_rhino_regexp_NativeRegExp_calculateBitmapSize_rhino_regexp_CompilerState_rhino_regexp_RENode_Array1_char_int_int_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, temp4);
	if (temp7 != 0) goto label_160;
	}
	{
	LINE_NUMBER(1029);
	popStackFrame(ctx);
	return (jint(0));
	}
label_160:;
	{
	LINE_NUMBER(1030);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(3)));
	LINE_NUMBER(1031);
	goto label_53;
	}
label_9:;
	{
	LINE_NUMBER(1034);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (6));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1035);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(1)));
	LINE_NUMBER(1036);
	goto label_53;
	}
label_8:;
	{
	LINE_NUMBER(1040);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.quant"_j));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1))))));
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(1043);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (14));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_chr = (frame[2].i);
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_length = (jint(1));
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_flatIndex = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1)));
	LINE_NUMBER(1047);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (jint(3)));
	}
label_53:;
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1052);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) != ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_171;
	}
	{
	LINE_NUMBER(1053);
	popStackFrame(ctx);
	return (jint(1));
	}
label_171:;
	{
	LINE_NUMBER(1055);
	frame[8].i = (jint(0));
	LINE_NUMBER(1056);
	switch(((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp)))) {
		case 42: goto label_174;
		case 43: goto label_175;
		case 63: goto label_176;
		case 123: goto label_177;
		default: goto label_178;
	}
	}
label_175:;
	{
	LINE_NUMBER(1058);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (25));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_min = (jint(1));
	LINE_NUMBER(1060);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_max = (jint(-1));
	LINE_NUMBER(1062);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (8));
	LINE_NUMBER(1063);
	frame[8].i = (jint(1));
	LINE_NUMBER(1064);
	goto label_178;
	}
label_174:;
	{
	LINE_NUMBER(1066);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (25));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_min = (jint(0));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_max = (jint(-1));
	LINE_NUMBER(1070);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (8));
	LINE_NUMBER(1071);
	frame[8].i = (jint(1));
	LINE_NUMBER(1072);
	goto label_178;
	}
label_176:;
	{
	LINE_NUMBER(1074);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (25));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_min = (jint(0));
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_max = (jint(1));
	LINE_NUMBER(1078);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (8));
	LINE_NUMBER(1079);
	frame[8].i = (jint(1));
	LINE_NUMBER(1080);
	goto label_178;
	}
label_177:;
	{
	LINE_NUMBER(1083);
	frame[10].i = (jint(-1));
	LINE_NUMBER(1084);
	frame[11].i = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp);
	LINE_NUMBER(1092);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = temp0;
	if (temp0 >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_196;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp));
	frame[2].i = temp0;
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, temp0);
	if (temp3 == 0) goto label_196;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(1094);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getDecimalValue_char_rhino_regexp_CompilerState_int_java_lang_String_R_int(ctx, (frame[2].i), (frame[0].o), (jint(65535)), (((jobject) createStringLiteral(ctx, u8"msg.overlarge.min"_j))));
	frame[9].i = temp0;
	LINE_NUMBER(1096);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_196;
	}
	{
	LINE_NUMBER(1097);
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp)));
	LINE_NUMBER(1098);
	if ((frame[2].i) != (44)) goto label_202;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = temp0;
	if (temp0 >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_202;
	}
	{
	LINE_NUMBER(1099);
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp)));
	LINE_NUMBER(1100);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_205;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = temp0;
	if (temp0 >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_205;
	}
	{
	LINE_NUMBER(1101);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getDecimalValue_char_rhino_regexp_CompilerState_int_java_lang_String_R_int(ctx, (frame[2].i), (frame[0].o), (jint(65535)), (((jobject) createStringLiteral(ctx, u8"msg.overlarge.max"_j))));
	frame[10].i = temp0;
	LINE_NUMBER(1103);
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp)));
	LINE_NUMBER(1104);
	if ((frame[9].i) <= (frame[10].i)) goto label_205;
	}
	{
	LINE_NUMBER(1105);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.max.lt.min"_j));
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp));
	LINE_NUMBER(1106);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, temp0);
	LINE_NUMBER(1105);
	SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return (jint(0));
	}
label_202:;
	{
	LINE_NUMBER(1111);
	frame[10].i = (frame[9].i);
	}
label_205:;
	{
	LINE_NUMBER(1114);
	if ((frame[2].i) != (125)) goto label_196;
	}
	{
	LINE_NUMBER(1115);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_RENode(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RENode);
	init_rhino_regexp_RENode_byte(ctx, sp[1].o, (25));
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_result = (jref) sp[1].o;
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_min = (frame[9].i);
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_max = (frame[10].i);
	LINE_NUMBER(1120);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_progLength) + (12));
	LINE_NUMBER(1121);
	frame[8].i = (jint(1));
	}
label_196:;
	{
	LINE_NUMBER(1125);
	if ((frame[8].i) != 0) goto label_178;
	}
	{
	LINE_NUMBER(1126);
	((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp = (frame[11].i);
	goto label_178;
	}
label_178:;
	{
	LINE_NUMBER(1131);
	if ((frame[8].i) != 0) goto label_219;
	}
	{
	LINE_NUMBER(1132);
	popStackFrame(ctx);
	return (jint(1));
	}
label_219:;
	{
	LINE_NUMBER(1134);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_kid = (jref) (frame[6].o);
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_parenIndex = (frame[4].i);
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_parenCount = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_parenCount) - (frame[4].i));
	LINE_NUMBER(1138);
	if (((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp) >= ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cpend)) goto label_225;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[1].o), ((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_cp))) != (63)) goto label_225;
	}
	{
	LINE_NUMBER(1139);
	sp[0].o = frame[0].o;
	((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_CompilerState *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_greedy = (jint(0));
	goto label_228;
	}
label_225:;
	{
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_result;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_greedy = (jint(1));
	}
label_228:;
	{
	LINE_NUMBER(1143);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:resolveForwardJump", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1147);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1148);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(1149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1152);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:addIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1156);
	if ((frame[2].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(1157);
	if ((frame[2].i) <= (jint(65535))) goto label_2;
	}
	{
	LINE_NUMBER(1158);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"Too complex regexp"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1159);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i)) = (jbyte(((frame[2].i) >> (8))));
	LINE_NUMBER(1160);
	ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1)))) = (jbyte((frame[2].i)));
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	return ((frame[1].i) + (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1165);
	popStackFrame(ctx);
	return (((((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) & (255)) << (8)) | (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) & (255)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:emitREBytecode", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[1].o)))->F_program;
	frame[7].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1176);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1177);
	sp[0].o = frame[7].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_op);
	LINE_NUMBER(1178);
	switch(((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_op)) {
		case 1: goto label_5;
		case 13: goto label_6;
		case 14: goto label_7;
		case 22: goto label_8;
		case 25: goto label_9;
		case 29: goto label_10;
		case 31: goto label_11;
		case 41: goto label_12;
		case 42: goto label_13;
		case 53: goto label_14;
		case 54: goto label_14;
		case 55: goto label_14;
		default: goto label_15;
	}
	}
label_5:;
	{
	LINE_NUMBER(1180);
	INST_IINC(2, -1);
	LINE_NUMBER(1181);
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(1185);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_op) != (54)) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(1186);
	sp[0].o = frame[7].o;
	jint temp0 = frame[2].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[8].i) == 0) goto label_20;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_chr));
	sp[0].i = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(3);
	sp[-1].i = ((rhino_regexp_RENode *) NULL_CHECK(sp[-1].o))->F_chr;
label_21:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1187);
	INST_IINC(2, 2);
	LINE_NUMBER(1188);
	sp[0].o = frame[7].o;
	jint temp1 = frame[2].i;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[8].i) == 0) goto label_24;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (jchar(((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_index))));
	sp[0].i = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	INST_ALOAD(3);
	sp[-1].i = ((rhino_regexp_RENode *) NULL_CHECK(sp[-1].o))->F_index;
label_25:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, sp[0].o, sp[1].i, sp[2].i);
	LINE_NUMBER(1189);
	INST_IINC(2, 2);
	}
label_11:;
	{
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid2;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1193);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(1194);
	INST_IINC(2, 2);
	LINE_NUMBER(1195);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[2].i = temp1;
	LINE_NUMBER(1196);
	sp[0].o = frame[7].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (32);
	LINE_NUMBER(1197);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(1198);
	INST_IINC(2, 2);
	LINE_NUMBER(1199);
	SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(ctx, (frame[7].o), (frame[5].i), (frame[2].i));
	LINE_NUMBER(1200);
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].o));
	frame[2].i = temp3;
	LINE_NUMBER(1202);
	sp[0].o = frame[7].o;
	jint temp4 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (32);
	LINE_NUMBER(1203);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(1204);
	INST_IINC(2, 2);
	LINE_NUMBER(1206);
	SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(ctx, (frame[7].o), (frame[6].i), (frame[2].i));
	LINE_NUMBER(1207);
	SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(ctx, (frame[7].o), (frame[5].i), (frame[2].i));
	LINE_NUMBER(1208);
	goto label_15;
	}
label_7:;
	{
	LINE_NUMBER(1213);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_flatIndex) == (jint(-1))) goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(1214);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_next;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_next;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_op) != (14)) goto label_41;
	}
	{
	jint temp0 = ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_flatIndex) + ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_length);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_next;
	if (temp0 != ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_flatIndex)) goto label_41;
	}
	{
	LINE_NUMBER(1217);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_length;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_next;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_length = (temp0 + ((jint)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_length));
	LINE_NUMBER(1218);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_next;
	sp[1].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK(sp[1].o))->F_next;
	((rhino_regexp_RENode *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(1221);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_flatIndex) == (jint(-1))) goto label_45;
	}
	{
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_length) <= (jint(1))) goto label_45;
	}
	{
	LINE_NUMBER(1222);
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) == 0) goto label_47;
	}
	{
	LINE_NUMBER(1223);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (16);
	goto label_49;
	}
label_47:;
	{
	LINE_NUMBER(1225);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (14);
	}
label_49:;
	{
	LINE_NUMBER(1226);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_flatIndex));
	frame[2].i = temp0;
	LINE_NUMBER(1227);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_length));
	frame[2].i = temp1;
	goto label_15;
	}
label_45:;
	{
	LINE_NUMBER(1229);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_chr) >= (256)) goto label_51;
	}
	{
	LINE_NUMBER(1230);
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) == 0) goto label_53;
	}
	{
	LINE_NUMBER(1231);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (17);
	goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(1233);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (15);
	}
label_55:;
	{
	LINE_NUMBER(1234);
	sp[0].o = frame[7].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_chr)));
	goto label_15;
	}
label_51:;
	{
	LINE_NUMBER(1236);
	if ((((jint)((rhino_regexp_CompilerState *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) == 0) goto label_56;
	}
	{
	LINE_NUMBER(1237);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (19);
	goto label_58;
	}
label_56:;
	{
	LINE_NUMBER(1239);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (18);
	}
label_58:;
	{
	LINE_NUMBER(1240);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_chr));
	frame[2].i = temp0;
	LINE_NUMBER(1243);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(1245);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_parenIndex));
	frame[2].i = temp0;
	LINE_NUMBER(1246);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp1 = frame[2].i;
	sp[2].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	frame[2].i = temp2;
	LINE_NUMBER(1247);
	sp[0].o = frame[7].o;
	jint temp3 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp3) = (30);
	LINE_NUMBER(1248);
	jint temp4 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_parenIndex));
	frame[2].i = temp4;
	LINE_NUMBER(1249);
	goto label_15;
	}
label_6:;
	{
	LINE_NUMBER(1251);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_parenIndex));
	frame[2].i = temp0;
	LINE_NUMBER(1252);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(1254);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(1255);
	INST_IINC(2, 2);
	LINE_NUMBER(1256);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[2].i = temp1;
	LINE_NUMBER(1257);
	sp[0].o = frame[7].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (43);
	LINE_NUMBER(1258);
	SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(ctx, (frame[7].o), (frame[6].i), (frame[2].i));
	LINE_NUMBER(1259);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(1261);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(1262);
	INST_IINC(2, 2);
	LINE_NUMBER(1263);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[2].i = temp1;
	LINE_NUMBER(1264);
	sp[0].o = frame[7].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp2) = (44);
	LINE_NUMBER(1265);
	SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(ctx, (frame[7].o), (frame[6].i), (frame[2].i));
	LINE_NUMBER(1266);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(1268);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_min) != 0) goto label_75;
	}
	{
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_max) != (jint(-1))) goto label_75;
	}
	{
	LINE_NUMBER(1269);
	sp[0].o = frame[7].o;
	jint temp0 = (frame[2].i) - (jint(1));
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_greedy) == 0) goto label_77;
	}
	INST_BIPUSH(26);
	goto label_78;
label_77:;
	INST_BIPUSH(45);
label_78:;
	INST_BASTORE();
	goto label_79;
label_75:;
	{
	LINE_NUMBER(1270);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_min) != 0) goto label_80;
	}
	{
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_max) != (jint(1))) goto label_80;
	}
	{
	LINE_NUMBER(1271);
	sp[0].o = frame[7].o;
	jint temp0 = (frame[2].i) - (jint(1));
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_greedy) == 0) goto label_82;
	}
	INST_BIPUSH(28);
	goto label_83;
label_82:;
	INST_BIPUSH(47);
label_83:;
	INST_BASTORE();
	goto label_79;
label_80:;
	{
	LINE_NUMBER(1272);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_min) != (jint(1))) goto label_84;
	}
	{
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_max) != (jint(-1))) goto label_84;
	}
	{
	LINE_NUMBER(1273);
	sp[0].o = frame[7].o;
	jint temp0 = (frame[2].i) - (jint(1));
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_greedy) == 0) goto label_86;
	}
	INST_BIPUSH(27);
	goto label_87;
label_86:;
	INST_BIPUSH(46);
label_87:;
	INST_BASTORE();
	goto label_79;
label_84:;
	{
	LINE_NUMBER(1275);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_greedy) != 0) goto label_88;
	}
	{
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (48);
	}
label_88:;
	{
	LINE_NUMBER(1276);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_min));
	frame[2].i = temp0;
	LINE_NUMBER(1278);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_max) + (jint(1))));
	frame[2].i = temp1;
	}
label_79:;
	{
	LINE_NUMBER(1280);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_parenCount));
	frame[2].i = temp0;
	LINE_NUMBER(1281);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_parenIndex));
	frame[2].i = temp1;
	LINE_NUMBER(1282);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(1283);
	INST_IINC(2, 2);
	LINE_NUMBER(1284);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp2 = frame[2].i;
	sp[2].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kid;
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	frame[2].i = temp3;
	LINE_NUMBER(1285);
	sp[0].o = frame[7].o;
	jint temp4 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp4) = (49);
	LINE_NUMBER(1286);
	SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int(ctx, (frame[7].o), (frame[6].i), (frame[2].i));
	LINE_NUMBER(1287);
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(1289);
	if (((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_sense) != 0) goto label_97;
	}
	{
	LINE_NUMBER(1290);
	ARRAY_ACCESS(jbyte, (frame[7].o), ((frame[2].i) - (jint(1)))) = (23);
	}
label_97:;
	{
	LINE_NUMBER(1291);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int(ctx, (frame[7].o), (frame[2].i), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_index));
	frame[2].i = temp0;
	LINE_NUMBER(1292);
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK((frame[1].o)))->F_classList;
	jint temp1 = (jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_index;
	clinit_rhino_regexp_RECharSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_RECharSet);
	init_rhino_regexp_RECharSet_int_int_int_boolean(ctx, sp[1].o, ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_bmsize), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_startIndex), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_kidlen), ((jint)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_sense));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1294);
	goto label_15;
	}
label_15:;
	{
	LINE_NUMBER(1298);
	sp[0].o = (jobject)((rhino_regexp_RENode *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1300);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5, jint param6) {
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:pushProgState", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1307);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_REProgState(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_REProgState);
	sp[2].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_stateStackTop;
	init_rhino_regexp_REProgState_rhino_regexp_REProgState_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, sp[1].o, sp[2].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i), (frame[6].i));
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_stateStackTop = (jref) sp[1].o;
	LINE_NUMBER(1310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:popProgState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_stateStackTop;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1315);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REProgState *) NULL_CHECK((frame[1].o)))->F_previous;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_stateStackTop = (jref) sp[1].o;
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int(jcontext ctx, jobject param0, jbyte param1, jint param2) {
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:pushBackTrackState", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1321);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_stateStackTop;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1322);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_REBackTrackData(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_REBackTrackData);
	init_rhino_regexp_REBackTrackData_rhino_regexp_REGlobalData_int_int_int_int_int(ctx, sp[1].o, (frame[0].o), (frame[1].i), (frame[2].i), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[3].o)))->F_continuationOp), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[3].o)))->F_continuationPc));
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_backTrackStackTop = (jref) sp[1].o;
	LINE_NUMBER(1324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int_int_int_int(jcontext ctx, jobject param0, jbyte param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:pushBackTrackState", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1329);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_REBackTrackData(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_REBackTrackData);
	init_rhino_regexp_REBackTrackData_rhino_regexp_REGlobalData_int_int_int_int_int(ctx, sp[1].o, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_backTrackStackTop = (jref) sp[1].o;
	LINE_NUMBER(1331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_flatNMatcher_rhino_regexp_REGlobalData_int_int_java_lang_String_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:flatNMatcher", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1339);
	if ((((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) + (frame[2].i)) <= (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(1340);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1341);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[1].i) + (frame[5].i)));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) + (frame[5].i)));
	if (temp0 == temp1) goto label_6;
	}
	{
	LINE_NUMBER(1343);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(1341);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1346);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (frame[2].i));
	LINE_NUMBER(1347);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_flatNIMatcher_rhino_regexp_REGlobalData_int_int_java_lang_String_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:flatNIMatcher", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1353);
	if ((((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) + (frame[2].i)) <= (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(1354);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1355);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1356);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(1357);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), ((frame[1].i) + (frame[6].i))));
	LINE_NUMBER(1358);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) + (frame[6].i)));
	frame[8].i = temp0;
	LINE_NUMBER(1359);
	if ((frame[7].i) == (frame[8].i)) goto label_9;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[7].i));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[8].i));
	if (temp0 == temp1) goto label_9;
	}
	{
	LINE_NUMBER(1360);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(1356);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1363);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (frame[2].i));
	LINE_NUMBER(1364);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_backrefMatcher_rhino_regexp_REGlobalData_int_java_lang_String_int_R_boolean(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:backrefMatcher", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1395);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1396);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1397);
	jint temp0 = (jint)((func_rhino_regexp_REGlobalData_parensIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_parensIndex_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[6].i = temp0;
	LINE_NUMBER(1398);
	if ((frame[6].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(1401);
	jint temp0 = (jint)((func_rhino_regexp_REGlobalData_parensLength_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_parensLength_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(1402);
	if ((((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) + (frame[4].i)) <= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(1403);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1405);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(2))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1406);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(1407);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[6].i) + (frame[5].i)));
	frame[7].i = temp0;
	LINE_NUMBER(1408);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) + (frame[5].i)));
	frame[8].i = temp1;
	LINE_NUMBER(1409);
	if ((frame[7].i) == (frame[8].i)) goto label_16;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[7].i));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[8].i));
	if (temp0 == temp1) goto label_16;
	}
	{
	LINE_NUMBER(1410);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(1406);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1412);
	jint temp0 = (jint)((func_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean])(ctx, (frame[2].o), (frame[6].i), (frame[2].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp), (frame[4].i));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(1413);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(1415);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (frame[4].i));
	LINE_NUMBER(1416);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:addCharacterToCharSet", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1423);
	frame[2].i = ((frame[1].i) / (8));
	LINE_NUMBER(1424);
	if ((frame[1].i) < ((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_length)) goto label_2;
	}
	{
	LINE_NUMBER(1425);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"SyntaxError"_j))), (((jobject) createStringLiteral(ctx, u8"invalid range in character class"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1428);
	sp[0].o = (jobject)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) | ((jint(1)) << ((frame[1].i) & (7))))));
	LINE_NUMBER(1429);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_addCharacterRangeToCharSet_rhino_regexp_RECharSet_char_char(jcontext ctx, jobject param0, jchar param1, jchar param2) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:addCharacterRangeToCharSet", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1437);
	frame[4].i = ((frame[1].i) / (8));
	LINE_NUMBER(1438);
	frame[5].i = ((frame[2].i) / (8));
	LINE_NUMBER(1440);
	if ((frame[2].i) >= ((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_length)) goto label_3;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1441);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"SyntaxError"_j))), (((jobject) createStringLiteral(ctx, u8"invalid range in character class"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1445);
	frame[1].i = (jchar(((frame[1].i) & (7))));
	LINE_NUMBER(1446);
	frame[2].i = (jchar(((frame[2].i) & (7))));
	LINE_NUMBER(1448);
	if ((frame[4].i) != (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(1449);
	sp[0].o = (jobject)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) | (((255) >> ((7) - ((frame[2].i) - (frame[1].i)))) << (frame[1].i)))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) | ((255) << (frame[1].i)))));
	LINE_NUMBER(1452);
	frame[3].i = ((frame[4].i) + (jint(1)));
	}
label_11:;
	{
	if ((frame[3].i) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_bits;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(-1));
	LINE_NUMBER(1452);
	INST_IINC(3, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((rhino_regexp_RECharSet *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp0 = frame[5].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) | ((255) >> ((7) - (frame[2].i))))));
	}
label_9:;
	LINE_NUMBER(1456);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_processCharSet_rhino_regexp_REGlobalData_rhino_regexp_RECharSet(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:processCharSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1461);
	sp[0].o = frame[1].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1462);
	if (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_converted) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1463);
	SM_rhino_regexp_NativeRegExp_processCharSetImpl_rhino_regexp_REGlobalData_rhino_regexp_RECharSet(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1464);
	((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_converted = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(1466);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_10:;
	LINE_NUMBER(1467);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_processCharSetImpl_rhino_regexp_REGlobalData_rhino_regexp_RECharSet(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:processCharSetImpl", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1472);
	frame[2].i = ((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_startIndex);
	LINE_NUMBER(1473);
	frame[3].i = ((frame[2].i) + ((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_strlength));
	LINE_NUMBER(1475);
	frame[4].i = (jint(0));
	LINE_NUMBER(1481);
	frame[11].i = (jint(0));
	LINE_NUMBER(1483);
	frame[6].i = ((((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) + (7)) / (8));
	LINE_NUMBER(1484);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[6].i));
	((rhino_regexp_RECharSet *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(1486);
	if ((frame[2].i) != (frame[3].i)) goto label_7;
	}
	LINE_NUMBER(1487);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(1489);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))) != (94)) goto label_9;
	}
	{
	LINE_NUMBER(1490);
	if ((clinit_rhino_regexp_NativeRegExp(ctx), (jint)SF_rhino_regexp_NativeRegExp_$assertionsDisabled) != 0) goto label_11;
	}
	{
	if (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_sense) == 0) goto label_11;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(1491);
	INST_IINC(2, 1);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(1493);
	if ((clinit_rhino_regexp_NativeRegExp(ctx), (jint)SF_rhino_regexp_NativeRegExp_$assertionsDisabled) != 0) goto label_12;
	}
	{
	if (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_sense) != 0) goto label_12;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(1496);
	if ((frame[2].i) == (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(1497);
	frame[9].i = (jint(2));
	LINE_NUMBER(1498);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	switch(((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i)))) {
		case 92: goto label_16;
		default: goto label_17;
	}
	}
label_16:;
	{
	LINE_NUMBER(1500);
	INST_IINC(2, 1);
	LINE_NUMBER(1501);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1502);
	switch((frame[7].i)) {
		case 48: goto label_20;
		case 49: goto label_20;
		case 50: goto label_20;
		case 51: goto label_20;
		case 52: goto label_20;
		case 53: goto label_20;
		case 54: goto label_20;
		case 55: goto label_20;
		case 56: goto label_21;
		case 57: goto label_21;
		case 58: goto label_21;
		case 59: goto label_21;
		case 60: goto label_21;
		case 61: goto label_21;
		case 62: goto label_21;
		case 63: goto label_21;
		case 64: goto label_21;
		case 65: goto label_21;
		case 66: goto label_21;
		case 67: goto label_21;
		case 68: goto label_22;
		case 69: goto label_21;
		case 70: goto label_21;
		case 71: goto label_21;
		case 72: goto label_21;
		case 73: goto label_21;
		case 74: goto label_21;
		case 75: goto label_21;
		case 76: goto label_21;
		case 77: goto label_21;
		case 78: goto label_21;
		case 79: goto label_21;
		case 80: goto label_21;
		case 81: goto label_21;
		case 82: goto label_21;
		case 83: goto label_23;
		case 84: goto label_21;
		case 85: goto label_21;
		case 86: goto label_21;
		case 87: goto label_24;
		case 88: goto label_21;
		case 89: goto label_21;
		case 90: goto label_21;
		case 91: goto label_21;
		case 92: goto label_21;
		case 93: goto label_21;
		case 94: goto label_21;
		case 95: goto label_21;
		case 96: goto label_21;
		case 97: goto label_21;
		case 98: goto label_25;
		case 99: goto label_26;
		case 100: goto label_27;
		case 101: goto label_21;
		case 102: goto label_28;
		case 103: goto label_21;
		case 104: goto label_21;
		case 105: goto label_21;
		case 106: goto label_21;
		case 107: goto label_21;
		case 108: goto label_21;
		case 109: goto label_21;
		case 110: goto label_29;
		case 111: goto label_21;
		case 112: goto label_21;
		case 113: goto label_21;
		case 114: goto label_30;
		case 115: goto label_31;
		case 116: goto label_32;
		case 117: goto label_33;
		case 118: goto label_34;
		case 119: goto label_35;
		case 120: goto label_36;
		default: goto label_21;
	}
	}
label_25:;
	{
	LINE_NUMBER(1504);
	frame[5].i = (8);
	LINE_NUMBER(1505);
	goto label_38;
	}
label_28:;
	{
	LINE_NUMBER(1507);
	frame[5].i = (12);
	LINE_NUMBER(1508);
	goto label_38;
	}
label_29:;
	{
	LINE_NUMBER(1510);
	frame[5].i = (10);
	LINE_NUMBER(1511);
	goto label_38;
	}
label_30:;
	{
	LINE_NUMBER(1513);
	frame[5].i = (13);
	LINE_NUMBER(1514);
	goto label_38;
	}
label_32:;
	{
	LINE_NUMBER(1516);
	frame[5].i = (9);
	LINE_NUMBER(1517);
	goto label_38;
	}
label_34:;
	{
	LINE_NUMBER(1519);
	frame[5].i = (11);
	LINE_NUMBER(1520);
	goto label_38;
	}
label_26:;
	{
	LINE_NUMBER(1522);
	if ((frame[2].i) >= (frame[3].i)) goto label_44;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isControlLetter_char_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))));
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(1523);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[5].i = (jchar((((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) & (31))));
	goto label_38;
	}
label_44:;
	{
	LINE_NUMBER(1525);
	INST_IINC(2, -1);
	LINE_NUMBER(1526);
	frame[5].i = (92);
	LINE_NUMBER(1528);
	goto label_38;
	}
label_33:;
	LINE_NUMBER(1530);
	INST_IINC(9, 2);
label_36:;
	{
	LINE_NUMBER(1533);
	frame[8].i = (jint(0));
	LINE_NUMBER(1534);
	frame[10].i = (jint(0));
	}
label_50:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_51;
	}
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_51;
	}
	{
	LINE_NUMBER(1535);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(1536);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_toASCIIHexDigit_int_R_int(ctx, (frame[7].i));
	frame[12].i = temp1;
	LINE_NUMBER(1537);
	if ((frame[12].i) >= 0) goto label_55;
	}
	{
	LINE_NUMBER(1541);
	frame[2].i = ((frame[2].i) - ((frame[10].i) + (jint(1))));
	LINE_NUMBER(1542);
	frame[8].i = (92);
	LINE_NUMBER(1543);
	goto label_51;
	}
label_55:;
	{
	LINE_NUMBER(1545);
	frame[8].i = (((frame[8].i) << (jint(4))) | (frame[12].i));
	LINE_NUMBER(1534);
	INST_IINC(10, 1);
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(1547);
	frame[5].i = (jchar((frame[8].i)));
	LINE_NUMBER(1548);
	goto label_38;
	}
label_20:;
	{
	LINE_NUMBER(1563);
	frame[8].i = ((frame[7].i) - (48));
	LINE_NUMBER(1564);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1565);
	if ((48) > (frame[7].i)) goto label_63;
	}
	{
	if ((frame[7].i) > (55)) goto label_63;
	}
	{
	LINE_NUMBER(1566);
	INST_IINC(2, 1);
	LINE_NUMBER(1567);
	frame[8].i = (((8) * (frame[8].i)) + ((frame[7].i) - (48)));
	LINE_NUMBER(1568);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i)));
	LINE_NUMBER(1569);
	if ((48) > (frame[7].i)) goto label_63;
	}
	{
	if ((frame[7].i) > (55)) goto label_63;
	}
	{
	LINE_NUMBER(1570);
	INST_IINC(2, 1);
	LINE_NUMBER(1571);
	frame[10].i = (((8) * (frame[8].i)) + ((frame[7].i) - (48)));
	LINE_NUMBER(1572);
	if ((frame[10].i) > (255)) goto label_71;
	}
	{
	LINE_NUMBER(1573);
	frame[8].i = (frame[10].i);
	goto label_63;
	}
label_71:;
	LINE_NUMBER(1575);
	INST_IINC(2, -1);
label_63:;
	{
	LINE_NUMBER(1578);
	frame[5].i = (jchar((frame[8].i)));
	LINE_NUMBER(1579);
	goto label_38;
	}
label_27:;
	{
	LINE_NUMBER(1582);
	SM_rhino_regexp_NativeRegExp_addCharacterRangeToCharSet_rhino_regexp_RECharSet_char_char(ctx, (frame[1].o), (48), (57));
	LINE_NUMBER(1583);
	goto label_12;
	}
label_22:;
	{
	LINE_NUMBER(1585);
	SM_rhino_regexp_NativeRegExp_addCharacterRangeToCharSet_rhino_regexp_RECharSet_char_char(ctx, (frame[1].o), (jint(0)), (47));
	LINE_NUMBER(1586);
	SM_rhino_regexp_NativeRegExp_addCharacterRangeToCharSet_rhino_regexp_RECharSet_char_char(ctx, (frame[1].o), (58), (jchar((((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) - (jint(1))))));
	LINE_NUMBER(1588);
	goto label_12;
	}
label_31:;
	{
	LINE_NUMBER(1590);
	frame[10].i = (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) - (jint(1)));
	}
label_77:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(1591);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isREWhiteSpace_int_R_boolean(ctx, (frame[10].i));
	if (temp0 == 0) goto label_79;
	}
	{
	LINE_NUMBER(1592);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (jchar((frame[10].i))));
	}
label_79:;
	{
	LINE_NUMBER(1590);
	INST_IINC(10, -1);
	goto label_77;
	}
label_23:;
	{
	LINE_NUMBER(1595);
	frame[10].i = (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) - (jint(1)));
	}
label_81:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(1596);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isREWhiteSpace_int_R_boolean(ctx, (frame[10].i));
	if (temp0 != 0) goto label_83;
	}
	{
	LINE_NUMBER(1597);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (jchar((frame[10].i))));
	}
label_83:;
	{
	LINE_NUMBER(1595);
	INST_IINC(10, -1);
	goto label_81;
	}
label_35:;
	{
	LINE_NUMBER(1600);
	frame[10].i = (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) - (jint(1)));
	}
label_85:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(1601);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, (jchar((frame[10].i))));
	if (temp0 == 0) goto label_87;
	}
	{
	LINE_NUMBER(1602);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (jchar((frame[10].i))));
	}
label_87:;
	{
	LINE_NUMBER(1600);
	INST_IINC(10, -1);
	goto label_85;
	}
label_24:;
	{
	LINE_NUMBER(1605);
	frame[10].i = (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) - (jint(1)));
	}
label_89:;
	INST_ILOAD(10);
	if ((--sp)->i < 0) goto label_12;
	{
	LINE_NUMBER(1606);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, (jchar((frame[10].i))));
	if (temp0 != 0) goto label_91;
	}
	{
	LINE_NUMBER(1607);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (jchar((frame[10].i))));
	}
label_91:;
	{
	LINE_NUMBER(1605);
	INST_IINC(10, -1);
	goto label_89;
	}
label_21:;
	{
	LINE_NUMBER(1610);
	frame[5].i = (frame[7].i);
	LINE_NUMBER(1611);
	goto label_38;
	}
label_17:;
	{
	LINE_NUMBER(1617);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	}
label_38:;
	{
	LINE_NUMBER(1621);
	if ((frame[11].i) == 0) goto label_94;
	}
	{
	LINE_NUMBER(1622);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(2))) == 0) goto label_96;
	}
	{
	LINE_NUMBER(1623);
	if ((clinit_rhino_regexp_NativeRegExp(ctx), (jint)SF_rhino_regexp_NativeRegExp_$assertionsDisabled) != 0) goto label_98;
	}
	{
	if ((frame[4].i) <= (frame[5].i)) goto label_98;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_98:;
	{
	LINE_NUMBER(1624);
	frame[7].i = (frame[4].i);
	}
label_99:;
	{
	if ((frame[7].i) > (frame[5].i)) goto label_100;
	}
	{
	LINE_NUMBER(1625);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (frame[7].i));
	LINE_NUMBER(1626);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[7].i));
	frame[12].i = temp0;
	LINE_NUMBER(1627);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_downcase_char_R_char(ctx, (frame[7].i));
	frame[13].i = temp1;
	LINE_NUMBER(1628);
	if ((frame[7].i) == (frame[12].i)) goto label_105;
	}
	{
	LINE_NUMBER(1629);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (frame[12].i));
	}
label_105:;
	{
	LINE_NUMBER(1630);
	if ((frame[7].i) == (frame[13].i)) goto label_107;
	}
	{
	LINE_NUMBER(1631);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (frame[13].i));
	}
label_107:;
	{
	LINE_NUMBER(1632);
	frame[7].i = (jchar(((frame[7].i) + (jint(1)))));
	if ((frame[7].i) != 0) goto label_109;
	}
	LINE_NUMBER(1633);
	goto label_100;
label_109:;
	LINE_NUMBER(1634);
	goto label_99;
label_96:;
	{
	LINE_NUMBER(1636);
	SM_rhino_regexp_NativeRegExp_addCharacterRangeToCharSet_rhino_regexp_RECharSet_char_char(ctx, (frame[1].o), (frame[4].i), (frame[5].i));
	}
label_100:;
	{
	LINE_NUMBER(1638);
	frame[11].i = (jint(0));
	goto label_12;
	}
label_94:;
	{
	LINE_NUMBER(1640);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(2))) == 0) goto label_111;
	}
	{
	LINE_NUMBER(1641);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[5].i));
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, sp[0].o, temp0);
	LINE_NUMBER(1642);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_downcase_char_R_char(ctx, (frame[5].i));
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, sp[0].o, temp1);
	goto label_114;
	}
label_111:;
	{
	LINE_NUMBER(1644);
	SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char(ctx, (frame[1].o), (frame[5].i));
	}
label_114:;
	{
	LINE_NUMBER(1646);
	if ((frame[2].i) >= ((frame[3].i) - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(1647);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_source;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))) != (45)) goto label_12;
	}
	{
	LINE_NUMBER(1648);
	INST_IINC(2, 1);
	LINE_NUMBER(1649);
	frame[11].i = (jint(1));
	LINE_NUMBER(1650);
	frame[4].i = (frame[5].i);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1655);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_classMatcher_rhino_regexp_REGlobalData_rhino_regexp_RECharSet_char_R_boolean(jcontext ctx, jobject param0, jobject param1, jchar param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:classMatcher", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1664);
	if (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_converted) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1665);
	SM_rhino_regexp_NativeRegExp_processCharSet_rhino_regexp_REGlobalData_rhino_regexp_RECharSet(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(1668);
	frame[3].i = ((frame[2].i) >> (jint(3)));
	LINE_NUMBER(1669);
	if (((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length) == 0) goto label_4;
	}
	{
	if ((frame[2].i) >= ((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_length)) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_bits;
	if ((((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i))) & ((jint(1)) << ((frame[2].i) & (7)))) != 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	popStackFrame(ctx);
	return (sp[0].i ^ ((jint)((rhino_regexp_RECharSet *) NULL_CHECK((frame[1].o)))->F_sense));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:reopIsSimple", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1675);
	if ((frame[0].i) < (jint(1))) goto label_1;
	}
	{
	if ((frame[0].i) > (23)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jint param4, jint param5, jbool param6) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:simpleMatch", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1686);
	frame[7].i = (jint(0));
	LINE_NUMBER(1690);
	frame[13].i = ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp);
	LINE_NUMBER(1692);
	switch((frame[2].i)) {
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_9;
		case 8: goto label_10;
		case 9: goto label_11;
		case 10: goto label_12;
		case 11: goto label_13;
		case 12: goto label_14;
		case 13: goto label_15;
		case 14: goto label_16;
		case 15: goto label_17;
		case 16: goto label_18;
		case 17: goto label_19;
		case 18: goto label_20;
		case 19: goto label_21;
		case 20: goto label_22;
		case 21: goto label_22;
		case 22: goto label_23;
		case 23: goto label_23;
		default: goto label_22;
	}
	}
label_3:;
	{
	LINE_NUMBER(1694);
	frame[7].i = (jint(1));
	LINE_NUMBER(1695);
	goto label_25;
	}
label_4:;
	{
	LINE_NUMBER(1697);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1698);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_multiline) == 0) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1))));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isLineTerm_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_26;
	}
	LINE_NUMBER(1699);
	goto label_25;
label_26:;
	{
	LINE_NUMBER(1702);
	frame[7].i = (jint(1));
	LINE_NUMBER(1703);
	goto label_25;
	}
label_5:;
	{
	LINE_NUMBER(1705);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_30;
	}
	{
	LINE_NUMBER(1706);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_multiline) == 0) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isLineTerm_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_30;
	}
	LINE_NUMBER(1707);
	goto label_25;
label_30:;
	{
	LINE_NUMBER(1710);
	frame[7].i = (jint(1));
	LINE_NUMBER(1711);
	goto label_25;
	}
label_6:;
	{
	LINE_NUMBER(1713);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1))));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_35;
	}
label_34:;
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	{
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) >= (frame[5].i)) goto label_37;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp;
	LINE_NUMBER(1714);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, temp1);
	if (temp2 != 0) goto label_39;
	}
label_37:;
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 2;
	frame[7].i = (sp[0].i ^ sp[1].i);
	LINE_NUMBER(1715);
	goto label_25;
	}
label_7:;
	{
	LINE_NUMBER(1717);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == 0) goto label_42;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) - (jint(1))));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_43;
	}
label_42:;
	INST_ICONST(1);
	goto label_44;
label_43:;
	INST_ICONST(0);
label_44:;
	{
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) >= (frame[5].i)) goto label_45;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp;
	LINE_NUMBER(1718);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, temp1);
	if (temp2 == 0) goto label_45;
	}
	INST_ICONST(1);
	goto label_47;
label_45:;
	INST_ICONST(0);
label_47:;
	{
	sp -= 2;
	frame[7].i = (sp[0].i ^ sp[1].i);
	LINE_NUMBER(1719);
	goto label_25;
	}
label_8:;
	{
	LINE_NUMBER(1721);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isLineTerm_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_25;
	}
	{
	LINE_NUMBER(1722);
	frame[7].i = (jint(1));
	LINE_NUMBER(1723);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_9:;
	{
	LINE_NUMBER(1727);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1728);
	frame[7].i = (jint(1));
	LINE_NUMBER(1729);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_10:;
	{
	LINE_NUMBER(1733);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_25;
	}
	{
	LINE_NUMBER(1734);
	frame[7].i = (jint(1));
	LINE_NUMBER(1735);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_11:;
	{
	LINE_NUMBER(1739);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1740);
	frame[7].i = (jint(1));
	LINE_NUMBER(1741);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_12:;
	{
	LINE_NUMBER(1745);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_25;
	}
	{
	LINE_NUMBER(1746);
	frame[7].i = (jint(1));
	LINE_NUMBER(1747);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_13:;
	{
	LINE_NUMBER(1751);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isREWhiteSpace_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1752);
	frame[7].i = (jint(1));
	LINE_NUMBER(1753);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_14:;
	{
	LINE_NUMBER(1757);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isREWhiteSpace_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_25;
	}
	{
	LINE_NUMBER(1758);
	frame[7].i = (jint(1));
	LINE_NUMBER(1759);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_15:;
	{
	LINE_NUMBER(1763);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[9].i = temp0;
	LINE_NUMBER(1764);
	INST_IINC(4, 2);
	LINE_NUMBER(1765);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_backrefMatcher_rhino_regexp_REGlobalData_int_java_lang_String_int_R_boolean(ctx, (frame[0].o), (frame[9].i), (frame[1].o), (frame[5].i));
	frame[7].i = temp1;
	LINE_NUMBER(1767);
	goto label_25;
	}
label_16:;
	{
	LINE_NUMBER(1769);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[10].i = temp0;
	LINE_NUMBER(1770);
	INST_IINC(4, 2);
	LINE_NUMBER(1771);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[11].i = temp1;
	LINE_NUMBER(1772);
	INST_IINC(4, 2);
	LINE_NUMBER(1773);
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_flatNMatcher_rhino_regexp_REGlobalData_int_int_java_lang_String_int_R_boolean(ctx, (frame[0].o), (frame[10].i), (frame[11].i), (frame[1].o), (frame[5].i));
	frame[7].i = temp2;
	LINE_NUMBER(1775);
	goto label_25;
	}
label_17:;
	{
	LINE_NUMBER(1777);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	frame[8].i = (jchar((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255))));
	LINE_NUMBER(1778);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	if (temp0 != (frame[8].i)) goto label_25;
	}
	{
	LINE_NUMBER(1779);
	frame[7].i = (jint(1));
	LINE_NUMBER(1780);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_18:;
	{
	LINE_NUMBER(1785);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[10].i = temp0;
	LINE_NUMBER(1786);
	INST_IINC(4, 2);
	LINE_NUMBER(1787);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[11].i = temp1;
	LINE_NUMBER(1788);
	INST_IINC(4, 2);
	LINE_NUMBER(1789);
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_flatNIMatcher_rhino_regexp_REGlobalData_int_int_java_lang_String_int_R_boolean(ctx, (frame[0].o), (frame[10].i), (frame[11].i), (frame[1].o), (frame[5].i));
	frame[7].i = temp2;
	LINE_NUMBER(1791);
	goto label_25;
	}
label_19:;
	{
	LINE_NUMBER(1793);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	frame[8].i = (jchar((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (255))));
	LINE_NUMBER(1794);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(1795);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	frame[14].i = temp0;
	LINE_NUMBER(1796);
	if ((frame[8].i) == (frame[14].i)) goto label_82;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[8].i));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[14].i));
	if (temp0 != temp1) goto label_83;
	}
label_82:;
	{
	LINE_NUMBER(1797);
	frame[7].i = (jint(1));
	LINE_NUMBER(1798);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	}
label_83:;
	LINE_NUMBER(1800);
	goto label_25;
label_20:;
	{
	LINE_NUMBER(1804);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[8].i = (jchar(temp0));
	LINE_NUMBER(1805);
	INST_IINC(4, 2);
	LINE_NUMBER(1806);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	if (temp0 != (frame[8].i)) goto label_25;
	}
	{
	LINE_NUMBER(1807);
	frame[7].i = (jint(1));
	LINE_NUMBER(1808);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	goto label_25;
	}
label_21:;
	{
	LINE_NUMBER(1813);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[8].i = (jchar(temp0));
	LINE_NUMBER(1814);
	INST_IINC(4, 2);
	LINE_NUMBER(1815);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(1816);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	frame[14].i = temp0;
	LINE_NUMBER(1817);
	if ((frame[8].i) == (frame[14].i)) goto label_93;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[8].i));
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[14].i));
	if (temp0 != temp1) goto label_94;
	}
label_93:;
	{
	LINE_NUMBER(1818);
	frame[7].i = (jint(1));
	LINE_NUMBER(1819);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	}
label_94:;
	LINE_NUMBER(1821);
	goto label_25;
label_23:;
	{
	LINE_NUMBER(1827);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[3].o), (frame[4].i));
	frame[12].i = temp0;
	LINE_NUMBER(1828);
	INST_IINC(4, 2);
	LINE_NUMBER(1829);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) == (frame[5].i)) goto label_25;
	}
	{
	LINE_NUMBER(1830);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[1].o))->F_classList;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[12].i));
	sp[2].o = frame[1].o;
	jint temp0 = (jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp;
	LINE_NUMBER(1831);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[2].o, temp0);
	LINE_NUMBER(1830);
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_classMatcher_rhino_regexp_REGlobalData_rhino_regexp_RECharSet_char_R_boolean(ctx, sp[0].o, sp[1].o, temp1);
	if (temp2 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1832);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(1833);
	frame[7].i = (jint(1));
	LINE_NUMBER(1834);
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(1841);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(1843);
	if ((frame[7].i) == 0) goto label_104;
	}
	{
	LINE_NUMBER(1844);
	if ((frame[6].i) != 0) goto label_106;
	}
	{
	LINE_NUMBER(1845);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp = (frame[13].i);
	}
label_106:;
	{
	LINE_NUMBER(1846);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_104:;
	{
	LINE_NUMBER(1848);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp = (frame[13].i);
	LINE_NUMBER(1849);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_executeREBytecode_rhino_regexp_REGlobalData_java_lang_String_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[25];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:executeREBytecode", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1855);
	frame[3].i = (jint(0));
	LINE_NUMBER(1856);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[0].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_program;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1857);
	frame[5].i = (57);
	LINE_NUMBER(1858);
	frame[6].i = (jint(0));
	LINE_NUMBER(1859);
	frame[7].i = (jint(0));
	LINE_NUMBER(1861);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1867);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	if (((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_anchorCh) >= 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(ctx, (frame[8].i));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1868);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(1869);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) > (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(1870);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[8].i), (frame[4].o), (frame[3].i), (frame[2].i), (jint(1)));
	frame[10].i = temp0;
	LINE_NUMBER(1871);
	if ((frame[10].i) < 0) goto label_13;
	}
	{
	LINE_NUMBER(1872);
	frame[9].i = (jint(1));
	LINE_NUMBER(1873);
	frame[3].i = (frame[10].i);
	LINE_NUMBER(1874);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1875);
	goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(1877);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_skipped = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_skipped) + (jint(1)));
	LINE_NUMBER(1878);
	sp[0].o = frame[0].o;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp = (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_cp) + (jint(1)));
	LINE_NUMBER(1879);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1880);
	if ((frame[9].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(1881);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(1886);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(ctx, (frame[8].i));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(1887);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[8].i), (frame[4].o), (frame[3].i), (frame[2].i), (jint(1)));
	frame[9].i = temp0;
	LINE_NUMBER(1888);
	if ((frame[9].i) < 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1889);
	if ((frame[7].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(1890);
	frame[3].i = (frame[9].i);
	}
label_27:;
	LINE_NUMBER(1891);
	goto label_29;
label_21:;
	{
	LINE_NUMBER(1893);
	switch((frame[8].i)) {
		case 25: goto label_30;
		case 26: goto label_30;
		case 27: goto label_30;
		case 28: goto label_30;
		case 29: goto label_31;
		case 30: goto label_32;
		case 31: goto label_33;
		case 32: goto label_34;
		case 33: goto label_35;
		case 34: goto label_35;
		case 35: goto label_35;
		case 36: goto label_35;
		case 37: goto label_35;
		case 38: goto label_35;
		case 39: goto label_35;
		case 40: goto label_35;
		case 41: goto label_36;
		case 42: goto label_37;
		case 43: goto label_38;
		case 44: goto label_38;
		case 45: goto label_30;
		case 46: goto label_30;
		case 47: goto label_30;
		case 48: goto label_30;
		case 49: goto label_39;
		case 50: goto label_35;
		case 51: goto label_40;
		case 52: goto label_41;
		case 53: goto label_42;
		case 54: goto label_42;
		case 55: goto label_42;
		case 56: goto label_35;
		case 57: goto label_43;
		default: goto label_35;
	}
	}
label_42:;
	{
	LINE_NUMBER(1897);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = (jchar(temp0));
	LINE_NUMBER(1898);
	INST_IINC(3, 2);
	LINE_NUMBER(1899);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[10].i = (jchar(temp1));
	LINE_NUMBER(1900);
	INST_IINC(3, 2);
	LINE_NUMBER(1902);
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) != (frame[2].i)) goto label_48;
	}
	{
	LINE_NUMBER(1903);
	frame[7].i = (jint(0));
	LINE_NUMBER(1904);
	goto label_29;
	}
label_48:;
	{
	LINE_NUMBER(1906);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp));
	frame[11].i = temp0;
	LINE_NUMBER(1907);
	if ((frame[8].i) != (55)) goto label_52;
	}
	{
	LINE_NUMBER(1908);
	if ((frame[11].i) == (frame[9].i)) goto label_33;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[1].o))->F_classList;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[10].i));
	jint temp0 = frame[11].i;
	LINE_NUMBER(1909);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_classMatcher_rhino_regexp_REGlobalData_rhino_regexp_RECharSet_char_R_boolean(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_33;
	}
	{
	LINE_NUMBER(1910);
	frame[7].i = (jint(0));
	LINE_NUMBER(1911);
	goto label_29;
	}
label_52:;
	{
	LINE_NUMBER(1914);
	if ((frame[8].i) != (54)) goto label_57;
	}
	{
	LINE_NUMBER(1915);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (frame[11].i));
	frame[11].i = temp0;
	}
label_57:;
	{
	LINE_NUMBER(1916);
	if ((frame[11].i) == (frame[9].i)) goto label_33;
	}
	{
	if ((frame[11].i) == (frame[10].i)) goto label_33;
	}
	{
	LINE_NUMBER(1917);
	frame[7].i = (jint(0));
	LINE_NUMBER(1918);
	goto label_29;
	}
label_33:;
	{
	LINE_NUMBER(1925);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = (temp0 + temp1);
	LINE_NUMBER(1926);
	INST_IINC(3, 2);
	LINE_NUMBER(1927);
	sp[0].o = frame[4].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2));
	LINE_NUMBER(1928);
	frame[10].i = ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp);
	LINE_NUMBER(1929);
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(ctx, (frame[8].i));
	if (temp3 == 0) goto label_65;
	}
	{
	LINE_NUMBER(1930);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[8].i), (frame[4].o), (frame[3].i), (frame[2].i), (jint(1)));
	frame[11].i = temp0;
	LINE_NUMBER(1931);
	if ((frame[11].i) >= 0) goto label_68;
	}
	{
	LINE_NUMBER(1932);
	sp[0].o = frame[4].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1933);
	frame[3].i = (frame[9].i);
	LINE_NUMBER(1934);
	goto label_7;
	}
label_68:;
	{
	LINE_NUMBER(1936);
	frame[7].i = (jint(1));
	LINE_NUMBER(1937);
	frame[3].i = (frame[11].i);
	LINE_NUMBER(1938);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	}
label_65:;
	{
	LINE_NUMBER(1940);
	sp[0].o = frame[4].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[11].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(1941);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int_int_int_int(ctx, (frame[0].o), (frame[11].i), (frame[9].i), (frame[10].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(1944);
	goto label_7;
	}
label_34:;
	{
	LINE_NUMBER(1947);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = temp0;
	LINE_NUMBER(1948);
	frame[3].i = ((frame[3].i) + (frame[9].i));
	LINE_NUMBER(1949);
	sp[0].o = frame[4].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp1));
	LINE_NUMBER(1951);
	goto label_7;
	}
label_31:;
	{
	LINE_NUMBER(1955);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = temp0;
	LINE_NUMBER(1956);
	INST_IINC(3, 2);
	LINE_NUMBER(1957);
	((func_rhino_regexp_REGlobalData_setParens_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int])(ctx, (frame[0].o), (frame[9].i), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp), (jint(0)));
	LINE_NUMBER(1958);
	sp[0].o = frame[4].o;
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp1));
	LINE_NUMBER(1960);
	goto label_7;
	}
label_32:;
	{
	LINE_NUMBER(1962);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = temp0;
	LINE_NUMBER(1963);
	INST_IINC(3, 2);
	LINE_NUMBER(1964);
	jint temp1 = (jint)((func_rhino_regexp_REGlobalData_parensIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_parensIndex_int_R_int])(ctx, (frame[0].o), (frame[9].i));
	frame[10].i = temp1;
	LINE_NUMBER(1965);
	((func_rhino_regexp_REGlobalData_setParens_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int])(ctx, (frame[0].o), (frame[9].i), (frame[10].i), (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) - (frame[10].i)));
	LINE_NUMBER(1967);
	sp[0].o = frame[4].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2));
	LINE_NUMBER(1969);
	goto label_7;
	}
label_36:;
	{
	LINE_NUMBER(1972);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = (temp0 + temp1);
	LINE_NUMBER(1973);
	INST_IINC(3, 2);
	LINE_NUMBER(1974);
	sp[0].o = frame[4].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2));
	LINE_NUMBER(1975);
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(ctx, (frame[8].i));
	if (temp3 == 0) goto label_91;
	}
	{
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[8].i), (frame[4].o), (frame[3].i), (frame[2].i), (jint(0)));
	if (temp0 >= 0) goto label_91;
	}
	{
	LINE_NUMBER(1976);
	frame[7].i = (jint(0));
	LINE_NUMBER(1977);
	goto label_29;
	}
label_91:;
	{
	LINE_NUMBER(1979);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop;
	SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[5].i), (frame[6].i));
	LINE_NUMBER(1981);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int(ctx, (frame[0].o), (43), (frame[9].i));
	LINE_NUMBER(1983);
	goto label_7;
	}
label_37:;
	{
	LINE_NUMBER(1985);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = (temp0 + temp1);
	LINE_NUMBER(1986);
	INST_IINC(3, 2);
	LINE_NUMBER(1987);
	sp[0].o = frame[4].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2));
	LINE_NUMBER(1988);
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(ctx, (frame[8].i));
	if (temp3 == 0) goto label_99;
	}
	{
	LINE_NUMBER(1989);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[8].i), (frame[4].o), (frame[3].i), (frame[2].i), (jint(0)));
	frame[10].i = temp0;
	LINE_NUMBER(1990);
	if ((frame[10].i) < 0) goto label_99;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[10].i))) != (44)) goto label_99;
	}
	{
	LINE_NUMBER(1991);
	frame[7].i = (jint(0));
	LINE_NUMBER(1992);
	goto label_29;
	}
label_99:;
	{
	LINE_NUMBER(1995);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop;
	SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[5].i), (frame[6].i));
	LINE_NUMBER(1997);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int(ctx, (frame[0].o), (44), (frame[9].i));
	LINE_NUMBER(1999);
	goto label_7;
	}
label_38:;
	{
	LINE_NUMBER(2003);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2004);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_index);
	LINE_NUMBER(2005);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_backTrack;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_backTrackStackTop = (jref) sp[1].o;
	LINE_NUMBER(2006);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationPc);
	LINE_NUMBER(2007);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationOp);
	LINE_NUMBER(2008);
	if ((frame[8].i) != (44)) goto label_111;
	}
	{
	LINE_NUMBER(2009);
	if ((frame[7].i) != 0) goto label_113;
	}
	INST_ICONST(1);
	goto label_114;
label_113:;
	INST_ICONST(0);
label_114:;
	INST_ISTORE(7);
label_111:;
	LINE_NUMBER(2012);
	goto label_29;
label_30:;
	{
	LINE_NUMBER(2023);
	frame[11].i = (jint(0));
	LINE_NUMBER(2024);
	switch((frame[8].i)) {
		case 25: goto label_116;
		case 26: goto label_116;
		case 27: goto label_116;
		case 28: goto label_116;
		case 29: goto label_117;
		case 30: goto label_117;
		case 31: goto label_117;
		case 32: goto label_117;
		case 33: goto label_117;
		case 34: goto label_117;
		case 35: goto label_117;
		case 36: goto label_117;
		case 37: goto label_117;
		case 38: goto label_117;
		case 39: goto label_117;
		case 40: goto label_117;
		case 41: goto label_117;
		case 42: goto label_117;
		case 43: goto label_117;
		case 44: goto label_117;
		case 45: goto label_118;
		case 46: goto label_119;
		case 47: goto label_120;
		case 48: goto label_121;
		default: goto label_117;
	}
	}
label_116:;
	{
	LINE_NUMBER(2029);
	frame[11].i = (jint(1));
	}
label_118:;
	{
	LINE_NUMBER(2032);
	frame[9].i = (jint(0));
	LINE_NUMBER(2033);
	frame[10].i = (jint(-1));
	LINE_NUMBER(2034);
	goto label_124;
	}
label_119:;
	{
	LINE_NUMBER(2037);
	frame[9].i = (jint(1));
	LINE_NUMBER(2038);
	frame[10].i = (jint(-1));
	LINE_NUMBER(2039);
	goto label_124;
	}
label_120:;
	{
	LINE_NUMBER(2042);
	frame[9].i = (jint(0));
	LINE_NUMBER(2043);
	frame[10].i = (jint(1));
	LINE_NUMBER(2044);
	goto label_124;
	}
label_121:;
	{
	LINE_NUMBER(2047);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[9].i = temp0;
	LINE_NUMBER(2048);
	INST_IINC(3, 2);
	LINE_NUMBER(2050);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[10].i = (temp1 - (jint(1)));
	LINE_NUMBER(2051);
	INST_IINC(3, 2);
	LINE_NUMBER(2052);
	goto label_124;
	}
label_117:;
	{
	LINE_NUMBER(2054);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_124:;
	{
	LINE_NUMBER(2056);
	SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, (frame[0].o), (frame[9].i), (frame[10].i), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp), (jobject(nullptr)), (frame[5].i), (frame[6].i));
	LINE_NUMBER(2058);
	if ((frame[11].i) == 0) goto label_134;
	}
	{
	LINE_NUMBER(2059);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int(ctx, (frame[0].o), (51), (frame[3].i));
	LINE_NUMBER(2060);
	frame[5].i = (51);
	LINE_NUMBER(2061);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(2063);
	INST_IINC(3, 6);
	LINE_NUMBER(2064);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	goto label_140;
	}
label_134:;
	{
	LINE_NUMBER(2066);
	if ((frame[9].i) == 0) goto label_141;
	}
	{
	LINE_NUMBER(2067);
	frame[5].i = (52);
	LINE_NUMBER(2068);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(2070);
	INST_IINC(3, 6);
	LINE_NUMBER(2071);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	goto label_140;
	}
label_141:;
	{
	LINE_NUMBER(2073);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int(ctx, (frame[0].o), (52), (frame[3].i));
	LINE_NUMBER(2074);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState(ctx, (frame[0].o));
	LINE_NUMBER(2075);
	INST_IINC(3, 4);
	LINE_NUMBER(2076);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2077);
	sp[0].o = frame[4].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2));
	}
label_140:;
	LINE_NUMBER(2081);
	goto label_7;
label_39:;
	{
	LINE_NUMBER(2086);
	frame[7].i = (jint(1));
	LINE_NUMBER(2088);
	frame[3].i = (frame[6].i);
	LINE_NUMBER(2089);
	frame[8].i = (frame[5].i);
	LINE_NUMBER(2090);
	goto label_7;
	}
label_40:;
	{
	LINE_NUMBER(2095);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState(ctx, (frame[0].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2096);
	if ((frame[7].i) != 0) goto label_154;
	}
	{
	LINE_NUMBER(2098);
	if (((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_min) != 0) goto label_156;
	}
	{
	LINE_NUMBER(2099);
	frame[7].i = (jint(1));
	}
label_156:;
	{
	LINE_NUMBER(2100);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationPc);
	LINE_NUMBER(2101);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationOp);
	LINE_NUMBER(2102);
	INST_IINC(3, 4);
	LINE_NUMBER(2103);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2104);
	goto label_29;
	}
label_154:;
	{
	LINE_NUMBER(2106);
	if (((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_min) != 0) goto label_162;
	}
	{
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) != ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_index)) goto label_162;
	}
	{
	LINE_NUMBER(2108);
	frame[7].i = (jint(0));
	LINE_NUMBER(2109);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationPc);
	LINE_NUMBER(2110);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationOp);
	LINE_NUMBER(2111);
	INST_IINC(3, 4);
	LINE_NUMBER(2112);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2113);
	goto label_29;
	}
label_162:;
	{
	LINE_NUMBER(2115);
	frame[12].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_min);
	frame[13].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_max);
	LINE_NUMBER(2116);
	if ((frame[12].i) == 0) goto label_171;
	}
	INST_IINC(12, -1);
label_171:;
	{
	LINE_NUMBER(2117);
	if ((frame[13].i) == (jint(-1))) goto label_172;
	}
	INST_IINC(13, -1);
label_172:;
	{
	LINE_NUMBER(2118);
	if ((frame[13].i) != 0) goto label_173;
	}
	{
	LINE_NUMBER(2119);
	frame[7].i = (jint(1));
	LINE_NUMBER(2120);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationPc);
	LINE_NUMBER(2121);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationOp);
	LINE_NUMBER(2122);
	INST_IINC(3, 4);
	LINE_NUMBER(2123);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2124);
	goto label_29;
	}
label_173:;
	{
	LINE_NUMBER(2126);
	frame[9].i = ((frame[3].i) + (6));
	LINE_NUMBER(2127);
	frame[10].i = ((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[9].i)));
	LINE_NUMBER(2128);
	frame[14].i = ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp);
	LINE_NUMBER(2129);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean(ctx, (frame[10].i));
	if (temp0 == 0) goto label_183;
	}
	{
	LINE_NUMBER(2130);
	INST_IINC(9, 1);
	LINE_NUMBER(2131);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[10].i), (frame[4].o), (frame[9].i), (frame[2].i), (jint(1)));
	frame[15].i = temp0;
	LINE_NUMBER(2132);
	if ((frame[15].i) >= 0) goto label_187;
	}
	{
	LINE_NUMBER(2133);
	if ((frame[12].i) != 0) goto label_189;
	}
	INST_ICONST(1);
	goto label_190;
label_189:;
	INST_ICONST(0);
label_190:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(2134);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationPc);
	LINE_NUMBER(2135);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationOp);
	LINE_NUMBER(2136);
	INST_IINC(3, 4);
	LINE_NUMBER(2137);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2138);
	goto label_29;
	}
label_187:;
	{
	LINE_NUMBER(2140);
	frame[7].i = (jint(1));
	LINE_NUMBER(2141);
	frame[9].i = (frame[15].i);
	}
label_183:;
	{
	LINE_NUMBER(2143);
	frame[5].i = (51);
	LINE_NUMBER(2144);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(2145);
	SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, (frame[0].o), (frame[12].i), (frame[13].i), (frame[14].i), (jobject(nullptr)), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationOp), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationPc));
	LINE_NUMBER(2147);
	if ((frame[12].i) != 0) goto label_200;
	}
	{
	LINE_NUMBER(2148);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int_int_int_int(ctx, (frame[0].o), (51), (frame[3].i), (frame[14].i), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationOp), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[11].o)))->F_continuationPc));
	LINE_NUMBER(2150);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[15].i = temp0;
	LINE_NUMBER(2151);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), ((frame[3].i) + (jint(2))));
	frame[16].i = temp1;
	LINE_NUMBER(2152);
	frame[17].i = (jint(0));
	}
label_205:;
	{
	if ((frame[17].i) >= (frame[15].i)) goto label_200;
	}
	{
	LINE_NUMBER(2153);
	((func_rhino_regexp_REGlobalData_setParens_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int])(ctx, (frame[0].o), ((frame[16].i) + (frame[17].i)), (jint(-1)), (jint(0)));
	LINE_NUMBER(2152);
	INST_IINC(17, 1);
	goto label_205;
	}
label_200:;
	{
	LINE_NUMBER(2156);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[9].i))) == (49)) goto label_40;
	}
	{
	LINE_NUMBER(2158);
	frame[3].i = (frame[9].i);
	LINE_NUMBER(2159);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(2161);
	goto label_7;
	}
label_41:;
	{
	LINE_NUMBER(2164);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2165);
	if ((frame[7].i) != 0) goto label_212;
	}
	{
	LINE_NUMBER(2169);
	if (((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_max) == (jint(-1))) goto label_214;
	}
	{
	if (((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_max) <= 0) goto label_215;
	}
label_214:;
	{
	LINE_NUMBER(2170);
	SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, (frame[0].o), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_min), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_max), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp), (jobject(nullptr)), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationOp), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationPc));
	LINE_NUMBER(2172);
	frame[5].i = (52);
	LINE_NUMBER(2173);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(2174);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[10].i = temp0;
	LINE_NUMBER(2175);
	INST_IINC(3, 2);
	LINE_NUMBER(2176);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[11].i = temp1;
	LINE_NUMBER(2177);
	INST_IINC(3, 4);
	LINE_NUMBER(2178);
	frame[12].i = (jint(0));
	}
label_223:;
	{
	if ((frame[12].i) >= (frame[10].i)) goto label_224;
	}
	{
	LINE_NUMBER(2179);
	((func_rhino_regexp_REGlobalData_setParens_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int])(ctx, (frame[0].o), ((frame[11].i) + (frame[12].i)), (jint(-1)), (jint(0)));
	LINE_NUMBER(2178);
	INST_IINC(12, 1);
	goto label_223;
	}
label_224:;
	{
	LINE_NUMBER(2181);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(2182);
	goto label_7;
	}
label_215:;
	{
	LINE_NUMBER(2185);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationPc);
	LINE_NUMBER(2186);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationOp);
	LINE_NUMBER(2187);
	goto label_29;
	}
label_212:;
	{
	LINE_NUMBER(2189);
	if (((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_min) != 0) goto label_230;
	}
	{
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp) != ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_index)) goto label_230;
	}
	{
	LINE_NUMBER(2191);
	frame[7].i = (jint(0));
	LINE_NUMBER(2192);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationPc);
	LINE_NUMBER(2193);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationOp);
	LINE_NUMBER(2194);
	goto label_29;
	}
label_230:;
	{
	LINE_NUMBER(2196);
	frame[10].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_min);
	frame[11].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_max);
	LINE_NUMBER(2197);
	if ((frame[10].i) == 0) goto label_237;
	}
	INST_IINC(10, -1);
label_237:;
	{
	LINE_NUMBER(2198);
	if ((frame[11].i) == (jint(-1))) goto label_238;
	}
	INST_IINC(11, -1);
label_238:;
	{
	LINE_NUMBER(2199);
	SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int(ctx, (frame[0].o), (frame[10].i), (frame[11].i), ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp), (jobject(nullptr)), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationOp), ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationPc));
	LINE_NUMBER(2201);
	if ((frame[10].i) == 0) goto label_240;
	}
	{
	LINE_NUMBER(2202);
	frame[5].i = (52);
	LINE_NUMBER(2203);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(2204);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[12].i = temp0;
	LINE_NUMBER(2205);
	INST_IINC(3, 2);
	LINE_NUMBER(2206);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[13].i = temp1;
	LINE_NUMBER(2207);
	INST_IINC(3, 4);
	LINE_NUMBER(2208);
	frame[14].i = (jint(0));
	}
label_248:;
	{
	if ((frame[14].i) >= (frame[12].i)) goto label_249;
	}
	{
	LINE_NUMBER(2209);
	((func_rhino_regexp_REGlobalData_setParens_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int])(ctx, (frame[0].o), ((frame[13].i) + (frame[14].i)), (jint(-1)), (jint(0)));
	LINE_NUMBER(2208);
	INST_IINC(14, 1);
	goto label_248;
	}
label_249:;
	{
	LINE_NUMBER(2211);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	LINE_NUMBER(2212);
	goto label_7;
	}
label_240:;
	{
	LINE_NUMBER(2213);
	frame[6].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationPc);
	LINE_NUMBER(2214);
	frame[5].i = ((jint)((rhino_regexp_REProgState *) NULL_CHECK((frame[9].o)))->F_continuationOp);
	LINE_NUMBER(2215);
	SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int(ctx, (frame[0].o), (52), (frame[3].i));
	LINE_NUMBER(2216);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState(ctx, (frame[0].o));
	LINE_NUMBER(2217);
	INST_IINC(3, 4);
	LINE_NUMBER(2218);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int(ctx, (frame[4].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(2219);
	sp[0].o = frame[4].o;
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2));
	LINE_NUMBER(2221);
	goto label_7;
	}
label_43:;
	{
	LINE_NUMBER(2225);
	popStackFrame(ctx);
	return (jint(1));
	}
label_35:;
	{
	LINE_NUMBER(2228);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_java_lang_String_R_java_lang_RuntimeException(ctx, (((jobject) createStringLiteral(ctx, u8"invalid bytecode"_j))));
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(2236);
	if ((frame[7].i) != 0) goto label_260;
	}
	{
	LINE_NUMBER(2237);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2238);
	if ((frame[9].o) == nullptr) goto label_263;
	}
	{
	LINE_NUMBER(2239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_previous;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_backTrackStackTop = (jref) sp[1].o;
	LINE_NUMBER(2240);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_parens;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_parens = (jref) sp[1].o;
	LINE_NUMBER(2241);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp = ((jint)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_cp);
	LINE_NUMBER(2242);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_stateStackTop;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_stateStackTop = (jref) sp[1].o;
	LINE_NUMBER(2243);
	frame[5].i = ((jint)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_continuationOp);
	LINE_NUMBER(2244);
	frame[6].i = ((jint)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_continuationPc);
	LINE_NUMBER(2245);
	frame[3].i = ((jint)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_pc);
	LINE_NUMBER(2246);
	frame[8].i = ((jint)((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[9].o)))->F_op);
	LINE_NUMBER(2247);
	goto label_7;
	}
label_263:;
	{
	LINE_NUMBER(2249);
	popStackFrame(ctx);
	return (jint(0));
	}
label_260:;
	{
	LINE_NUMBER(2252);
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0));
	goto label_7;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_regexp_NativeRegExp_matchRegExp_rhino_regexp_REGlobalData_rhino_regexp_RECompiled_java_lang_String_int_int_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jbool param5) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:matchRegExp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2260);
	if (((jint)((rhino_regexp_RECompiled *) NULL_CHECK((frame[1].o)))->F_parenCount) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2261);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, ((jint)((rhino_regexp_RECompiled *) NULL_CHECK((frame[1].o)))->F_parenCount));
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_parens = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(2263);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(2266);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop = (jref) (jobject(nullptr));
	LINE_NUMBER(2267);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_stateStackTop = (jref) (jobject(nullptr));
	LINE_NUMBER(2269);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].i) != 0) goto label_6;
	}
	{
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK((frame[1].o)))->F_flags) & (jint(4))) == 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	((rhino_regexp_REGlobalData *) NULL_CHECK(sp[0].o))->F_multiline = sp[1].i;
	LINE_NUMBER(2270);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp = (jref) (frame[1].o);
	LINE_NUMBER(2272);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	frame[6].i = ((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_anchorCh);
	LINE_NUMBER(2277);
	frame[7].i = (frame[3].i);
	}
label_12:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(2283);
	if ((frame[6].i) < 0) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(2285);
	if ((frame[7].i) != (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(2286);
	popStackFrame(ctx);
	return (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(2288);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[7].i));
	frame[8].i = temp0;
	LINE_NUMBER(2289);
	if ((frame[8].i) == (frame[6].i)) goto label_15;
	}
	{
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_regexp;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(2))) == 0) goto label_20;
	}
	{
	jint temp0 = frame[8].i;
	LINE_NUMBER(2291);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, temp0);
	jint temp2 = (jint)SM_rhino_regexp_NativeRegExp_upcase_char_R_char(ctx, (jchar((frame[6].i))));
	if (temp1 != temp2) goto label_20;
	}
	LINE_NUMBER(2292);
	goto label_15;
label_20:;
	{
	LINE_NUMBER(2294);
	INST_IINC(7, 1);
	LINE_NUMBER(2295);
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(2297);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_cp = (frame[7].i);
	LINE_NUMBER(2298);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_skipped = ((frame[7].i) - (frame[3].i));
	LINE_NUMBER(2299);
	frame[8].i = (jint(0));
	}
label_26:;
	{
	if ((frame[8].i) >= ((jint)((rhino_regexp_RECompiled *) NULL_CHECK((frame[1].o)))->F_parenCount)) goto label_27;
	}
	{
	LINE_NUMBER(2300);
	sp[0].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_parens;
	ARRAY_ACCESS(jlong, sp[0].o, (frame[8].i)) = (jlong(-1ll));
	LINE_NUMBER(2299);
	INST_IINC(8, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(2302);
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_executeREBytecode_rhino_regexp_REGlobalData_java_lang_String_int_R_boolean(ctx, (frame[0].o), (frame[2].o), (frame[4].i));
	frame[8].i = temp0;
	LINE_NUMBER(2304);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_backTrackStackTop = (jref) (jobject(nullptr));
	LINE_NUMBER(2305);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_stateStackTop = (jref) (jobject(nullptr));
	LINE_NUMBER(2306);
	if ((frame[8].i) == 0) goto label_33;
	}
	{
	LINE_NUMBER(2307);
	popStackFrame(ctx);
	return (jint(1));
	}
label_33:;
	{
	LINE_NUMBER(2309);
	if ((frame[6].i) != (-2)) goto label_35;
	}
	{
	if (((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_multiline) != 0) goto label_35;
	}
	{
	LINE_NUMBER(2310);
	((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_skipped = (frame[4].i);
	LINE_NUMBER(2311);
	popStackFrame(ctx);
	return (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(2313);
	frame[7].i = ((frame[3].i) + ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[0].o)))->F_skipped));
	LINE_NUMBER(2277);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(2315);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:executeRegExp", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(2323);
	clinit_rhino_regexp_REGlobalData(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_REGlobalData);
	init_rhino_regexp_REGlobalData(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2325);
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0))));
	LINE_NUMBER(2326);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[9].i = temp0;
	LINE_NUMBER(2327);
	if ((frame[8].i) <= (frame[9].i)) goto label_4;
	}
	{
	LINE_NUMBER(2328);
	frame[8].i = (frame[9].i);
	}
label_4:;
	{
	LINE_NUMBER(2332);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	jint temp0 = (jint)SM_rhino_regexp_NativeRegExp_matchRegExp_rhino_regexp_REGlobalData_rhino_regexp_RECompiled_java_lang_String_int_int_boolean_R_boolean(ctx, sp[0].o, sp[1].o, (frame[4].o), (frame[8].i), (frame[9].i), ((jint)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_multiline));
	frame[10].i = temp0;
	LINE_NUMBER(2334);
	if ((frame[10].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(2335);
	if ((frame[6].i) == (jint(2))) goto label_9;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(2336);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2338);
	frame[11].i = ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[7].o)))->F_cp);
	LINE_NUMBER(2339);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	jint temp1 = frame[11].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	frame[12].i = temp1;
	LINE_NUMBER(2340);
	frame[13].i = ((frame[12].i) - ((frame[8].i) + ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[7].o)))->F_skipped)));
	LINE_NUMBER(2341);
	frame[11].i = ((frame[11].i) - (frame[13].i));
	LINE_NUMBER(2345);
	if ((frame[6].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(2350);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	frame[14].o = sp[0].o;
	LINE_NUMBER(2351);
	frame[15].o = (jobject(nullptr));
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(2359);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(2360);
	frame[15].o = (checkCast(ctx, &class_rhino_Scriptable, (frame[14].o)));
	LINE_NUMBER(2362);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[4].o), (frame[11].i), ((frame[11].i) + (frame[13].i)));
	frame[16].o = sp[0].o;
	LINE_NUMBER(2363);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[15].o)))(ctx, (frame[15].o), (jint(0)), (frame[15].o), (frame[16].o));
	}
label_18:;
	{
	LINE_NUMBER(2366);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if (((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_parenCount) != 0) goto label_22;
	}
	{
	LINE_NUMBER(2367);
	((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_parens = (jref) (jobject(nullptr));
	LINE_NUMBER(2368);
	sp[0].o = frame[3].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString(ctx, sp[1].o);
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_lastParen = (jref) sp[1].o;
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(2370);
	frame[16].o = (jobject(nullptr));
	LINE_NUMBER(2372);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_regexp_SubString, ((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[1].o))->F_parenCount));
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_parens = (jref) sp[1].o;
	LINE_NUMBER(2373);
	frame[17].i = (jint(0));
	}
label_28:;
	{
	jint temp0 = frame[17].i;
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if (temp0 >= ((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_parenCount)) goto label_29;
	}
	{
	LINE_NUMBER(2374);
	jint temp0 = (jint)((func_rhino_regexp_REGlobalData_parensIndex_int_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_parensIndex_int_R_int])(ctx, (frame[7].o), (frame[17].i));
	frame[18].i = temp0;
	LINE_NUMBER(2375);
	if ((frame[18].i) == (jint(-1))) goto label_32;
	}
	{
	LINE_NUMBER(2376);
	jint temp0 = (jint)((func_rhino_regexp_REGlobalData_parensLength_int_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_regexp_REGlobalData_parensLength_int_R_int])(ctx, (frame[7].o), (frame[17].i));
	frame[19].i = temp0;
	LINE_NUMBER(2377);
	clinit_rhino_regexp_SubString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString_java_lang_String_int_int(ctx, sp[0].o, (frame[4].o), (frame[18].i), (frame[19].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(2378);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_parens;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[17].i)) = (frame[16].o);
	LINE_NUMBER(2379);
	if ((frame[6].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(2380);
	sp[0].o = frame[15].o;
	jint temp0 = (frame[17].i) + (jint(1));
	sp[1].o = frame[15].o;
	sp[2].o = (jobject)((func_rhino_regexp_SubString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_rhino_regexp_SubString_toString_R_java_lang_String])(ctx, (frame[16].o));
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	}
label_37:;
	LINE_NUMBER(2381);
	goto label_39;
label_32:;
	{
	LINE_NUMBER(2382);
	if ((frame[6].i) == 0) goto label_39;
	}
	{
	LINE_NUMBER(2383);
	sp[0].o = frame[15].o;
	jint temp0 = (frame[17].i) + (jint(1));
	sp[1].o = frame[15].o;
	clinit_rhino_Undefined(ctx);
	sp[2].o = (jobject)SF_rhino_Undefined_instance;
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o, sp[2].o);
	}
label_39:;
	{
	LINE_NUMBER(2373);
	INST_IINC(17, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(2386);
	((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastParen = (jref) (frame[16].o);
	}
label_25:;
	{
	LINE_NUMBER(2389);
	if ((frame[6].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(2394);
	sp[0].o = frame[15].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"index"_j));
	sp[2].o = frame[15].o;
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((frame[8].i) + ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[7].o)))->F_skipped)));
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(2395);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[15].o)))(ctx, (frame[15].o), (((jobject) createStringLiteral(ctx, u8"input"_j))), (frame[15].o), (frame[4].o));
	}
label_41:;
	{
	LINE_NUMBER(2398);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastMatch;
	if (sp[0].o != nullptr) goto label_44;
	}
	{
	LINE_NUMBER(2399);
	sp[0].o = frame[3].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString(ctx, sp[1].o);
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_lastMatch = (jref) sp[1].o;
	LINE_NUMBER(2400);
	sp[0].o = frame[3].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString(ctx, sp[1].o);
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_leftContext = (jref) sp[1].o;
	LINE_NUMBER(2401);
	sp[0].o = frame[3].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString(ctx, sp[1].o);
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_rightContext = (jref) sp[1].o;
	}
label_44:;
	{
	LINE_NUMBER(2403);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastMatch;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_str = (jref) (frame[4].o);
	LINE_NUMBER(2404);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastMatch;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_index = (frame[11].i);
	LINE_NUMBER(2405);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastMatch;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length = (frame[13].i);
	LINE_NUMBER(2407);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_str = (jref) (frame[4].o);
	LINE_NUMBER(2408);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 != (120)) goto label_52;
	}
	{
	LINE_NUMBER(2422);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_index = (frame[8].i);
	LINE_NUMBER(2423);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length = ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[7].o)))->F_skipped);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(2430);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(2431);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length = ((frame[8].i) + ((jint)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[7].o)))->F_skipped));
	}
label_55:;
	{
	LINE_NUMBER(2434);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_rightContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_str = (jref) (frame[4].o);
	LINE_NUMBER(2435);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_rightContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_index = (frame[12].i);
	LINE_NUMBER(2436);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_rightContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length = ((frame[9].i) - (frame[12].i));
	LINE_NUMBER(2438);
	popStackFrame(ctx);
	return (frame[14].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExp_getFlags_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getFlags", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2442);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	popStackFrame(ctx);
	return ((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags);
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_reportWarning_rhino_Context_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:reportWarning", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2446);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (11));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2447);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2448);
	SM_rhino_Context_reportWarning_java_lang_String(ctx, (frame[3].o));
	}
label_1:;
	LINE_NUMBER(2450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:reportError", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2453);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage1_java_lang_String_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2454);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"SyntaxError"_j))), (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExp_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getMaxInstanceId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2470);
	popStackFrame(ctx);
	return (jint(5));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExp_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:findInstanceIdInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2479);
	frame[2].i = (jint(0));
	LINE_NUMBER(2480);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2482);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(2483);
	if ((frame[5].i) != (6)) goto label_4;
	}
	{
	LINE_NUMBER(2484);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(2485);
	if ((frame[4].i) != (103)) goto label_7;
	}
	{
	LINE_NUMBER(2486);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"global"_j)));
	LINE_NUMBER(2487);
	frame[2].i = (jint(3));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(2488);
	if ((frame[4].i) != (115)) goto label_10;
	}
	{
	LINE_NUMBER(2489);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"source"_j)));
	LINE_NUMBER(2490);
	frame[2].i = (jint(2));
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(2492);
	if ((frame[5].i) != (9)) goto label_13;
	}
	{
	LINE_NUMBER(2493);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(2494);
	if ((frame[4].i) != (108)) goto label_16;
	}
	{
	LINE_NUMBER(2495);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"lastIndex"_j)));
	LINE_NUMBER(2496);
	frame[2].i = (jint(1));
	goto label_10;
	}
label_16:;
	{
	LINE_NUMBER(2497);
	if ((frame[4].i) != (109)) goto label_10;
	}
	{
	LINE_NUMBER(2498);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"multiline"_j)));
	LINE_NUMBER(2499);
	frame[2].i = (jint(5));
	goto label_10;
	}
label_13:;
	{
	LINE_NUMBER(2501);
	if ((frame[5].i) != (10)) goto label_10;
	}
	{
	LINE_NUMBER(2502);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"ignoreCase"_j)));
	LINE_NUMBER(2503);
	frame[2].i = (jint(4));
	}
label_10:;
	{
	LINE_NUMBER(2505);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_23;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_23:;
	{
	LINE_NUMBER(2510);
	if ((frame[2].i) != 0) goto label_24;
	}
	{
	jint temp0 = (jint)M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_24:;
	{
	LINE_NUMBER(2513);
	switch((frame[2].i)) {
		case 1: goto label_25;
		case 2: goto label_26;
		case 3: goto label_26;
		case 4: goto label_26;
		case 5: goto label_26;
		default: goto label_27;
	}
	}
label_25:;
	{
	LINE_NUMBER(2515);
	frame[3].i = ((jint)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndexAttr);
	LINE_NUMBER(2516);
	goto label_29;
	}
label_26:;
	{
	LINE_NUMBER(2521);
	frame[3].i = (7);
	LINE_NUMBER(2522);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(2524);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(2526);
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, (frame[3].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getInstanceIdName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2531);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(2533);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"lastIndex"_j)));
	}
label_2:;
	{
	LINE_NUMBER(2535);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"source"_j)));
	}
label_3:;
	{
	LINE_NUMBER(2537);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"global"_j)));
	}
label_4:;
	{
	LINE_NUMBER(2539);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"ignoreCase"_j)));
	}
label_5:;
	{
	LINE_NUMBER(2541);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"multiline"_j)));
	}
label_6:;
	{
	LINE_NUMBER(2543);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:getInstanceIdValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2548);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		default: goto label_6;
	}
	}
label_1:;
	{
	LINE_NUMBER(2550);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndex;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(2552);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	sp[1].o = (jobject)((rhino_regexp_RECompiled *) NULL_CHECK(sp[1].o))->F_source;
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2554);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(1))) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(2556);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(2))) == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(2558);
	sp[0].o = (jobject)((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_re;
	if ((((jint)((rhino_regexp_RECompiled *) NULL_CHECK(sp[0].o))->F_flags) & (jint(4))) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(2560);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_regexp_NativeRegExp_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:setInstanceIdValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2565);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_2;
		case 4: goto label_2;
		case 5: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(2567);
	((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndex = (jref) (frame[2].o);
	LINE_NUMBER(2568);
	popStackFrame(ctx);
	return;
	}
label_2:;
	LINE_NUMBER(2573);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2575);
	M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(2576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_regexp_NativeRegExp_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:setInstanceIdAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2580);
	switch((frame[1].i)) {
		case 1: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(2582);
	((rhino_regexp_NativeRegExp *) NULL_CHECK((frame[0].o)))->F_lastIndexAttr = (frame[2].i);
	LINE_NUMBER(2583);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(2585);
	M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_regexp_NativeRegExp_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2592);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(2594);
	frame[3].i = (jint(2));
	LINE_NUMBER(2595);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"compile"_j)));
	LINE_NUMBER(2596);
	goto label_10;
	}
label_2:;
	{
	LINE_NUMBER(2598);
	frame[3].i = (jint(0));
	LINE_NUMBER(2599);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(2600);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(2602);
	frame[3].i = (jint(0));
	LINE_NUMBER(2603);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(2604);
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(2606);
	frame[3].i = (jint(1));
	LINE_NUMBER(2607);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"exec"_j)));
	LINE_NUMBER(2608);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(2610);
	frame[3].i = (jint(1));
	LINE_NUMBER(2611);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"test"_j)));
	LINE_NUMBER(2612);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(2614);
	frame[3].i = (jint(1));
	LINE_NUMBER(2615);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"prefix"_j)));
	LINE_NUMBER(2616);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(2618);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(2620);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[1].o = (jobject)SF_rhino_regexp_NativeRegExp_REGEXP_TAG;
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_regexp_NativeRegExp_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(2621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_NativeRegExp_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:execIdCall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2626);
	sp[0].o = frame[1].o;
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[1].o = (jobject)SF_rhino_regexp_NativeRegExp_REGEXP_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2627);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2629);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(2630);
	switch((frame[6].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_5;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_8;
		default: goto label_9;
	}
	}
label_4:;
	{
	LINE_NUMBER(2632);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(2636);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_regexp_NativeRegExp_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2639);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[5].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(2642);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[5].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(2643);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[7].o));
	if (temp0 == 0) goto label_11;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	goto label_12;
label_11:;
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
label_12:;
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(2647);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[5].o), (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(2649);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:realThis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2653);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_regexp_NativeRegExp)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2654);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2655);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_regexp_NativeRegExp, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_NativeRegExp_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2665);
	frame[2].i = (jint(0));
	LINE_NUMBER(2666);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2669);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_5;
		case 7: goto label_6;
		case 8: goto label_7;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(2671);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(2672);
	if ((frame[4].i) != (101)) goto label_9;
	}
	{
	LINE_NUMBER(2673);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"exec"_j)));
	LINE_NUMBER(2674);
	frame[2].i = (jint(4));
	goto label_4;
	}
label_9:;
	{
	LINE_NUMBER(2675);
	if ((frame[4].i) != (116)) goto label_4;
	}
	{
	LINE_NUMBER(2676);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"test"_j)));
	LINE_NUMBER(2677);
	frame[2].i = (jint(5));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2681);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"prefix"_j)));
	LINE_NUMBER(2682);
	frame[2].i = (6);
	LINE_NUMBER(2683);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(2685);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"compile"_j)));
	LINE_NUMBER(2686);
	frame[2].i = (jint(1));
	LINE_NUMBER(2687);
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(2689);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(2690);
	if ((frame[4].i) != (111)) goto label_19;
	}
	{
	LINE_NUMBER(2691);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(2692);
	frame[2].i = (jint(3));
	goto label_4;
	}
label_19:;
	{
	LINE_NUMBER(2693);
	if ((frame[4].i) != (116)) goto label_4;
	}
	{
	LINE_NUMBER(2694);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(2695);
	frame[2].i = (jint(2));
	}
label_4:;
	{
	LINE_NUMBER(2699);
	if ((frame[3].o) == nullptr) goto label_24;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_24;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_24:;
	{
	LINE_NUMBER(2702);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_regexp_NativeRegExp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_regexp_NativeRegExp_JSREG_GLOB = jint(1);
	SF_rhino_regexp_NativeRegExp_JSREG_FOLD = jint(2);
	SF_rhino_regexp_NativeRegExp_JSREG_MULTILINE = jint(4);
	SF_rhino_regexp_NativeRegExp_TEST = jint(0);
	SF_rhino_regexp_NativeRegExp_MATCH = jint(1);
	SF_rhino_regexp_NativeRegExp_PREFIX = jint(2);
	SF_rhino_regexp_NativeRegExp_debug = jint(0);
	SF_rhino_regexp_NativeRegExp_REOP_SIMPLE_START = jint(1);
	SF_rhino_regexp_NativeRegExp_REOP_EMPTY = jint(1);
	SF_rhino_regexp_NativeRegExp_REOP_BOL = jint(2);
	SF_rhino_regexp_NativeRegExp_REOP_EOL = jint(3);
	SF_rhino_regexp_NativeRegExp_REOP_WBDRY = jint(4);
	SF_rhino_regexp_NativeRegExp_REOP_WNONBDRY = jint(5);
	SF_rhino_regexp_NativeRegExp_REOP_DOT = jint(6);
	SF_rhino_regexp_NativeRegExp_REOP_DIGIT = jint(7);
	SF_rhino_regexp_NativeRegExp_REOP_NONDIGIT = jint(8);
	SF_rhino_regexp_NativeRegExp_REOP_ALNUM = jint(9);
	SF_rhino_regexp_NativeRegExp_REOP_NONALNUM = jint(10);
	SF_rhino_regexp_NativeRegExp_REOP_SPACE = jint(11);
	SF_rhino_regexp_NativeRegExp_REOP_NONSPACE = jint(12);
	SF_rhino_regexp_NativeRegExp_REOP_BACKREF = jint(13);
	SF_rhino_regexp_NativeRegExp_REOP_FLAT = jint(14);
	SF_rhino_regexp_NativeRegExp_REOP_FLAT1 = jint(15);
	SF_rhino_regexp_NativeRegExp_REOP_FLATi = jint(16);
	SF_rhino_regexp_NativeRegExp_REOP_FLAT1i = jint(17);
	SF_rhino_regexp_NativeRegExp_REOP_UCFLAT1 = jint(18);
	SF_rhino_regexp_NativeRegExp_REOP_UCFLAT1i = jint(19);
	SF_rhino_regexp_NativeRegExp_REOP_CLASS = jint(22);
	SF_rhino_regexp_NativeRegExp_REOP_NCLASS = jint(23);
	SF_rhino_regexp_NativeRegExp_REOP_SIMPLE_END = jint(23);
	SF_rhino_regexp_NativeRegExp_REOP_QUANT = jint(25);
	SF_rhino_regexp_NativeRegExp_REOP_STAR = jint(26);
	SF_rhino_regexp_NativeRegExp_REOP_PLUS = jint(27);
	SF_rhino_regexp_NativeRegExp_REOP_OPT = jint(28);
	SF_rhino_regexp_NativeRegExp_REOP_LPAREN = jint(29);
	SF_rhino_regexp_NativeRegExp_REOP_RPAREN = jint(30);
	SF_rhino_regexp_NativeRegExp_REOP_ALT = jint(31);
	SF_rhino_regexp_NativeRegExp_REOP_JUMP = jint(32);
	SF_rhino_regexp_NativeRegExp_REOP_ASSERT = jint(41);
	SF_rhino_regexp_NativeRegExp_REOP_ASSERT_NOT = jint(42);
	SF_rhino_regexp_NativeRegExp_REOP_ASSERTTEST = jint(43);
	SF_rhino_regexp_NativeRegExp_REOP_ASSERTNOTTEST = jint(44);
	SF_rhino_regexp_NativeRegExp_REOP_MINIMALSTAR = jint(45);
	SF_rhino_regexp_NativeRegExp_REOP_MINIMALPLUS = jint(46);
	SF_rhino_regexp_NativeRegExp_REOP_MINIMALOPT = jint(47);
	SF_rhino_regexp_NativeRegExp_REOP_MINIMALQUANT = jint(48);
	SF_rhino_regexp_NativeRegExp_REOP_ENDCHILD = jint(49);
	SF_rhino_regexp_NativeRegExp_REOP_REPEAT = jint(51);
	SF_rhino_regexp_NativeRegExp_REOP_MINIMALREPEAT = jint(52);
	SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQ = jint(53);
	SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQi = jint(54);
	SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQ2 = jint(55);
	SF_rhino_regexp_NativeRegExp_REOP_END = jint(57);
	SF_rhino_regexp_NativeRegExp_ANCHOR_BOL = jint(-2);
	SF_rhino_regexp_NativeRegExp_INDEX_LEN = jint(2);
	SF_rhino_regexp_NativeRegExp_Id_lastIndex = jint(1);
	SF_rhino_regexp_NativeRegExp_Id_source = jint(2);
	SF_rhino_regexp_NativeRegExp_Id_global = jint(3);
	SF_rhino_regexp_NativeRegExp_Id_ignoreCase = jint(4);
	SF_rhino_regexp_NativeRegExp_Id_multiline = jint(5);
	SF_rhino_regexp_NativeRegExp_MAX_INSTANCE_ID = jint(5);
	SF_rhino_regexp_NativeRegExp_Id_compile = jint(1);
	SF_rhino_regexp_NativeRegExp_Id_toString = jint(2);
	SF_rhino_regexp_NativeRegExp_Id_toSource = jint(3);
	SF_rhino_regexp_NativeRegExp_Id_exec = jint(4);
	SF_rhino_regexp_NativeRegExp_Id_test = jint(5);
	SF_rhino_regexp_NativeRegExp_Id_prefix = jint(6);
	SF_rhino_regexp_NativeRegExp_MAX_PROTOTYPE_ID = jint(6);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/NativeRegExp:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_NativeRegExp(ctx);
	{
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_regexp_NativeRegExp)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_regexp_NativeRegExp)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_rhino_regexp_NativeRegExp(ctx);
	SF_rhino_regexp_NativeRegExp_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(20);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_rhino_regexp_NativeRegExp(ctx);
	SF_rhino_regexp_NativeRegExp_REGEXP_TAG = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_NativeRegExp[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_regexp_NativeRegExp_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_regexp_NativeRegExp_getClassName_R_java_lang_String,
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
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_regexp_NativeRegExp_getTypeOf_R_java_lang_String,
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
	(void *) M_rhino_regexp_NativeRegExp_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExp_getMaxInstanceId_R_int,
	(void *) M_rhino_regexp_NativeRegExp_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_regexp_NativeRegExp_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_regexp_NativeRegExp_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExp_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExp_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_regexp_NativeRegExp_initPrototypeId_int,
	(void *) M_rhino_regexp_NativeRegExp_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_regexp_NativeRegExp_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExp_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object,
	(void *) M_rhino_regexp_NativeRegExp_getFlags_R_int,
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
	{ "compile", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "execSub", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;I)Ljava/lang/Object;" },
	{ "executeRegExp", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/regexp/RegExpImpl;Ljava/lang/String;[II)Ljava/lang/Object;" },
	{ "getFlags", "()I" },
};

static jclass interfaces[] { &class_rhino_Function, };

static FieldMetadata fields[] {
	{ "REGEXP_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_regexp_NativeRegExp_REGEXP_TAG, "Ljava/lang/Object;", 26 },
	{ "JSREG_GLOB", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_JSREG_GLOB, "I", 25 },
	{ "JSREG_FOLD", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_JSREG_FOLD, "I", 25 },
	{ "JSREG_MULTILINE", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_JSREG_MULTILINE, "I", 25 },
	{ "TEST", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_TEST, "I", 25 },
	{ "MATCH", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_MATCH, "I", 25 },
	{ "PREFIX", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_PREFIX, "I", 25 },
	{ "debug", &class_boolean, (intptr_t) &SF_rhino_regexp_NativeRegExp_debug, "Z", 26 },
	{ "REOP_SIMPLE_START", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_SIMPLE_START, "B", 26 },
	{ "REOP_EMPTY", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_EMPTY, "B", 26 },
	{ "REOP_BOL", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_BOL, "B", 26 },
	{ "REOP_EOL", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_EOL, "B", 26 },
	{ "REOP_WBDRY", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_WBDRY, "B", 26 },
	{ "REOP_WNONBDRY", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_WNONBDRY, "B", 26 },
	{ "REOP_DOT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_DOT, "B", 26 },
	{ "REOP_DIGIT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_DIGIT, "B", 26 },
	{ "REOP_NONDIGIT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_NONDIGIT, "B", 26 },
	{ "REOP_ALNUM", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ALNUM, "B", 26 },
	{ "REOP_NONALNUM", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_NONALNUM, "B", 26 },
	{ "REOP_SPACE", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_SPACE, "B", 26 },
	{ "REOP_NONSPACE", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_NONSPACE, "B", 26 },
	{ "REOP_BACKREF", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_BACKREF, "B", 26 },
	{ "REOP_FLAT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_FLAT, "B", 26 },
	{ "REOP_FLAT1", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_FLAT1, "B", 26 },
	{ "REOP_FLATi", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_FLATi, "B", 26 },
	{ "REOP_FLAT1i", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_FLAT1i, "B", 26 },
	{ "REOP_UCFLAT1", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_UCFLAT1, "B", 26 },
	{ "REOP_UCFLAT1i", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_UCFLAT1i, "B", 26 },
	{ "REOP_CLASS", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_CLASS, "B", 26 },
	{ "REOP_NCLASS", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_NCLASS, "B", 26 },
	{ "REOP_SIMPLE_END", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_SIMPLE_END, "B", 26 },
	{ "REOP_QUANT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_QUANT, "B", 26 },
	{ "REOP_STAR", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_STAR, "B", 26 },
	{ "REOP_PLUS", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_PLUS, "B", 26 },
	{ "REOP_OPT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_OPT, "B", 26 },
	{ "REOP_LPAREN", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_LPAREN, "B", 26 },
	{ "REOP_RPAREN", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_RPAREN, "B", 26 },
	{ "REOP_ALT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ALT, "B", 26 },
	{ "REOP_JUMP", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_JUMP, "B", 26 },
	{ "REOP_ASSERT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ASSERT, "B", 26 },
	{ "REOP_ASSERT_NOT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ASSERT_NOT, "B", 26 },
	{ "REOP_ASSERTTEST", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ASSERTTEST, "B", 26 },
	{ "REOP_ASSERTNOTTEST", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ASSERTNOTTEST, "B", 26 },
	{ "REOP_MINIMALSTAR", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_MINIMALSTAR, "B", 26 },
	{ "REOP_MINIMALPLUS", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_MINIMALPLUS, "B", 26 },
	{ "REOP_MINIMALOPT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_MINIMALOPT, "B", 26 },
	{ "REOP_MINIMALQUANT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_MINIMALQUANT, "B", 26 },
	{ "REOP_ENDCHILD", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ENDCHILD, "B", 26 },
	{ "REOP_REPEAT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_REPEAT, "B", 26 },
	{ "REOP_MINIMALREPEAT", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_MINIMALREPEAT, "B", 26 },
	{ "REOP_ALTPREREQ", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQ, "B", 26 },
	{ "REOP_ALTPREREQi", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQi, "B", 26 },
	{ "REOP_ALTPREREQ2", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_ALTPREREQ2, "B", 26 },
	{ "REOP_END", &class_byte, (intptr_t) &SF_rhino_regexp_NativeRegExp_REOP_END, "B", 26 },
	{ "ANCHOR_BOL", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_ANCHOR_BOL, "I", 26 },
	{ "INDEX_LEN", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_INDEX_LEN, "I", 26 },
	{ "Id_lastIndex", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_lastIndex, "I", 26 },
	{ "Id_source", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_source, "I", 26 },
	{ "Id_global", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_global, "I", 26 },
	{ "Id_ignoreCase", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_ignoreCase, "I", 26 },
	{ "Id_multiline", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_multiline, "I", 26 },
	{ "MAX_INSTANCE_ID", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_MAX_INSTANCE_ID, "I", 26 },
	{ "Id_compile", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_compile, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_toString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_toSource, "I", 26 },
	{ "Id_exec", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_exec, "I", 26 },
	{ "Id_test", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_test, "I", 26 },
	{ "Id_prefix", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_Id_prefix, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_regexp_NativeRegExp_MAX_PROTOTYPE_ID, "I", 26 },
	{ "re", &class_rhino_regexp_RECompiled, offsetof(rhino_regexp_NativeRegExp, F_re), "Lrhino/regexp/RECompiled;", 2 },
	{ "lastIndex", &class_java_lang_Object, offsetof(rhino_regexp_NativeRegExp, F_lastIndex), "Ljava/lang/Object;", 0 },
	{ "lastIndexAttr", &class_int, offsetof(rhino_regexp_NativeRegExp, F_lastIndexAttr), "I", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_regexp_NativeRegExp_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_regexp_NativeRegExp_init_rhino_Context_rhino_Scriptable_boolean, 0, "(Lrhino/Context;Lrhino/Scriptable;Z)V", 9 },
	{ "<init>", (intptr_t) init_rhino_regexp_NativeRegExp_rhino_Scriptable_rhino_regexp_RECompiled, 0, "(Lrhino/Scriptable;Lrhino/regexp/RECompiled;)V", 0 },
	{ "getClassName", (intptr_t) M_rhino_regexp_NativeRegExp_getClassName_R_java_lang_String, VTABLE_rhino_regexp_NativeRegExp_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getTypeOf", (intptr_t) M_rhino_regexp_NativeRegExp_getTypeOf_R_java_lang_String, VTABLE_rhino_regexp_NativeRegExp_getTypeOf_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "call", (intptr_t) M_rhino_regexp_NativeRegExp_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExp_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "construct", (intptr_t) M_rhino_regexp_NativeRegExp_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_regexp_NativeRegExp_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "compile", (intptr_t) M_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_regexp_NativeRegExp_compile_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;", 0 },
	{ "toString", (intptr_t) M_rhino_regexp_NativeRegExp_toString_R_java_lang_String, VTABLE_rhino_regexp_NativeRegExp_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<init>", (intptr_t) init_rhino_regexp_NativeRegExp, 0, "()V", 0 },
	{ "getImpl", (intptr_t) SM_rhino_regexp_NativeRegExp_getImpl_rhino_Context_R_rhino_regexp_RegExpImpl, 0, "(Lrhino/Context;)Lrhino/regexp/RegExpImpl;", 10 },
	{ "escapeRegExp", (intptr_t) SM_rhino_regexp_NativeRegExp_escapeRegExp_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "execSub", (intptr_t) M_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExp_execSub_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;I)Ljava/lang/Object;", 2 },
	{ "compileRE", (intptr_t) SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled, 0, "(Lrhino/Context;Ljava/lang/String;Ljava/lang/String;Z)Lrhino/regexp/RECompiled;", 8 },
	{ "isDigit", (intptr_t) SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean, 0, "(C)Z", 8 },
	{ "isWord", (intptr_t) SM_rhino_regexp_NativeRegExp_isWord_char_R_boolean, 0, "(C)Z", 10 },
	{ "isControlLetter", (intptr_t) SM_rhino_regexp_NativeRegExp_isControlLetter_char_R_boolean, 0, "(C)Z", 10 },
	{ "isLineTerm", (intptr_t) SM_rhino_regexp_NativeRegExp_isLineTerm_char_R_boolean, 0, "(C)Z", 10 },
	{ "isREWhiteSpace", (intptr_t) SM_rhino_regexp_NativeRegExp_isREWhiteSpace_int_R_boolean, 0, "(I)Z", 10 },
	{ "upcase", (intptr_t) SM_rhino_regexp_NativeRegExp_upcase_char_R_char, 0, "(C)C", 10 },
	{ "downcase", (intptr_t) SM_rhino_regexp_NativeRegExp_downcase_char_R_char, 0, "(C)C", 10 },
	{ "toASCIIHexDigit", (intptr_t) SM_rhino_regexp_NativeRegExp_toASCIIHexDigit_int_R_int, 0, "(I)I", 10 },
	{ "parseDisjunction", (intptr_t) SM_rhino_regexp_NativeRegExp_parseDisjunction_rhino_regexp_CompilerState_R_boolean, 0, "(Lrhino/regexp/CompilerState;)Z", 10 },
	{ "parseAlternative", (intptr_t) SM_rhino_regexp_NativeRegExp_parseAlternative_rhino_regexp_CompilerState_R_boolean, 0, "(Lrhino/regexp/CompilerState;)Z", 10 },
	{ "calculateBitmapSize", (intptr_t) SM_rhino_regexp_NativeRegExp_calculateBitmapSize_rhino_regexp_CompilerState_rhino_regexp_RENode_Array1_char_int_int_R_boolean, 0, "(Lrhino/regexp/CompilerState;Lrhino/regexp/RENode;[CII)Z", 10 },
	{ "doFlat", (intptr_t) SM_rhino_regexp_NativeRegExp_doFlat_rhino_regexp_CompilerState_char, 0, "(Lrhino/regexp/CompilerState;C)V", 10 },
	{ "getDecimalValue", (intptr_t) SM_rhino_regexp_NativeRegExp_getDecimalValue_char_rhino_regexp_CompilerState_int_java_lang_String_R_int, 0, "(CLrhino/regexp/CompilerState;ILjava/lang/String;)I", 10 },
	{ "parseTerm", (intptr_t) SM_rhino_regexp_NativeRegExp_parseTerm_rhino_regexp_CompilerState_R_boolean, 0, "(Lrhino/regexp/CompilerState;)Z", 10 },
	{ "resolveForwardJump", (intptr_t) SM_rhino_regexp_NativeRegExp_resolveForwardJump_Array1_byte_int_int, 0, "([BII)V", 10 },
	{ "getOffset", (intptr_t) SM_rhino_regexp_NativeRegExp_getOffset_Array1_byte_int_R_int, 0, "([BI)I", 10 },
	{ "addIndex", (intptr_t) SM_rhino_regexp_NativeRegExp_addIndex_Array1_byte_int_int_R_int, 0, "([BII)I", 10 },
	{ "getIndex", (intptr_t) SM_rhino_regexp_NativeRegExp_getIndex_Array1_byte_int_R_int, 0, "([BI)I", 10 },
	{ "emitREBytecode", (intptr_t) SM_rhino_regexp_NativeRegExp_emitREBytecode_rhino_regexp_CompilerState_rhino_regexp_RECompiled_int_rhino_regexp_RENode_R_int, 0, "(Lrhino/regexp/CompilerState;Lrhino/regexp/RECompiled;ILrhino/regexp/RENode;)I", 10 },
	{ "pushProgState", (intptr_t) SM_rhino_regexp_NativeRegExp_pushProgState_rhino_regexp_REGlobalData_int_int_int_rhino_regexp_REBackTrackData_int_int, 0, "(Lrhino/regexp/REGlobalData;IIILrhino/regexp/REBackTrackData;II)V", 10 },
	{ "popProgState", (intptr_t) SM_rhino_regexp_NativeRegExp_popProgState_rhino_regexp_REGlobalData_R_rhino_regexp_REProgState, 0, "(Lrhino/regexp/REGlobalData;)Lrhino/regexp/REProgState;", 10 },
	{ "pushBackTrackState", (intptr_t) SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int, 0, "(Lrhino/regexp/REGlobalData;BI)V", 10 },
	{ "pushBackTrackState", (intptr_t) SM_rhino_regexp_NativeRegExp_pushBackTrackState_rhino_regexp_REGlobalData_byte_int_int_int_int, 0, "(Lrhino/regexp/REGlobalData;BIIII)V", 10 },
	{ "flatNMatcher", (intptr_t) SM_rhino_regexp_NativeRegExp_flatNMatcher_rhino_regexp_REGlobalData_int_int_java_lang_String_int_R_boolean, 0, "(Lrhino/regexp/REGlobalData;IILjava/lang/String;I)Z", 10 },
	{ "flatNIMatcher", (intptr_t) SM_rhino_regexp_NativeRegExp_flatNIMatcher_rhino_regexp_REGlobalData_int_int_java_lang_String_int_R_boolean, 0, "(Lrhino/regexp/REGlobalData;IILjava/lang/String;I)Z", 10 },
	{ "backrefMatcher", (intptr_t) SM_rhino_regexp_NativeRegExp_backrefMatcher_rhino_regexp_REGlobalData_int_java_lang_String_int_R_boolean, 0, "(Lrhino/regexp/REGlobalData;ILjava/lang/String;I)Z", 10 },
	{ "addCharacterToCharSet", (intptr_t) SM_rhino_regexp_NativeRegExp_addCharacterToCharSet_rhino_regexp_RECharSet_char, 0, "(Lrhino/regexp/RECharSet;C)V", 10 },
	{ "addCharacterRangeToCharSet", (intptr_t) SM_rhino_regexp_NativeRegExp_addCharacterRangeToCharSet_rhino_regexp_RECharSet_char_char, 0, "(Lrhino/regexp/RECharSet;CC)V", 10 },
	{ "processCharSet", (intptr_t) SM_rhino_regexp_NativeRegExp_processCharSet_rhino_regexp_REGlobalData_rhino_regexp_RECharSet, 0, "(Lrhino/regexp/REGlobalData;Lrhino/regexp/RECharSet;)V", 10 },
	{ "processCharSetImpl", (intptr_t) SM_rhino_regexp_NativeRegExp_processCharSetImpl_rhino_regexp_REGlobalData_rhino_regexp_RECharSet, 0, "(Lrhino/regexp/REGlobalData;Lrhino/regexp/RECharSet;)V", 10 },
	{ "classMatcher", (intptr_t) SM_rhino_regexp_NativeRegExp_classMatcher_rhino_regexp_REGlobalData_rhino_regexp_RECharSet_char_R_boolean, 0, "(Lrhino/regexp/REGlobalData;Lrhino/regexp/RECharSet;C)Z", 10 },
	{ "reopIsSimple", (intptr_t) SM_rhino_regexp_NativeRegExp_reopIsSimple_int_R_boolean, 0, "(I)Z", 10 },
	{ "simpleMatch", (intptr_t) SM_rhino_regexp_NativeRegExp_simpleMatch_rhino_regexp_REGlobalData_java_lang_String_int_Array1_byte_int_int_boolean_R_int, 0, "(Lrhino/regexp/REGlobalData;Ljava/lang/String;I[BIIZ)I", 10 },
	{ "executeREBytecode", (intptr_t) SM_rhino_regexp_NativeRegExp_executeREBytecode_rhino_regexp_REGlobalData_java_lang_String_int_R_boolean, 0, "(Lrhino/regexp/REGlobalData;Ljava/lang/String;I)Z", 10 },
	{ "matchRegExp", (intptr_t) SM_rhino_regexp_NativeRegExp_matchRegExp_rhino_regexp_REGlobalData_rhino_regexp_RECompiled_java_lang_String_int_int_boolean_R_boolean, 0, "(Lrhino/regexp/REGlobalData;Lrhino/regexp/RECompiled;Ljava/lang/String;IIZ)Z", 10 },
	{ "executeRegExp", (intptr_t) M_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/regexp/RegExpImpl;Ljava/lang/String;[II)Ljava/lang/Object;", 0 },
	{ "getFlags", (intptr_t) M_rhino_regexp_NativeRegExp_getFlags_R_int, VTABLE_rhino_regexp_NativeRegExp_getFlags_R_int, "()I", 0 },
	{ "reportWarning", (intptr_t) SM_rhino_regexp_NativeRegExp_reportWarning_rhino_Context_java_lang_String_java_lang_String, 0, "(Lrhino/Context;Ljava/lang/String;Ljava/lang/String;)V", 10 },
	{ "reportError", (intptr_t) SM_rhino_regexp_NativeRegExp_reportError_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 10 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_regexp_NativeRegExp_getMaxInstanceId_R_int, VTABLE_rhino_regexp_NativeRegExp_getMaxInstanceId_R_int, "()I", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_regexp_NativeRegExp_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_regexp_NativeRegExp_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_regexp_NativeRegExp_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_regexp_NativeRegExp_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_regexp_NativeRegExp_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExp_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_regexp_NativeRegExp_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_regexp_NativeRegExp_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
	{ "setInstanceIdAttributes", (intptr_t) M_rhino_regexp_NativeRegExp_setInstanceIdAttributes_int_int, VTABLE_rhino_regexp_NativeRegExp_setInstanceIdAttributes_int_int, "(II)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_regexp_NativeRegExp_initPrototypeId_int, VTABLE_rhino_regexp_NativeRegExp_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_regexp_NativeRegExp_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_regexp_NativeRegExp_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "realThis", (intptr_t) SM_rhino_regexp_NativeRegExp_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_regexp_NativeRegExp, 0, "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/regexp/NativeRegExp;", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_regexp_NativeRegExp_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_regexp_NativeRegExp_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_regexp_NativeRegExp, 0, "()V", 8 },
};

Class class_rhino_regexp_NativeRegExp{
		.nativeName = (intptr_t) "rhino/regexp/NativeRegExp",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_regexp_NativeRegExp),
		.classVtable = (intptr_t) vtable_rhino_regexp_NativeRegExp,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_NativeRegExp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_NativeRegExp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 73,
		.nativeFields = (intptr_t) fields,
		.methodCount = 63,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 119,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_NativeRegExp = registerClass(&class_rhino_regexp_NativeRegExp);

}
