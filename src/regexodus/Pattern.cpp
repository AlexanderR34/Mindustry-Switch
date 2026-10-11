#include "regexodus/Pattern.h"
#include "java/lang/Integer.h"
#include "regexodus/MatchResult.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/Pattern.h"
#include "regexodus/Matcher.h"
#include "java/util/HashMap.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/ArrayList.h"
#include "regexodus/Term.h"
#include "regexodus/PatternSyntaxException.h"
#include "regexodus/REFlags.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "regexodus/Substitution.h"
#include "java/lang/String.h"
#include "regexodus/RETokenizer.h"
#include "java/io/Reader.h"
#include "regexodus/Replacer.h"
#include "java/lang/Class.h"
#include "java/util/List.h"

extern "C" {

jlong SF_regexodus_Pattern_serialVersionUID;

void mark_regexodus_Pattern(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Pattern *) object;
	if (self->F_stringRepr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringRepr)->clazz)->markFunction)((jobject) self->F_stringRepr, mark, depth + 1);
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_root0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root0)->clazz)->markFunction)((jobject) self->F_root0, mark, depth + 1);
	if (self->F_namedGroupMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_namedGroupMap)->clazz)->markFunction)((jobject) self->F_namedGroupMap, mark, depth + 1);
}

void clinit_regexodus_Pattern(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Pattern_serialVersionUID = jlong(65840ll);
}

void init_regexodus_Pattern(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(271);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(269);
	((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_caseless = (jint(0));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Pattern_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	init_regexodus_Pattern_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (16));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Pattern_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(306);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(269);
	((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_caseless = (jint(0));
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)SM_regexodus_Pattern_parseFlags_java_lang_String_R_int(ctx, (frame[2].o));
	M_regexodus_Pattern_internalCompile_java_lang_String_int(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Pattern_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(327);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(269);
	((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_caseless = (jint(0));
	LINE_NUMBER(328);
	M_regexodus_Pattern_internalCompile_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Pattern_setFlags_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:setFlags", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	jint temp0 = (jint)SM_regexodus_Pattern_parseFlags_java_lang_String_R_int(ctx, (frame[1].o));
	M_regexodus_Pattern_internalCompile_java_lang_String_int(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Pattern_setFlags_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:setFlags", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(368);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	M_regexodus_Pattern_internalCompile_java_lang_String_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Pattern_getFlags_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:getFlags", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return ((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags);
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:compile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(387);
	clinit_regexodus_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Pattern);
	init_regexodus_Pattern_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (16));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Pattern_compile_java_lang_String_int_R_regexodus_Pattern(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:compile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(404);
	clinit_regexodus_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Pattern);
	init_regexodus_Pattern_java_lang_String_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Pattern_compile_java_lang_String_java_lang_String_R_regexodus_Pattern(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:compile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(432);
	clinit_regexodus_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Pattern);
	init_regexodus_Pattern_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_regexodus_Pattern_internalCompile_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:internalCompile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(437);
	((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr = (jref) (frame[1].o);
	LINE_NUMBER(438);
	((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags = (frame[2].i);
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((frame[2].i) & (jint(1))) != (jint(1))) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	((regexodus_Pattern *) NULL_CHECK(sp[0].o))->F_caseless = sp[1].i;
	LINE_NUMBER(440);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (frame[2].i);
	SM_regexodus_Term_makeTree_java_lang_String_Array1_int_regexodus_Pattern(ctx, sp[0].o, sp[1].o, (frame[0].o));
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_regexodus_Pattern_groupCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:groupCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return ((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_memregs);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:groupId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_namedGroupMap;
	sp[0].o = (jobject)((func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Integer, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Pattern_matches_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matches", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_regexodus_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_matches_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Pattern_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:startsWith", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_regexodus_Matcher_matchesPrefix_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_matchesPrefix_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_matcher_R_regexodus_Matcher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matcher", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	init_regexodus_Matcher_regexodus_Pattern(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matcher", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(496);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	init_regexodus_Matcher_regexodus_Pattern(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(497);
	((func_regexodus_Matcher_setTarget_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matcher", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(505);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	init_regexodus_Matcher_regexodus_Pattern(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(506);
	((func_regexodus_Matcher_setTarget_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int])(ctx, (frame[4].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matcher", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(517);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	init_regexodus_Matcher_regexodus_Pattern(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(518);
	if ((isInstance(ctx, (frame[1].o), &class_regexodus_Matcher)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(519);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[3].o), (checkCast(ctx, &class_regexodus_Matcher, (frame[1].o))), (frame[2].i));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(521);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_regexodus_MatchResult_targetChars_R_Array1_char) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_targetChars_R_Array1_char, (frame[1].o)))(ctx, (frame[1].o));
	jint temp0 = (jint)((func_regexodus_MatchResult_start_int_R_int) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_start_int_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i));
	jint temp1 = (jint)((func_regexodus_MatchResult_targetStart_R_int) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_targetStart_R_int, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = (jint)((func_regexodus_MatchResult_length_int_R_int) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_length_int_R_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i));
	((func_regexodus_Matcher_setTarget_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setTarget_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3);
	}
label_4:;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matcher", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((func_regexodus_MatchResult_pattern_R_regexodus_Pattern) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_pattern_R_regexodus_Pattern, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(533);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"group not found:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(534);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher])(ctx, (frame[0].o), (frame[1].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:matcher", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(548);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	init_regexodus_Matcher_regexodus_Pattern(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(549);
	((func_regexodus_Matcher_setTarget_java_io_Reader_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_java_io_Reader_int])(ctx, (frame[3].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:replacer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(574);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	init_regexodus_Replacer_regexodus_Pattern_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:replacer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(585);
	clinit_regexodus_Replacer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Replacer);
	init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:tokenizer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(597);
	clinit_regexodus_RETokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_RETokenizer);
	init_regexodus_RETokenizer_regexodus_Pattern_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:tokenizer", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(609);
	clinit_regexodus_RETokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_RETokenizer);
	init_regexodus_RETokenizer_regexodus_Pattern_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:tokenizer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(622);
	clinit_regexodus_RETokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_RETokenizer);
	init_regexodus_RETokenizer_regexodus_Pattern_java_io_Reader_int(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_toString_d_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:toString_d", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((func_regexodus_Term_toStringAll_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_toStringAll_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Pattern_parseFlags_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:parseFlags", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(637);
	frame[1].i = (jint(1));
	LINE_NUMBER(638);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(639);
	frame[3].i = (16);
	LINE_NUMBER(640);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(641);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(642);
	switch((frame[5].i)) {
		case 43: goto label_8;
		case 45: goto label_9;
		default: goto label_10;
	}
	}
label_8:;
	{
	LINE_NUMBER(644);
	frame[1].i = (jint(1));
	LINE_NUMBER(645);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(647);
	frame[1].i = (jint(0));
	LINE_NUMBER(648);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(650);
	jint temp0 = (jint)SM_regexodus_Pattern_getFlag_char_R_int(ctx, (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(651);
	if ((frame[1].i) == 0) goto label_15;
	}
	{
	frame[3].i = ((frame[3].i) | (frame[6].i));
	goto label_12;
	}
label_15:;
	{
	LINE_NUMBER(652);
	frame[3].i = ((frame[3].i) & ((frame[6].i) ^ (jint(-1))));
	}
label_12:;
	{
	LINE_NUMBER(640);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(655);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Pattern_parseFlags_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:parseFlags", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(659);
	frame[3].i = (jint(1));
	LINE_NUMBER(660);
	frame[4].i = (16);
	LINE_NUMBER(661);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(662);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), ((frame[1].i) + (frame[5].i))));
	LINE_NUMBER(663);
	switch((frame[6].i)) {
		case 43: goto label_7;
		case 45: goto label_8;
		default: goto label_9;
	}
	}
label_7:;
	{
	LINE_NUMBER(665);
	frame[3].i = (jint(1));
	LINE_NUMBER(666);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(668);
	frame[3].i = (jint(0));
	LINE_NUMBER(669);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(671);
	jint temp0 = (jint)SM_regexodus_Pattern_getFlag_char_R_int(ctx, (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(672);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	frame[4].i = ((frame[4].i) | (frame[7].i));
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(673);
	frame[4].i = ((frame[4].i) & ((frame[7].i) ^ (jint(-1))));
	}
label_11:;
	{
	LINE_NUMBER(661);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Pattern_getFlag_char_R_int(jcontext ctx, jchar param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:getFlag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(680);
	switch((frame[0].i)) {
		case 88: goto label_1;
		case 105: goto label_2;
		case 109: goto label_3;
		case 115: goto label_4;
		case 117: goto label_5;
		case 120: goto label_6;
		default: goto label_7;
	}
	}
label_2:;
	{
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(684);
	popStackFrame(ctx);
	return (jint(2));
	}
label_4:;
	{
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return (jint(4));
	}
label_6:;
	{
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return (8);
	}
label_5:;
	{
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (16);
	}
label_1:;
	{
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return (32);
	}
label_7:;
	{
	LINE_NUMBER(694);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown flag: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_flagsAsString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:flagsAsString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(698);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (12));
	frame[1].o = sp[0].o;
	LINE_NUMBER(699);
	if ((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) & (16)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (117));
	}
label_2:;
	{
	LINE_NUMBER(701);
	if ((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(1))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (105));
	}
label_4:;
	{
	LINE_NUMBER(703);
	if ((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(2))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (109));
	}
label_6:;
	{
	LINE_NUMBER(705);
	if ((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) & (8)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (120));
	}
label_8:;
	{
	LINE_NUMBER(707);
	if ((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(4))) == 0) goto label_10;
	}
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (115));
	}
label_10:;
	{
	LINE_NUMBER(709);
	if ((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) & (32)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (88));
	}
label_12:;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:split", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(774);
	frame[3].i = (jint(0));
	LINE_NUMBER(775);
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
	LINE_NUMBER(776);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(777);
	sp[0].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(780);
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(781);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	if (temp0 >= ((frame[2].i) - (jint(1)))) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(782);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	frame[7].o = sp[0].o;
	LINE_NUMBER(783);
	jint temp2 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[7].o)))(ctx, (frame[7].o));
	if (temp2 == 0) goto label_12;
	}
	{
	LINE_NUMBER(784);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(785);
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[6].o));
	frame[3].i = temp0;
	LINE_NUMBER(786);
	goto label_6;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	if (temp0 != ((frame[2].i) - (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = frame[1].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(788);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(787);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	frame[7].o = sp[0].o;
	LINE_NUMBER(789);
	jint temp2 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[7].o)))(ctx, (frame[7].o));
	if (temp2 == 0) goto label_19;
	}
	{
	LINE_NUMBER(790);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(791);
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[6].o));
	frame[3].i = temp0;
	LINE_NUMBER(792);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(796);
	if ((frame[3].i) != 0) goto label_22;
	}
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(800);
	if ((frame[4].i) == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	if (temp0 >= (frame[2].i)) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(801);
	sp[0].o = frame[5].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, sp[1].o))(ctx, sp[1].o, temp0, temp1);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp2 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(804);
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(805);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(806);
	sp[0].o = (jobject)((func_java_util_ArrayList_subList_int_int_R_java_util_List) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_ArrayList_subList_int_int_R_java_util_List])(ctx, (frame[5].o), (jint(0)), (frame[7].i));
	sp[0].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[8].o));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:split", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(837);
	sp[0].o = (jobject)((func_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Pattern_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(842);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(843);
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
	LINE_NUMBER(845);
	frame[2].o = (checkCast(ctx, &class_regexodus_Pattern, (frame[1].o)));
	LINE_NUMBER(847);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_memregs) == ((jint)((regexodus_Pattern *) NULL_CHECK((frame[2].o)))->F_memregs)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(848);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_counters) == ((jint)((regexodus_Pattern *) NULL_CHECK((frame[2].o)))->F_counters)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(849);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_lookaheads) == ((jint)((regexodus_Pattern *) NULL_CHECK((frame[2].o)))->F_lookaheads)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	sp[1].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[2].o)))->F_stringRepr;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	goto label_10;
label_8:;
	{
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[2].o)))->F_stringRepr;
	if (sp[0].o == nullptr) goto label_9;
	}
label_10:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(851);
	if (((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) != ((jint)((regexodus_Pattern *) NULL_CHECK((frame[2].o)))->F_flags)) goto label_11;
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

jint M_regexodus_Pattern_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
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
	LINE_NUMBER(863);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_memregs));
	LINE_NUMBER(864);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_counters));
	LINE_NUMBER(865);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_lookaheads));
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Pattern_serializeToString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:serializeToString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(872);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_stringRepr;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar(((((jint)((regexodus_Pattern *) NULL_CHECK((frame[0].o)))->F_flags) << (jint(1))) | (jint(1))))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Pattern_deserializeFromString_java_lang_String_R_regexodus_Pattern(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Pattern:deserializeFromString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Pattern(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(877);
	clinit_regexodus_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Pattern);
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp0, (temp1 - (jint(1))));
	sp[2].o = frame[0].o;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[2].o, (temp2 - (jint(1))));
	init_regexodus_Pattern_java_lang_String_int(ctx, sp[0].o, sp[1].o, (bit_cast<jint>(bit_cast<uint32_t>(temp3) >> (jint(1)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Pattern[] {
	(void *) M_regexodus_Pattern_hashCode_R_int,
	(void *) M_regexodus_Pattern_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Pattern_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Pattern_setFlags_java_lang_String,
	(void *) M_regexodus_Pattern_setFlags_int,
	(void *) M_regexodus_Pattern_getFlags_R_int,
	(void *) M_regexodus_Pattern_internalCompile_java_lang_String_int,
	(void *) M_regexodus_Pattern_groupCount_R_int,
	(void *) M_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer,
	(void *) M_regexodus_Pattern_matches_java_lang_String_R_boolean,
	(void *) M_regexodus_Pattern_startsWith_java_lang_String_R_boolean,
	(void *) M_regexodus_Pattern_matcher_R_regexodus_Matcher,
	(void *) M_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher,
	(void *) M_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher,
	(void *) M_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher,
	(void *) M_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher,
	(void *) M_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher,
	(void *) M_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer,
	(void *) M_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer,
	(void *) M_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer,
	(void *) M_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer,
	(void *) M_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer,
	(void *) M_regexodus_Pattern_toString_d_R_java_lang_String,
	(void *) M_regexodus_Pattern_flagsAsString_R_java_lang_String,
	(void *) M_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String,
	(void *) M_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String,
	(void *) M_regexodus_Pattern_serializeToString_R_java_lang_String,
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
	{ "setFlags", "(Ljava/lang/String;)V" },
	{ "setFlags", "(I)V" },
	{ "getFlags", "()I" },
	{ "internalCompile", "(Ljava/lang/String;I)V" },
	{ "groupCount", "()I" },
	{ "groupId", "(Ljava/lang/String;)Ljava/lang/Integer;" },
	{ "matches", "(Ljava/lang/String;)Z" },
	{ "startsWith", "(Ljava/lang/String;)Z" },
	{ "matcher", "()Lregexodus/Matcher;" },
	{ "matcher", "(Ljava/lang/CharSequence;)Lregexodus/Matcher;" },
	{ "matcher", "([CII)Lregexodus/Matcher;" },
	{ "matcher", "(Lregexodus/MatchResult;I)Lregexodus/Matcher;" },
	{ "matcher", "(Lregexodus/MatchResult;Ljava/lang/String;)Lregexodus/Matcher;" },
	{ "matcher", "(Ljava/io/Reader;I)Lregexodus/Matcher;" },
	{ "replacer", "(Ljava/lang/String;)Lregexodus/Replacer;" },
	{ "replacer", "(Lregexodus/Substitution;)Lregexodus/Replacer;" },
	{ "tokenizer", "(Ljava/lang/String;)Lregexodus/RETokenizer;" },
	{ "tokenizer", "([CII)Lregexodus/RETokenizer;" },
	{ "tokenizer", "(Ljava/io/Reader;I)Lregexodus/RETokenizer;" },
	{ "toString_d", "()Ljava/lang/String;" },
	{ "flagsAsString", "()Ljava/lang/String;" },
	{ "split", "(Ljava/lang/CharSequence;I)[Ljava/lang/String;" },
	{ "split", "(Ljava/lang/CharSequence;)[Ljava/lang/String;" },
	{ "serializeToString", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_io_Serializable, &class_regexodus_REFlags, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Pattern_serialVersionUID, "J", 26 },
	{ "stringRepr", &class_java_lang_String, offsetof(regexodus_Pattern, F_stringRepr), "Ljava/lang/String;", 0 },
	{ "root", &class_regexodus_Term, offsetof(regexodus_Pattern, F_root), "Lregexodus/Term;", 128 },
	{ "root0", &class_regexodus_Term, offsetof(regexodus_Pattern, F_root0), "Lregexodus/Term;", 128 },
	{ "memregs", &class_int, offsetof(regexodus_Pattern, F_memregs), "I", 0 },
	{ "counters", &class_int, offsetof(regexodus_Pattern, F_counters), "I", 0 },
	{ "lookaheads", &class_int, offsetof(regexodus_Pattern, F_lookaheads), "I", 0 },
	{ "flags", &class_int, offsetof(regexodus_Pattern, F_flags), "I", 2 },
	{ "namedGroupMap", &class_java_util_HashMap, offsetof(regexodus_Pattern, F_namedGroupMap), "Ljava/util/HashMap;", 0 },
	{ "caseless", &class_boolean, offsetof(regexodus_Pattern, F_caseless), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Pattern, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_regexodus_Pattern_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_Pattern_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_Pattern_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "setFlags", (intptr_t) M_regexodus_Pattern_setFlags_java_lang_String, VTABLE_regexodus_Pattern_setFlags_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setFlags", (intptr_t) M_regexodus_Pattern_setFlags_int, VTABLE_regexodus_Pattern_setFlags_int, "(I)V", 1 },
	{ "getFlags", (intptr_t) M_regexodus_Pattern_getFlags_R_int, VTABLE_regexodus_Pattern_getFlags_R_int, "()I", 1 },
	{ "compile", (intptr_t) SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern, 0, "(Ljava/lang/String;)Lregexodus/Pattern;", 9 },
	{ "compile", (intptr_t) SM_regexodus_Pattern_compile_java_lang_String_int_R_regexodus_Pattern, 0, "(Ljava/lang/String;I)Lregexodus/Pattern;", 9 },
	{ "compile", (intptr_t) SM_regexodus_Pattern_compile_java_lang_String_java_lang_String_R_regexodus_Pattern, 0, "(Ljava/lang/String;Ljava/lang/String;)Lregexodus/Pattern;", 9 },
	{ "internalCompile", (intptr_t) M_regexodus_Pattern_internalCompile_java_lang_String_int, VTABLE_regexodus_Pattern_internalCompile_java_lang_String_int, "(Ljava/lang/String;I)V", 2 },
	{ "groupCount", (intptr_t) M_regexodus_Pattern_groupCount_R_int, VTABLE_regexodus_Pattern_groupCount_R_int, "()I", 1 },
	{ "groupId", (intptr_t) M_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer, VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer, "(Ljava/lang/String;)Ljava/lang/Integer;", 1 },
	{ "matches", (intptr_t) M_regexodus_Pattern_matches_java_lang_String_R_boolean, VTABLE_regexodus_Pattern_matches_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "startsWith", (intptr_t) M_regexodus_Pattern_startsWith_java_lang_String_R_boolean, VTABLE_regexodus_Pattern_startsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "matcher", (intptr_t) M_regexodus_Pattern_matcher_R_regexodus_Matcher, VTABLE_regexodus_Pattern_matcher_R_regexodus_Matcher, "()Lregexodus/Matcher;", 1 },
	{ "matcher", (intptr_t) M_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher, VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher, "(Ljava/lang/CharSequence;)Lregexodus/Matcher;", 1 },
	{ "matcher", (intptr_t) M_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher, VTABLE_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher, "([CII)Lregexodus/Matcher;", 1 },
	{ "matcher", (intptr_t) M_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher, VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher, "(Lregexodus/MatchResult;I)Lregexodus/Matcher;", 1 },
	{ "matcher", (intptr_t) M_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher, VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher, "(Lregexodus/MatchResult;Ljava/lang/String;)Lregexodus/Matcher;", 1 },
	{ "matcher", (intptr_t) M_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher, VTABLE_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher, "(Ljava/io/Reader;I)Lregexodus/Matcher;", 1 },
	{ "replacer", (intptr_t) M_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer, VTABLE_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer, "(Ljava/lang/String;)Lregexodus/Replacer;", 1 },
	{ "replacer", (intptr_t) M_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer, VTABLE_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer, "(Lregexodus/Substitution;)Lregexodus/Replacer;", 1 },
	{ "tokenizer", (intptr_t) M_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer, VTABLE_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer, "(Ljava/lang/String;)Lregexodus/RETokenizer;", 1 },
	{ "tokenizer", (intptr_t) M_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer, VTABLE_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer, "([CII)Lregexodus/RETokenizer;", 1 },
	{ "tokenizer", (intptr_t) M_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer, VTABLE_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer, "(Ljava/io/Reader;I)Lregexodus/RETokenizer;", 1 },
	{ "toString", (intptr_t) M_regexodus_Pattern_toString_R_java_lang_String, VTABLE_regexodus_Pattern_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString_d", (intptr_t) M_regexodus_Pattern_toString_d_R_java_lang_String, VTABLE_regexodus_Pattern_toString_d_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "parseFlags", (intptr_t) SM_regexodus_Pattern_parseFlags_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "parseFlags", (intptr_t) SM_regexodus_Pattern_parseFlags_Array1_char_int_int_R_int, 0, "([CII)I", 8 },
	{ "getFlag", (intptr_t) SM_regexodus_Pattern_getFlag_char_R_int, 0, "(C)I", 10 },
	{ "flagsAsString", (intptr_t) M_regexodus_Pattern_flagsAsString_R_java_lang_String, VTABLE_regexodus_Pattern_flagsAsString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "split", (intptr_t) M_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String, VTABLE_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String, "(Ljava/lang/CharSequence;I)[Ljava/lang/String;", 1 },
	{ "split", (intptr_t) M_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String, VTABLE_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String, "(Ljava/lang/CharSequence;)[Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_regexodus_Pattern_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Pattern_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Pattern_hashCode_R_int, VTABLE_regexodus_Pattern_hashCode_R_int, "()I", 1 },
	{ "serializeToString", (intptr_t) M_regexodus_Pattern_serializeToString_R_java_lang_String, VTABLE_regexodus_Pattern_serializeToString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "deserializeFromString", (intptr_t) SM_regexodus_Pattern_deserializeFromString_java_lang_String_R_regexodus_Pattern, 0, "(Ljava/lang/String;)Lregexodus/Pattern;", 9 },
};

Class class_regexodus_Pattern{
		.nativeName = (intptr_t) "regexodus/Pattern",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Pattern),
		.classVtable = (intptr_t) vtable_regexodus_Pattern,
		.staticInitializer = (intptr_t) clinit_regexodus_Pattern,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Pattern,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Pattern = registerClass(&class_regexodus_Pattern);

}
