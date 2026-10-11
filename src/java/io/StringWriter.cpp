#include "java/io/StringWriter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/Writer.h"
#include "java/io/StringWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_io_StringWriter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Writer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_StringWriter *) object;
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
}

void clinit_java_io_StringWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_java_io_StringWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_StringWriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[1].o);
	((java_io_StringWriter *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_StringWriter_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_StringWriter(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(20);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[1].o, (frame[1].i));
	((java_io_StringWriter *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_StringWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_StringWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_StringWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_StringWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), ((frame[2].i) + (frame[3].i)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_StringWriter_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, sp[0].o, (jchar((frame[1].i))));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_StringWriter_write_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_StringWriter_write_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:getBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_char_R_java_io_StringWriter(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((java_io_StringWriter *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_char_R_java_io_Writer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_io_StringWriter_append_char_R_java_io_StringWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_StringWriter_append_char_R_java_io_StringWriter])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_io_StringWriter_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/StringWriter:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((func_java_io_StringWriter_append_char_R_java_io_StringWriter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_StringWriter_append_char_R_java_io_StringWriter])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_StringWriter[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_io_StringWriter_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_io_StringWriter_append_char_R_java_lang_Appendable,
	(void *) M_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_io_StringWriter_close,
	(void *) M_java_io_StringWriter_flush,
	(void *) M_java_io_StringWriter_write_Array1_char,
	(void *) M_java_io_StringWriter_write_Array1_char_int_int,
	(void *) M_java_io_StringWriter_write_int,
	(void *) M_java_io_StringWriter_write_java_lang_String,
	(void *) M_java_io_StringWriter_write_java_lang_String_int_int,
	(void *) M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_StringWriter_append_char_R_java_io_Writer,
	(void *) M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer,
	(void *) M_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer,
	(void *) M_java_io_StringWriter_append_char_R_java_io_StringWriter,
	(void *) M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter,
	(void *) M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter,
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
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "close", "()V" },
	{ "flush", "()V" },
	{ "write", "([C)V" },
	{ "write", "([CII)V" },
	{ "write", "(I)V" },
	{ "write", "(Ljava/lang/String;)V" },
	{ "write", "(Ljava/lang/String;II)V" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;" },
	{ "append", "(C)Ljava/io/Writer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;" },
	{ "getBuffer", "()Ljava/lang/StringBuffer;" },
	{ "append", "(C)Ljava/io/StringWriter;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;" },
};

static jclass interfaces[] { &class_java_lang_Appendable, };

static FieldMetadata fields[] {
	{ "buf", &class_java_lang_StringBuffer, offsetof(java_io_StringWriter, F_buf), "Ljava/lang/StringBuffer;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_StringWriter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_io_StringWriter_int, 0, "(I)V", 1 },
	{ "close", (intptr_t) M_java_io_StringWriter_close, VTABLE_java_io_StringWriter_close, "()V", 1 },
	{ "flush", (intptr_t) M_java_io_StringWriter_flush, VTABLE_java_io_StringWriter_flush, "()V", 1 },
	{ "write", (intptr_t) M_java_io_StringWriter_write_Array1_char_int_int, VTABLE_java_io_StringWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "write", (intptr_t) M_java_io_StringWriter_write_java_lang_String_int_int, VTABLE_java_io_StringWriter_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "write", (intptr_t) M_java_io_StringWriter_write_int, VTABLE_java_io_StringWriter_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_io_StringWriter_write_java_lang_String, VTABLE_java_io_StringWriter_write_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "write", (intptr_t) M_java_io_StringWriter_write_Array1_char, VTABLE_java_io_StringWriter_write_Array1_char, "([C)V", 1 },
	{ "toString", (intptr_t) M_java_io_StringWriter_toString_R_java_lang_String, VTABLE_java_io_StringWriter_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getBuffer", (intptr_t) M_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer, VTABLE_java_io_StringWriter_getBuffer_R_java_lang_StringBuffer, "()Ljava/lang/StringBuffer;", 1 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_char_R_java_io_StringWriter, VTABLE_java_io_StringWriter_append_char_R_java_io_StringWriter, "(C)Ljava/io/StringWriter;", 1 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter, VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_StringWriter, "(Ljava/lang/CharSequence;)Ljava/io/StringWriter;", 1 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter, VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_StringWriter, "(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;", 1 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer, VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_io_Writer, "(Ljava/lang/CharSequence;II)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_char_R_java_io_Writer, VTABLE_java_io_StringWriter_append_char_R_java_io_Writer, "(C)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer, VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_io_Writer, "(Ljava/lang/CharSequence;)Ljava/io/Writer;", 4161 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_io_StringWriter_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_io_StringWriter_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_io_StringWriter_append_char_R_java_lang_Appendable, VTABLE_java_io_StringWriter_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
};

Class class_java_io_StringWriter{
		.nativeName = (intptr_t) "java/io/StringWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(java_io_StringWriter),
		.classVtable = (intptr_t) vtable_java_io_StringWriter,
		.staticInitializer = (intptr_t) clinit_java_io_StringWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_StringWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_StringWriter = registerClass(&class_java_io_StringWriter);

}
