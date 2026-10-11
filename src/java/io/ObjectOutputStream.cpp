#include "java/io/ObjectOutputStream.h"
#include "java/lang/Object.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_ObjectOutputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_ObjectOutputStream *) object;
}

void clinit_java_io_ObjectOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
}

void init_java_io_ObjectOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectOutputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_ObjectOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5);
	init_java_io_OutputStream(ctx, (frame[0].o));
	LINE_NUMBER(6);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_io_ObjectOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectOutputStream:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(12);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_ObjectOutputStream_defaultWriteObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectOutputStream:defaultWriteObject", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_ObjectOutputStream_writeObject_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectOutputStream:writeObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_ObjectOutputStream_writeInt_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/ObjectOutputStream:writeInt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_io_ObjectOutputStream[] {
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
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_OutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_ObjectOutputStream_write_int,
	(void *) M_java_io_OutputStream_checkError_R_boolean,
	(void *) M_java_io_ObjectOutputStream_defaultWriteObject,
	(void *) M_java_io_ObjectOutputStream_writeObject_java_lang_Object,
	(void *) M_java_io_ObjectOutputStream_writeInt_int,
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
	{ "defaultWriteObject", "()V" },
	{ "writeObject", "(Ljava/lang/Object;)V" },
	{ "writeInt", "(I)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_ObjectOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "write", (intptr_t) M_java_io_ObjectOutputStream_write_int, VTABLE_java_io_ObjectOutputStream_write_int, "(I)V", 1 },
	{ "defaultWriteObject", (intptr_t) M_java_io_ObjectOutputStream_defaultWriteObject, VTABLE_java_io_ObjectOutputStream_defaultWriteObject, "()V", 1 },
	{ "writeObject", (intptr_t) M_java_io_ObjectOutputStream_writeObject_java_lang_Object, VTABLE_java_io_ObjectOutputStream_writeObject_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "writeInt", (intptr_t) M_java_io_ObjectOutputStream_writeInt_int, VTABLE_java_io_ObjectOutputStream_writeInt_int, "(I)V", 1 },
};

Class class_java_io_ObjectOutputStream{
		.nativeName = (intptr_t) "java/io/ObjectOutputStream",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_io_ObjectOutputStream),
		.classVtable = (intptr_t) vtable_java_io_ObjectOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_ObjectOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_ObjectOutputStream,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_ObjectOutputStream = registerClass(&class_java_io_ObjectOutputStream);

}
