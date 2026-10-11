#include "rhino/NativeString.h"
#include "rhino/regexp/NativeRegExp.h"
#include "java/lang/Integer.h"
#include "rhino/Symbol.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ScriptRuntimeES6.h"
#include "java/lang/Boolean.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "java/text/Normalizer_Form.h"
#include "rhino/NativeStringIterator.h"
#include "rhino/Undefined.h"
#include "rhino/ScriptRuntime_StringIdOrIndex.h"
#include "java/text/Normalizer.h"
#include "java/lang/String.h"
#include "rhino/SymbolKey.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/text/Collator.h"
#include "java/util/Locale.h"
#include "rhino/NativeObject.h"
#include "java/lang/Number.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/NativeString.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/Enum.h"
#include "java/lang/CharSequence.h"
#include "rhino/RegExpProxy.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_rhino_NativeString_STRING_TAG;
jint SF_rhino_NativeString_Id_length;
jint SF_rhino_NativeString_MAX_INSTANCE_ID;
jint SF_rhino_NativeString_ConstructorId_fromCharCode;
jint SF_rhino_NativeString_Id_constructor;
jint SF_rhino_NativeString_Id_toString;
jint SF_rhino_NativeString_Id_toSource;
jint SF_rhino_NativeString_Id_valueOf;
jint SF_rhino_NativeString_Id_charAt;
jint SF_rhino_NativeString_Id_charCodeAt;
jint SF_rhino_NativeString_Id_indexOf;
jint SF_rhino_NativeString_Id_lastIndexOf;
jint SF_rhino_NativeString_Id_split;
jint SF_rhino_NativeString_Id_substring;
jint SF_rhino_NativeString_Id_toLowerCase;
jint SF_rhino_NativeString_Id_toUpperCase;
jint SF_rhino_NativeString_Id_substr;
jint SF_rhino_NativeString_Id_concat;
jint SF_rhino_NativeString_Id_slice;
jint SF_rhino_NativeString_Id_bold;
jint SF_rhino_NativeString_Id_italics;
jint SF_rhino_NativeString_Id_fixed;
jint SF_rhino_NativeString_Id_strike;
jint SF_rhino_NativeString_Id_small;
jint SF_rhino_NativeString_Id_big;
jint SF_rhino_NativeString_Id_blink;
jint SF_rhino_NativeString_Id_sup;
jint SF_rhino_NativeString_Id_sub;
jint SF_rhino_NativeString_Id_fontsize;
jint SF_rhino_NativeString_Id_fontcolor;
jint SF_rhino_NativeString_Id_link;
jint SF_rhino_NativeString_Id_anchor;
jint SF_rhino_NativeString_Id_equals;
jint SF_rhino_NativeString_Id_equalsIgnoreCase;
jint SF_rhino_NativeString_Id_match;
jint SF_rhino_NativeString_Id_search;
jint SF_rhino_NativeString_Id_replace;
jint SF_rhino_NativeString_Id_localeCompare;
jint SF_rhino_NativeString_Id_toLocaleLowerCase;
jint SF_rhino_NativeString_Id_toLocaleUpperCase;
jint SF_rhino_NativeString_Id_trim;
jint SF_rhino_NativeString_Id_trimLeft;
jint SF_rhino_NativeString_Id_trimRight;
jint SF_rhino_NativeString_Id_includes;
jint SF_rhino_NativeString_Id_startsWith;
jint SF_rhino_NativeString_Id_endsWith;
jint SF_rhino_NativeString_Id_normalize;
jint SF_rhino_NativeString_Id_repeat;
jint SF_rhino_NativeString_Id_codePointAt;
jint SF_rhino_NativeString_Id_padStart;
jint SF_rhino_NativeString_Id_padEnd;
jint SF_rhino_NativeString_SymbolId_iterator;
jint SF_rhino_NativeString_MAX_PROTOTYPE_ID;
jint SF_rhino_NativeString_ConstructorId_charAt;
jint SF_rhino_NativeString_ConstructorId_charCodeAt;
jint SF_rhino_NativeString_ConstructorId_indexOf;
jint SF_rhino_NativeString_ConstructorId_lastIndexOf;
jint SF_rhino_NativeString_ConstructorId_split;
jint SF_rhino_NativeString_ConstructorId_substring;
jint SF_rhino_NativeString_ConstructorId_toLowerCase;
jint SF_rhino_NativeString_ConstructorId_toUpperCase;
jint SF_rhino_NativeString_ConstructorId_substr;
jint SF_rhino_NativeString_ConstructorId_concat;
jint SF_rhino_NativeString_ConstructorId_slice;
jint SF_rhino_NativeString_ConstructorId_equalsIgnoreCase;
jint SF_rhino_NativeString_ConstructorId_match;
jint SF_rhino_NativeString_ConstructorId_search;
jint SF_rhino_NativeString_ConstructorId_replace;
jint SF_rhino_NativeString_ConstructorId_localeCompare;
jint SF_rhino_NativeString_ConstructorId_toLocaleLowerCase;

void mark_rhino_NativeString(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeString_STRING_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeString_STRING_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeString_STRING_TAG, mark, depth + 1);
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
	auto self = (rhino_NativeString *) object;
	if (self->F_string)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_string)->clazz)->markFunction)((jobject) self->F_string, mark, depth + 1);
}

void SM_rhino_NativeString_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(27);
	clinit_rhino_NativeString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeString);
	init_rhino_NativeString_java_lang_CharSequence(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_rhino_NativeString_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeString_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (48), (frame[0].o), (frame[1].i));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeString_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string = (jref) (frame[1].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"String"_j)));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeString_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getMaxInstanceId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeString_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:findInstanceIdInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, (7), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(54);
	jint temp0 = (jint)M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getInstanceIdName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(59);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"length"_j)));
	}
label_1:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getInstanceIdValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	if ((frame[1].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeString_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:fillConstructorProperties", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)), (((jobject) createStringLiteral(ctx, u8"fromCharCode"_j))), (jint(1)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-5), (((jobject) createStringLiteral(ctx, u8"charAt"_j))), (jint(2)));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-6), (((jobject) createStringLiteral(ctx, u8"charCodeAt"_j))), (jint(2)));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-7), (((jobject) createStringLiteral(ctx, u8"indexOf"_j))), (jint(2)));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-8), (((jobject) createStringLiteral(ctx, u8"lastIndexOf"_j))), (jint(2)));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-9), (((jobject) createStringLiteral(ctx, u8"split"_j))), (jint(3)));
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-10), (((jobject) createStringLiteral(ctx, u8"substring"_j))), (jint(3)));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-11), (((jobject) createStringLiteral(ctx, u8"toLowerCase"_j))), (jint(1)));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-12), (((jobject) createStringLiteral(ctx, u8"toUpperCase"_j))), (jint(1)));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-13), (((jobject) createStringLiteral(ctx, u8"substr"_j))), (jint(3)));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-14), (((jobject) createStringLiteral(ctx, u8"concat"_j))), (jint(2)));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-15), (((jobject) createStringLiteral(ctx, u8"slice"_j))), (jint(3)));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-30), (((jobject) createStringLiteral(ctx, u8"equalsIgnoreCase"_j))), (jint(2)));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-31), (((jobject) createStringLiteral(ctx, u8"match"_j))), (jint(2)));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-32), (((jobject) createStringLiteral(ctx, u8"search"_j))), (jint(2)));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-33), (((jobject) createStringLiteral(ctx, u8"replace"_j))), (jint(2)));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-34), (((jobject) createStringLiteral(ctx, u8"localeCompare"_j))), (jint(2)));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[2].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	((func_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-35), (((jobject) createStringLiteral(ctx, u8"toLocaleLowerCase"_j))), (jint(1)));
	LINE_NUMBER(111);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeString_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:initPrototypeId", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(116);
	if ((frame[1].i) != (48)) goto label_1;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeString(ctx);
	sp[1].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	jint temp0 = frame[1].i;
	clinit_rhino_SymbolKey(ctx);
	sp[2].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	sp[0].o = (jobject)((func_rhino_NativeString_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (((jobject) createStringLiteral(ctx, u8"[Symbol.iterator]"_j))), (jint(0)));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(121);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(123);
	switch((frame[1].i)) {
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		case 11: goto label_15;
		case 12: goto label_16;
		case 13: goto label_17;
		case 14: goto label_18;
		case 15: goto label_19;
		case 16: goto label_20;
		case 17: goto label_21;
		case 18: goto label_22;
		case 19: goto label_23;
		case 20: goto label_24;
		case 21: goto label_25;
		case 22: goto label_26;
		case 23: goto label_27;
		case 24: goto label_28;
		case 25: goto label_29;
		case 26: goto label_30;
		case 27: goto label_31;
		case 28: goto label_32;
		case 29: goto label_33;
		case 30: goto label_34;
		case 31: goto label_35;
		case 32: goto label_36;
		case 33: goto label_37;
		case 34: goto label_38;
		case 35: goto label_39;
		case 36: goto label_40;
		case 37: goto label_41;
		case 38: goto label_42;
		case 39: goto label_43;
		case 40: goto label_44;
		case 41: goto label_45;
		case 42: goto label_46;
		case 43: goto label_47;
		case 44: goto label_48;
		case 45: goto label_49;
		case 46: goto label_50;
		case 47: goto label_51;
		default: goto label_52;
	}
	}
label_5:;
	{
	LINE_NUMBER(125);
	frame[4].i = (jint(1));
	LINE_NUMBER(126);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(127);
	goto label_55;
	}
label_6:;
	{
	LINE_NUMBER(129);
	frame[4].i = (jint(0));
	LINE_NUMBER(130);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(131);
	goto label_55;
	}
label_7:;
	{
	LINE_NUMBER(133);
	frame[4].i = (jint(0));
	LINE_NUMBER(134);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(135);
	goto label_55;
	}
label_8:;
	{
	LINE_NUMBER(137);
	frame[4].i = (jint(0));
	LINE_NUMBER(138);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(139);
	goto label_55;
	}
label_9:;
	{
	LINE_NUMBER(141);
	frame[4].i = (jint(1));
	LINE_NUMBER(142);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"charAt"_j)));
	LINE_NUMBER(143);
	goto label_55;
	}
label_10:;
	{
	LINE_NUMBER(145);
	frame[4].i = (jint(1));
	LINE_NUMBER(146);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"charCodeAt"_j)));
	LINE_NUMBER(147);
	goto label_55;
	}
label_11:;
	{
	LINE_NUMBER(149);
	frame[4].i = (jint(1));
	LINE_NUMBER(150);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"indexOf"_j)));
	LINE_NUMBER(151);
	goto label_55;
	}
label_12:;
	{
	LINE_NUMBER(153);
	frame[4].i = (jint(1));
	LINE_NUMBER(154);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"lastIndexOf"_j)));
	LINE_NUMBER(155);
	goto label_55;
	}
label_13:;
	{
	LINE_NUMBER(157);
	frame[4].i = (jint(2));
	LINE_NUMBER(158);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"split"_j)));
	LINE_NUMBER(159);
	goto label_55;
	}
label_14:;
	{
	LINE_NUMBER(161);
	frame[4].i = (jint(2));
	LINE_NUMBER(162);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"substring"_j)));
	LINE_NUMBER(163);
	goto label_55;
	}
label_15:;
	{
	LINE_NUMBER(165);
	frame[4].i = (jint(0));
	LINE_NUMBER(166);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLowerCase"_j)));
	LINE_NUMBER(167);
	goto label_55;
	}
label_16:;
	{
	LINE_NUMBER(169);
	frame[4].i = (jint(0));
	LINE_NUMBER(170);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toUpperCase"_j)));
	LINE_NUMBER(171);
	goto label_55;
	}
label_17:;
	{
	LINE_NUMBER(173);
	frame[4].i = (jint(2));
	LINE_NUMBER(174);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"substr"_j)));
	LINE_NUMBER(175);
	goto label_55;
	}
label_18:;
	{
	LINE_NUMBER(177);
	frame[4].i = (jint(1));
	LINE_NUMBER(178);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"concat"_j)));
	LINE_NUMBER(179);
	goto label_55;
	}
label_19:;
	{
	LINE_NUMBER(181);
	frame[4].i = (jint(2));
	LINE_NUMBER(182);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"slice"_j)));
	LINE_NUMBER(183);
	goto label_55;
	}
label_20:;
	{
	LINE_NUMBER(185);
	frame[4].i = (jint(0));
	LINE_NUMBER(186);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"bold"_j)));
	LINE_NUMBER(187);
	goto label_55;
	}
label_21:;
	{
	LINE_NUMBER(189);
	frame[4].i = (jint(0));
	LINE_NUMBER(190);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"italics"_j)));
	LINE_NUMBER(191);
	goto label_55;
	}
label_22:;
	{
	LINE_NUMBER(193);
	frame[4].i = (jint(0));
	LINE_NUMBER(194);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"fixed"_j)));
	LINE_NUMBER(195);
	goto label_55;
	}
label_23:;
	{
	LINE_NUMBER(197);
	frame[4].i = (jint(0));
	LINE_NUMBER(198);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"strike"_j)));
	LINE_NUMBER(199);
	goto label_55;
	}
label_24:;
	{
	LINE_NUMBER(201);
	frame[4].i = (jint(0));
	LINE_NUMBER(202);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"small"_j)));
	LINE_NUMBER(203);
	goto label_55;
	}
label_25:;
	{
	LINE_NUMBER(205);
	frame[4].i = (jint(0));
	LINE_NUMBER(206);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"big"_j)));
	LINE_NUMBER(207);
	goto label_55;
	}
label_26:;
	{
	LINE_NUMBER(209);
	frame[4].i = (jint(0));
	LINE_NUMBER(210);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"blink"_j)));
	LINE_NUMBER(211);
	goto label_55;
	}
label_27:;
	{
	LINE_NUMBER(213);
	frame[4].i = (jint(0));
	LINE_NUMBER(214);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sup"_j)));
	LINE_NUMBER(215);
	goto label_55;
	}
label_28:;
	{
	LINE_NUMBER(217);
	frame[4].i = (jint(0));
	LINE_NUMBER(218);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"sub"_j)));
	LINE_NUMBER(219);
	goto label_55;
	}
label_29:;
	{
	LINE_NUMBER(221);
	frame[4].i = (jint(0));
	LINE_NUMBER(222);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"fontsize"_j)));
	LINE_NUMBER(223);
	goto label_55;
	}
label_30:;
	{
	LINE_NUMBER(225);
	frame[4].i = (jint(0));
	LINE_NUMBER(226);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"fontcolor"_j)));
	LINE_NUMBER(227);
	goto label_55;
	}
label_31:;
	{
	LINE_NUMBER(229);
	frame[4].i = (jint(0));
	LINE_NUMBER(230);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"link"_j)));
	LINE_NUMBER(231);
	goto label_55;
	}
label_32:;
	{
	LINE_NUMBER(233);
	frame[4].i = (jint(0));
	LINE_NUMBER(234);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"anchor"_j)));
	LINE_NUMBER(235);
	goto label_55;
	}
label_33:;
	{
	LINE_NUMBER(237);
	frame[4].i = (jint(1));
	LINE_NUMBER(238);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"equals"_j)));
	LINE_NUMBER(239);
	goto label_55;
	}
label_34:;
	{
	LINE_NUMBER(241);
	frame[4].i = (jint(1));
	LINE_NUMBER(242);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"equalsIgnoreCase"_j)));
	LINE_NUMBER(243);
	goto label_55;
	}
label_35:;
	{
	LINE_NUMBER(245);
	frame[4].i = (jint(1));
	LINE_NUMBER(246);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"match"_j)));
	LINE_NUMBER(247);
	goto label_55;
	}
label_36:;
	{
	LINE_NUMBER(249);
	frame[4].i = (jint(1));
	LINE_NUMBER(250);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"search"_j)));
	LINE_NUMBER(251);
	goto label_55;
	}
label_37:;
	{
	LINE_NUMBER(253);
	frame[4].i = (jint(2));
	LINE_NUMBER(254);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"replace"_j)));
	LINE_NUMBER(255);
	goto label_55;
	}
label_38:;
	{
	LINE_NUMBER(257);
	frame[4].i = (jint(1));
	LINE_NUMBER(258);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"localeCompare"_j)));
	LINE_NUMBER(259);
	goto label_55;
	}
label_39:;
	{
	LINE_NUMBER(261);
	frame[4].i = (jint(0));
	LINE_NUMBER(262);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleLowerCase"_j)));
	LINE_NUMBER(263);
	goto label_55;
	}
label_40:;
	{
	LINE_NUMBER(265);
	frame[4].i = (jint(0));
	LINE_NUMBER(266);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleUpperCase"_j)));
	LINE_NUMBER(267);
	goto label_55;
	}
label_41:;
	{
	LINE_NUMBER(269);
	frame[4].i = (jint(0));
	LINE_NUMBER(270);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"trim"_j)));
	LINE_NUMBER(271);
	goto label_55;
	}
label_42:;
	{
	LINE_NUMBER(273);
	frame[4].i = (jint(0));
	LINE_NUMBER(274);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"trimLeft"_j)));
	LINE_NUMBER(275);
	goto label_55;
	}
label_43:;
	{
	LINE_NUMBER(277);
	frame[4].i = (jint(0));
	LINE_NUMBER(278);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"trimRight"_j)));
	LINE_NUMBER(279);
	goto label_55;
	}
label_44:;
	{
	LINE_NUMBER(281);
	frame[4].i = (jint(1));
	LINE_NUMBER(282);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"includes"_j)));
	LINE_NUMBER(283);
	goto label_55;
	}
label_45:;
	{
	LINE_NUMBER(285);
	frame[4].i = (jint(1));
	LINE_NUMBER(286);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"startsWith"_j)));
	LINE_NUMBER(287);
	goto label_55;
	}
label_46:;
	{
	LINE_NUMBER(289);
	frame[4].i = (jint(1));
	LINE_NUMBER(290);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"endsWith"_j)));
	LINE_NUMBER(291);
	goto label_55;
	}
label_47:;
	{
	LINE_NUMBER(293);
	frame[4].i = (jint(0));
	LINE_NUMBER(294);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"normalize"_j)));
	LINE_NUMBER(295);
	goto label_55;
	}
label_48:;
	{
	LINE_NUMBER(297);
	frame[4].i = (jint(1));
	LINE_NUMBER(298);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"repeat"_j)));
	LINE_NUMBER(299);
	goto label_55;
	}
label_49:;
	{
	LINE_NUMBER(301);
	frame[4].i = (jint(1));
	LINE_NUMBER(302);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"codePointAt"_j)));
	LINE_NUMBER(303);
	goto label_55;
	}
label_50:;
	{
	LINE_NUMBER(305);
	frame[4].i = (jint(1));
	LINE_NUMBER(306);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"padStart"_j)));
	LINE_NUMBER(307);
	goto label_55;
	}
label_51:;
	{
	LINE_NUMBER(309);
	frame[4].i = (jint(1));
	LINE_NUMBER(310);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"padEnd"_j)));
	LINE_NUMBER(311);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(313);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_55:;
	{
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeString(ctx);
	sp[1].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	sp[0].o = (jobject)((func_rhino_NativeString_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeString_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:execIdCall", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeString(ctx);
	sp[1].o = (jobject)SF_rhino_NativeString_STRING_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	}
label_3:;
	{
	LINE_NUMBER(327);
	switch((frame[6].i)) {
		case -35: goto label_4;
		case -34: goto label_4;
		case -33: goto label_4;
		case -32: goto label_4;
		case -31: goto label_4;
		case -30: goto label_4;
		case -29: goto label_5;
		case -28: goto label_5;
		case -27: goto label_5;
		case -26: goto label_5;
		case -25: goto label_5;
		case -24: goto label_5;
		case -23: goto label_5;
		case -22: goto label_5;
		case -21: goto label_5;
		case -20: goto label_5;
		case -19: goto label_5;
		case -18: goto label_5;
		case -17: goto label_5;
		case -16: goto label_5;
		case -15: goto label_4;
		case -14: goto label_4;
		case -13: goto label_4;
		case -12: goto label_4;
		case -11: goto label_4;
		case -10: goto label_4;
		case -9: goto label_4;
		case -8: goto label_4;
		case -7: goto label_4;
		case -6: goto label_4;
		case -5: goto label_4;
		case -4: goto label_5;
		case -3: goto label_5;
		case -2: goto label_5;
		case -1: goto label_6;
		case 0: goto label_5;
		case 1: goto label_7;
		case 2: goto label_8;
		case 3: goto label_9;
		case 4: goto label_8;
		case 5: goto label_10;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		case 11: goto label_15;
		case 12: goto label_16;
		case 13: goto label_17;
		case 14: goto label_18;
		case 15: goto label_19;
		case 16: goto label_20;
		case 17: goto label_21;
		case 18: goto label_22;
		case 19: goto label_23;
		case 20: goto label_24;
		case 21: goto label_25;
		case 22: goto label_26;
		case 23: goto label_27;
		case 24: goto label_28;
		case 25: goto label_29;
		case 26: goto label_30;
		case 27: goto label_31;
		case 28: goto label_32;
		case 29: goto label_33;
		case 30: goto label_33;
		case 31: goto label_34;
		case 32: goto label_34;
		case 33: goto label_34;
		case 34: goto label_35;
		case 35: goto label_36;
		case 36: goto label_37;
		case 37: goto label_38;
		case 38: goto label_39;
		case 39: goto label_40;
		case 40: goto label_41;
		case 41: goto label_41;
		case 42: goto label_41;
		case 43: goto label_42;
		case 44: goto label_43;
		case 45: goto label_44;
		case 46: goto label_45;
		case 47: goto label_45;
		case 48: goto label_46;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(345);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_47;
	}
	{
	LINE_NUMBER(346);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((((jarray) nullCheck(ctx, (frame[5].o)))->length) - (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(348);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) < 0) goto label_51;
	}
	{
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(1)), (frame[7].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[7].o)))->length));
	}
label_51:;
	{
	LINE_NUMBER(349);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(350);
	goto label_53;
	}
label_47:;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[4].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	}
label_53:;
	{
	LINE_NUMBER(353);
	frame[6].i = (-(frame[6].i));
	LINE_NUMBER(354);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(358);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	LINE_NUMBER(359);
	if ((frame[7].i) >= (jint(1))) goto label_56;
	}
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_56:;
	{
	LINE_NUMBER(361);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(362);
	frame[9].i = (jint(0));
	}
label_59:;
	{
	if ((frame[9].i) == (frame[7].i)) goto label_60;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_toUint16_java_lang_Object_R_char(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[9].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(362);
	INST_IINC(9, 1);
	goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(370);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) != 0) goto label_63;
	}
	{
	LINE_NUMBER(371);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	goto label_66;
	}
label_63:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	LINE_NUMBER(373);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_68;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_68;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[7].o = sp[0].o;
	goto label_66;
	}
label_68:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	frame[7].o = sp[0].o;
	}
label_66:;
	{
	LINE_NUMBER(380);
	if ((frame[4].o) != nullptr) goto label_71;
	}
	{
	LINE_NUMBER(382);
	clinit_rhino_NativeString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeString);
	init_rhino_NativeString_java_lang_CharSequence(ctx, sp[0].o, (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_71:;
	{
	LINE_NUMBER(385);
	if ((isInstance(ctx, (frame[7].o), &class_java_lang_String)) == 0) goto label_73;
	}
	INST_ALOAD(7);
	goto label_74;
label_73:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_74:;
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)SM_rhino_NativeString_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeString(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK(sp[0].o))->F_string;
	frame[7].o = sp[0].o;
	LINE_NUMBER(392);
	if ((isInstance(ctx, (frame[7].o), &class_java_lang_String)) == 0) goto label_76;
	}
	INST_ALOAD(7);
	goto label_77;
label_76:;
	INST_ALOAD(7);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_77:;
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)SM_rhino_NativeString_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeString(ctx, (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK(sp[0].o))->F_string;
	frame[8].o = sp[0].o;
	LINE_NUMBER(396);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(new String(\""_j))));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[8].o));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_escapeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\"))"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(403);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[9].d = temp0;
	LINE_NUMBER(404);
	if ((doubleCompare((frame[9].d), (jdouble(0)), 1)) < 0) goto label_81;
	}
	{
	jdouble temp0 = frame[9].d;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[8].o)))(ctx, (frame[8].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) < 0) goto label_82;
	}
label_81:;
	{
	LINE_NUMBER(405);
	if ((frame[6].i) != (jint(5))) goto label_83;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_83:;
	{
	LINE_NUMBER(406);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_82:;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[8].o)))(ctx, (frame[8].o), (jint((frame[9].d))));
	frame[11].i = temp0;
	LINE_NUMBER(409);
	if ((frame[6].i) != (jint(5))) goto label_85;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[11].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_85:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, (frame[11].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(415);
	jint temp0 = (jint)SM_rhino_NativeString_js_indexOf_int_java_lang_String_Array1_java_lang_Object_R_int(ctx, (7), (frame[8].o), (frame[5].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(422);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) <= 0) goto label_88;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), &class_rhino_regexp_NativeRegExp)) == 0) goto label_88;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.first.arg.not.regexp"_j));
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_String)))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (((jobject) &class_java_lang_String)));
	sp[2].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_88:;
	{
	LINE_NUMBER(426);
	jint temp0 = (jint)SM_rhino_NativeString_js_indexOf_int_java_lang_String_Array1_java_lang_Object_R_int(ctx, (frame[6].i), (frame[8].o), (frame[5].o));
	frame[9].i = temp0;
	LINE_NUMBER(428);
	if ((frame[6].i) != (40)) goto label_91;
	}
	{
	LINE_NUMBER(429);
	if ((frame[9].i) == (jint(-1))) goto label_93;
	}
	INST_ICONST(1);
	goto label_94;
label_93:;
	INST_ICONST(0);
label_94:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_91:;
	{
	LINE_NUMBER(431);
	if ((frame[6].i) != (41)) goto label_95;
	}
	{
	LINE_NUMBER(432);
	if ((frame[9].i) != 0) goto label_97;
	}
	INST_ICONST(1);
	goto label_98;
label_97:;
	INST_ICONST(0);
label_98:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_95:;
	{
	LINE_NUMBER(434);
	if ((frame[6].i) != (42)) goto label_45;
	}
	{
	LINE_NUMBER(435);
	if ((frame[9].i) == (jint(-1))) goto label_100;
	}
	INST_ICONST(1);
	goto label_101;
label_100:;
	INST_ICONST(0);
label_101:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_45:;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[2].o;
	sp[1].o = frame[4].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[5].o;
	sp += 4;
	if ((frame[6].i) != (46)) goto label_102;
	}
	INST_ICONST(1);
	goto label_103;
label_102:;
	INST_ICONST(0);
label_103:;
	{
	sp -= 5;
	sp[4].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[4].i);
	sp[0].o = (jobject)SM_rhino_NativeString_js_pad_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_java_lang_Boolean_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(445);
	jint temp0 = (jint)SM_rhino_NativeString_js_lastIndexOf_java_lang_String_Array1_java_lang_Object_R_int(ctx, (frame[10].o), (frame[5].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapInt_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(450);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_rhino_RegExpProxy_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_RegExpProxy, INDEX_rhino_RegExpProxy_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[10].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(455);
	sp[0].o = (jobject)SM_rhino_NativeString_js_substring_rhino_Context_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[2].o), (frame[10].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(461);
	sp[0].o = frame[10].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(467);
	sp[0].o = frame[10].o;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(472);
	sp[0].o = (jobject)SM_rhino_NativeString_js_substr_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[10].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = (jobject)SM_rhino_NativeString_js_concat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[10].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toCharSequence_java_lang_Object_R_java_lang_CharSequence(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(482);
	sp[0].o = (jobject)SM_rhino_NativeString_js_slice_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence(ctx, (frame[10].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_20:;
	{
	LINE_NUMBER(486);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"b"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"i"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"tt"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"strike"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"small"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"big"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"blink"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"sup"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_28:;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"sub"_j))), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_29:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"font"_j))), (((jobject) createStringLiteral(ctx, u8"size"_j))), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(516);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"font"_j))), (((jobject) createStringLiteral(ctx, u8"color"_j))), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"a"_j))), (((jobject) createStringLiteral(ctx, u8"href"_j))), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"a"_j))), (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[4].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(527);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[5].o), (jint(0)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(528);
	if ((frame[6].i) != (29)) goto label_114;
	}
	{
	sp[0].o = frame[10].o;
	sp[1].o = frame[11].o;
	LINE_NUMBER(529);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_116;
	}
label_114:;
	{
	sp[0].o = frame[10].o;
	sp[1].o = frame[11].o;
	LINE_NUMBER(530);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_116:;
	{
	sp -= 1;
	LINE_NUMBER(528);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapBoolean_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(537);
	if ((frame[6].i) != (31)) goto label_118;
	}
	{
	LINE_NUMBER(538);
	frame[10].i = (jint(1));
	goto label_121;
	}
label_118:;
	{
	LINE_NUMBER(539);
	if ((frame[6].i) != (32)) goto label_122;
	}
	{
	LINE_NUMBER(540);
	frame[10].i = (jint(3));
	goto label_121;
	}
label_122:;
	{
	LINE_NUMBER(542);
	frame[10].i = (jint(2));
	}
label_121:;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	LINE_NUMBER(546);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_checkRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[2].o));
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[4].o;
	sp[4].o = frame[5].o;
	jint temp0 = frame[10].i;
	LINE_NUMBER(547);
	sp[0].o = (jobject)((func_rhino_RegExpProxy_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_RegExpProxy, INDEX_rhino_RegExpProxy_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, temp0);
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_35:;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_rhino_Context_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLocale_R_java_util_Locale])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_text_Collator_getInstance_java_util_Locale_R_java_text_Collator(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(557);
	((func_java_text_Collator_setStrength_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_text_Collator_setStrength_int])(ctx, (frame[11].o), (jint(3)));
	LINE_NUMBER(558);
	((func_java_text_Collator_setDecomposition_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_text_Collator_setDecomposition_int])(ctx, (frame[11].o), (jint(1)));
	LINE_NUMBER(559);
	sp[0].o = frame[11].o;
	sp[1].o = frame[10].o;
	sp[2].o = frame[5].o;
	jint temp0 = jint(0);
	LINE_NUMBER(561);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, sp[2].o, temp0);
	LINE_NUMBER(559);
	jint temp1 = (jint)((func_java_text_Collator_compare_java_lang_String_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_Collator_compare_java_lang_String_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (jdouble(temp1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(565);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_rhino_Context_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLocale_R_java_util_Locale])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_37:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(569);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_rhino_Context_getLocale_R_java_util_Locale) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_getLocale_R_java_util_Locale])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(575);
	frame[12].i = (jint(0));
	}
label_138:;
	{
	LINE_NUMBER(576);
	if ((frame[12].i) >= (((jarray) nullCheck(ctx, (frame[11].o)))->length)) goto label_139;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[11].o), (frame[12].i))));
	if (temp0 == 0) goto label_139;
	}
	{
	LINE_NUMBER(577);
	INST_IINC(12, 1);
	goto label_138;
	}
label_139:;
	{
	LINE_NUMBER(579);
	frame[13].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	}
label_141:;
	{
	LINE_NUMBER(580);
	if ((frame[13].i) <= (frame[12].i)) goto label_142;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[11].o), ((frame[13].i) - (jint(1))))));
	if (temp0 == 0) goto label_142;
	}
	{
	LINE_NUMBER(581);
	INST_IINC(13, -1);
	goto label_141;
	}
label_142:;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[10].o), (frame[12].i), (frame[13].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(588);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(590);
	frame[12].i = (jint(0));
	}
label_146:;
	{
	LINE_NUMBER(591);
	if ((frame[12].i) >= (((jarray) nullCheck(ctx, (frame[11].o)))->length)) goto label_147;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[11].o), (frame[12].i))));
	if (temp0 == 0) goto label_147;
	}
	{
	LINE_NUMBER(592);
	INST_IINC(12, 1);
	goto label_146;
	}
label_147:;
	{
	LINE_NUMBER(594);
	frame[13].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	LINE_NUMBER(596);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[10].o), (frame[12].i), (frame[13].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(602);
	frame[12].i = (jint(0));
	LINE_NUMBER(604);
	frame[13].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	}
label_153:;
	{
	LINE_NUMBER(605);
	if ((frame[13].i) <= (frame[12].i)) goto label_154;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSWhitespaceOrLineTerminator_int_R_boolean(ctx, ((jint)ARRAY_ACCESS(jchar, (frame[11].o), ((frame[13].i) - (jint(1))))));
	if (temp0 == 0) goto label_154;
	}
	{
	LINE_NUMBER(606);
	INST_IINC(13, -1);
	goto label_153;
	}
label_154:;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[10].o), (frame[12].i), (frame[13].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(612);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == 0) goto label_156;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	if (temp0 == 0) goto label_157;
	}
label_156:;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	clinit_java_text_Normalizer$Form(ctx);
	sp[1].o = (jobject)SF_java_text_Normalizer$Form_NFC;
	sp[0].o = (jobject)SM_java_text_Normalizer_normalize_java_lang_CharSequence_java_text_Normalizer$Form_R_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_157:;
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[5].o), (jint(0)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(619);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFD;
	sp[0].o = (jobject)((func_java_text_Normalizer$Form_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_Normalizer$Form_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_159;
	}
	{
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFD;
	frame[11].o = sp[0].o;
	goto label_161;
	}
label_159:;
	{
	LINE_NUMBER(620);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFKC;
	sp[0].o = (jobject)((func_java_text_Normalizer$Form_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_Normalizer$Form_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_162;
	}
	{
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFKC;
	frame[11].o = sp[0].o;
	goto label_161;
	}
label_162:;
	{
	LINE_NUMBER(621);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFKD;
	sp[0].o = (jobject)((func_java_text_Normalizer$Form_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_Normalizer$Form_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_164;
	}
	{
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFKD;
	frame[11].o = sp[0].o;
	goto label_161;
	}
label_164:;
	{
	LINE_NUMBER(622);
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFC;
	sp[0].o = (jobject)((func_java_text_Normalizer$Form_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_Normalizer$Form_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_166;
	}
	{
	clinit_java_text_Normalizer$Form(ctx);
	sp[0].o = (jobject)SF_java_text_Normalizer$Form_NFC;
	frame[11].o = sp[0].o;
	goto label_161;
	}
label_166:;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_rangeError_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"The normalization form should be one of 'NFC', 'NFD', 'NFKC', 'NFKD'."_j))));
	throwException(ctx, sp[0].o);	}
label_161:;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_text_Normalizer_normalize_java_lang_CharSequence_java_text_Normalizer$Form_R_java_lang_String(ctx, sp[0].o, (frame[11].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)SM_rhino_NativeString_js_repeat_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[2].o), (frame[4].o), (frame[1].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[2].o), (frame[4].o), (frame[1].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(633);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[11].d = temp0;
	LINE_NUMBER(635);
	if ((doubleCompare((frame[11].d), (jdouble(0)), 1)) < 0) goto label_170;
	}
	{
	jdouble temp0 = frame[11].d;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[10].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) < 0) goto label_171;
	}
label_170:;
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_172;
label_171:;
	{
	sp[0].o = frame[10].o;
	jint temp0 = jint((frame[11].d));
	LINE_NUMBER(637);
	jint temp1 = (jint)((func_java_lang_String_codePointAt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_codePointAt_int_R_int])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	sp += 1;
	}
label_172:;
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_ARETURN();
label_46:;
	{
	LINE_NUMBER(641);
	clinit_rhino_NativeStringIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeStringIterator);
	init_rhino_NativeStringIterator_rhino_Scriptable_rhino_Scriptable(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(644);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"String.prototype has no method: "_j))));
	sp[2].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeString(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:realThis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(649);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_NativeString)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(651);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_NativeString, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:tagify", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(660);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(661);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (60));
	sp[1].o = frame[1].o;
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(663);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (32));
	sp[1].o = frame[2].o;
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"=\""_j));
	LINE_NUMBER(666);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[3].o;
	jint temp0 = jint(0);
	LINE_NUMBER(667);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	jint temp1 = 34;
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	}
label_5:;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (62));
	sp[1].o = frame[4].o;
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"</"_j));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[1].o;
	LINE_NUMBER(673);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	jint temp0 = 62;
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(675);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_toCharSequence_R_java_lang_CharSequence(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:toCharSequence", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(684);
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(692);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeString_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(700);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	LINE_NUMBER(701);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(703);
	M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeString_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(708);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(711);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeString_getAttributes_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getAttributes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(716);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(717);
	frame[2].i = (jint(5));
	LINE_NUMBER(718);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (200)) goto label_4;
	}
	{
	LINE_NUMBER(719);
	frame[2].i = ((frame[2].i) | (jint(2)));
	}
label_4:;
	{
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_1:;
	{
	LINE_NUMBER(723);
	jint temp0 = (jint)M_rhino_ScriptableObject_getAttributes_int_R_int(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_getIds_boolean_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getIds", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)SM_rhino_Context_getCurrentContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(730);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[3].o));
	if (temp0 < (200)) goto label_2;
	}
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(732);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[4].o)))->length;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (temp0 + temp1));
	frame[5].o = sp[0].o;
	LINE_NUMBER(734);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(735);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(734);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(737);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[5].o), (frame[6].i), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_2:;
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getOwnPropertyDescriptor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(745);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Symbol)) != 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(746);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (200)) goto label_1;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toStringIdOrIndex_rhino_Context_java_lang_Object_R_rhino_ScriptRuntime$StringIdOrIndex(ctx, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(748);
	sp[0].o = (jobject)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_stringId;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	if ((jint(0)) > ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_index)) goto label_1;
	}
	{
	jint temp0 = (jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_index;
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	LINE_NUMBER(749);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, ((jint)((rhino_ScriptRuntime$StringIdOrIndex *) NULL_CHECK((frame[3].o)))->F_index));
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(751);
	sp[0].o = (jobject)M_rhino_NativeString_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeString_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:defaultIndexPropertyDescriptor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_rhino_NativeString_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeString_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(759);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(0);
	INST_ASTORE(2);
label_2:;
	{
	LINE_NUMBER(760);
	clinit_rhino_NativeObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeObject);
	init_rhino_NativeObject(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(761);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[2].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	SM_rhino_ScriptRuntime_setBuiltinProtoAndParent_rhino_ScriptableObject_rhino_Scriptable_rhino_TopLevel$Builtins(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(762);
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[1].o), (jint(0)));
	LINE_NUMBER(763);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"writable"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(764);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enumerable"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(765);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"configurable"_j));
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	((func_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeString_js_indexOf_int_java_lang_String_Array1_java_lang_Object_R_int(jcontext ctx, jint param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_indexOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(775);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[2].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(776);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(ctx, (frame[2].o), (jint(1)));
	frame[4].d = temp0;
	LINE_NUMBER(778);
	jdouble temp1 = frame[4].d;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if ((doubleCompare(temp1, (jdouble(temp2)), -1)) <= 0) goto label_3;
	}
	{
	if ((frame[0].i) == (41)) goto label_3;
	}
	{
	if ((frame[0].i) == (42)) goto label_3;
	}
	{
	LINE_NUMBER(779);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(782);
	if ((doubleCompare((frame[4].d), (jdouble(0)), 1)) >= 0) goto label_5;
	}
	{
	frame[4].d = (jdouble(0));
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(783);
	jdouble temp0 = frame[4].d;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].d = (jdouble(temp0));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(784);
	if ((frame[0].i) != (42)) goto label_6;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_8;
	}
	{
	jdouble temp0 = frame[4].d;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) <= 0) goto label_6;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].d = (jdouble(temp0));
	}
label_6:;
	{
	LINE_NUMBER(786);
	if ((42) != (frame[0].i)) goto label_9;
	}
	{
	LINE_NUMBER(787);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_11;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == (jint(1))) goto label_11;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (jint(2))) goto label_12;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].d = (jdouble(temp0));
	}
label_12:;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (jint((frame[4].d))));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	INST_ICONST(-1);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(790);
	if ((frame[0].i) != (41)) goto label_15;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = jint((frame[4].d));
	LINE_NUMBER(791);
	jint temp1 = (jint)((func_java_lang_String_startsWith_java_lang_String_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_17;
	}
	INST_ICONST(0);
	goto label_18;
label_17:;
	INST_ICONST(-1);
	goto label_18;
label_15:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = jint((frame[4].d));
	LINE_NUMBER(792);
	jint temp1 = (jint)((func_java_lang_String_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	sp[0].i = temp1;
	sp += 1;
	}
label_18:;
	LINE_NUMBER(790);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeString_js_lastIndexOf_java_lang_String_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_lastIndexOf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[1].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(802);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[1].o), (jint(1)));
	frame[3].d = temp0;
	LINE_NUMBER(804);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp1 != 0) goto label_3;
	}
	{
	jdouble temp0 = frame[3].d;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if ((doubleCompare(temp0, (jdouble(temp1)), -1)) <= 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(805);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].d = (jdouble(temp0));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(806);
	if ((doubleCompare((frame[3].d), (jdouble(0)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(807);
	frame[3].d = (jdouble(0));
	}
label_5:;
	{
	LINE_NUMBER(809);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[2].o), (jint((frame[3].d))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_js_substring_rhino_Context_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_substring", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(818);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(819);
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(ctx, (frame[2].o), (jint(0)));
	frame[4].d = temp1;
	LINE_NUMBER(822);
	if ((doubleCompare((frame[4].d), (jdouble(0)), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(823);
	frame[4].d = (jdouble(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(824);
	if ((doubleCompare((frame[4].d), (jdouble((frame[3].i))), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(825);
	frame[4].d = (jdouble((frame[3].i)));
	}
label_5:;
	{
	LINE_NUMBER(827);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) <= (jint(1))) goto label_7;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(828);
	frame[6].d = (jdouble((frame[3].i)));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(830);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(1)))));
	frame[6].d = temp0;
	LINE_NUMBER(831);
	if ((doubleCompare((frame[6].d), (jdouble(0)), 1)) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(832);
	frame[6].d = (jdouble(0));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(833);
	if ((doubleCompare((frame[6].d), (jdouble((frame[3].i))), -1)) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(834);
	frame[6].d = (jdouble((frame[3].i)));
	}
label_14:;
	{
	LINE_NUMBER(837);
	if ((doubleCompare((frame[6].d), (frame[4].d), 1)) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(838);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	if (temp0 == (120)) goto label_17;
	}
	{
	LINE_NUMBER(839);
	frame[8].d = (frame[4].d);
	LINE_NUMBER(840);
	frame[4].d = (frame[6].d);
	LINE_NUMBER(841);
	frame[6].d = (frame[8].d);
	LINE_NUMBER(842);
	goto label_10;
	}
label_17:;
	{
	LINE_NUMBER(844);
	frame[6].d = (frame[4].d);
	}
label_10:;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (jint((frame[4].d))), (jint((frame[6].d))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeString_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((rhino_NativeString *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_js_substr_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_substr", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(859);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(860);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(863);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[2].d = temp0;
	LINE_NUMBER(865);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[6].i = temp1;
	LINE_NUMBER(867);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(868);
	frame[2].d = ((frame[2].d) + (jdouble((frame[6].i))));
	LINE_NUMBER(869);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(870);
	frame[2].d = (jdouble(0));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(871);
	if ((doubleCompare((frame[2].d), (jdouble((frame[6].i))), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(872);
	frame[2].d = (jdouble((frame[6].i)));
	}
label_8:;
	{
	LINE_NUMBER(875);
	frame[4].d = (jdouble((frame[6].i)));
	LINE_NUMBER(876);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(877);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1))));
	LINE_NUMBER(879);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[7].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(880);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, (frame[7].o));
	frame[4].d = temp0;
	LINE_NUMBER(881);
	if ((doubleCompare((frame[4].d), (jdouble(0)), 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(882);
	frame[4].d = (jdouble(0));
	}
label_17:;
	{
	LINE_NUMBER(884);
	frame[4].d = ((frame[4].d) + (frame[2].d));
	LINE_NUMBER(885);
	if ((doubleCompare((frame[4].d), (jdouble((frame[6].i))), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(886);
	frame[4].d = (jdouble((frame[6].i)));
	}
label_12:;
	{
	LINE_NUMBER(891);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[0].o)))(ctx, (frame[0].o), (jint((frame[2].d))), (jint((frame[4].d))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_js_concat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_concat", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(898);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(899);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(900);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(901);
	if ((frame[2].i) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(902);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(903);
	sp[0].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(908);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(909);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(910);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	if ((frame[5].i) == (frame[2].i)) goto label_10;
	}
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[5].i))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(912);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[6].o);
	LINE_NUMBER(913);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(910);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(916);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(917);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), (frame[0].o));
	LINE_NUMBER(918);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	if ((frame[6].i) == (frame[2].i)) goto label_18;
	}
	{
	LINE_NUMBER(919);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))));
	LINE_NUMBER(918);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_js_slice_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_slice", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(925);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (jint(1))) goto label_1;
	}
	INST_DCONST(0);
	goto label_2;
label_1:;
	{
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].d = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[2].d = sp[0].d;
	LINE_NUMBER(927);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[6].i = temp0;
	LINE_NUMBER(928);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(929);
	frame[2].d = ((frame[2].d) + (jdouble((frame[6].i))));
	LINE_NUMBER(930);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(931);
	frame[2].d = (jdouble(0));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(932);
	if ((doubleCompare((frame[2].d), (jdouble((frame[6].i))), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(933);
	frame[2].d = (jdouble((frame[6].i)));
	}
label_8:;
	{
	LINE_NUMBER(936);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) < (jint(2))) goto label_11;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(937);
	frame[4].d = (jdouble((frame[6].i)));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(939);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))));
	frame[4].d = temp0;
	LINE_NUMBER(940);
	if ((doubleCompare((frame[4].d), (jdouble(0)), 1)) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(941);
	frame[4].d = ((frame[4].d) + (jdouble((frame[6].i))));
	LINE_NUMBER(942);
	if ((doubleCompare((frame[4].d), (jdouble(0)), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(943);
	frame[4].d = (jdouble(0));
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(944);
	if ((doubleCompare((frame[4].d), (jdouble((frame[6].i))), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(945);
	frame[4].d = (jdouble((frame[6].i)));
	}
label_19:;
	{
	LINE_NUMBER(947);
	if ((doubleCompare((frame[4].d), (frame[2].d), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(948);
	frame[4].d = (frame[2].d);
	}
label_14:;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[0].o)))(ctx, (frame[0].o), (jint((frame[2].d))), (jint((frame[4].d))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_js_repeat_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_repeat", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(955);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toInteger_Array1_java_lang_Object_int_R_double(ctx, (frame[3].o), (jint(0)));
	frame[5].d = temp0;
	LINE_NUMBER(957);
	if ((doubleCompare((frame[5].d), (jdouble(0)), 1)) < 0) goto label_3;
	}
	{
	if ((doubleCompare((frame[5].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_rangeError_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"Invalid count value"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(961);
	if ((doubleCompare((frame[5].d), (jdouble(0)), -1)) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(962);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_6:;
	{
	LINE_NUMBER(965);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[7].l = ((jlong(temp0)) * (jlong((frame[5].d))));
	LINE_NUMBER(967);
	if ((doubleCompare((frame[5].d), (jdouble(2,147484e+09)), -1)) > 0) goto label_8;
	}
	{
	if ((longCompare((frame[7].l), (jlong(2147483647ll)))) <= 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_rangeError_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"Invalid size or count value"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(971);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (jint((frame[7].l))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(972);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[4].o));
	LINE_NUMBER(974);
	frame[10].i = (jint(1));
	LINE_NUMBER(975);
	frame[11].i = (jint((frame[5].d)));
	}
label_13:;
	{
	LINE_NUMBER(976);
	if ((frame[10].i) > ((frame[11].i) / (jint(2)))) goto label_14;
	}
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[9].o));
	LINE_NUMBER(978);
	frame[10].i = ((frame[10].i) * (jint(2)));
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(980);
	if ((frame[10].i) >= (frame[11].i)) goto label_17;
	}
	{
	LINE_NUMBER(981);
	sp[0].o = frame[9].o;
	sp[1].o = frame[9].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, (temp1 * ((frame[11].i) - (frame[10].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeString_js_pad_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_java_lang_Boolean_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:js_pad", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)SM_rhino_ScriptRuntimeES6_requireObjectCoercible_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(993);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toLength_Array1_java_lang_Object_int_R_long(ctx, (frame[3].o), (jint(0)));
	frame[6].l = temp0;
	LINE_NUMBER(994);
	jlong temp1 = frame[6].l;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	if ((longCompare(temp1, (jlong(temp2)))) > 0) goto label_3;
	}
	{
	LINE_NUMBER(995);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(998);
	frame[8].o = (((jobject) createStringLiteral(ctx, u8" "_j)));
	LINE_NUMBER(999);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) < (jint(2))) goto label_6;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1000);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1001);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	if (temp0 >= (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_6:;
	{
	LINE_NUMBER(1007);
	jlong temp0 = frame[6].l;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	frame[9].i = (jint((temp0 - (jlong(temp1)))));
	LINE_NUMBER(1008);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[10].o), (frame[8].o));
	LINE_NUMBER(1011);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[10].o));
	if (temp0 < (frame[9].i)) goto label_11;
	}
	{
	LINE_NUMBER(1012);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[10].o), (frame[9].i));
	LINE_NUMBER(1014);
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(1015);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[10].o), (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[10].o), (jint(0)), (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeString_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:findPrototypeId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1023);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1024);
	popStackFrame(ctx);
	return (48);
	}
label_1:;
	{
	LINE_NUMBER(1026);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeString_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1037);
	frame[2].i = (jint(0));
	LINE_NUMBER(1038);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1041);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		case 14: goto label_12;
		case 15: goto label_12;
		case 16: goto label_14;
		case 17: goto label_15;
		default: goto label_12;
	}
	}
label_3:;
	{
	LINE_NUMBER(1043);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	frame[4].i = temp0;
	LINE_NUMBER(1044);
	if ((frame[4].i) != (98)) goto label_17;
	}
	{
	LINE_NUMBER(1045);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (115)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (117)) goto label_12;
	}
	{
	LINE_NUMBER(1046);
	frame[2].i = (24);
	LINE_NUMBER(1047);
	goto label_21;
	}
label_17:;
	{
	LINE_NUMBER(1049);
	if ((frame[4].i) != (103)) goto label_22;
	}
	{
	LINE_NUMBER(1050);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (98)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (105)) goto label_12;
	}
	{
	LINE_NUMBER(1051);
	frame[2].i = (21);
	LINE_NUMBER(1052);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1054);
	if ((frame[4].i) != (112)) goto label_12;
	}
	{
	LINE_NUMBER(1055);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (115)) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (117)) goto label_12;
	}
	{
	LINE_NUMBER(1056);
	frame[2].i = (23);
	LINE_NUMBER(1057);
	goto label_21;
	}
label_4:;
	{
	LINE_NUMBER(1062);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1063);
	if ((frame[4].i) != (98)) goto label_30;
	}
	{
	LINE_NUMBER(1064);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"bold"_j)));
	LINE_NUMBER(1065);
	frame[2].i = (16);
	goto label_12;
	}
label_30:;
	{
	LINE_NUMBER(1066);
	if ((frame[4].i) != (108)) goto label_33;
	}
	{
	LINE_NUMBER(1067);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"link"_j)));
	LINE_NUMBER(1068);
	frame[2].i = (27);
	goto label_12;
	}
label_33:;
	{
	LINE_NUMBER(1069);
	if ((frame[4].i) != (116)) goto label_12;
	}
	{
	LINE_NUMBER(1070);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"trim"_j)));
	LINE_NUMBER(1071);
	frame[2].i = (37);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(1075);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(4)));
	switch(temp0) {
		case 100: goto label_38;
		case 101: goto label_39;
		case 102: goto label_40;
		case 103: goto label_40;
		case 104: goto label_41;
		case 105: goto label_40;
		case 106: goto label_40;
		case 107: goto label_42;
		case 108: goto label_43;
		case 109: goto label_40;
		case 110: goto label_40;
		case 111: goto label_40;
		case 112: goto label_40;
		case 113: goto label_40;
		case 114: goto label_40;
		case 115: goto label_40;
		case 116: goto label_44;
		default: goto label_40;
	}
	}
label_38:;
	{
	LINE_NUMBER(1077);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"fixed"_j)));
	LINE_NUMBER(1078);
	frame[2].i = (18);
	LINE_NUMBER(1079);
	goto label_12;
	}
label_39:;
	{
	LINE_NUMBER(1081);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"slice"_j)));
	LINE_NUMBER(1082);
	frame[2].i = (15);
	LINE_NUMBER(1083);
	goto label_12;
	}
label_41:;
	{
	LINE_NUMBER(1085);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"match"_j)));
	LINE_NUMBER(1086);
	frame[2].i = (31);
	LINE_NUMBER(1087);
	goto label_12;
	}
label_42:;
	{
	LINE_NUMBER(1089);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"blink"_j)));
	LINE_NUMBER(1090);
	frame[2].i = (22);
	LINE_NUMBER(1091);
	goto label_12;
	}
label_43:;
	{
	LINE_NUMBER(1093);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"small"_j)));
	LINE_NUMBER(1094);
	frame[2].i = (20);
	LINE_NUMBER(1095);
	goto label_12;
	}
label_44:;
	{
	LINE_NUMBER(1097);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"split"_j)));
	LINE_NUMBER(1098);
	frame[2].i = (9);
	LINE_NUMBER(1099);
	goto label_12;
	}
label_40:;
	LINE_NUMBER(1101);
	goto label_12;
label_6:;
	{
	LINE_NUMBER(1103);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	switch(temp0) {
		case 97: goto label_57;
		case 98: goto label_58;
		case 99: goto label_58;
		case 100: goto label_58;
		case 101: goto label_59;
		case 102: goto label_58;
		case 103: goto label_58;
		case 104: goto label_60;
		case 105: goto label_58;
		case 106: goto label_58;
		case 107: goto label_58;
		case 108: goto label_58;
		case 109: goto label_58;
		case 110: goto label_61;
		case 111: goto label_62;
		case 112: goto label_58;
		case 113: goto label_63;
		case 114: goto label_58;
		case 115: goto label_58;
		case 116: goto label_64;
		case 117: goto label_65;
		default: goto label_58;
	}
	}
label_57:;
	{
	LINE_NUMBER(1105);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"padEnd"_j)));
	LINE_NUMBER(1106);
	frame[2].i = (47);
	LINE_NUMBER(1107);
	goto label_12;
	}
label_59:;
	{
	LINE_NUMBER(1109);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1110);
	if ((frame[4].i) != (114)) goto label_69;
	}
	{
	LINE_NUMBER(1111);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"repeat"_j)));
	LINE_NUMBER(1112);
	frame[2].i = (44);
	goto label_12;
	}
label_69:;
	{
	LINE_NUMBER(1113);
	if ((frame[4].i) != (115)) goto label_12;
	}
	{
	LINE_NUMBER(1114);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"search"_j)));
	LINE_NUMBER(1115);
	frame[2].i = (32);
	goto label_12;
	}
label_60:;
	{
	LINE_NUMBER(1119);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"charAt"_j)));
	LINE_NUMBER(1120);
	frame[2].i = (jint(5));
	LINE_NUMBER(1121);
	goto label_12;
	}
label_61:;
	{
	LINE_NUMBER(1123);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"anchor"_j)));
	LINE_NUMBER(1124);
	frame[2].i = (28);
	LINE_NUMBER(1125);
	goto label_12;
	}
label_62:;
	{
	LINE_NUMBER(1127);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"concat"_j)));
	LINE_NUMBER(1128);
	frame[2].i = (14);
	LINE_NUMBER(1129);
	goto label_12;
	}
label_63:;
	{
	LINE_NUMBER(1131);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"equals"_j)));
	LINE_NUMBER(1132);
	frame[2].i = (29);
	LINE_NUMBER(1133);
	goto label_12;
	}
label_64:;
	{
	LINE_NUMBER(1135);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"strike"_j)));
	LINE_NUMBER(1136);
	frame[2].i = (19);
	LINE_NUMBER(1137);
	goto label_12;
	}
label_65:;
	{
	LINE_NUMBER(1139);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"substr"_j)));
	LINE_NUMBER(1140);
	frame[2].i = (13);
	LINE_NUMBER(1141);
	goto label_12;
	}
label_58:;
	LINE_NUMBER(1143);
	goto label_12;
label_7:;
	{
	LINE_NUMBER(1145);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	switch(temp0) {
		case 97: goto label_86;
		case 101: goto label_87;
		case 110: goto label_88;
		case 116: goto label_89;
		default: goto label_90;
	}
	}
label_86:;
	{
	LINE_NUMBER(1147);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(1148);
	frame[2].i = (jint(4));
	LINE_NUMBER(1149);
	goto label_12;
	}
label_87:;
	{
	LINE_NUMBER(1151);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"replace"_j)));
	LINE_NUMBER(1152);
	frame[2].i = (33);
	LINE_NUMBER(1153);
	goto label_12;
	}
label_88:;
	{
	LINE_NUMBER(1155);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"indexOf"_j)));
	LINE_NUMBER(1156);
	frame[2].i = (7);
	LINE_NUMBER(1157);
	goto label_12;
	}
label_89:;
	{
	LINE_NUMBER(1159);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"italics"_j)));
	LINE_NUMBER(1160);
	frame[2].i = (17);
	LINE_NUMBER(1161);
	goto label_12;
	}
label_90:;
	LINE_NUMBER(1163);
	goto label_12;
label_8:;
	{
	LINE_NUMBER(1165);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (6));
	switch(temp0) {
		case 99: goto label_99;
		case 100: goto label_100;
		case 101: goto label_101;
		case 102: goto label_102;
		case 103: goto label_100;
		case 104: goto label_100;
		case 105: goto label_100;
		case 106: goto label_100;
		case 107: goto label_100;
		case 108: goto label_100;
		case 109: goto label_100;
		case 110: goto label_103;
		case 111: goto label_100;
		case 112: goto label_100;
		case 113: goto label_100;
		case 114: goto label_104;
		case 115: goto label_100;
		case 116: goto label_105;
		case 117: goto label_100;
		case 118: goto label_100;
		case 119: goto label_100;
		case 120: goto label_100;
		case 121: goto label_100;
		case 122: goto label_106;
		default: goto label_100;
	}
	}
label_99:;
	{
	LINE_NUMBER(1167);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(1168);
	frame[2].i = (jint(3));
	LINE_NUMBER(1169);
	goto label_12;
	}
label_101:;
	{
	LINE_NUMBER(1171);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"includes"_j)));
	LINE_NUMBER(1172);
	frame[2].i = (40);
	LINE_NUMBER(1173);
	goto label_12;
	}
label_102:;
	{
	LINE_NUMBER(1175);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"trimLeft"_j)));
	LINE_NUMBER(1176);
	frame[2].i = (38);
	LINE_NUMBER(1177);
	goto label_12;
	}
label_103:;
	{
	LINE_NUMBER(1179);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(1180);
	frame[2].i = (jint(2));
	LINE_NUMBER(1181);
	goto label_12;
	}
label_104:;
	{
	LINE_NUMBER(1183);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"padStart"_j)));
	LINE_NUMBER(1184);
	frame[2].i = (46);
	LINE_NUMBER(1185);
	goto label_12;
	}
label_105:;
	{
	LINE_NUMBER(1187);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"endsWith"_j)));
	LINE_NUMBER(1188);
	frame[2].i = (42);
	LINE_NUMBER(1189);
	goto label_12;
	}
label_106:;
	{
	LINE_NUMBER(1191);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"fontsize"_j)));
	LINE_NUMBER(1192);
	frame[2].i = (25);
	LINE_NUMBER(1193);
	goto label_12;
	}
label_100:;
	LINE_NUMBER(1195);
	goto label_12;
label_9:;
	{
	LINE_NUMBER(1197);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	switch(temp0) {
		case 102: goto label_121;
		case 110: goto label_122;
		case 115: goto label_123;
		case 116: goto label_124;
		default: goto label_125;
	}
	}
label_121:;
	{
	LINE_NUMBER(1199);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"fontcolor"_j)));
	LINE_NUMBER(1200);
	frame[2].i = (26);
	LINE_NUMBER(1201);
	goto label_12;
	}
label_122:;
	{
	LINE_NUMBER(1203);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"normalize"_j)));
	LINE_NUMBER(1204);
	frame[2].i = (43);
	LINE_NUMBER(1205);
	goto label_12;
	}
label_123:;
	{
	LINE_NUMBER(1207);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"substring"_j)));
	LINE_NUMBER(1208);
	frame[2].i = (10);
	LINE_NUMBER(1209);
	goto label_12;
	}
label_124:;
	{
	LINE_NUMBER(1211);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"trimRight"_j)));
	LINE_NUMBER(1212);
	frame[2].i = (39);
	LINE_NUMBER(1213);
	goto label_12;
	}
label_125:;
	LINE_NUMBER(1215);
	goto label_12;
label_10:;
	{
	LINE_NUMBER(1217);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1218);
	if ((frame[4].i) != (99)) goto label_135;
	}
	{
	LINE_NUMBER(1219);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"charCodeAt"_j)));
	LINE_NUMBER(1220);
	frame[2].i = (6);
	goto label_12;
	}
label_135:;
	{
	LINE_NUMBER(1221);
	if ((frame[4].i) != (115)) goto label_12;
	}
	{
	LINE_NUMBER(1222);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"startsWith"_j)));
	LINE_NUMBER(1223);
	frame[2].i = (41);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1227);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	switch(temp0) {
		case 76: goto label_140;
		case 85: goto label_141;
		case 100: goto label_142;
		case 110: goto label_143;
		case 115: goto label_144;
		default: goto label_145;
	}
	}
label_140:;
	{
	LINE_NUMBER(1229);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLowerCase"_j)));
	LINE_NUMBER(1230);
	frame[2].i = (11);
	LINE_NUMBER(1231);
	goto label_12;
	}
label_141:;
	{
	LINE_NUMBER(1233);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toUpperCase"_j)));
	LINE_NUMBER(1234);
	frame[2].i = (12);
	LINE_NUMBER(1235);
	goto label_12;
	}
label_142:;
	{
	LINE_NUMBER(1237);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"codePointAt"_j)));
	LINE_NUMBER(1238);
	frame[2].i = (45);
	LINE_NUMBER(1239);
	goto label_12;
	}
label_143:;
	{
	LINE_NUMBER(1241);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(1242);
	frame[2].i = (jint(1));
	LINE_NUMBER(1243);
	goto label_12;
	}
label_144:;
	{
	LINE_NUMBER(1245);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"lastIndexOf"_j)));
	LINE_NUMBER(1246);
	frame[2].i = (8);
	LINE_NUMBER(1247);
	goto label_12;
	}
label_145:;
	LINE_NUMBER(1249);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(1251);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"localeCompare"_j)));
	LINE_NUMBER(1252);
	frame[2].i = (34);
	LINE_NUMBER(1253);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(1255);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"equalsIgnoreCase"_j)));
	LINE_NUMBER(1256);
	frame[2].i = (30);
	LINE_NUMBER(1257);
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(1259);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (8));
	frame[4].i = temp0;
	LINE_NUMBER(1260);
	if ((frame[4].i) != (76)) goto label_161;
	}
	{
	LINE_NUMBER(1261);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleLowerCase"_j)));
	LINE_NUMBER(1262);
	frame[2].i = (35);
	goto label_12;
	}
label_161:;
	{
	LINE_NUMBER(1263);
	if ((frame[4].i) != (85)) goto label_12;
	}
	{
	LINE_NUMBER(1264);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleUpperCase"_j)));
	LINE_NUMBER(1265);
	frame[2].i = (36);
	}
label_12:;
	{
	LINE_NUMBER(1269);
	if ((frame[3].o) == nullptr) goto label_21;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_21;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_21;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_21:;
	{
	LINE_NUMBER(1272);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeString(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeString_Id_length = jint(1);
	SF_rhino_NativeString_MAX_INSTANCE_ID = jint(1);
	SF_rhino_NativeString_ConstructorId_fromCharCode = jint(-1);
	SF_rhino_NativeString_Id_constructor = jint(1);
	SF_rhino_NativeString_Id_toString = jint(2);
	SF_rhino_NativeString_Id_toSource = jint(3);
	SF_rhino_NativeString_Id_valueOf = jint(4);
	SF_rhino_NativeString_Id_charAt = jint(5);
	SF_rhino_NativeString_Id_charCodeAt = jint(6);
	SF_rhino_NativeString_Id_indexOf = jint(7);
	SF_rhino_NativeString_Id_lastIndexOf = jint(8);
	SF_rhino_NativeString_Id_split = jint(9);
	SF_rhino_NativeString_Id_substring = jint(10);
	SF_rhino_NativeString_Id_toLowerCase = jint(11);
	SF_rhino_NativeString_Id_toUpperCase = jint(12);
	SF_rhino_NativeString_Id_substr = jint(13);
	SF_rhino_NativeString_Id_concat = jint(14);
	SF_rhino_NativeString_Id_slice = jint(15);
	SF_rhino_NativeString_Id_bold = jint(16);
	SF_rhino_NativeString_Id_italics = jint(17);
	SF_rhino_NativeString_Id_fixed = jint(18);
	SF_rhino_NativeString_Id_strike = jint(19);
	SF_rhino_NativeString_Id_small = jint(20);
	SF_rhino_NativeString_Id_big = jint(21);
	SF_rhino_NativeString_Id_blink = jint(22);
	SF_rhino_NativeString_Id_sup = jint(23);
	SF_rhino_NativeString_Id_sub = jint(24);
	SF_rhino_NativeString_Id_fontsize = jint(25);
	SF_rhino_NativeString_Id_fontcolor = jint(26);
	SF_rhino_NativeString_Id_link = jint(27);
	SF_rhino_NativeString_Id_anchor = jint(28);
	SF_rhino_NativeString_Id_equals = jint(29);
	SF_rhino_NativeString_Id_equalsIgnoreCase = jint(30);
	SF_rhino_NativeString_Id_match = jint(31);
	SF_rhino_NativeString_Id_search = jint(32);
	SF_rhino_NativeString_Id_replace = jint(33);
	SF_rhino_NativeString_Id_localeCompare = jint(34);
	SF_rhino_NativeString_Id_toLocaleLowerCase = jint(35);
	SF_rhino_NativeString_Id_toLocaleUpperCase = jint(36);
	SF_rhino_NativeString_Id_trim = jint(37);
	SF_rhino_NativeString_Id_trimLeft = jint(38);
	SF_rhino_NativeString_Id_trimRight = jint(39);
	SF_rhino_NativeString_Id_includes = jint(40);
	SF_rhino_NativeString_Id_startsWith = jint(41);
	SF_rhino_NativeString_Id_endsWith = jint(42);
	SF_rhino_NativeString_Id_normalize = jint(43);
	SF_rhino_NativeString_Id_repeat = jint(44);
	SF_rhino_NativeString_Id_codePointAt = jint(45);
	SF_rhino_NativeString_Id_padStart = jint(46);
	SF_rhino_NativeString_Id_padEnd = jint(47);
	SF_rhino_NativeString_SymbolId_iterator = jint(48);
	SF_rhino_NativeString_MAX_PROTOTYPE_ID = jint(48);
	SF_rhino_NativeString_ConstructorId_charAt = jint(-5);
	SF_rhino_NativeString_ConstructorId_charCodeAt = jint(-6);
	SF_rhino_NativeString_ConstructorId_indexOf = jint(-7);
	SF_rhino_NativeString_ConstructorId_lastIndexOf = jint(-8);
	SF_rhino_NativeString_ConstructorId_split = jint(-9);
	SF_rhino_NativeString_ConstructorId_substring = jint(-10);
	SF_rhino_NativeString_ConstructorId_toLowerCase = jint(-11);
	SF_rhino_NativeString_ConstructorId_toUpperCase = jint(-12);
	SF_rhino_NativeString_ConstructorId_substr = jint(-13);
	SF_rhino_NativeString_ConstructorId_concat = jint(-14);
	SF_rhino_NativeString_ConstructorId_slice = jint(-15);
	SF_rhino_NativeString_ConstructorId_equalsIgnoreCase = jint(-30);
	SF_rhino_NativeString_ConstructorId_match = jint(-31);
	SF_rhino_NativeString_ConstructorId_search = jint(-32);
	SF_rhino_NativeString_ConstructorId_replace = jint(-33);
	SF_rhino_NativeString_ConstructorId_localeCompare = jint(-34);
	SF_rhino_NativeString_ConstructorId_toLocaleLowerCase = jint(-35);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeString:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeString(ctx);
	{
	LINE_NUMBER(24);
	clinit_rhino_NativeString(ctx);
	SF_rhino_NativeString_STRING_TAG = (((jobject) createStringLiteral(ctx, u8"String"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeString[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeString_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeString_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeString_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeString_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeString_put_int_rhino_Scriptable_java_lang_Object,
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
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_NativeString_getAttributes_int_R_int,
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
	(void *) M_rhino_NativeString_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeString_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeString_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_NativeString_getMaxInstanceId_R_int,
	(void *) M_rhino_NativeString_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_NativeString_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_NativeString_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_NativeString_initPrototypeId_int,
	(void *) M_rhino_NativeString_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_NativeString_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeString_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeString_toCharSequence_R_java_lang_CharSequence,
	(void *) M_rhino_NativeString_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeString_getLength_R_int,
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
	{ "toCharSequence", "()Ljava/lang/CharSequence;" },
	{ "defaultIndexPropertyDescriptor", "(Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getLength", "()I" },
};

static FieldMetadata fields[] {
	{ "STRING_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeString_STRING_TAG, "Ljava/lang/Object;", 26 },
	{ "Id_length", &class_int, (intptr_t) &SF_rhino_NativeString_Id_length, "I", 26 },
	{ "MAX_INSTANCE_ID", &class_int, (intptr_t) &SF_rhino_NativeString_MAX_INSTANCE_ID, "I", 26 },
	{ "ConstructorId_fromCharCode", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_fromCharCode, "I", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeString_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeString_Id_toString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeString_Id_toSource, "I", 26 },
	{ "Id_valueOf", &class_int, (intptr_t) &SF_rhino_NativeString_Id_valueOf, "I", 26 },
	{ "Id_charAt", &class_int, (intptr_t) &SF_rhino_NativeString_Id_charAt, "I", 26 },
	{ "Id_charCodeAt", &class_int, (intptr_t) &SF_rhino_NativeString_Id_charCodeAt, "I", 26 },
	{ "Id_indexOf", &class_int, (intptr_t) &SF_rhino_NativeString_Id_indexOf, "I", 26 },
	{ "Id_lastIndexOf", &class_int, (intptr_t) &SF_rhino_NativeString_Id_lastIndexOf, "I", 26 },
	{ "Id_split", &class_int, (intptr_t) &SF_rhino_NativeString_Id_split, "I", 26 },
	{ "Id_substring", &class_int, (intptr_t) &SF_rhino_NativeString_Id_substring, "I", 26 },
	{ "Id_toLowerCase", &class_int, (intptr_t) &SF_rhino_NativeString_Id_toLowerCase, "I", 26 },
	{ "Id_toUpperCase", &class_int, (intptr_t) &SF_rhino_NativeString_Id_toUpperCase, "I", 26 },
	{ "Id_substr", &class_int, (intptr_t) &SF_rhino_NativeString_Id_substr, "I", 26 },
	{ "Id_concat", &class_int, (intptr_t) &SF_rhino_NativeString_Id_concat, "I", 26 },
	{ "Id_slice", &class_int, (intptr_t) &SF_rhino_NativeString_Id_slice, "I", 26 },
	{ "Id_bold", &class_int, (intptr_t) &SF_rhino_NativeString_Id_bold, "I", 26 },
	{ "Id_italics", &class_int, (intptr_t) &SF_rhino_NativeString_Id_italics, "I", 26 },
	{ "Id_fixed", &class_int, (intptr_t) &SF_rhino_NativeString_Id_fixed, "I", 26 },
	{ "Id_strike", &class_int, (intptr_t) &SF_rhino_NativeString_Id_strike, "I", 26 },
	{ "Id_small", &class_int, (intptr_t) &SF_rhino_NativeString_Id_small, "I", 26 },
	{ "Id_big", &class_int, (intptr_t) &SF_rhino_NativeString_Id_big, "I", 26 },
	{ "Id_blink", &class_int, (intptr_t) &SF_rhino_NativeString_Id_blink, "I", 26 },
	{ "Id_sup", &class_int, (intptr_t) &SF_rhino_NativeString_Id_sup, "I", 26 },
	{ "Id_sub", &class_int, (intptr_t) &SF_rhino_NativeString_Id_sub, "I", 26 },
	{ "Id_fontsize", &class_int, (intptr_t) &SF_rhino_NativeString_Id_fontsize, "I", 26 },
	{ "Id_fontcolor", &class_int, (intptr_t) &SF_rhino_NativeString_Id_fontcolor, "I", 26 },
	{ "Id_link", &class_int, (intptr_t) &SF_rhino_NativeString_Id_link, "I", 26 },
	{ "Id_anchor", &class_int, (intptr_t) &SF_rhino_NativeString_Id_anchor, "I", 26 },
	{ "Id_equals", &class_int, (intptr_t) &SF_rhino_NativeString_Id_equals, "I", 26 },
	{ "Id_equalsIgnoreCase", &class_int, (intptr_t) &SF_rhino_NativeString_Id_equalsIgnoreCase, "I", 26 },
	{ "Id_match", &class_int, (intptr_t) &SF_rhino_NativeString_Id_match, "I", 26 },
	{ "Id_search", &class_int, (intptr_t) &SF_rhino_NativeString_Id_search, "I", 26 },
	{ "Id_replace", &class_int, (intptr_t) &SF_rhino_NativeString_Id_replace, "I", 26 },
	{ "Id_localeCompare", &class_int, (intptr_t) &SF_rhino_NativeString_Id_localeCompare, "I", 26 },
	{ "Id_toLocaleLowerCase", &class_int, (intptr_t) &SF_rhino_NativeString_Id_toLocaleLowerCase, "I", 26 },
	{ "Id_toLocaleUpperCase", &class_int, (intptr_t) &SF_rhino_NativeString_Id_toLocaleUpperCase, "I", 26 },
	{ "Id_trim", &class_int, (intptr_t) &SF_rhino_NativeString_Id_trim, "I", 26 },
	{ "Id_trimLeft", &class_int, (intptr_t) &SF_rhino_NativeString_Id_trimLeft, "I", 26 },
	{ "Id_trimRight", &class_int, (intptr_t) &SF_rhino_NativeString_Id_trimRight, "I", 26 },
	{ "Id_includes", &class_int, (intptr_t) &SF_rhino_NativeString_Id_includes, "I", 26 },
	{ "Id_startsWith", &class_int, (intptr_t) &SF_rhino_NativeString_Id_startsWith, "I", 26 },
	{ "Id_endsWith", &class_int, (intptr_t) &SF_rhino_NativeString_Id_endsWith, "I", 26 },
	{ "Id_normalize", &class_int, (intptr_t) &SF_rhino_NativeString_Id_normalize, "I", 26 },
	{ "Id_repeat", &class_int, (intptr_t) &SF_rhino_NativeString_Id_repeat, "I", 26 },
	{ "Id_codePointAt", &class_int, (intptr_t) &SF_rhino_NativeString_Id_codePointAt, "I", 26 },
	{ "Id_padStart", &class_int, (intptr_t) &SF_rhino_NativeString_Id_padStart, "I", 26 },
	{ "Id_padEnd", &class_int, (intptr_t) &SF_rhino_NativeString_Id_padEnd, "I", 26 },
	{ "SymbolId_iterator", &class_int, (intptr_t) &SF_rhino_NativeString_SymbolId_iterator, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeString_MAX_PROTOTYPE_ID, "I", 26 },
	{ "ConstructorId_charAt", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_charAt, "I", 26 },
	{ "ConstructorId_charCodeAt", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_charCodeAt, "I", 26 },
	{ "ConstructorId_indexOf", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_indexOf, "I", 26 },
	{ "ConstructorId_lastIndexOf", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_lastIndexOf, "I", 26 },
	{ "ConstructorId_split", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_split, "I", 26 },
	{ "ConstructorId_substring", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_substring, "I", 26 },
	{ "ConstructorId_toLowerCase", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_toLowerCase, "I", 26 },
	{ "ConstructorId_toUpperCase", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_toUpperCase, "I", 26 },
	{ "ConstructorId_substr", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_substr, "I", 26 },
	{ "ConstructorId_concat", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_concat, "I", 26 },
	{ "ConstructorId_slice", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_slice, "I", 26 },
	{ "ConstructorId_equalsIgnoreCase", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_equalsIgnoreCase, "I", 26 },
	{ "ConstructorId_match", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_match, "I", 26 },
	{ "ConstructorId_search", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_search, "I", 26 },
	{ "ConstructorId_replace", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_replace, "I", 26 },
	{ "ConstructorId_localeCompare", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_localeCompare, "I", 26 },
	{ "ConstructorId_toLocaleLowerCase", &class_int, (intptr_t) &SF_rhino_NativeString_ConstructorId_toLocaleLowerCase, "I", 26 },
	{ "string", &class_java_lang_CharSequence, offsetof(rhino_NativeString, F_string), "Ljava/lang/CharSequence;", 18 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeString_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeString_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;)V", 0 },
	{ "getClassName", (intptr_t) M_rhino_NativeString_getClassName_R_java_lang_String, VTABLE_rhino_NativeString_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_NativeString_getMaxInstanceId_R_int, VTABLE_rhino_NativeString_getMaxInstanceId_R_int, "()I", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_NativeString_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_NativeString_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_NativeString_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_NativeString_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_NativeString_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_NativeString_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeString_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeString_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeString_initPrototypeId_int, VTABLE_rhino_NativeString_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeString_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeString_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "realThis", (intptr_t) SM_rhino_NativeString_realThis_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_NativeString, 0, "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/NativeString;", 10 },
	{ "tagify", (intptr_t) SM_rhino_NativeString_tagify_rhino_Scriptable_java_lang_String_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "toCharSequence", (intptr_t) M_rhino_NativeString_toCharSequence_R_java_lang_CharSequence, VTABLE_rhino_NativeString_toCharSequence_R_java_lang_CharSequence, "()Ljava/lang/CharSequence;", 1 },
	{ "toString", (intptr_t) M_rhino_NativeString_toString_R_java_lang_String, VTABLE_rhino_NativeString_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "get", (intptr_t) M_rhino_NativeString_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeString_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_NativeString_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeString_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "has", (intptr_t) M_rhino_NativeString_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeString_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "getAttributes", (intptr_t) M_rhino_NativeString_getAttributes_int_R_int, VTABLE_rhino_NativeString_getAttributes_int_R_int, "(I)I", 1 },
	{ "getIds", (intptr_t) M_rhino_NativeString_getIds_boolean_boolean_R_Array1_java_lang_Object, VTABLE_rhino_NativeString_getIds_boolean_boolean_R_Array1_java_lang_Object, "(ZZ)[Ljava/lang/Object;", 4 },
	{ "getOwnPropertyDescriptor", (intptr_t) M_rhino_NativeString_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_NativeString_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;", 4 },
	{ "defaultIndexPropertyDescriptor", (intptr_t) M_rhino_NativeString_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_NativeString_defaultIndexPropertyDescriptor_java_lang_Object_R_rhino_ScriptableObject, "(Ljava/lang/Object;)Lrhino/ScriptableObject;", 2 },
	{ "js_indexOf", (intptr_t) SM_rhino_NativeString_js_indexOf_int_java_lang_String_Array1_java_lang_Object_R_int, 0, "(ILjava/lang/String;[Ljava/lang/Object;)I", 10 },
	{ "js_lastIndexOf", (intptr_t) SM_rhino_NativeString_js_lastIndexOf_java_lang_String_Array1_java_lang_Object_R_int, 0, "(Ljava/lang/String;[Ljava/lang/Object;)I", 10 },
	{ "js_substring", (intptr_t) SM_rhino_NativeString_js_substring_rhino_Context_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence, 0, "(Lrhino/Context;Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/CharSequence;", 10 },
	{ "getLength", (intptr_t) M_rhino_NativeString_getLength_R_int, VTABLE_rhino_NativeString_getLength_R_int, "()I", 0 },
	{ "js_substr", (intptr_t) SM_rhino_NativeString_js_substr_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/CharSequence;", 10 },
	{ "js_concat", (intptr_t) SM_rhino_NativeString_js_concat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "js_slice", (intptr_t) SM_rhino_NativeString_js_slice_java_lang_CharSequence_Array1_java_lang_Object_R_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/CharSequence;", 10 },
	{ "js_repeat", (intptr_t) SM_rhino_NativeString_js_repeat_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/IdFunctionObject;[Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "js_pad", (intptr_t) SM_rhino_NativeString_js_pad_rhino_Context_rhino_Scriptable_rhino_IdFunctionObject_Array1_java_lang_Object_java_lang_Boolean_R_java_lang_String, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/IdFunctionObject;[Ljava/lang/Object;Ljava/lang/Boolean;)Ljava/lang/String;", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeString_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_NativeString_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeString_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeString_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeString, 0, "()V", 8 },
};

Class class_rhino_NativeString{
		.nativeName = (intptr_t) "rhino/NativeString",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeString),
		.classVtable = (intptr_t) vtable_rhino_NativeString,
		.staticInitializer = (intptr_t) clinit_rhino_NativeString,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeString,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 71,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 116,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeString = registerClass(&class_rhino_NativeString);

}
