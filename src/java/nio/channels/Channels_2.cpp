#include "java/nio/channels/Channels_2.h"
#include "java/lang/Math.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/lang/Integer.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/concurrent/Future.h"
#include "java/nio/channels/AsynchronousByteChannel.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/channels/AsynchronousChannel.h"
#include "java/lang/Object.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/Channels_2.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_nio_channels_Channels$2(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_Channels$2 *) object;
	if (self->F_bb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bb)->clazz)->markFunction)((jobject) self->F_bb, mark, depth + 1);
	if (self->F_bs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bs)->clazz)->markFunction)((jobject) self->F_bs, mark, depth + 1);
	if (self->F_b1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b1)->clazz)->markFunction)((jobject) self->F_b1, mark, depth + 1);
	if (self->F_val$ch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$ch)->clazz)->markFunction)((jobject) self->F_val$ch, mark, depth + 1);
}

void clinit_java_nio_channels_Channels$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

void init_java_nio_channels_Channels$2_java_nio_channels_AsynchronousByteChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_val$ch = (jref) (frame[1].o);
	init_java_io_InputStream(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_Channels$2_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$2:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_b1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((java_nio_channels_Channels$2 *) NULL_CHECK(sp[0].o))->F_b1 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_b1;
	jint temp0 = (jint)((func_java_nio_channels_Channels$2_read_Array1_byte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_Channels$2_read_Array1_byte_R_int])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(110);
	if ((frame[1].i) != (jint(1))) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_b1;
	jint temp0 = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) & (255);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(-1);
label_5:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$2:read", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(114);
	if ((frame[2].i) < 0) goto label_11;
	}
	{
	if ((frame[2].i) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_11;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_11;
	{
	if (((frame[2].i) + (frame[3].i)) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_11;
	}
	{
	if (((frame[2].i) + (frame[3].i)) < 0) goto label_11;
	}
	{
	LINE_NUMBER(115);
	if ((frame[3].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(116);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_bs;
	if (sp[0].o != (frame[1].o)) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_bb;
	sp += 1;
	goto label_16;
	}
label_15:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer(ctx, sp[0].o);
	sp++;
label_16:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(120);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[2].i) + (frame[3].i);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(121);
	((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[4].o);
	LINE_NUMBER(122);
	((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_bs = (jref) (frame[1].o);
	LINE_NUMBER(123);
	frame[5].i = (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_9; } // goto label_4
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); bypasses[1] = true; goto label_9; } // goto label_6
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_val$ch;
	sp[0].o = (jobject)((func_java_nio_channels_AsynchronousByteChannel_read_java_nio_ByteBuffer_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_nio_channels_AsynchronousByteChannel, INDEX_java_nio_channels_AsynchronousByteChannel_read_java_nio_ByteBuffer_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[0].o)));
	frame[6].i = temp0;
	LINE_NUMBER(129);
	frame[7].i = (frame[6].i);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(138);
	if ((frame[5].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx, self);
	return (frame[7].i);
	}
label_2:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_6;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	if (bypasses[1]) { bypasses[1] = false; goto label_6; }
	{
	sp -= 1;
	LINE_NUMBER(130);
	frame[6].o = sp[0].o;
	LINE_NUMBER(131);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(132);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutionException_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ExecutionException_getCause_R_java_lang_Throwable])(ctx, (frame[7].o));
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(133);
	frame[6].o = sp[0].o;
	LINE_NUMBER(134);
	frame[5].i = (jint(1));
	LINE_NUMBER(135);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_6:;
	LINE_NUMBER(138);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_29;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_29:;
	{
	LINE_NUMBER(142);
	throwException(ctx, (frame[8].o));	}
label_11:;
	{
	LINE_NUMBER(145);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_nio_channels_Channels$2_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$2:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((java_nio_channels_Channels$2 *) NULL_CHECK((frame[0].o)))->F_val$ch;
	((func_java_nio_channels_AsynchronousChannel_close) resolveInterfaceMethod(ctx, &class_java_nio_channels_AsynchronousChannel, INDEX_java_nio_channels_AsynchronousChannel_close, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_Channels$2[] {
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
	(void *) M_java_nio_channels_Channels$2_close,
	(void *) M_java_io_InputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_java_nio_channels_Channels$2_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int,
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

static FieldMetadata fields[] {
	{ "bb", &class_java_nio_ByteBuffer, offsetof(java_nio_channels_Channels$2, F_bb), "Ljava/nio/ByteBuffer;", 2 },
	{ "bs", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_Channels$2, F_bs), "[B", 2 },
	{ "b1", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_Channels$2, F_b1), "[B", 2 },
	{ "val$ch", &class_java_nio_channels_AsynchronousByteChannel, offsetof(java_nio_channels_Channels$2, F_val$ch), "Ljava/nio/channels/AsynchronousByteChannel;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_Channels$2_java_nio_channels_AsynchronousByteChannel, 0, "(Ljava/nio/channels/AsynchronousByteChannel;)V", 0 },
	{ "read", (intptr_t) M_java_nio_channels_Channels$2_read_R_int, VTABLE_java_nio_channels_Channels$2_read_R_int, "()I", 33 },
	{ "read", (intptr_t) M_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int, VTABLE_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int, "([BII)I", 33 },
	{ "close", (intptr_t) M_java_nio_channels_Channels$2_close, VTABLE_java_nio_channels_Channels$2_close, "()V", 1 },
};

Class class_java_nio_channels_Channels$2{
		.nativeName = (intptr_t) "java/nio/channels/Channels$2",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_nio_channels_Channels$2),
		.classVtable = (intptr_t) vtable_java_nio_channels_Channels$2,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_Channels$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_Channels$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_nio_channels_Channels$2 = registerClass(&class_java_nio_channels_Channels$2);

}

