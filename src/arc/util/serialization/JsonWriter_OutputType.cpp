#include "arc/util/serialization/JsonWriter_OutputType.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "java/lang/Boolean.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/Enum.h"
#include "arc/util/serialization/JsonWriter.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/Class.h"
#include "arc/util/serialization/JsonWriter_OutputType.h"

extern "C" {

jobject SF_arc_util_serialization_JsonWriter$OutputType_json;
jobject SF_arc_util_serialization_JsonWriter$OutputType_javascript;
jobject SF_arc_util_serialization_JsonWriter$OutputType_minimal;
jobject SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern;
jobject SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern;
jobject SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern;
jobject SF_arc_util_serialization_JsonWriter$OutputType_$VALUES;

void mark_arc_util_serialization_JsonWriter$OutputType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_JsonWriter$OutputType_json)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_json)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_json, mark, depth + 1);
		if (SF_arc_util_serialization_JsonWriter$OutputType_javascript)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_javascript)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_javascript, mark, depth + 1);
		if (SF_arc_util_serialization_JsonWriter$OutputType_minimal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_minimal)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_minimal, mark, depth + 1);
		if (SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern, mark, depth + 1);
		if (SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern, mark, depth + 1);
		if (SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern, mark, depth + 1);
		if (SF_arc_util_serialization_JsonWriter$OutputType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonWriter$OutputType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonWriter$OutputType_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_serialization_JsonWriter$OutputType *) object;
}

jobject SM_arc_util_serialization_JsonWriter$OutputType_values_R_Array1_arc_util_serialization_JsonWriter$OutputType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	{
	LINE_NUMBER(142);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_serialization_JsonWriter$OutputType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonWriter$OutputType_valueOf_java_lang_String_R_arc_util_serialization_JsonWriter$OutputType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_serialization_JsonWriter$OutputType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_JsonWriter$OutputType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonWriter$OutputType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(142);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:quoteValue", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) != 0) goto label_3;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Boolean)) == 0) goto label_4;
	}
label_3:;
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(169);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(170);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[3].o), (92), (((jobject) createStringLiteral(ctx, u8"\\\\"_j))));
	LINE_NUMBER(171);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[3].o), (13), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(172);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[3].o), (10), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(173);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[3].o), (9), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"//"_j));
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"/*"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(177);
	if ((frame[4].i) <= 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[3].o), ((frame[4].i) - (jint(1))));
	if (temp0 == (32)) goto label_10;
	}
	{
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[3].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[3].o), (34), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	LINE_NUMBER(181);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:quoteName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[2].o), (92), (((jobject) createStringLiteral(ctx, u8"\\\\"_j))));
	LINE_NUMBER(187);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[2].o), (13), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(188);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[2].o), (10), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(189);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[2].o), (9), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(190);
	jint temp0 = (jint)((func_arc_util_serialization_JsonWriter$OutputType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonWriter$OutputType_ordinal_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case 1: goto label_6;
		case 2: goto label_7;
		default: goto label_8;
	}
	}
label_7:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"//"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/*"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[2].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(195);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[2].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(ctx, (frame[2].o), (34), (((jobject) createStringLiteral(ctx, u8"\\\""_j))));
	LINE_NUMBER(198);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (34));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonWriter$OutputType_$values_R_Array1_arc_util_serialization_JsonWriter$OutputType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_serialization_JsonWriter$OutputType, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_json;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_javascript;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonWriter$OutputType_minimal;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_JsonWriter$OutputType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonWriter$OutputType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	{
	LINE_NUMBER(144);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter$OutputType);
	init_arc_util_serialization_JsonWriter$OutputType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"json"_j))), (jint(0)));
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_json = sp[0].o;
	LINE_NUMBER(146);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter$OutputType);
	init_arc_util_serialization_JsonWriter$OutputType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"javascript"_j))), (jint(1)));
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_javascript = sp[0].o;
	LINE_NUMBER(159);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonWriter$OutputType);
	init_arc_util_serialization_JsonWriter$OutputType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minimal"_j))), (jint(2)));
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_minimal = sp[0].o;
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonWriter$OutputType_$values_R_Array1_arc_util_serialization_JsonWriter$OutputType(ctx);
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_$VALUES = sp[0].o;
	LINE_NUMBER(161);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^[a-zA-Z_$][a-zA-Z_$0-9]*$"_j))));
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern = sp[0].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^[^\":,}/ ][^:]*$"_j))));
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"^[^\":,{\\[\\]/ ][^}\\],]*$"_j))));
	clinit_arc_util_serialization_JsonWriter$OutputType(ctx);
	SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_JsonWriter$OutputType[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "quoteValue", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "quoteName", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "json", &class_arc_util_serialization_JsonWriter$OutputType, (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_json, "Larc/util/serialization/JsonWriter$OutputType;", 16409 },
	{ "javascript", &class_arc_util_serialization_JsonWriter$OutputType, (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_javascript, "Larc/util/serialization/JsonWriter$OutputType;", 16409 },
	{ "minimal", &class_arc_util_serialization_JsonWriter$OutputType, (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_minimal, "Larc/util/serialization/JsonWriter$OutputType;", 16409 },
	{ "javascriptPattern", &class_java_util_regex_Pattern, (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_javascriptPattern, "Ljava/util/regex/Pattern;", 10 },
	{ "minimalNamePattern", &class_java_util_regex_Pattern, (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_minimalNamePattern, "Ljava/util/regex/Pattern;", 10 },
	{ "minimalValuePattern", &class_java_util_regex_Pattern, (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_minimalValuePattern, "Ljava/util/regex/Pattern;", 10 },
	{ "$VALUES", getArrayClass(&class_arc_util_serialization_JsonWriter$OutputType, 1), (intptr_t) &SF_arc_util_serialization_JsonWriter$OutputType_$VALUES, "[Larc/util/serialization/JsonWriter$OutputType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_serialization_JsonWriter$OutputType_values_R_Array1_arc_util_serialization_JsonWriter$OutputType, 0, "()[Larc/util/serialization/JsonWriter$OutputType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_JsonWriter$OutputType_valueOf_java_lang_String_R_arc_util_serialization_JsonWriter$OutputType, 0, "(Ljava/lang/String;)Larc/util/serialization/JsonWriter$OutputType;", 9 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonWriter$OutputType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "quoteValue", (intptr_t) M_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String, VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteValue_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "quoteName", (intptr_t) M_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String, VTABLE_arc_util_serialization_JsonWriter$OutputType_quoteName_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "$values", (intptr_t) SM_arc_util_serialization_JsonWriter$OutputType_$values_R_Array1_arc_util_serialization_JsonWriter$OutputType, 0, "()[Larc/util/serialization/JsonWriter$OutputType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_JsonWriter$OutputType, 0, "()V", 8 },
};

Class class_arc_util_serialization_JsonWriter$OutputType{
		.nativeName = (intptr_t) "arc/util/serialization/JsonWriter$OutputType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_serialization_JsonWriter$OutputType),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonWriter$OutputType,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonWriter$OutputType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonWriter$OutputType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_JsonWriter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonWriter$OutputType = registerClass(&class_arc_util_serialization_JsonWriter$OutputType);

}

