#include "regexodus/RETokenizer.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "regexodus/Pattern.h"
#include "regexodus/Matcher.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "regexodus/RETokenizer.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_regexodus_RETokenizer(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_RETokenizer *) object;
	if (self->F_matcher)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_matcher)->clazz)->markFunction)((jobject) self->F_matcher, mark, depth + 1);
	if (self->F_token)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_token)->clazz)->markFunction)((jobject) self->F_token, mark, depth + 1);
}

void clinit_regexodus_RETokenizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_RETokenizer_regexodus_Pattern_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_RETokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher])(ctx, (frame[1].o), (frame[2].o));
	init_regexodus_RETokenizer_regexodus_Matcher_boolean(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_RETokenizer_regexodus_Pattern_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_RETokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher])(ctx, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	init_regexodus_RETokenizer_regexodus_Matcher_boolean(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_RETokenizer_regexodus_Pattern_java_io_Reader_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_RETokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher])(ctx, (frame[1].o), (frame[2].o), (frame[3].i));
	init_regexodus_RETokenizer_regexodus_Matcher_boolean(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_RETokenizer_regexodus_Matcher_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_RETokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(81);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(64);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_pos = (jint(0));
	LINE_NUMBER(65);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_endReached = (jint(0));
	LINE_NUMBER(66);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled = (jint(0));
	LINE_NUMBER(82);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher = (jref) (frame[1].o);
	LINE_NUMBER(83);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled = (frame[2].i);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_RETokenizer_setEmptyEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:setEmptyEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled = (frame[1].i);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_RETokenizer_isEmptyEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:isEmptyEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled);
	}

	popStackFrame(ctx);
}

jbool M_regexodus_RETokenizer_hasMore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:hasMore", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_RETokenizer_check(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_RETokenizer_nextToken_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:nextToken", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_regexodus_RETokenizer_check(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(101);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken) != 0) goto label_2;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(102);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked = (jint(0));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_token;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_RETokenizer_split_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:split", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_regexodus_RETokenizer_collect_regexodus_RETokenizer_Array1_java_lang_String_int_R_Array1_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_regexodus_RETokenizer_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	((func_regexodus_Matcher_setPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_setPosition_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_RETokenizer_collect_regexodus_RETokenizer_Array1_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:collect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_RETokenizer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(115);
	jint temp0 = (jint)M_regexodus_RETokenizer_hasMore_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)M_regexodus_RETokenizer_nextToken_R_java_lang_String(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_regexodus_RETokenizer_collect_regexodus_RETokenizer_Array1_java_lang_String_int_R_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), ((frame[2].i) + (jint(1))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(119);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(120);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[2].i));
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_regexodus_RETokenizer_check(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:check", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	frame[1].i = ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled);
	LINE_NUMBER(128);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked = (jint(1));
	LINE_NUMBER(129);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_endReached) == 0) goto label_3;
	}
	{
	LINE_NUMBER(130);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken = (jint(0));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_regexodus_Matcher_start_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_start_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_10;
	}
	{
	LINE_NUMBER(137);
	frame[3].i = (jint(1));
	LINE_NUMBER(138);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_regexodus_Matcher_end_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_end_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(140);
	if ((frame[1].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(141);
	frame[3].i = (jint(1));
	LINE_NUMBER(142);
	goto label_8;
	}
label_14:;
	{
	LINE_NUMBER(143);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[2].o), (frame[2].o), (-2));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(146);
	if ((frame[3].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(147);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_endReached = (jint(1));
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_regexodus_Matcher_length_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_length_int_R_int])(ctx, (frame[2].o), (-3));
	if (temp0 != 0) goto label_20;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_20;
	{
	LINE_NUMBER(149);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken = (jint(0));
	goto label_22;
	}
label_20:;
	{
	LINE_NUMBER(151);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken = (jint(1));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Matcher_target_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_target_R_java_lang_String])(ctx, (frame[2].o));
	((regexodus_RETokenizer *) NULL_CHECK(sp[0].o))->F_token = (jref) sp[1].o;
	}
label_22:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(157);
	((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken = (jint(1));
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Matcher_prefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_prefix_R_java_lang_String])(ctx, (frame[2].o));
	((regexodus_RETokenizer *) NULL_CHECK(sp[0].o))->F_token = (jref) sp[1].o;
	LINE_NUMBER(159);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[2].o), (frame[2].o), (-2));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_RETokenizer_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"remove() not supported on RETokenizer"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_regexodus_RETokenizer_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:hasNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)M_regexodus_RETokenizer_hasMore_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_RETokenizer_next_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)M_regexodus_RETokenizer_nextToken_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_RETokenizer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(198);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(199);
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
	LINE_NUMBER(201);
	frame[2].o = (checkCast(ctx, &class_regexodus_RETokenizer, (frame[1].o)));
	LINE_NUMBER(203);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked) == ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_checked)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(204);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken) == ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_hasToken)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(205);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_pos) == ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_pos)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(206);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_endReached) == ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_endReached)) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(207);
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled) == ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_emptyTokensEnabled)) goto label_9;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[1].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	goto label_12;
label_10:;
	{
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_matcher;
	if (sp[0].o == nullptr) goto label_11;
	}
label_12:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_token;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_token;
	sp[1].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_token;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[2].o)))->F_token;
	if (sp[0].o != nullptr) goto label_15;
	}
	INST_ICONST(1);
	goto label_14;
label_15:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_RETokenizer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	jint temp0 = (jint)((func_regexodus_Matcher_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Matcher_hashCode_R_int])(ctx, sp[0].o);
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
	LINE_NUMBER(216);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked) == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(217);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(218);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_token;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_token;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(219);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_pos));
	LINE_NUMBER(220);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_endReached) == 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(221);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled) == 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_RETokenizer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RETokenizer{matcher="_j))));
	sp[1].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_matcher;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", checked="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_checked));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", hasToken="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_hasToken));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", token='"_j))));
	sp[1].o = (jobject)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_token;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (39));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", pos="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", endReached="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_endReached));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", emptyTokensEnabled="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((regexodus_RETokenizer *) NULL_CHECK((frame[0].o)))->F_emptyTokensEnabled));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_RETokenizer_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/RETokenizer:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_regexodus_RETokenizer_next_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_RETokenizer_next_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_RETokenizer[] {
	(void *) M_regexodus_RETokenizer_hashCode_R_int,
	(void *) M_regexodus_RETokenizer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_RETokenizer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_RETokenizer_hasNext_R_boolean,
	(void *) M_regexodus_RETokenizer_next_R_java_lang_Object,
	(void *) M_regexodus_RETokenizer_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_regexodus_RETokenizer_setEmptyEnabled_boolean,
	(void *) M_regexodus_RETokenizer_isEmptyEnabled_R_boolean,
	(void *) M_regexodus_RETokenizer_hasMore_R_boolean,
	(void *) M_regexodus_RETokenizer_nextToken_R_java_lang_String,
	(void *) M_regexodus_RETokenizer_split_R_Array1_java_lang_String,
	(void *) M_regexodus_RETokenizer_reset,
	(void *) M_regexodus_RETokenizer_check,
	(void *) M_regexodus_RETokenizer_next_R_java_lang_String,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
	{ "setEmptyEnabled", "(Z)V" },
	{ "isEmptyEnabled", "()Z" },
	{ "hasMore", "()Z" },
	{ "nextToken", "()Ljava/lang/String;" },
	{ "split", "()[Ljava/lang/String;" },
	{ "reset", "()V" },
	{ "check", "()V" },
	{ "next", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "matcher", &class_regexodus_Matcher, offsetof(regexodus_RETokenizer, F_matcher), "Lregexodus/Matcher;", 2 },
	{ "checked", &class_boolean, offsetof(regexodus_RETokenizer, F_checked), "Z", 2 },
	{ "hasToken", &class_boolean, offsetof(regexodus_RETokenizer, F_hasToken), "Z", 2 },
	{ "token", &class_java_lang_String, offsetof(regexodus_RETokenizer, F_token), "Ljava/lang/String;", 2 },
	{ "pos", &class_int, offsetof(regexodus_RETokenizer, F_pos), "I", 2 },
	{ "endReached", &class_boolean, offsetof(regexodus_RETokenizer, F_endReached), "Z", 2 },
	{ "emptyTokensEnabled", &class_boolean, offsetof(regexodus_RETokenizer, F_emptyTokensEnabled), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_RETokenizer_regexodus_Pattern_java_lang_String, 0, "(Lregexodus/Pattern;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_RETokenizer_regexodus_Pattern_Array1_char_int_int, 0, "(Lregexodus/Pattern;[CII)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_RETokenizer_regexodus_Pattern_java_io_Reader_int, 0, "(Lregexodus/Pattern;Ljava/io/Reader;I)V", 1 },
	{ "<init>", (intptr_t) init_regexodus_RETokenizer_regexodus_Matcher_boolean, 0, "(Lregexodus/Matcher;Z)V", 2 },
	{ "setEmptyEnabled", (intptr_t) M_regexodus_RETokenizer_setEmptyEnabled_boolean, VTABLE_regexodus_RETokenizer_setEmptyEnabled_boolean, "(Z)V", 1 },
	{ "isEmptyEnabled", (intptr_t) M_regexodus_RETokenizer_isEmptyEnabled_R_boolean, VTABLE_regexodus_RETokenizer_isEmptyEnabled_R_boolean, "()Z", 1 },
	{ "hasMore", (intptr_t) M_regexodus_RETokenizer_hasMore_R_boolean, VTABLE_regexodus_RETokenizer_hasMore_R_boolean, "()Z", 2 },
	{ "nextToken", (intptr_t) M_regexodus_RETokenizer_nextToken_R_java_lang_String, VTABLE_regexodus_RETokenizer_nextToken_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "split", (intptr_t) M_regexodus_RETokenizer_split_R_Array1_java_lang_String, VTABLE_regexodus_RETokenizer_split_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "reset", (intptr_t) M_regexodus_RETokenizer_reset, VTABLE_regexodus_RETokenizer_reset, "()V", 1 },
	{ "collect", (intptr_t) SM_regexodus_RETokenizer_collect_regexodus_RETokenizer_Array1_java_lang_String_int_R_Array1_java_lang_String, 0, "(Lregexodus/RETokenizer;[Ljava/lang/String;I)[Ljava/lang/String;", 10 },
	{ "check", (intptr_t) M_regexodus_RETokenizer_check, VTABLE_regexodus_RETokenizer_check, "()V", 2 },
	{ "remove", (intptr_t) M_regexodus_RETokenizer_remove, VTABLE_regexodus_RETokenizer_remove, "()V", 1 },
	{ "hasNext", (intptr_t) M_regexodus_RETokenizer_hasNext_R_boolean, VTABLE_regexodus_RETokenizer_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_regexodus_RETokenizer_next_R_java_lang_String, VTABLE_regexodus_RETokenizer_next_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_regexodus_RETokenizer_equals_java_lang_Object_R_boolean, VTABLE_regexodus_RETokenizer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_RETokenizer_hashCode_R_int, VTABLE_regexodus_RETokenizer_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_regexodus_RETokenizer_toString_R_java_lang_String, VTABLE_regexodus_RETokenizer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "next", (intptr_t) M_regexodus_RETokenizer_next_R_java_lang_Object, VTABLE_regexodus_RETokenizer_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_regexodus_RETokenizer{
		.nativeName = (intptr_t) "regexodus/RETokenizer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_RETokenizer),
		.classVtable = (intptr_t) vtable_regexodus_RETokenizer,
		.staticInitializer = (intptr_t) clinit_regexodus_RETokenizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_RETokenizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_RETokenizer = registerClass(&class_regexodus_RETokenizer);

}
