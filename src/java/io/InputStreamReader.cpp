#include "java/io/InputStreamReader.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/charset/Charset.h"
#include "java/io/InputStreamReader.h"
#include "java/io/Reader.h"
#include "java/io/ByteArrayOutputStream.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_InputStreamReader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_Reader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_InputStreamReader *) object;
	if (self->F_internal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_internal)->clazz)->markFunction)((jobject) self->F_internal, mark, depth + 1);
	if (self->F_enc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enc)->clazz)->markFunction)((jobject) self->F_enc, mark, depth + 1);
	if (self->F_cbuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cbuffer)->clazz)->markFunction)((jobject) self->F_cbuffer, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
}

void clinit_java_io_InputStreamReader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Reader(ctx);
}

void init_java_io_InputStreamReader_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_InputStreamReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	init_java_io_Reader(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_internal = (jref) (frame[1].o);
	LINE_NUMBER(45);
	((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_enc = (jref) (((jobject) createStringLiteral(ctx, u8"UTF-8"_j)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_InputStreamReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	init_java_io_InputStreamReader_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_InputStreamReader_complete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:complete", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_internal;
	sp[0].o = (jobject)SM_java_io_InputStreamReader_readInputStream_java_io_InputStream_R_Array1_byte(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[2].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_enc;
	sp[1].o = (jobject)SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((java_io_InputStreamReader *) NULL_CHECK(sp[0].o))->F_cbuffer = (jref) sp[1].o;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_io_InputStreamReader_readInputStream_java_io_InputStream_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:readInputStream", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_InputStreamReader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(59);
	SM_java_io_InputStreamReader_copy_java_io_InputStream_java_io_OutputStream_int(ctx, (frame[0].o), (frame[1].o), (8192));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_io_InputStreamReader_copy_java_io_InputStream_java_io_OutputStream_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_InputStreamReader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(67);
	if ((frame[4].i) <= (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(68);
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, (frame[1].o), (frame[3].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = temp0;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(71);
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_close])(ctx, (frame[1].o));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_InputStreamReader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	init_java_io_Reader(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_internal = (jref) (frame[1].o);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_intern_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_intern_R_java_lang_String])(ctx, (frame[2].o));
	((java_io_InputStreamReader *) NULL_CHECK(sp[0].o))->F_enc = (jref) sp[1].o;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_InputStreamReader_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_internal;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(89);
	((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbufferOff = (jint(-1));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_InputStreamReader_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_io_InputStreamReader_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_io_InputStreamReader_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_c;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	((java_io_InputStreamReader *) NULL_CHECK(sp[0].o))->F_c = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_c;
	jint temp0 = (jint)((func_java_io_InputStreamReader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStreamReader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	frame[1].i = temp0;
	LINE_NUMBER(114);
	if ((frame[1].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_c;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jint M_java_io_InputStreamReader_read_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbuffer;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(125);
	M_java_io_InputStreamReader_complete(ctx, (frame[0].o));
	LINE_NUMBER(126);
	((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbufferOff = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbufferOff;
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbuffer;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(131);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbufferOff;
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbuffer;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	if ((frame[3].i) <= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbuffer;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, ((jint)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_cbufferOff)));
	LINE_NUMBER(134);
	INST_IINC(4, 1);
	LINE_NUMBER(135);
	INST_IINC(2, 1);
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((java_io_InputStreamReader *) NULL_CHECK(sp[0].o))->F_cbufferOff = (((jint)((java_io_InputStreamReader *) NULL_CHECK(sp[0].o))->F_cbufferOff) + (jint(1)));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(138);
	if ((frame[4].i) != (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_12:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_java_io_InputStreamReader_ready_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:ready", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_java_io_InputStreamReader_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:reset", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_io_InputStreamReader_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStreamReader:skip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((java_io_InputStreamReader *) NULL_CHECK((frame[0].o)))->F_internal;
	jlong temp0 = (jlong)((func_java_io_InputStream_skip_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_skip_long_R_long])(ctx, sp[0].o, (frame[1].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_InputStreamReader[] {
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
	(void *) M_java_io_Reader_read_java_nio_CharBuffer_R_int,
	(void *) M_java_io_InputStreamReader_close,
	(void *) M_java_io_InputStreamReader_mark_int,
	(void *) M_java_io_InputStreamReader_markSupported_R_boolean,
	(void *) M_java_io_InputStreamReader_read_R_int,
	(void *) M_java_io_Reader_read_Array1_char_R_int,
	(void *) M_java_io_InputStreamReader_read_Array1_char_int_int_R_int,
	(void *) M_java_io_InputStreamReader_ready_R_boolean,
	(void *) M_java_io_InputStreamReader_reset,
	(void *) M_java_io_InputStreamReader_skip_long_R_long,
	(void *) M_java_io_InputStreamReader_complete,
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
	{ "read", "(Ljava/nio/CharBuffer;)I" },
	{ "close", "()V" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([C)I" },
	{ "read", "([CII)I" },
	{ "ready", "()Z" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "complete", "()V" },
};

static FieldMetadata fields[] {
	{ "internal", &class_java_io_InputStream, offsetof(java_io_InputStreamReader, F_internal), "Ljava/io/InputStream;", 2 },
	{ "enc", &class_java_lang_String, offsetof(java_io_InputStreamReader, F_enc), "Ljava/lang/String;", 2 },
	{ "cbuffer", getArrayClass(&class_char, 1), offsetof(java_io_InputStreamReader, F_cbuffer), "[C", 2 },
	{ "cbufferOff", &class_int, offsetof(java_io_InputStreamReader, F_cbufferOff), "I", 2 },
	{ "c", getArrayClass(&class_char, 1), offsetof(java_io_InputStreamReader, F_c), "[C", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_InputStreamReader_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "<init>", (intptr_t) init_java_io_InputStreamReader_java_io_InputStream_java_nio_charset_Charset, 0, "(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V", 1 },
	{ "complete", (intptr_t) M_java_io_InputStreamReader_complete, VTABLE_java_io_InputStreamReader_complete, "()V", 2 },
	{ "readInputStream", (intptr_t) SM_java_io_InputStreamReader_readInputStream_java_io_InputStream_R_Array1_byte, 0, "(Ljava/io/InputStream;)[B", 10 },
	{ "copy", (intptr_t) SM_java_io_InputStreamReader_copy_java_io_InputStream_java_io_OutputStream_int, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;I)V", 10 },
	{ "<init>", (intptr_t) init_java_io_InputStreamReader_java_io_InputStream_java_lang_String, 0, "(Ljava/io/InputStream;Ljava/lang/String;)V", 1 },
	{ "close", (intptr_t) M_java_io_InputStreamReader_close, VTABLE_java_io_InputStreamReader_close, "()V", 1 },
	{ "mark", (intptr_t) M_java_io_InputStreamReader_mark_int, VTABLE_java_io_InputStreamReader_mark_int, "(I)V", 1 },
	{ "markSupported", (intptr_t) M_java_io_InputStreamReader_markSupported_R_boolean, VTABLE_java_io_InputStreamReader_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_java_io_InputStreamReader_read_R_int, VTABLE_java_io_InputStreamReader_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_InputStreamReader_read_Array1_char_int_int_R_int, VTABLE_java_io_InputStreamReader_read_Array1_char_int_int_R_int, "([CII)I", 1 },
	{ "ready", (intptr_t) M_java_io_InputStreamReader_ready_R_boolean, VTABLE_java_io_InputStreamReader_ready_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_java_io_InputStreamReader_reset, VTABLE_java_io_InputStreamReader_reset, "()V", 1 },
	{ "skip", (intptr_t) M_java_io_InputStreamReader_skip_long_R_long, VTABLE_java_io_InputStreamReader_skip_long_R_long, "(J)J", 1 },
};

Class class_java_io_InputStreamReader{
		.nativeName = (intptr_t) "java/io/InputStreamReader",
		.parentClass = (intptr_t) &class_java_io_Reader,
		.size = sizeof(java_io_InputStreamReader),
		.classVtable = (intptr_t) vtable_java_io_InputStreamReader,
		.staticInitializer = (intptr_t) clinit_java_io_InputStreamReader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_InputStreamReader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_InputStreamReader = registerClass(&class_java_io_InputStreamReader);

}
