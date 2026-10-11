#include "java/util/regex/Matcher.h"
#include "regexodus/MatchResult.h"
#include "java/lang/StringBuilder.h"
#include "java/util/regex/Matcher_MR.h"
#include "regexodus/Matcher.h"
#include "regexodus/Pattern.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/Replacer_StringBufferBuffer.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/util/regex/MatchResult.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/String.h"
#include "regexodus/PerlSubstitution.h"
#include "java/lang/NullPointerException.h"
#include "regexodus/Replacer.h"

extern "C" {


void mark_java_util_regex_Matcher(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_regex_Matcher *) object;
	if (self->F_matcher)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_matcher)->clazz)->markFunction)((jobject) self->F_matcher, mark, depth + 1);
	if (self->F_pattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pattern)->clazz)->markFunction)((jobject) self->F_pattern, mark, depth + 1);
}

void clinit_java_util_regex_Matcher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_regex_Matcher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Matcher(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_regex_Matcher_java_util_regex_Pattern_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Matcher(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_regexodus_Matcher(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Matcher);
	sp[2].o = (jobject)((java_util_regex_Pattern *) NULL_CHECK((frame[1].o)))->F_internal;
	init_regexodus_Matcher_regexodus_Pattern_java_lang_CharSequence(ctx, sp[1].o, sp[2].o, (frame[2].o));
	((java_util_regex_Matcher *) NULL_CHECK(sp[0].o))->F_matcher = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:pattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_pattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:toMatchResult", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	clinit_java_util_regex_Matcher$MR(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_regex_Matcher$MR);
	sp[1].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((func_regexodus_Matcher_copy_R_regexodus_Matcher) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_Matcher_copy_R_regexodus_Matcher])(ctx, sp[1].o);
	init_java_util_regex_Matcher$MR_regexodus_Matcher(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:usePattern", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(124);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pattern cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((java_util_regex_Pattern *) NULL_CHECK((frame[1].o)))->F_internal;
	((func_regexodus_Matcher_setPattern_regexodus_Pattern) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setPattern_regexodus_Pattern])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_reset_R_java_util_regex_Matcher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	((func_regexodus_Matcher_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_flush])(ctx, sp[0].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	((func_regexodus_Matcher_setTarget_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_reset_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_regex_Matcher_reset_R_java_util_regex_Matcher])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_start_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:start", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_start_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_start_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_int_R_int])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_start_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_start_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_end_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_end_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_int_R_int])(ctx, sp[0].o, (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_end_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:end", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_end_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_end_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_end_int_R_int])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_group_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:group", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_regexodus_Matcher_group_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_group_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:group", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:group", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_regexodus_Matcher_group_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_group_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_groupCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:groupCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_groupCount_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_groupCount_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_matches_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:matches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_matches_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_find_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:find", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_find_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:find", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_targetEnd_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_targetEnd_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(386);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(387);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Illegal start index"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_reset_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_regex_Matcher_reset_R_java_util_regex_Matcher])(ctx, (frame[0].o));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	((func_regexodus_Matcher_setPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setPosition_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_lookingAt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:lookingAt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_search_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_search_int_R_boolean])(ctx, sp[0].o, (8));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_regex_Matcher_quoteReplacement_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:quoteReplacement", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_regex_Matcher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(426);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (92));
	if (temp0 != (jint(-1))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (36));
	if (temp0 != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(428);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(429);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(430);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(431);
	if ((frame[3].i) == (92)) goto label_8;
	}
	{
	if ((frame[3].i) != (36)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (92));
	}
label_9:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(429);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:appendReplacement", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuffer_R_regexodus_Replacer$StringBufferBuffer(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(523);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, sp[0].o, (jint(-1)), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(524);
	clinit_regexodus_PerlSubstitution(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	((func_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, sp[0].o, sp[1].o, (-2));
	LINE_NUMBER(526);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:appendTail", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = -3;
	sp[1].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuffer_R_regexodus_Replacer$StringBufferBuffer(ctx, (frame[1].o));
	jint temp1 = (jint)((func_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_getGroup_int_regexodus_TextBuffer_R_boolean])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:replaceAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_reset_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_regex_Matcher_reset_R_java_util_regex_Matcher])(ctx, (frame[0].o));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_replaceAll_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:replaceFirst", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(620);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(621);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"replacement"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_reset_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_regex_Matcher_reset_R_java_util_regex_Matcher])(ctx, (frame[0].o));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_replaceFirst_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:region", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(646);
	if ((frame[1].i) < 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i >= 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(647);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"start"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(648);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp1 = (jint)((func_regexodus_Matcher_dataEnd_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_dataEnd_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(649);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"end"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(650);
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(651);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"start > end"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(652);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((func_regexodus_Matcher_targetChars_R_Array1_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_regexodus_Matcher_targetChars_R_Array1_char])(ctx, sp[1].o);
	((func_regexodus_Matcher_setTarget_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, (frame[1].i), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_regionStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:regionStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_targetStart_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_targetStart_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_regex_Matcher_regionEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:regionEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_targetEnd_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_targetEnd_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_hasTransparentBounds_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:hasTransparentBounds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:useTransparentBounds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(691);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_hasAnchoringBounds_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:hasAnchoringBounds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:useAnchoringBounds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(709);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_regex_Matcher_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((java_util_regex_Matcher *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_regexodus_Matcher_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_hitEnd_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:hitEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(727);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_regex_Matcher_requireEnd_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/regex/Matcher:requireEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(734);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_regex_Matcher[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_regex_Matcher_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_regex_Matcher_start_R_int,
	(void *) M_java_util_regex_Matcher_start_int_R_int,
	(void *) M_java_util_regex_Matcher_start_java_lang_String_R_int,
	(void *) M_java_util_regex_Matcher_end_R_int,
	(void *) M_java_util_regex_Matcher_end_int_R_int,
	(void *) M_java_util_regex_Matcher_end_java_lang_String_R_int,
	(void *) M_java_util_regex_Matcher_group_R_java_lang_String,
	(void *) M_java_util_regex_Matcher_group_int_R_java_lang_String,
	(void *) M_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String,
	(void *) M_java_util_regex_Matcher_groupCount_R_int,
	(void *) M_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern,
	(void *) M_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult,
	(void *) M_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_reset_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_matches_R_boolean,
	(void *) M_java_util_regex_Matcher_find_R_boolean,
	(void *) M_java_util_regex_Matcher_find_int_R_boolean,
	(void *) M_java_util_regex_Matcher_lookingAt_R_boolean,
	(void *) M_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer,
	(void *) M_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String,
	(void *) M_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String,
	(void *) M_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_regionStart_R_int,
	(void *) M_java_util_regex_Matcher_regionEnd_R_int,
	(void *) M_java_util_regex_Matcher_hasTransparentBounds_R_boolean,
	(void *) M_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_hasAnchoringBounds_R_boolean,
	(void *) M_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher,
	(void *) M_java_util_regex_Matcher_hitEnd_R_boolean,
	(void *) M_java_util_regex_Matcher_requireEnd_R_boolean,
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
	{ "start", "()I" },
	{ "start", "(I)I" },
	{ "start", "(Ljava/lang/String;)I" },
	{ "end", "()I" },
	{ "end", "(I)I" },
	{ "end", "(Ljava/lang/String;)I" },
	{ "group", "()Ljava/lang/String;" },
	{ "group", "(I)Ljava/lang/String;" },
	{ "group", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "groupCount", "()I" },
	{ "pattern", "()Ljava/util/regex/Pattern;" },
	{ "toMatchResult", "()Ljava/util/regex/MatchResult;" },
	{ "usePattern", "(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;" },
	{ "reset", "()Ljava/util/regex/Matcher;" },
	{ "reset", "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;" },
	{ "matches", "()Z" },
	{ "find", "()Z" },
	{ "find", "(I)Z" },
	{ "lookingAt", "()Z" },
	{ "appendReplacement", "(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;" },
	{ "appendTail", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;" },
	{ "replaceAll", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "replaceFirst", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "region", "(II)Ljava/util/regex/Matcher;" },
	{ "regionStart", "()I" },
	{ "regionEnd", "()I" },
	{ "hasTransparentBounds", "()Z" },
	{ "useTransparentBounds", "(Z)Ljava/util/regex/Matcher;" },
	{ "hasAnchoringBounds", "()Z" },
	{ "useAnchoringBounds", "(Z)Ljava/util/regex/Matcher;" },
	{ "hitEnd", "()Z" },
	{ "requireEnd", "()Z" },
};

static jclass interfaces[] { &class_java_util_regex_MatchResult, };

static jclass innerClasses[] {
	&class_java_util_regex_Matcher$MR,
};

static FieldMetadata fields[] {
	{ "matcher", &class_regexodus_Matcher, offsetof(java_util_regex_Matcher, F_matcher), "Lregexodus/Matcher;", 2 },
	{ "pattern", &class_java_util_regex_Pattern, offsetof(java_util_regex_Matcher, F_pattern), "Ljava/util/regex/Pattern;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_regex_Matcher, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_util_regex_Matcher_java_util_regex_Pattern_java_lang_CharSequence, 0, "(Ljava/util/regex/Pattern;Ljava/lang/CharSequence;)V", 0 },
	{ "pattern", (intptr_t) M_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern, VTABLE_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern, "()Ljava/util/regex/Pattern;", 1 },
	{ "toMatchResult", (intptr_t) M_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult, VTABLE_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult, "()Ljava/util/regex/MatchResult;", 1 },
	{ "usePattern", (intptr_t) M_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher, "(Ljava/util/regex/Pattern;)Ljava/util/regex/Matcher;", 1 },
	{ "reset", (intptr_t) M_java_util_regex_Matcher_reset_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_reset_R_java_util_regex_Matcher, "()Ljava/util/regex/Matcher;", 1 },
	{ "reset", (intptr_t) M_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher, "(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;", 1 },
	{ "start", (intptr_t) M_java_util_regex_Matcher_start_R_int, VTABLE_java_util_regex_Matcher_start_R_int, "()I", 1 },
	{ "start", (intptr_t) M_java_util_regex_Matcher_start_int_R_int, VTABLE_java_util_regex_Matcher_start_int_R_int, "(I)I", 1 },
	{ "start", (intptr_t) M_java_util_regex_Matcher_start_java_lang_String_R_int, VTABLE_java_util_regex_Matcher_start_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "end", (intptr_t) M_java_util_regex_Matcher_end_java_lang_String_R_int, VTABLE_java_util_regex_Matcher_end_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "end", (intptr_t) M_java_util_regex_Matcher_end_R_int, VTABLE_java_util_regex_Matcher_end_R_int, "()I", 1 },
	{ "end", (intptr_t) M_java_util_regex_Matcher_end_int_R_int, VTABLE_java_util_regex_Matcher_end_int_R_int, "(I)I", 1 },
	{ "group", (intptr_t) M_java_util_regex_Matcher_group_R_java_lang_String, VTABLE_java_util_regex_Matcher_group_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "group", (intptr_t) M_java_util_regex_Matcher_group_int_R_java_lang_String, VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "group", (intptr_t) M_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String, VTABLE_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "groupCount", (intptr_t) M_java_util_regex_Matcher_groupCount_R_int, VTABLE_java_util_regex_Matcher_groupCount_R_int, "()I", 1 },
	{ "matches", (intptr_t) M_java_util_regex_Matcher_matches_R_boolean, VTABLE_java_util_regex_Matcher_matches_R_boolean, "()Z", 1 },
	{ "find", (intptr_t) M_java_util_regex_Matcher_find_R_boolean, VTABLE_java_util_regex_Matcher_find_R_boolean, "()Z", 1 },
	{ "find", (intptr_t) M_java_util_regex_Matcher_find_int_R_boolean, VTABLE_java_util_regex_Matcher_find_int_R_boolean, "(I)Z", 1 },
	{ "lookingAt", (intptr_t) M_java_util_regex_Matcher_lookingAt_R_boolean, VTABLE_java_util_regex_Matcher_lookingAt_R_boolean, "()Z", 1 },
	{ "quoteReplacement", (intptr_t) SM_java_util_regex_Matcher_quoteReplacement_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "appendReplacement", (intptr_t) M_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher, "(Ljava/lang/StringBuffer;Ljava/lang/String;)Ljava/util/regex/Matcher;", 1 },
	{ "appendTail", (intptr_t) M_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer, VTABLE_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer, "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;", 1 },
	{ "replaceAll", (intptr_t) M_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String, VTABLE_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "replaceFirst", (intptr_t) M_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String, VTABLE_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "region", (intptr_t) M_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher, "(II)Ljava/util/regex/Matcher;", 1 },
	{ "regionStart", (intptr_t) M_java_util_regex_Matcher_regionStart_R_int, VTABLE_java_util_regex_Matcher_regionStart_R_int, "()I", 1 },
	{ "regionEnd", (intptr_t) M_java_util_regex_Matcher_regionEnd_R_int, VTABLE_java_util_regex_Matcher_regionEnd_R_int, "()I", 1 },
	{ "hasTransparentBounds", (intptr_t) M_java_util_regex_Matcher_hasTransparentBounds_R_boolean, VTABLE_java_util_regex_Matcher_hasTransparentBounds_R_boolean, "()Z", 1 },
	{ "useTransparentBounds", (intptr_t) M_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher, "(Z)Ljava/util/regex/Matcher;", 1 },
	{ "hasAnchoringBounds", (intptr_t) M_java_util_regex_Matcher_hasAnchoringBounds_R_boolean, VTABLE_java_util_regex_Matcher_hasAnchoringBounds_R_boolean, "()Z", 1 },
	{ "useAnchoringBounds", (intptr_t) M_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher, VTABLE_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher, "(Z)Ljava/util/regex/Matcher;", 1 },
	{ "toString", (intptr_t) M_java_util_regex_Matcher_toString_R_java_lang_String, VTABLE_java_util_regex_Matcher_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hitEnd", (intptr_t) M_java_util_regex_Matcher_hitEnd_R_boolean, VTABLE_java_util_regex_Matcher_hitEnd_R_boolean, "()Z", 1 },
	{ "requireEnd", (intptr_t) M_java_util_regex_Matcher_requireEnd_R_boolean, VTABLE_java_util_regex_Matcher_requireEnd_R_boolean, "()Z", 1 },
};

Class class_java_util_regex_Matcher{
		.nativeName = (intptr_t) "java/util/regex/Matcher",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_regex_Matcher),
		.classVtable = (intptr_t) vtable_java_util_regex_Matcher,
		.staticInitializer = (intptr_t) clinit_java_util_regex_Matcher,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_regex_Matcher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_regex_Matcher = registerClass(&class_java_util_regex_Matcher);

}
