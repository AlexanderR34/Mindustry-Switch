#include "java/io/FilterInputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/io/FilterInputStream.h"

extern "C" {


void mark_java_io_FilterInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_FilterInputStream *) object;
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
}

void clinit_java_io_FilterInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

void init_java_io_FilterInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FilterInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(48);
	((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_FilterInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_io_FilterInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FilterInputStream_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:mark", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_mark_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_mark_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(84);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_io_FilterInputStream_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_markSupported_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_markSupported_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_FilterInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:read", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_FilterInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_io_FilterInputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(155);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_io_FilterInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterInputStream:skip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((java_io_FilterInputStream *) NULL_CHECK((frame[0].o)))->F_in;
	jlong temp0 = (jlong)((func_java_io_InputStream_skip_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_skip_long_R_long])(ctx, sp[0].o, (frame[1].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_FilterInputStream[] {
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
	(void *) M_java_io_FilterInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_FilterInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_FilterInputStream_reset,
	(void *) M_java_io_FilterInputStream_skip_long_R_long,
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
};

static FieldMetadata fields[] {
	{ "in", &class_java_io_InputStream, offsetof(java_io_FilterInputStream, F_in), "Ljava/io/InputStream;", 68 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_FilterInputStream_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 4 },
	{ "available", (intptr_t) M_java_io_FilterInputStream_available_R_int, VTABLE_java_io_FilterInputStream_available_R_int, "()I", 1 },
	{ "close", (intptr_t) M_java_io_FilterInputStream_close, VTABLE_java_io_FilterInputStream_close, "()V", 1 },
	{ "mark", (intptr_t) M_java_io_FilterInputStream_mark_int, VTABLE_java_io_FilterInputStream_mark_int, "(I)V", 33 },
	{ "markSupported", (intptr_t) M_java_io_FilterInputStream_markSupported_R_boolean, VTABLE_java_io_FilterInputStream_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_java_io_FilterInputStream_read_R_int, VTABLE_java_io_FilterInputStream_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_FilterInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_FilterInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "reset", (intptr_t) M_java_io_FilterInputStream_reset, VTABLE_java_io_FilterInputStream_reset, "()V", 33 },
	{ "skip", (intptr_t) M_java_io_FilterInputStream_skip_long_R_long, VTABLE_java_io_FilterInputStream_skip_long_R_long, "(J)J", 1 },
};

Class class_java_io_FilterInputStream{
		.nativeName = (intptr_t) "java/io/FilterInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_io_FilterInputStream),
		.classVtable = (intptr_t) vtable_java_io_FilterInputStream,
		.staticInitializer = (intptr_t) clinit_java_io_FilterInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_FilterInputStream,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_FilterInputStream = registerClass(&class_java_io_FilterInputStream);

}
