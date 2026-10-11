#include "java/util/regex/Pattern.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuilder.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/String.h"
#include "regexodus/Pattern.h"
#include "regexodus/Matcher.h"
#include "java/util/ArrayList.h"
#include "java/util/regex/Matcher.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"

extern "C" {

jlong SF_java_util_regex_Pattern_serialVersionUID;
jint SF_java_util_regex_Pattern_UNIX_LINES;
jint SF_java_util_regex_Pattern_CASE_INSENSITIVE;
jint SF_java_util_regex_Pattern_COMMENTS;
jint SF_java_util_regex_Pattern_MULTILINE;
jint SF_java_util_regex_Pattern_LITERAL;
jint SF_java_util_regex_Pattern_DOTALL;
jint SF_java_util_regex_Pattern_UNICODE_CASE;
jint SF_java_util_regex_Pattern_CANON_EQ;
jint SF_java_util_regex_Pattern_UNICODE_CHARACTER_CLASS;

void mark_java_util_regex_Pattern(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (java_util_regex_Pattern *) object;
	if (self->F_internal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_internal)->clazz)->markFunction)((jobject) self->F_internal, mark, depth + 1);
}

void clinit_java_util_regex_Pattern(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_regex_Pattern_serialVersionUID = jlong(-3628346657932720807ll);
	SF_java_util_regex_Pattern_UNIX_LINES = jint(1);
	SF_java_util_regex_Pattern_CASE_INSENSITIVE = jint(2);
	SF_java_util_regex_Pattern_COMMENTS = jint(4);
	SF_java_util_regex_Pattern_MULTILINE = jint(8);
	SF_java_util_regex_Pattern_LITERAL = jint(16);
	SF_java_util_regex_Pattern_DOTALL = jint(32);
	SF_java_util_regex_Pattern_UNICODE_CASE = jint(64);
	SF_java_util_regex_Pattern_CANON_EQ = jint(128);
	SF_java_util_regex_Pattern_UNICODE_CHARACTER_CLASS = jint(256);
}

jobject SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:compile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Pattern(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(119);
	clinit_java_util_regex_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_regex_Pattern);
	init_java_util_regex_Pattern_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:compile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Pattern(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(144);
	clinit_java_util_regex_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_regex_Pattern);
	init_java_util_regex_Pattern_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Pattern_pattern_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:pattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((java_util_regex_Pattern *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_regexodus_Pattern_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Pattern_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((java_util_regex_Pattern *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_regexodus_Pattern_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:matcher", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	clinit_java_util_regex_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_regex_Matcher);
	init_java_util_regex_Matcher_java_util_regex_Pattern_java_lang_CharSequence(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Pattern_flags_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:flags", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return ((jint)((java_util_regex_Pattern *) NULL_CHECK((frame[0].o)))->F_flags);
	}

	popStackFrame(ctx);
}

jbool SM_java_util_regex_Pattern_matches_java_lang_String_java_lang_CharSequence_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:matches", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Pattern(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, (frame[2].o), (frame[1].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:split", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(279);
	frame[3].i = (jint(0));
	LINE_NUMBER(280);
	if ((frame[2].i) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(281);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(282);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	sp[1].o = (jobject)((java_util_regex_Pattern *) NULL_CHECK((frame[0].o)))->F_internal;
	init_regexodus_Matcher_regexodus_Pattern_java_lang_CharSequence(ctx, sp[0].o, sp[1].o, (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(286);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	if (temp0 >= ((frame[2].i) - (jint(1)))) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(288);
	jint temp2 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[7].o));
	LINE_NUMBER(289);
	jint temp3 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[6].o));
	frame[3].i = temp3;
	LINE_NUMBER(290);
	goto label_6;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	if (temp0 != ((frame[2].i) - (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(292);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(293);
	jint temp2 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[5].o), (frame[7].o));
	LINE_NUMBER(294);
	jint temp3 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[6].o));
	frame[3].i = temp3;
	LINE_NUMBER(295);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(299);
	if ((frame[3].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(303);
	if ((frame[4].i) == 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	if (temp0 >= (frame[2].i)) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(304);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, sp[1].o))(ctx, sp[1].o, temp0, temp1);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp2 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(308);
	if ((frame[2].i) != 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(309);
	if ((frame[7].i) <= 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[5].o), ((frame[7].i) - (jint(1))));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(310);
	INST_IINC(7, -1);
	goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_java_util_ArrayList_subList_int_int_R_java_util_List) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_subList_int_int_R_java_util_List])(ctx, (frame[5].o), (jint(0)), (frame[7].i));
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[8].o));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:split", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_regex_Pattern_quote_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:quote", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Pattern(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\E"_j))));
	frame[1].i = temp0;
	LINE_NUMBER(361);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(362);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\Q"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\E"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(364);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\Q"_j))));
	LINE_NUMBER(366);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(367);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\E"_j))), (frame[3].i));
	frame[1].i = temp0;
	if (temp0 == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[3].i), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	frame[3].i = ((frame[1].i) + (jint(2)));
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\E\\\\E\\Q"_j))));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\E"_j))));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_regex_Pattern_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Pattern:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Pattern(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(378);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(379);
	if (((frame[2].i) & (jint(2))) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(380);
	((java_util_regex_Pattern *) NULL_CHECK((frame[0].o)))->F_flags = (frame[2].i);
	LINE_NUMBER(381);
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if (((frame[2].i) & (32)) == 0) goto label_6;
	}
	INST_ICONST(4);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(382);
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if (((frame[2].i) & (jint(4))) == 0) goto label_9;
	}
	INST_BIPUSH(8);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(383);
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if (((frame[2].i) & (8)) == 0) goto label_12;
	}
	INST_ICONST(2);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(384);
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if (((frame[2].i) & (256)) == 0) goto label_15;
	}
	INST_BIPUSH(16);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(385);
	if (((frame[2].i) & (16)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_regex_Pattern_quote_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_int_R_regexodus_Pattern(ctx, sp[1].o, (frame[3].i));
	((java_util_regex_Pattern *) NULL_CHECK(sp[0].o))->F_internal = (jref) sp[1].o;
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_int_R_regexodus_Pattern(ctx, (frame[1].o), (frame[3].i));
	((java_util_regex_Pattern *) NULL_CHECK(sp[0].o))->F_internal = (jref) sp[1].o;
	}
label_20:;
	LINE_NUMBER(389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_regex_Pattern[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_regex_Pattern_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_regex_Pattern_pattern_R_java_lang_String,
	(void *) M_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Pattern_flags_R_int,
	(void *) M_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String,
	(void *) M_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String,
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
	{ "pattern", "()Ljava/lang/String;" },
	{ "matcher", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;" },
	{ "flags", "()I" },
	{ "split", "(Ljava/lang/CharSequence;I)[Ljava/lang/String;" },
	{ "split", "(Ljava/lang/CharSequence;)[Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_regex_Pattern_serialVersionUID, "J", 26 },
	{ "internal", &class_regexodus_Pattern, offsetof(java_util_regex_Pattern, F_internal), "Lregexodus/Pattern;", 1 },
	{ "flags", &class_int, offsetof(java_util_regex_Pattern, F_flags), "I", 2 },
	{ "UNIX_LINES", &class_int, (intptr_t) &SF_java_util_regex_Pattern_UNIX_LINES, "I", 25 },
	{ "CASE_INSENSITIVE", &class_int, (intptr_t) &SF_java_util_regex_Pattern_CASE_INSENSITIVE, "I", 25 },
	{ "COMMENTS", &class_int, (intptr_t) &SF_java_util_regex_Pattern_COMMENTS, "I", 25 },
	{ "MULTILINE", &class_int, (intptr_t) &SF_java_util_regex_Pattern_MULTILINE, "I", 25 },
	{ "LITERAL", &class_int, (intptr_t) &SF_java_util_regex_Pattern_LITERAL, "I", 25 },
	{ "DOTALL", &class_int, (intptr_t) &SF_java_util_regex_Pattern_DOTALL, "I", 25 },
	{ "UNICODE_CASE", &class_int, (intptr_t) &SF_java_util_regex_Pattern_UNICODE_CASE, "I", 25 },
	{ "CANON_EQ", &class_int, (intptr_t) &SF_java_util_regex_Pattern_CANON_EQ, "I", 25 },
	{ "UNICODE_CHARACTER_CLASS", &class_int, (intptr_t) &SF_java_util_regex_Pattern_UNICODE_CHARACTER_CLASS, "I", 25 },
};

static MethodMetadata methods[] {
	{ "compile", (intptr_t) SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern, 0, "(Ljava/lang/String;)Ljava/util/regex/Pattern;", 9 },
	{ "compile", (intptr_t) SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern, 0, "(Ljava/lang/String;I)Ljava/util/regex/Pattern;", 9 },
	{ "pattern", (intptr_t) M_java_util_regex_Pattern_pattern_R_java_lang_String, VTABLE_java_util_regex_Pattern_pattern_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_java_util_regex_Pattern_toString_R_java_lang_String, VTABLE_java_util_regex_Pattern_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "matcher", (intptr_t) M_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher, VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher, "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;", 1 },
	{ "flags", (intptr_t) M_java_util_regex_Pattern_flags_R_int, VTABLE_java_util_regex_Pattern_flags_R_int, "()I", 1 },
	{ "matches", (intptr_t) SM_java_util_regex_Pattern_matches_java_lang_String_java_lang_CharSequence_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/CharSequence;)Z", 9 },
	{ "split", (intptr_t) M_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String, VTABLE_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String, "(Ljava/lang/CharSequence;I)[Ljava/lang/String;", 1 },
	{ "split", (intptr_t) M_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String, VTABLE_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String, "(Ljava/lang/CharSequence;)[Ljava/lang/String;", 1 },
	{ "quote", (intptr_t) SM_java_util_regex_Pattern_quote_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "<init>", (intptr_t) init_java_util_regex_Pattern_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
};

Class class_java_util_regex_Pattern{
		.nativeName = (intptr_t) "java/util/regex/Pattern",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_regex_Pattern),
		.classVtable = (intptr_t) vtable_java_util_regex_Pattern,
		.staticInitializer = (intptr_t) clinit_java_util_regex_Pattern,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_regex_Pattern,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_regex_Pattern = registerClass(&class_java_util_regex_Pattern);

}
