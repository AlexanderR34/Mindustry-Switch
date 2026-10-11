#include "regexodus/Replacer.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/Matcher.h"
#include "regexodus/Replacer_1.h"
#include "regexodus/Replacer_TableSubstitution.h"
#include "regexodus/Replacer_WriteException.h"
#include "java/io/Writer.h"
#include "regexodus/Replacer_StringBufferBuffer.h"
#include "java/lang/StringBuffer.h"
#include "regexodus/Substitution.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "regexodus/Replacer_DummySubstitution.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "regexodus/MatchResult.h"
#include "regexodus/Pattern.h"
#include "java/util/Iterator.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/Replacer_StringBuilderBuffer.h"
#include "java/util/Map.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "regexodus/PerlSubstitution.h"
#include "java/util/LinkedHashMap.h"
#include "regexodus/Replacer.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_regexodus_Replacer_serialVersionUID;

void mark_regexodus_Replacer(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Replacer *) object;
	if (self->F_pattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pattern)->clazz)->markFunction)((jobject) self->F_pattern, mark, depth + 1);
	if (self->F_substitution)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_substitution)->clazz)->markFunction)((jobject) self->F_substitution, mark, depth + 1);
}

void clinit_regexodus_Replacer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Replacer_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(97);
	((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(98);
	((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution = (jref) (frame[2].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Replacer_regexodus_Pattern_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(107);
	init_regexodus_Replacer_regexodus_Pattern_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Replacer_regexodus_Pattern_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(110);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(111);
	((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	clinit_regexodus_PerlSubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	clinit_regexodus_Replacer$DummySubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$DummySubstitution);
	init_regexodus_Replacer$DummySubstitution_java_lang_String(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((regexodus_Replacer *) NULL_CHECK(sp[0].o))->F_substitution = (jref) sp[1].o;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_setSubstitution_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:setSubstitution", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	clinit_regexodus_PerlSubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_regexodus_Replacer$DummySubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$DummySubstitution);
	init_regexodus_Replacer$DummySubstitution_java_lang_String(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	((regexodus_Replacer *) NULL_CHECK(sp[0].o))->F_substitution = (jref) sp[1].o;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp1 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(143);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp1 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o), (frame[2].i));
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(149);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(155);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(156);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(162);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[2].i) < 0) goto label_1;
	}
	INST_ILOAD(2);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	init_java_lang_StringBuilder_int(ctx, sp[0].o, sp[2].i);
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	sp[2].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, (frame[2].o));
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	sp[2].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, (frame[2].o));
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[2].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, (frame[4].o));
	jint temp2 = (jint)M_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, (frame[3].o));
	jint temp1 = (jint)M_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, (frame[3].o));
	jint temp0 = (jint)M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, (frame[3].o));
	jint temp1 = (jint)M_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[4].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(249);
	frame[3].i = (jint(1));
	LINE_NUMBER(250);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(251);
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_5;
	goto label_2;
label_5:;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, (frame[0].o), (jint(-1)), (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(254);
	((func_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer) resolveInterfaceMethod(ctx, &class_regexodus_Substitution, INDEX_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(255);
	INST_IINC(4, 1);
	LINE_NUMBER(256);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[0].o), (frame[0].o), (-2));
	LINE_NUMBER(257);
	frame[3].i = (jint(0));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, (frame[0].o), (-3), (frame[2].o));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(275);
	frame[4].i = (jint(1));
	LINE_NUMBER(276);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(277);
	if ((frame[5].i) >= (frame[3].i)) goto label_3;
	}
	{
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_5;
	goto label_2;
label_5:;
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, (frame[0].o), (jint(-1)), (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(280);
	((func_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer) resolveInterfaceMethod(ctx, &class_regexodus_Substitution, INDEX_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(281);
	INST_IINC(5, 1);
	LINE_NUMBER(282);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[0].o), (frame[0].o), (-2));
	LINE_NUMBER(283);
	frame[4].i = (jint(0));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, (frame[0].o), (-3), (frame[2].o));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool SM_regexodus_Replacer_replaceStep_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replaceStep", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(303);
	frame[3].i = (jint(1));
	LINE_NUMBER(304);
	frame[4].i = (jint(0));
	frame[5].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(305);
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_6;
	goto label_3;
label_6:;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, (frame[0].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, (frame[0].o), (jint(-1)), (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(308);
	((func_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer) resolveInterfaceMethod(ctx, &class_regexodus_Substitution, INDEX_regexodus_Substitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(309);
	INST_IINC(4, 1);
	LINE_NUMBER(310);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[0].o), (frame[0].o), (-2));
	LINE_NUMBER(311);
	frame[3].i = (jint(0));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(313);
	if ((frame[4].i) <= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_regexodus_Replacer$WriteException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_regexodus_Replacer_wrap_java_io_Writer_R_regexodus_TextBuffer(ctx, (frame[2].o));
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(320);
	frame[3].o = sp[0].o;
	LINE_NUMBER(321);
	sp[0].o = (jobject)((regexodus_Replacer$WriteException *) NULL_CHECK((frame[3].o)))->F_reason;
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:replace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Replacer_makeTable_Array1_java_lang_String_R_regexodus_Replacer(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:makeTable", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(405);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) >= (jint(2))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(406);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	clinit_regexodus_Replacer$DummySubstitution(ctx);
	sp[2].o = gcAlloc(ctx, &class_regexodus_Replacer$DummySubstitution);
	init_regexodus_Replacer$DummySubstitution_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(407);
	clinit_regexodus_Replacer$TableSubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$TableSubstitution);
	init_regexodus_Replacer$TableSubstitution_Array1_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(408);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[2].o = sp[0].o;
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"(?>"_j))));
	LINE_NUMBER(410);
	sp[0].o = (jobject)((regexodus_Replacer$TableSubstitution *) NULL_CHECK((frame[1].o)))->F_dictionary;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_keySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\Q"_j))));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(414);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\E|"_j))));
	LINE_NUMBER(415);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= (jint(3))) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	((func_java_lang_StringBuilder_setCharAt_int_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setCharAt_int_char])(ctx, sp[0].o, (temp0 - (jint(1))), (41));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (41));
	}
label_13:;
	{
	LINE_NUMBER(418);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(ctx, sp[1].o);
	init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Replacer_makeTable_java_util_Map_R_regexodus_Replacer(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:makeTable", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(435);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(436);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	clinit_regexodus_Replacer$DummySubstitution(ctx);
	sp[2].o = gcAlloc(ctx, &class_regexodus_Replacer$DummySubstitution);
	init_regexodus_Replacer$DummySubstitution_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(437);
	clinit_regexodus_Replacer$TableSubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$TableSubstitution);
	clinit_java_util_LinkedHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap_java_util_Map(ctx, sp[1].o, (frame[0].o));
	init_regexodus_Replacer$TableSubstitution_java_util_LinkedHashMap(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(438);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[2].o = sp[0].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"(?>"_j))));
	LINE_NUMBER(440);
	sp[0].o = (jobject)((regexodus_Replacer$TableSubstitution *) NULL_CHECK((frame[1].o)))->F_dictionary;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_keySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_keySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\Q"_j))));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\\E|"_j))));
	LINE_NUMBER(445);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(446);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= (jint(3))) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	((func_java_lang_StringBuilder_setCharAt_int_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setCharAt_int_char])(ctx, sp[0].o, (temp0 - (jint(1))), (41));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (41));
	}
label_13:;
	{
	LINE_NUMBER(448);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(ctx, sp[1].o);
	init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(452);
	clinit_regexodus_Replacer$StringBuilderBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$StringBuilderBuffer);
	init_regexodus_Replacer$StringBuilderBuffer_java_lang_StringBuilder(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Replacer_wrap_java_lang_StringBuffer_R_regexodus_Replacer$StringBufferBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(490);
	clinit_regexodus_Replacer$StringBufferBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$StringBufferBuffer);
	init_regexodus_Replacer$StringBufferBuffer_java_lang_StringBuffer(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Replacer_wrap_java_io_Writer_R_regexodus_TextBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(529);
	clinit_regexodus_Replacer$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer$1);
	init_regexodus_Replacer$1_java_io_Writer(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_getPattern_R_regexodus_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:getPattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_setPattern_regexodus_Pattern(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:setPattern", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(569);
	((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_getSubstitution_R_regexodus_Substitution(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:getSubstitution", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_setSubstitution_regexodus_Substitution(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:setSubstitution", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(577);
	((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution = (jref) (frame[1].o);
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Replacer_setSubstitution_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:setSubstitution", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(581);
	sp[0].o = frame[0].o;
	clinit_regexodus_PerlSubstitution(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((regexodus_Replacer *) NULL_CHECK(sp[0].o))->F_substitution = (jref) sp[1].o;
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Replacer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(587);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(589);
	frame[2].o = (checkCast(ctx, &class_regexodus_Replacer, (frame[1].o)));
	LINE_NUMBER(591);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[2].o)))->F_pattern;
	jint temp0 = (jint)((func_regexodus_Pattern_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[2].o)))->F_pattern;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[2].o)))->F_substitution;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	goto label_9;
label_8:;
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[2].o)))->F_substitution;
	if (sp[0].o != nullptr) goto label_7;
	}
label_9:;
	INST_ICONST(1);
	goto label_6;
label_7:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_Replacer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	jint temp0 = (jint)((func_regexodus_Pattern_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(598);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Replacer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(604);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Replacer{pattern="_j))));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", substitution="_j))));
	sp[1].o = (jobject)((regexodus_Replacer *) NULL_CHECK((frame[0].o)))->F_substitution;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Replacer[] {
	(void *) M_regexodus_Replacer_hashCode_R_int,
	(void *) M_regexodus_Replacer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Replacer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Replacer_setSubstitution_java_lang_String_boolean,
	(void *) M_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String,
	(void *) M_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String,
	(void *) M_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String,
	(void *) M_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String,
	(void *) M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int,
	(void *) M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int,
	(void *) M_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int,
	(void *) M_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int,
	(void *) M_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int,
	(void *) M_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int,
	(void *) M_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int,
	(void *) M_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer,
	(void *) M_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer,
	(void *) M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer,
	(void *) M_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer,
	(void *) M_regexodus_Replacer_getPattern_R_regexodus_Pattern,
	(void *) M_regexodus_Replacer_setPattern_regexodus_Pattern,
	(void *) M_regexodus_Replacer_getSubstitution_R_regexodus_Substitution,
	(void *) M_regexodus_Replacer_setSubstitution_regexodus_Substitution,
	(void *) M_regexodus_Replacer_setSubstitution_java_lang_String,
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
	{ "setSubstitution", "(Ljava/lang/String;Z)V" },
	{ "replace", "(Ljava/lang/CharSequence;)Ljava/lang/String;" },
	{ "replace", "(Ljava/lang/CharSequence;I)Ljava/lang/String;" },
	{ "replace", "([CII)Ljava/lang/String;" },
	{ "replace", "(Lregexodus/MatchResult;I)Ljava/lang/String;" },
	{ "replace", "(Ljava/io/Reader;I)Ljava/lang/String;" },
	{ "replace", "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)I" },
	{ "replace", "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;I)I" },
	{ "replace", "([CIILjava/lang/StringBuilder;)I" },
	{ "replace", "(Lregexodus/MatchResult;ILjava/lang/StringBuilder;)I" },
	{ "replace", "(Lregexodus/MatchResult;Ljava/lang/String;Ljava/lang/StringBuilder;)I" },
	{ "replace", "(Ljava/io/Reader;ILjava/lang/StringBuilder;)I" },
	{ "replace", "(Ljava/lang/CharSequence;Lregexodus/TextBuffer;)I" },
	{ "replace", "([CIILregexodus/TextBuffer;)I" },
	{ "replace", "(Lregexodus/MatchResult;ILregexodus/TextBuffer;)I" },
	{ "replace", "(Lregexodus/MatchResult;Ljava/lang/String;Lregexodus/TextBuffer;)I" },
	{ "replace", "(Ljava/io/Reader;ILregexodus/TextBuffer;)I" },
	{ "replace", "(Ljava/lang/CharSequence;Ljava/io/Writer;)V" },
	{ "replace", "([CIILjava/io/Writer;)V" },
	{ "replace", "(Lregexodus/MatchResult;ILjava/io/Writer;)V" },
	{ "replace", "(Lregexodus/MatchResult;Ljava/lang/String;Ljava/io/Writer;)V" },
	{ "replace", "(Ljava/io/Reader;ILjava/io/Writer;)V" },
	{ "getPattern", "()Lregexodus/Pattern;" },
	{ "setPattern", "(Lregexodus/Pattern;)V" },
	{ "getSubstitution", "()Lregexodus/Substitution;" },
	{ "setSubstitution", "(Lregexodus/Substitution;)V" },
	{ "setSubstitution", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_regexodus_Replacer$WriteException,
	&class_regexodus_Replacer$StringBufferBuffer,
	&class_regexodus_Replacer$StringBuilderBuffer,
	&class_regexodus_Replacer$TableSubstitution,
	&class_regexodus_Replacer$DummySubstitution,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Replacer_serialVersionUID, "J", 26 },
	{ "pattern", &class_regexodus_Pattern, offsetof(regexodus_Replacer, F_pattern), "Lregexodus/Pattern;", 2 },
	{ "substitution", &class_regexodus_Substitution, offsetof(regexodus_Replacer, F_substitution), "Lregexodus/Substitution;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution, 0, "(Lregexodus/Pattern;Lregexodus/Substitution;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_Replacer_regexodus_Pattern_java_lang_String, 0, "(Lregexodus/Pattern;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_Replacer_regexodus_Pattern_java_lang_String_boolean, 0, "(Lregexodus/Pattern;Ljava/lang/String;Z)V", 1 },
	{ "setSubstitution", (intptr_t) M_regexodus_Replacer_setSubstitution_java_lang_String_boolean, VTABLE_regexodus_Replacer_setSubstitution_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String, VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String, "(Ljava/lang/CharSequence;)Ljava/lang/String;", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String, VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String, "(Ljava/lang/CharSequence;I)Ljava/lang/String;", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String, VTABLE_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String, "([CII)Ljava/lang/String;", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String, "(Lregexodus/MatchResult;I)Ljava/lang/String;", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String, VTABLE_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String, "(Ljava/io/Reader;I)Ljava/lang/String;", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int, VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int, "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int, VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int, "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;I)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int, VTABLE_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int, "([CIILjava/lang/StringBuilder;)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int, "(Lregexodus/MatchResult;ILjava/lang/StringBuilder;)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int, "(Lregexodus/MatchResult;Ljava/lang/String;Ljava/lang/StringBuilder;)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int, VTABLE_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int, "(Ljava/io/Reader;ILjava/lang/StringBuilder;)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int, VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int, "(Ljava/lang/CharSequence;Lregexodus/TextBuffer;)I", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int, VTABLE_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int, "([CIILregexodus/TextBuffer;)I", 2 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int, "(Lregexodus/MatchResult;ILregexodus/TextBuffer;)I", 2 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int, "(Lregexodus/MatchResult;Ljava/lang/String;Lregexodus/TextBuffer;)I", 2 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int, VTABLE_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int, "(Ljava/io/Reader;ILregexodus/TextBuffer;)I", 2 },
	{ "replace", (intptr_t) SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int, 0, "(Lregexodus/Matcher;Lregexodus/Substitution;Lregexodus/TextBuffer;)I", 9 },
	{ "replace", (intptr_t) SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int, 0, "(Lregexodus/Matcher;Lregexodus/Substitution;Lregexodus/TextBuffer;I)I", 9 },
	{ "replaceStep", (intptr_t) SM_regexodus_Replacer_replaceStep_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_boolean, 0, "(Lregexodus/Matcher;Lregexodus/Substitution;Lregexodus/TextBuffer;)Z", 9 },
	{ "replace", (intptr_t) SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int, 0, "(Lregexodus/Matcher;Lregexodus/Substitution;Ljava/io/Writer;)I", 10 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer, VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer, "(Ljava/lang/CharSequence;Ljava/io/Writer;)V", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer, VTABLE_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer, "([CIILjava/io/Writer;)V", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer, "(Lregexodus/MatchResult;ILjava/io/Writer;)V", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer, VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer, "(Lregexodus/MatchResult;Ljava/lang/String;Ljava/io/Writer;)V", 1 },
	{ "replace", (intptr_t) M_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer, VTABLE_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer, "(Ljava/io/Reader;ILjava/io/Writer;)V", 1 },
	{ "makeTable", (intptr_t) SM_regexodus_Replacer_makeTable_Array1_java_lang_String_R_regexodus_Replacer, 0, "([Ljava/lang/String;)Lregexodus/Replacer;", 137 },
	{ "makeTable", (intptr_t) SM_regexodus_Replacer_makeTable_java_util_Map_R_regexodus_Replacer, 0, "(Ljava/util/Map;)Lregexodus/Replacer;", 9 },
	{ "wrap", (intptr_t) SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer, 0, "(Ljava/lang/StringBuilder;)Lregexodus/Replacer$StringBuilderBuffer;", 9 },
	{ "wrap", (intptr_t) SM_regexodus_Replacer_wrap_java_lang_StringBuffer_R_regexodus_Replacer$StringBufferBuffer, 0, "(Ljava/lang/StringBuffer;)Lregexodus/Replacer$StringBufferBuffer;", 9 },
	{ "wrap", (intptr_t) SM_regexodus_Replacer_wrap_java_io_Writer_R_regexodus_TextBuffer, 0, "(Ljava/io/Writer;)Lregexodus/TextBuffer;", 10 },
	{ "getPattern", (intptr_t) M_regexodus_Replacer_getPattern_R_regexodus_Pattern, VTABLE_regexodus_Replacer_getPattern_R_regexodus_Pattern, "()Lregexodus/Pattern;", 1 },
	{ "setPattern", (intptr_t) M_regexodus_Replacer_setPattern_regexodus_Pattern, VTABLE_regexodus_Replacer_setPattern_regexodus_Pattern, "(Lregexodus/Pattern;)V", 1 },
	{ "getSubstitution", (intptr_t) M_regexodus_Replacer_getSubstitution_R_regexodus_Substitution, VTABLE_regexodus_Replacer_getSubstitution_R_regexodus_Substitution, "()Lregexodus/Substitution;", 1 },
	{ "setSubstitution", (intptr_t) M_regexodus_Replacer_setSubstitution_regexodus_Substitution, VTABLE_regexodus_Replacer_setSubstitution_regexodus_Substitution, "(Lregexodus/Substitution;)V", 1 },
	{ "setSubstitution", (intptr_t) M_regexodus_Replacer_setSubstitution_java_lang_String, VTABLE_regexodus_Replacer_setSubstitution_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "equals", (intptr_t) M_regexodus_Replacer_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Replacer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Replacer_hashCode_R_int, VTABLE_regexodus_Replacer_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_regexodus_Replacer_toString_R_java_lang_String, VTABLE_regexodus_Replacer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_regexodus_Replacer{
		.nativeName = (intptr_t) "regexodus/Replacer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Replacer),
		.classVtable = (intptr_t) vtable_regexodus_Replacer,
		.staticInitializer = (intptr_t) clinit_regexodus_Replacer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Replacer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Replacer = registerClass(&class_regexodus_Replacer);

}
