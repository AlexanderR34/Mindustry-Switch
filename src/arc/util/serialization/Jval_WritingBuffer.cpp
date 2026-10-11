#include "arc/util/serialization/Jval_WritingBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Jval.h"
#include "java/io/Writer.h"
#include "arc/util/serialization/Jval_WritingBuffer.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_util_serialization_Jval$WritingBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Jval$WritingBuffer *) object;
	if (self->F_writer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writer)->clazz)->markFunction)((jobject) self->F_writer, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_arc_util_serialization_Jval$WritingBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_Writer(ctx);
}

void init_arc_util_serialization_Jval$WritingBuffer_java_io_Writer_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$WritingBuffer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$WritingBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(377);
	init_java_io_Writer(ctx, (frame[0].o));
	LINE_NUMBER(375);
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	LINE_NUMBER(378);
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_writer = (jref) (frame[1].o);
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$WritingBuffer_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$WritingBuffer:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(384);
	jint temp0 = (jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill;
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(385);
	((func_arc_util_serialization_Jval$WritingBuffer_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval$WritingBuffer_flush])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[1].o))->F_fill;
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[1].o))->F_fill = (temp0 + (jint(1)));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[1].i)));
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$WritingBuffer:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill;
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (frame[3].i))) goto label_1;
	}
	{
	LINE_NUMBER(393);
	((func_arc_util_serialization_Jval$WritingBuffer_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval$WritingBuffer_flush])(ctx, (frame[0].o));
	LINE_NUMBER(394);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill), (frame[3].i));
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[0].o))->F_fill = (((jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[0].o))->F_fill) + (frame[3].i));
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$WritingBuffer:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(405);
	jint temp0 = (jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill;
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (frame[3].i))) goto label_1;
	}
	{
	LINE_NUMBER(406);
	((func_arc_util_serialization_Jval$WritingBuffer_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval$WritingBuffer_flush])(ctx, (frame[0].o));
	LINE_NUMBER(407);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_writer;
	((func_java_io_Writer_write_java_lang_String_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (frame[2].i) + (frame[3].i);
	sp[1].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill));
	LINE_NUMBER(413);
	sp[0].o = frame[0].o;
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[0].o))->F_fill = (((jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK(sp[0].o))->F_fill) + (frame[3].i));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$WritingBuffer_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$WritingBuffer:flush", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_writer;
	sp[1].o = (jobject)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_io_Writer_write_Array1_char_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_Array1_char_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill));
	LINE_NUMBER(420);
	((arc_util_serialization_Jval$WritingBuffer *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_serialization_Jval$WritingBuffer_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$WritingBuffer:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$WritingBuffer[] {
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
	(void *) M_arc_util_serialization_Jval$WritingBuffer_close,
	(void *) M_arc_util_serialization_Jval$WritingBuffer_flush,
	(void *) M_java_io_Writer_write_Array1_char,
	(void *) M_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int,
	(void *) M_arc_util_serialization_Jval$WritingBuffer_write_int,
	(void *) M_java_io_Writer_write_java_lang_String,
	(void *) M_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_R_java_io_Writer,
	(void *) M_java_io_Writer_append_char_R_java_io_Writer,
	(void *) M_java_io_Writer_append_java_lang_CharSequence_int_int_R_java_io_Writer,
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
};

static FieldMetadata fields[] {
	{ "writer", &class_java_io_Writer, offsetof(arc_util_serialization_Jval$WritingBuffer, F_writer), "Ljava/io/Writer;", 18 },
	{ "buffer", getArrayClass(&class_char, 1), offsetof(arc_util_serialization_Jval$WritingBuffer, F_buffer), "[C", 18 },
	{ "fill", &class_int, offsetof(arc_util_serialization_Jval$WritingBuffer, F_fill), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$WritingBuffer_java_io_Writer_int, 0, "(Ljava/io/Writer;I)V", 0 },
	{ "write", (intptr_t) M_arc_util_serialization_Jval$WritingBuffer_write_int, VTABLE_arc_util_serialization_Jval$WritingBuffer_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int, VTABLE_arc_util_serialization_Jval$WritingBuffer_write_Array1_char_int_int, "([CII)V", 1 },
	{ "write", (intptr_t) M_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int, VTABLE_arc_util_serialization_Jval$WritingBuffer_write_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "flush", (intptr_t) M_arc_util_serialization_Jval$WritingBuffer_flush, VTABLE_arc_util_serialization_Jval$WritingBuffer_flush, "()V", 1 },
	{ "close", (intptr_t) M_arc_util_serialization_Jval$WritingBuffer_close, VTABLE_arc_util_serialization_Jval$WritingBuffer_close, "()V", 1 },
};

Class class_arc_util_serialization_Jval$WritingBuffer{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$WritingBuffer",
		.parentClass = (intptr_t) &class_java_io_Writer,
		.size = sizeof(arc_util_serialization_Jval$WritingBuffer),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$WritingBuffer,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$WritingBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$WritingBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Jval,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$WritingBuffer = registerClass(&class_arc_util_serialization_Jval$WritingBuffer);

}

