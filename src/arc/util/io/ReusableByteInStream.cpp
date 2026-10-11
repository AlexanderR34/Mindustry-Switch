#include "arc/util/io/ReusableByteInStream.h"
#include "java/lang/Math.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "arc/util/io/ReusableByteInStream.h"
#include "java/io/ByteArrayInputStream.h"

extern "C" {


void mark_arc_util_io_ReusableByteInStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_ByteArrayInputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_io_ReusableByteInStream *) object;
}

void clinit_arc_util_io_ReusableByteInStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_ByteArrayInputStream(ctx);
}

void init_arc_util_io_ReusableByteInStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteInStream:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_ReusableByteInStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_ReusableByteInStream_position_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteInStream:position", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return ((jint)((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos);
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteInStream:setBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (jint(0));
	LINE_NUMBER(19);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_count = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(20);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_mark = (jint(0));
	LINE_NUMBER(21);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[1].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/ReusableByteInStream:setBytes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(25);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_buf = (jref) (frame[1].o);
	LINE_NUMBER(26);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_pos = (frame[2].i);
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[2].i) + (frame[3].i)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((java_io_ByteArrayInputStream *) NULL_CHECK(sp[0].o))->F_count = temp0;
	LINE_NUMBER(28);
	((java_io_ByteArrayInputStream *) NULL_CHECK((frame[0].o)))->F_mark = (frame[2].i);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_ReusableByteInStream[] {
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
	(void *) M_java_io_ByteArrayInputStream_close,
	(void *) M_java_io_ByteArrayInputStream_available_R_int,
	(void *) M_java_io_ByteArrayInputStream_mark_int,
	(void *) M_java_io_ByteArrayInputStream_markSupported_R_boolean,
	(void *) M_java_io_ByteArrayInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_ByteArrayInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_ByteArrayInputStream_reset,
	(void *) M_java_io_ByteArrayInputStream_skip_long_R_long,
	(void *) M_arc_util_io_ReusableByteInStream_position_R_int,
	(void *) M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte,
	(void *) M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int,
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
	{ "close", "()V" },
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
	{ "position", "()I" },
	{ "setBytes", "([B)V" },
	{ "setBytes", "([BII)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_ReusableByteInStream, 0, "()V", 1 },
	{ "position", (intptr_t) M_arc_util_io_ReusableByteInStream_position_R_int, VTABLE_arc_util_io_ReusableByteInStream_position_R_int, "()I", 1 },
	{ "setBytes", (intptr_t) M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte, VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte, "([B)V", 1 },
	{ "setBytes", (intptr_t) M_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int, VTABLE_arc_util_io_ReusableByteInStream_setBytes_Array1_byte_int_int, "([BII)V", 1 },
};

Class class_arc_util_io_ReusableByteInStream{
		.nativeName = (intptr_t) "arc/util/io/ReusableByteInStream",
		.parentClass = (intptr_t) &class_java_io_ByteArrayInputStream,
		.size = sizeof(arc_util_io_ReusableByteInStream),
		.classVtable = (intptr_t) vtable_arc_util_io_ReusableByteInStream,
		.staticInitializer = (intptr_t) clinit_arc_util_io_ReusableByteInStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_ReusableByteInStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_ReusableByteInStream = registerClass(&class_arc_util_io_ReusableByteInStream);

}
