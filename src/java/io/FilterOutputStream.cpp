#include "java/io/FilterOutputStream.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "java/io/FilterOutputStream.h"
#include "java/lang/Throwable.h"
#include "java/io/OutputStream.h"

extern "C" {


void mark_java_io_FilterOutputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_FilterOutputStream *) object;
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
}

void clinit_java_io_FilterOutputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
}

void init_java_io_FilterOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterOutputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_FilterOutputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	init_java_io_OutputStream(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out = (jref) (frame[1].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FilterOutputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterOutputStream:close", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(60);
	((func_java_io_FilterOutputStream_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_FilterOutputStream_flush])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(61);
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	frame[1].o = (frame[2].o);
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(71);
	goto label_10;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(67);
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(69);
	frame[1].o = (frame[2].o);
	}
label_10:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_FilterOutputStream_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterOutputStream:flush", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_flush])(ctx, sp[0].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_FilterOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterOutputStream:write", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(105);
	SM_java_util_Arrays_checkOffsetAndCount_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	LINE_NUMBER(106);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(109);
	((func_java_io_FilterOutputStream_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_FilterOutputStream_write_int])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), ((frame[2].i) + (frame[4].i)))));
	LINE_NUMBER(106);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_io_FilterOutputStream_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/FilterOutputStream:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_io_FilterOutputStream *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_io_FilterOutputStream[] {
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
	(void *) M_java_io_FilterOutputStream_close,
	(void *) M_java_io_FilterOutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_io_FilterOutputStream_write_Array1_byte_int_int,
	(void *) M_java_io_FilterOutputStream_write_int,
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

static FieldMetadata fields[] {
	{ "out", &class_java_io_OutputStream, offsetof(java_io_FilterOutputStream, F_out), "Ljava/io/OutputStream;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_FilterOutputStream_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 1 },
	{ "close", (intptr_t) M_java_io_FilterOutputStream_close, VTABLE_java_io_FilterOutputStream_close, "()V", 1 },
	{ "flush", (intptr_t) M_java_io_FilterOutputStream_flush, VTABLE_java_io_FilterOutputStream_flush, "()V", 1 },
	{ "write", (intptr_t) M_java_io_FilterOutputStream_write_Array1_byte_int_int, VTABLE_java_io_FilterOutputStream_write_Array1_byte_int_int, "([BII)V", 1 },
	{ "write", (intptr_t) M_java_io_FilterOutputStream_write_int, VTABLE_java_io_FilterOutputStream_write_int, "(I)V", 1 },
};

Class class_java_io_FilterOutputStream{
		.nativeName = (intptr_t) "java/io/FilterOutputStream",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_io_FilterOutputStream),
		.classVtable = (intptr_t) vtable_java_io_FilterOutputStream,
		.staticInitializer = (intptr_t) clinit_java_io_FilterOutputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_FilterOutputStream,
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
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_FilterOutputStream = registerClass(&class_java_io_FilterOutputStream);

}
