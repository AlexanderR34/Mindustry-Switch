#include "java/io/Reader.h"
#include "java/lang/Object.h"
#include "java/nio/Buffer.h"
#include "java/lang/AutoCloseable.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/IOException.h"
#include "java/lang/Readable.h"
#include "java/io/Closeable.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_io_Reader(jobject object, jint mark, jint depth) {
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
	auto self = (java_io_Reader *) object;
	if (self->F_lock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lock)->clazz)->markFunction)((jobject) self->F_lock, mark, depth + 1);
}

void clinit_java_io_Reader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_io_Reader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_Reader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock = (jref) (frame[0].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_io_Reader_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_io_Reader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock = (jref) (frame[1].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_io_Reader_mark_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:mark", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(62);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_io_Reader_markSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:markSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_io_Reader_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[0].o), (frame[2].o), (jint(0)), (jint(1)));
	if (temp0 == (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[2].o), (jint(0)));
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	jint temp0 = jint(-1);
	monitorExit(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(83);
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jint M_java_io_Reader_read_Array1_char_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_io_Reader_read_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(95);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(96);
	jint temp1 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[0].o), (frame[3].o), (jint(0)), (frame[2].i));
	frame[4].i = temp1;
	LINE_NUMBER(97);
	if ((frame[4].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer])(ctx, (frame[1].o), (frame[3].o), (jint(0)), (frame[4].i));
	}
label_4:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_java_io_Reader_ready_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:ready", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_io_Reader_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_io_Reader_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/io/Reader:skip", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(127);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(128);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((java_io_Reader *) NULL_CHECK((frame[0].o)))->F_lock;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_19; }
	{
	LINE_NUMBER(131);
	frame[4].l = (jlong(0));
	LINE_NUMBER(132);
	if ((longCompare((frame[1].l), (jlong(512ll)))) >= 0) goto label_16;
	}
	{
	jint temp0 = jint((frame[1].l));
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_SIPUSH(512);
label_17:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(133);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[6].i));
	frame[7].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(134);
	if ((longCompare((frame[4].l), (frame[1].l))) >= 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_20
	}
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, (frame[0].o), (frame[7].o), (jint(0)), (frame[6].i));
	frame[8].i = temp0;
	LINE_NUMBER(136);
	if ((frame[8].i) != (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(137);
	jlong temp0 = frame[4].l;
	monitorExit(ctx, (frame[3].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(139);
	frame[4].l = ((frame[4].l) + (jlong((frame[8].i))));
	LINE_NUMBER(140);
	if ((frame[8].i) >= (frame[6].i)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(141);
	jlong temp0 = frame[4].l;
	monitorExit(ctx, (frame[3].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_20; }
	{
	LINE_NUMBER(143);
	if ((longCompare(((frame[1].l) - (frame[4].l)), (jlong((frame[6].i))))) >= 0) goto label_26;
	}
	{
	LINE_NUMBER(144);
	frame[6].i = (jint(((frame[1].l) - (frame[4].l))));
	}
label_26:;
	LINE_NUMBER(146);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_19
label_20:;
	{
	LINE_NUMBER(147);
	jlong temp0 = frame[4].l;
	monitorExit(ctx, (frame[3].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(148);
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void *vtable_java_io_Reader[] {
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
	(void *) nullptr,
	(void *) M_java_io_Reader_mark_int,
	(void *) M_java_io_Reader_markSupported_R_boolean,
	(void *) M_java_io_Reader_read_R_int,
	(void *) M_java_io_Reader_read_Array1_char_R_int,
	(void *) nullptr,
	(void *) M_java_io_Reader_ready_R_boolean,
	(void *) M_java_io_Reader_reset,
	(void *) M_java_io_Reader_skip_long_R_long,
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
};

static jclass interfaces[] { &class_java_lang_Readable, &class_java_io_Closeable, };

static FieldMetadata fields[] {
	{ "lock", &class_java_lang_Object, offsetof(java_io_Reader, F_lock), "Ljava/lang/Object;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_io_Reader, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_java_io_Reader_java_lang_Object, 0, "(Ljava/lang/Object;)V", 4 },
	{ "close", 0, VTABLE_java_io_Reader_close, "()V", 1025 },
	{ "mark", (intptr_t) M_java_io_Reader_mark_int, VTABLE_java_io_Reader_mark_int, "(I)V", 1 },
	{ "markSupported", (intptr_t) M_java_io_Reader_markSupported_R_boolean, VTABLE_java_io_Reader_markSupported_R_boolean, "()Z", 1 },
	{ "read", (intptr_t) M_java_io_Reader_read_R_int, VTABLE_java_io_Reader_read_R_int, "()I", 1 },
	{ "read", (intptr_t) M_java_io_Reader_read_Array1_char_R_int, VTABLE_java_io_Reader_read_Array1_char_R_int, "([C)I", 1 },
	{ "read", (intptr_t) M_java_io_Reader_read_java_nio_CharBuffer_R_int, VTABLE_java_io_Reader_read_java_nio_CharBuffer_R_int, "(Ljava/nio/CharBuffer;)I", 1 },
	{ "read", 0, VTABLE_java_io_Reader_read_Array1_char_int_int_R_int, "([CII)I", 1025 },
	{ "ready", (intptr_t) M_java_io_Reader_ready_R_boolean, VTABLE_java_io_Reader_ready_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_java_io_Reader_reset, VTABLE_java_io_Reader_reset, "()V", 1 },
	{ "skip", (intptr_t) M_java_io_Reader_skip_long_R_long, VTABLE_java_io_Reader_skip_long_R_long, "(J)J", 1 },
};

Class class_java_io_Reader{
		.nativeName = (intptr_t) "java/io/Reader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_io_Reader),
		.classVtable = (intptr_t) vtable_java_io_Reader,
		.staticInitializer = (intptr_t) clinit_java_io_Reader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_io_Reader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_io_Reader = registerClass(&class_java_io_Reader);

}
