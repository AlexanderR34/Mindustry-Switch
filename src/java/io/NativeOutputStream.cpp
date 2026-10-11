#include "java/io/NativeOutputStream.h"
#include "java/io/NativeOutputStream.h"
#include "java/lang/Object.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_NativeOutputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_OutputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_io_NativeOutputStream *) object;
}

void clinit_java_io_NativeOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
}

void init_java_io_NativeOutputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/NativeOutputStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_NativeOutputStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_io_OutputStream(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_NativeOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/NativeOutputStream:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jbyte((frame[1].i)));
	((func_java_io_NativeOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_NativeOutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(1)));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_NativeOutputStream_write_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/NativeOutputStream:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	M_java_io_OutputStream_write_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_NativeOutputStream[] {
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
	(void *) M_java_io_OutputStream_close,
	(void *) M_java_io_OutputStream_flush,
	(void *) M_java_io_NativeOutputStream_write_Array1_byte,
	(void *) M_java_io_NativeOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_NativeOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
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
	{ "flush", "()V" },
	{ "write", "([B)V" },
	{ "write", "([BII)V" },
	{ "write", "(I)V" },
	{ "checkError", "()Z" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_NativeOutputStream, 0, "()V", 1 },
	{ "write", (intptr_t) M_java_io_NativeOutputStream_write_int, VTABLE_java_io_NativeOutputStream_write_int, "(I)V", 1 },
	{ "write", (intptr_t) M_java_io_NativeOutputStream_write_Array1_byte_int_int, VTABLE_java_io_NativeOutputStream_write_Array1_byte_int_int, "([BII)V", 257 },
	{ "write", (intptr_t) M_java_io_NativeOutputStream_write_Array1_byte, VTABLE_java_io_NativeOutputStream_write_Array1_byte, "([B)V", 1 },
};

Class class_java_io_NativeOutputStream{
		.nativeName = (intptr_t) "java/io/NativeOutputStream",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_io_NativeOutputStream),
		.classVtable = (intptr_t) vtable_java_io_NativeOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_NativeOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_NativeOutputStream,
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
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_NativeOutputStream = registerClass(&class_java_io_NativeOutputStream);

}
