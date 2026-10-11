#include "java/util/StringTokenizer.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Enumeration.h"
#include "java/util/StringTokenizer.h"

extern "C" {


void mark_java_util_StringTokenizer(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_StringTokenizer *) object;
	if (self->F_string)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_string)->clazz)->markFunction)((jobject) self->F_string, mark, depth + 1);
	if (self->F_delimiters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_delimiters)->clazz)->markFunction)((jobject) self->F_delimiters, mark, depth + 1);
}

void clinit_java_util_StringTokenizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_StringTokenizer_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_StringTokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8" \t\n\r\u000c"_j))), (jint(0)));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_StringTokenizer_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_StringTokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(139);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_StringTokenizer_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_StringTokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(157);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(158);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(159);
	((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string = (jref) (frame[1].o);
	LINE_NUMBER(160);
	((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters = (jref) (frame[2].o);
	LINE_NUMBER(161);
	((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_returnDelimiters = (frame[3].i);
	LINE_NUMBER(162);
	((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position = (jint(0));
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(164);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_StringTokenizer_countTokens_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:countTokens", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	frame[1].i = (jint(0));
	LINE_NUMBER(175);
	frame[2].i = (jint(0));
	LINE_NUMBER(176);
	frame[3].i = ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	sp[1].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, (frame[3].i));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, temp0, (jint(0)));
	if (temp1 < 0) goto label_7;
	}
	{
	LINE_NUMBER(178);
	if (((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_returnDelimiters) == 0) goto label_9;
	}
	LINE_NUMBER(179);
	INST_IINC(1, 1);
label_9:;
	{
	LINE_NUMBER(180);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(181);
	INST_IINC(1, 1);
	LINE_NUMBER(182);
	frame[2].i = (jint(0));
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(185);
	frame[2].i = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(176);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(188);
	if ((frame[2].i) == 0) goto label_14;
	}
	LINE_NUMBER(189);
	INST_IINC(1, 1);
label_14:;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_StringTokenizer_hasMoreElements_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:hasMoreElements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_StringTokenizer_hasMoreTokens_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:hasMoreTokens", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(210);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(213);
	if (((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(214);
	if (((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_returnDelimiters) == 0) goto label_6;
	}
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(219);
	frame[2].i = ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position);
	}
label_8:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	sp[1].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, (frame[2].i));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, temp0, (jint(0)));
	if (temp1 != (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(219);
	INST_IINC(2, 1);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_StringTokenizer_nextElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:nextElement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_StringTokenizer_nextToken_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:nextToken", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(247);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(249);
	frame[1].i = ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(252);
	if ((frame[1].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(253);
	if (((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_returnDelimiters) == 0) goto label_7;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	sp[1].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, temp0, (jint(0)));
	if (temp1 < 0) goto label_9;
	}
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_StringTokenizer *) NULL_CHECK(sp[1].o))->F_position;
	((java_util_StringTokenizer *) NULL_CHECK(sp[1].o))->F_position = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, temp3);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position) + (jint(1)));
	}
label_11:;
	{
	if (((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position) >= (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	sp[1].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, temp0, (jint(0)));
	if (temp1 < 0) goto label_14;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position) + (jint(1)));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(262);
	if ((frame[1].i) >= (frame[2].i)) goto label_16;
	}
	{
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	sp[1].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, (frame[1].i));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, temp0, (jint(0)));
	if (temp1 < 0) goto label_16;
	}
	{
	LINE_NUMBER(263);
	INST_IINC(1, 1);
	goto label_7;
	}
label_16:;
	{
	LINE_NUMBER(264);
	((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].i);
	LINE_NUMBER(265);
	if ((frame[1].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position) + (jint(1)));
	}
label_20:;
	{
	if (((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position) >= (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters;
	sp[1].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position));
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, temp0, (jint(0)));
	if (temp1 < 0) goto label_23;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), ((jint)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_position));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_23:;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position = (((jint)((java_util_StringTokenizer *) NULL_CHECK(sp[0].o))->F_position) + (jint(1)));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_string;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(272);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/StringTokenizer:nextToken", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	((java_util_StringTokenizer *) NULL_CHECK((frame[0].o)))->F_delimiters = (jref) (frame[1].o);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_StringTokenizer[] {
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
	(void *) M_java_util_StringTokenizer_hasMoreElements_R_boolean,
	(void *) M_java_util_StringTokenizer_nextElement_R_java_lang_Object,
	(void *) M_java_util_StringTokenizer_countTokens_R_int,
	(void *) M_java_util_StringTokenizer_hasMoreTokens_R_boolean,
	(void *) M_java_util_StringTokenizer_nextToken_R_java_lang_String,
	(void *) M_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String,
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
	{ "hasMoreElements", "()Z" },
	{ "nextElement", "()Ljava/lang/Object;" },
	{ "countTokens", "()I" },
	{ "hasMoreTokens", "()Z" },
	{ "nextToken", "()Ljava/lang/String;" },
	{ "nextToken", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_java_util_Enumeration, };

static FieldMetadata fields[] {
	{ "string", &class_java_lang_String, offsetof(java_util_StringTokenizer, F_string), "Ljava/lang/String;", 2 },
	{ "delimiters", &class_java_lang_String, offsetof(java_util_StringTokenizer, F_delimiters), "Ljava/lang/String;", 2 },
	{ "returnDelimiters", &class_boolean, offsetof(java_util_StringTokenizer, F_returnDelimiters), "Z", 2 },
	{ "position", &class_int, offsetof(java_util_StringTokenizer, F_position), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_StringTokenizer_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_StringTokenizer_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_StringTokenizer_java_lang_String_java_lang_String_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Z)V", 1 },
	{ "countTokens", (intptr_t) M_java_util_StringTokenizer_countTokens_R_int, VTABLE_java_util_StringTokenizer_countTokens_R_int, "()I", 1 },
	{ "hasMoreElements", (intptr_t) M_java_util_StringTokenizer_hasMoreElements_R_boolean, VTABLE_java_util_StringTokenizer_hasMoreElements_R_boolean, "()Z", 1 },
	{ "hasMoreTokens", (intptr_t) M_java_util_StringTokenizer_hasMoreTokens_R_boolean, VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean, "()Z", 1 },
	{ "nextElement", (intptr_t) M_java_util_StringTokenizer_nextElement_R_java_lang_Object, VTABLE_java_util_StringTokenizer_nextElement_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "nextToken", (intptr_t) M_java_util_StringTokenizer_nextToken_R_java_lang_String, VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "nextToken", (intptr_t) M_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String, VTABLE_java_util_StringTokenizer_nextToken_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
};

Class class_java_util_StringTokenizer{
		.nativeName = (intptr_t) "java/util/StringTokenizer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_StringTokenizer),
		.classVtable = (intptr_t) vtable_java_util_StringTokenizer,
		.staticInitializer = (intptr_t) clinit_java_util_StringTokenizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_StringTokenizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_StringTokenizer = registerClass(&class_java_util_StringTokenizer);

}
