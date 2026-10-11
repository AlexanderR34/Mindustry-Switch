#include "java/io/OutputStreamWriter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/Writer.h"
#include "java/io/OutputStreamWriter.h"
#include "java/io/OutputStream.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_java_io_OutputStreamWriter(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_OutputStreamWriter *) object;
	if (self->F_os)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_os)->clazz)->markFunction)((jobject) self->F_os, mark, depth + 1);
	if (self->F_enc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enc)->clazz)->markFunction)((jobject) self->F_enc, mark, depth + 1);
}

void clinit_java_io_OutputStreamWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_java_io_OutputStreamWriter_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_OutputStreamWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(39);
	((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_os = (jref) (frame[1].o);
	LINE_NUMBER(40);
	((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_enc = (jref) (((jobject) createStringLiteral(ctx, u8"UTF-8"_j)));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_OutputStreamWriter_java_io_OutputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_OutputStreamWriter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(48);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_os = (jref) (frame[1].o);
	LINE_NUMBER(50);
	((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_enc = (jref) (frame[2].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_OutputStreamWriter_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_os;
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_OutputStreamWriter_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_os;
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, sp[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_OutputStreamWriter_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i));
	((func_java_io_OutputStreamWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStreamWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_OutputStreamWriter_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	ARRAY_ACCESS(jchar, sp[2].o, (jint(0))) = (jchar((frame[1].i)));
	init_java_lang_String_Array1_char(ctx, sp[1].o, sp[2].o);
	((func_java_io_OutputStreamWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStreamWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_OutputStreamWriter_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(85);
	if ((frame[2].i) > 0) goto label_1;
	}
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_os;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((java_io_OutputStreamWriter *) NULL_CHECK((frame[0].o)))->F_enc;
	sp[1].o = (jobject)((func_java_lang_String_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte])(ctx, sp[1].o, sp[2].o);
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_OutputStreamWriter_write_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/OutputStreamWriter:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	((func_java_io_OutputStreamWriter_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStreamWriter_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_OutputStreamWriter[] {
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
	(void *) M_java_io_Writer_append_char_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_io_OutputStreamWriter_close,
	(void *) M_java_io_OutputStreamWriter_flush,
	(void *) M_java_io_Writer_write_Array1_char,
	(void *) M_java_io_OutputStreamWriter_write_Array1_char_int_int,
	(void *) M_java_io_OutputStreamWriter_write_int,
	(void *) M_java_io_Writer_write_java_lang_String,
	(void *) M_java_io_OutputStreamWriter_write_java_lang_String_int_int,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_Writer_append_char_R_java_io_Writer,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer,
	(void *) M_java_io_OutputStreamWriter_write_java_lang_CharSequence,
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
	{ "write", "(Ljava/lang/CharSequence;)V" },
};

static FieldMetadata fields[] {
	{ "os", &class_java_io_OutputStream, offsetof(java_io_OutputStreamWriter, F_os), "Ljava/io/OutputStream;", 2 },
	{ "enc", &class_java_lang_String, offsetof(java_io_OutputStreamWriter, F_enc), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_OutputStreamWriter_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_OutputStreamWriter_java_io_OutputStream_java_lang_String, 0, "(Ljava/io/OutputStream;Ljava/lang/String;)V", 1 },
	{ "close", (intptr_t) M_java_io_OutputStreamWriter_close, VTABLE_java_io_OutputStreamWriter_close, "()V", 1 },
	{ "flush", (intptr_t) M_java_io_OutputStreamWriter_flush, VTABLE_java_io_OutputStreamWriter_flush, "()V", 1 },
	{ "write", (intptr_t) M_java_io_OutputStreamWriter_write_Array1_char_int_int, VTABLE_java_io_OutputStreamWriter_write_Array1_char_int_int, "([CII)V", 1 },
	{ "write", (intptr_t) M_java_io_OutputStreamWriter_write_int, VTABLE_java_io_OutputStreamWriter_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_io_OutputStreamWriter_write_java_lang_String_int_int, VTABLE_java_io_OutputStreamWriter_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "write", (intptr_t) M_java_io_OutputStreamWriter_write_java_lang_CharSequence, VTABLE_java_io_OutputStreamWriter_write_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
};

Class class_java_io_OutputStreamWriter{
		.nativeName = (intptr_t) "java/io/OutputStreamWriter",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(java_io_OutputStreamWriter),
		.classVtable = (intptr_t) vtable_java_io_OutputStreamWriter,
		.staticInitializer = (intptr_t) clinit_java_io_OutputStreamWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_OutputStreamWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_OutputStreamWriter = registerClass(&class_java_io_OutputStreamWriter);

}
