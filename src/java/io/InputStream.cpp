#include "java/io/InputStream.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"

extern "C" {


void mark_java_io_InputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_InputStream *) object;
}

void clinit_java_io_InputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_InputStream(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_io_InputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_io_InputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:close", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_InputStream_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_io_InputStream_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_io_InputStream_read_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_InputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(95);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (frame[0].o));
	frame[5].i = temp0;
	if (temp0 != (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(99);
	if ((frame[4].i) != 0) goto label_10;
	}
	INST_ICONST(-1);
	goto label_1;
label_10:;
	INST_ILOAD(4);
label_1:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	LINE_NUMBER(106);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(101);
	frame[6].o = sp[0].o;
	LINE_NUMBER(102);
	if ((frame[4].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_13:;
	{
	LINE_NUMBER(105);
	throwException(ctx, (frame[6].o));	}
label_11:;
	{
	LINE_NUMBER(107);
	ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (frame[4].i))) = (jbyte((frame[5].i)));
	LINE_NUMBER(95);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_java_io_InputStream_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_io_InputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/InputStream:skip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint((frame[1].l))));
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

void *vtable_java_io_InputStream[] {
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
	(void *) M_java_io_InputStream_close,
	(void *) M_java_io_InputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) nullptr,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_io_InputStream_skip_long_R_long,
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

static jclass interfaces[] { &class_java_io_Closeable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_InputStream, 0, "()V", 1 },
	{ "available", (intptr_t) M_java_io_InputStream_available_R_int, VTABLE_java_io_InputStream_available_R_int, "()I", 1 },
	{ "close", (intptr_t) M_java_io_InputStream_close, VTABLE_java_io_InputStream_close, "()V", 1 },
	{ "mark", (intptr_t) M_java_io_InputStream_mark_int, VTABLE_java_io_InputStream_mark_int, "(I)V", 1 },
	{ "markSupported", (intptr_t) M_java_io_InputStream_markSupported_R_boolean, VTABLE_java_io_InputStream_markSupported_R_boolean, "()Z", 1 },
	{ "read", 0, VTABLE_java_io_InputStream_read_R_int, "()I", 1025 },
	{ "read", (intptr_t) M_java_io_InputStream_read_Array1_byte_R_int, VTABLE_java_io_InputStream_read_Array1_byte_R_int, "([B)I", 1 },
	{ "read", (intptr_t) M_java_io_InputStream_read_Array1_byte_int_int_R_int, VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "reset", (intptr_t) M_java_io_InputStream_reset, VTABLE_java_io_InputStream_reset, "()V", 1 },
	{ "skip", (intptr_t) M_java_io_InputStream_skip_long_R_long, VTABLE_java_io_InputStream_skip_long_R_long, "(J)J", 1 },
};

Class class_java_io_InputStream{
		.nativeName = (intptr_t) "java/io/InputStream",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_InputStream),
		.classVtable = (intptr_t) vtable_java_io_InputStream,
		.staticInitializer = (intptr_t) clinit_java_io_InputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_InputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_InputStream = registerClass(&class_java_io_InputStream);

}
