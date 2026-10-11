#include "arc/util/io/CounterInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/io/FilterInputStream.h"
#include "arc/util/io/CounterInputStream.h"

extern "C" {


void mark_arc_util_io_CounterInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_FilterInputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_io_CounterInputStream *) object;
}

void clinit_arc_util_io_CounterInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_FilterInputStream(ctx);
}

void init_arc_util_io_CounterInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/CounterInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_CounterInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	init_java_io_FilterInputStream_java_io_InputStream(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_io_CounterInputStream_resetCount(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/CounterInputStream:resetCount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	((arc_util_io_CounterInputStream *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_arc_util_io_CounterInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/CounterInputStream:skip", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(18);
	jlong temp0 = (jlong)M_java_io_FilterInputStream_skip_long_R_long(ctx, (frame[0].o), (frame[1].l));
	frame[3].l = temp0;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	((arc_util_io_CounterInputStream *) NULL_CHECK(sp[0].o))->F_count = (jint(((jlong(((jint)((arc_util_io_CounterInputStream *) NULL_CHECK(sp[0].o))->F_count))) + (frame[3].l))));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_CounterInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/CounterInputStream:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	((arc_util_io_CounterInputStream *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_util_io_CounterInputStream *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/CounterInputStream:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	((arc_util_io_CounterInputStream *) NULL_CHECK(sp[0].o))->F_count = (((jint)((arc_util_io_CounterInputStream *) NULL_CHECK(sp[0].o))->F_count) + (frame[4].i));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_CounterInputStream[] {
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
	(void *) M_java_io_FilterInputStream_close,
	(void *) M_java_io_FilterInputStream_available_R_int,
	(void *) M_java_io_FilterInputStream_mark_int,
	(void *) M_java_io_FilterInputStream_markSupported_R_boolean,
	(void *) M_arc_util_io_CounterInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_FilterInputStream_reset,
	(void *) M_arc_util_io_CounterInputStream_skip_long_R_long,
	(void *) M_arc_util_io_CounterInputStream_resetCount,
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
	{ "resetCount", "()V" },
};

static FieldMetadata fields[] {
	{ "count", &class_int, offsetof(arc_util_io_CounterInputStream, F_count), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_CounterInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 1 },
	{ "resetCount", (intptr_t) M_arc_util_io_CounterInputStream_resetCount, VTABLE_arc_util_io_CounterInputStream_resetCount, "()V", 1 },
	{ "skip", (intptr_t) M_arc_util_io_CounterInputStream_skip_long_R_long, VTABLE_arc_util_io_CounterInputStream_skip_long_R_long, "(J)J", 1 },
	{ "read", (intptr_t) M_arc_util_io_CounterInputStream_read_R_int, VTABLE_arc_util_io_CounterInputStream_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int, VTABLE_arc_util_io_CounterInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
};

Class class_arc_util_io_CounterInputStream{
		.nativeName = (intptr_t) "arc/util/io/CounterInputStream",
		.parentClass = (intptr_t) &class_java_io_FilterInputStream,
		.size = sizeof(arc_util_io_CounterInputStream),
		.classVtable = (intptr_t) vtable_arc_util_io_CounterInputStream,
		.staticInitializer = (intptr_t) clinit_arc_util_io_CounterInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_CounterInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_CounterInputStream = registerClass(&class_arc_util_io_CounterInputStream);

}
