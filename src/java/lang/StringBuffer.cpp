#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/Appendable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_lang_StringBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_StringBuffer *) object;
	if (self->F_internal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_internal)->clazz)->markFunction)((jobject) self->F_internal, mark, depth + 1);
}

void clinit_java_lang_StringBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_StringBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuffer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((java_lang_StringBuffer *) NULL_CHECK(sp[0].o))->F_internal = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_StringBuffer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[1].o, (frame[1].i));
	((java_lang_StringBuffer *) NULL_CHECK(sp[0].o))->F_internal = (jref) sp[1].o;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_StringBuffer_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_StringBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((java_lang_StringBuffer *) NULL_CHECK(sp[0].o))->F_internal = (jref) sp[1].o;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].d));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_lang_StringBuffer_capacity_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:capacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	jint temp0 = (jint)((func_java_lang_StringBuilder_capacity_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_capacity_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_java_lang_StringBuffer_charAt_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:charAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:delete", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:deleteCharAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuffer_ensureCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:ensureCapacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	((func_java_lang_StringBuilder_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_ensureCapacity_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuffer_getChars_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:getChars", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	((func_java_lang_StringBuilder_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_getChars_int_int_Array1_char_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].d));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].f));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].l));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_lang_StringBuffer_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:reverse", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder])(ctx, sp[1].o);
	((java_lang_StringBuffer *) NULL_CHECK(sp[0].o))->F_internal = (jref) sp[1].o;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuffer_setCharAt_int_char(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:setCharAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	((func_java_lang_StringBuilder_setCharAt_int_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setCharAt_int_char])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuffer_setLength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:StringBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(330);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	init_java_lang_StringBuffer_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_StringBuffer_trimToSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:trimToSize", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(337);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:insert", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((java_lang_StringBuffer *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:subSequence", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(360);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	sp[1].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	init_java_lang_StringBuffer_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_StringBuffer_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/StringBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_StringBuffer[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_StringBuffer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_StringBuffer_length_R_int,
	(void *) M_java_lang_StringBuffer_charAt_int_R_char,
	(void *) M_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_java_lang_StringBuffer_append_char_R_java_lang_Appendable,
	(void *) M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_capacity_R_int,
	(void *) M_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_ensureCapacity_int,
	(void *) M_java_lang_StringBuffer_getChars_int_int_Array1_char_int,
	(void *) M_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_setCharAt_int_char,
	(void *) M_java_lang_StringBuffer_setLength_int,
	(void *) M_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_trimToSize,
	(void *) M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer,
	(void *) M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer,
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
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "append", "(Z)Ljava/lang/StringBuffer;" },
	{ "append", "(C)Ljava/lang/StringBuffer;" },
	{ "append", "([C)Ljava/lang/StringBuffer;" },
	{ "append", "([CII)Ljava/lang/StringBuffer;" },
	{ "append", "(D)Ljava/lang/StringBuffer;" },
	{ "append", "(F)Ljava/lang/StringBuffer;" },
	{ "append", "(I)Ljava/lang/StringBuffer;" },
	{ "append", "(J)Ljava/lang/StringBuffer;" },
	{ "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;" },
	{ "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;" },
	{ "capacity", "()I" },
	{ "delete", "(II)Ljava/lang/StringBuffer;" },
	{ "deleteCharAt", "(I)Ljava/lang/StringBuffer;" },
	{ "ensureCapacity", "(I)V" },
	{ "getChars", "(II[CI)V" },
	{ "insert", "(IZ)Ljava/lang/StringBuffer;" },
	{ "insert", "(IC)Ljava/lang/StringBuffer;" },
	{ "insert", "(I[C)Ljava/lang/StringBuffer;" },
	{ "insert", "(ID)Ljava/lang/StringBuffer;" },
	{ "insert", "(IF)Ljava/lang/StringBuffer;" },
	{ "insert", "(II)Ljava/lang/StringBuffer;" },
	{ "insert", "(IJ)Ljava/lang/StringBuffer;" },
	{ "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;" },
	{ "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;" },
	{ "reverse", "()Ljava/lang/StringBuffer;" },
	{ "setCharAt", "(IC)V" },
	{ "setLength", "(I)V" },
	{ "StringBuffer", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;" },
	{ "trimToSize", "()V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;" },
	{ "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;" },
	{ "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;" },
};

static jclass interfaces[] { &class_java_lang_CharSequence, &class_java_lang_Appendable, };

static FieldMetadata fields[] {
	{ "internal", &class_java_lang_StringBuilder, offsetof(java_lang_StringBuffer, F_internal), "Ljava/lang/StringBuilder;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_StringBuffer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_lang_StringBuffer_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_StringBuffer_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer, "(Z)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer, "(C)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer, "([C)Ljava/lang/StringBuffer;", 0 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer, "([CII)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer, "(D)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer, "(F)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer, "(I)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer, "(J)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer, "(Ljava/lang/Object;)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer, "(Ljava/lang/String;)Ljava/lang/StringBuffer;", 1 },
	{ "capacity", (intptr_t) M_java_lang_StringBuffer_capacity_R_int, VTABLE_java_lang_StringBuffer_capacity_R_int, "()I", 1 },
	{ "charAt", (intptr_t) M_java_lang_StringBuffer_charAt_int_R_char, VTABLE_java_lang_StringBuffer_charAt_int_R_char, "(I)C", 1 },
	{ "delete", (intptr_t) M_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer, "(II)Ljava/lang/StringBuffer;", 1 },
	{ "deleteCharAt", (intptr_t) M_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer, "(I)Ljava/lang/StringBuffer;", 1 },
	{ "ensureCapacity", (intptr_t) M_java_lang_StringBuffer_ensureCapacity_int, VTABLE_java_lang_StringBuffer_ensureCapacity_int, "(I)V", 1 },
	{ "getChars", (intptr_t) M_java_lang_StringBuffer_getChars_int_int_Array1_char_int, VTABLE_java_lang_StringBuffer_getChars_int_int_Array1_char_int, "(II[CI)V", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer, "(IZ)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer, "(IC)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer, "(I[C)Ljava/lang/StringBuffer;", 0 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer, "(ID)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer, "(IF)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer, "(II)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer, "(IJ)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer, "(ILjava/lang/Object;)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer, "(ILjava/lang/String;)Ljava/lang/StringBuffer;", 1 },
	{ "length", (intptr_t) M_java_lang_StringBuffer_length_R_int, VTABLE_java_lang_StringBuffer_length_R_int, "()I", 1 },
	{ "reverse", (intptr_t) M_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer, "()Ljava/lang/StringBuffer;", 1 },
	{ "setCharAt", (intptr_t) M_java_lang_StringBuffer_setCharAt_int_char, VTABLE_java_lang_StringBuffer_setCharAt_int_char, "(IC)V", 1 },
	{ "setLength", (intptr_t) M_java_lang_StringBuffer_setLength_int, VTABLE_java_lang_StringBuffer_setLength_int, "(I)V", 1 },
	{ "toString", (intptr_t) M_java_lang_StringBuffer_toString_R_java_lang_String, VTABLE_java_lang_StringBuffer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "StringBuffer", (intptr_t) M_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer, "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;", 1 },
	{ "trimToSize", (intptr_t) M_java_lang_StringBuffer_trimToSize, VTABLE_java_lang_StringBuffer_trimToSize, "()V", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer, "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer, "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer, "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;", 1 },
	{ "insert", (intptr_t) M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer, VTABLE_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer, "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;", 1 },
	{ "subSequence", (intptr_t) M_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence, VTABLE_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_lang_StringBuffer_append_char_R_java_lang_Appendable, VTABLE_java_lang_StringBuffer_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_lang_StringBuffer{
		.nativeName = (intptr_t) "java/lang/StringBuffer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_StringBuffer),
		.classVtable = (intptr_t) vtable_java_lang_StringBuffer,
		.staticInitializer = (intptr_t) clinit_java_lang_StringBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_StringBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 50,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_StringBuffer = registerClass(&class_java_lang_StringBuffer);

}
