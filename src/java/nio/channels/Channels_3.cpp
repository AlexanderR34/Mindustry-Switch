#include "java/nio/channels/Channels_3.h"
#include "java/lang/Math.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/util/concurrent/Future.h"
#include "java/nio/channels/AsynchronousByteChannel.h"
#include "java/io/OutputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/channels/AsynchronousChannel.h"
#include "java/lang/Object.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/Channels_3.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_nio_channels_Channels$3(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_Channels$3 *) object;
	if (self->F_bb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bb)->clazz)->markFunction)((jobject) self->F_bb, mark, depth + 1);
	if (self->F_bs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bs)->clazz)->markFunction)((jobject) self->F_bs, mark, depth + 1);
	if (self->F_b1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b1)->clazz)->markFunction)((jobject) self->F_b1, mark, depth + 1);
	if (self->F_val$ch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$ch)->clazz)->markFunction)((jobject) self->F_val$ch, mark, depth + 1);
}

void clinit_java_nio_channels_Channels$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_OutputStream(ctx);
}

void init_java_nio_channels_Channels$3_java_nio_channels_AsynchronousByteChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_val$ch = (jref) (frame[1].o);
	init_java_io_OutputStream(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_Channels$3_write_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$3:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_b1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((java_nio_channels_Channels$3 *) NULL_CHECK(sp[0].o))->F_b1 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_b1;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jbyte((frame[1].i)));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_b1;
	((func_java_nio_channels_Channels$3_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_Channels$3_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(169);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_Channels$3_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$3:write", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(172);
	if ((frame[2].i) < 0) goto label_13;
	}
	{
	if ((frame[2].i) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_13;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_13;
	{
	if (((frame[2].i) + (frame[3].i)) > (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_13;
	}
	{
	if (((frame[2].i) + (frame[3].i)) < 0) goto label_13;
	}
	{
	LINE_NUMBER(173);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_bs;
	if (sp[0].o != (frame[1].o)) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_bb;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer(ctx, sp[0].o);
	sp++;
label_18:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[2].i) + (frame[3].i);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(177);
	((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[4].o);
	LINE_NUMBER(178);
	((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_bs = (jref) (frame[1].o);
	LINE_NUMBER(179);
	frame[5].i = (jint(0));
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[4].o));
	if (temp0 <= 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_val$ch;
	sp[0].o = (jobject)((func_java_nio_channels_AsynchronousByteChannel_write_java_nio_ByteBuffer_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_nio_channels_AsynchronousByteChannel, INDEX_java_nio_channels_AsynchronousByteChannel_write_java_nio_ByteBuffer_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(190);
	{ popExceptionFrames(frameRef, 1); goto label_6; }
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(185);
	frame[6].o = sp[0].o;
	LINE_NUMBER(186);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(187);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)((func_java_util_concurrent_ExecutionException_getCause_R_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ExecutionException_getCause_R_java_lang_Throwable])(ctx, (frame[7].o));
	init_java_io_IOException_java_lang_Throwable(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[6].o = sp[0].o;
	LINE_NUMBER(189);
	frame[5].i = (jint(1));
	LINE_NUMBER(190);
	{ popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_7:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(193);
	if ((frame[5].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	goto label_28;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(193);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_30;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	}
label_30:;
	{
	LINE_NUMBER(197);
	throwException(ctx, (frame[8].o));	}
label_28:;
	LINE_NUMBER(199);
	goto label_15;
label_13:;
	{
	LINE_NUMBER(201);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	LINE_NUMBER(203);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_nio_channels_Channels$3_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$3:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((java_nio_channels_Channels$3 *) NULL_CHECK((frame[0].o)))->F_val$ch;
	((func_java_nio_channels_AsynchronousChannel_close) resolveInterfaceMethod(ctx, &class_java_nio_channels_AsynchronousChannel, INDEX_java_nio_channels_AsynchronousChannel_close, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_Channels$3[] {
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
	(void *) M_java_nio_channels_Channels$3_close,
	(void *) M_java_io_OutputStream_flush,
	(void *) M_java_io_OutputStream_write_Array1_byte,
	(void *) M_java_nio_channels_Channels$3_write_Array1_byte_int_int,
	(void *) M_java_nio_channels_Channels$3_write_int,
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
	{ "bb", &class_java_nio_ByteBuffer, offsetof(java_nio_channels_Channels$3, F_bb), "Ljava/nio/ByteBuffer;", 2 },
	{ "bs", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_Channels$3, F_bs), "[B", 2 },
	{ "b1", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_Channels$3, F_b1), "[B", 2 },
	{ "val$ch", &class_java_nio_channels_AsynchronousByteChannel, offsetof(java_nio_channels_Channels$3, F_val$ch), "Ljava/nio/channels/AsynchronousByteChannel;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_Channels$3_java_nio_channels_AsynchronousByteChannel, 0, "(Ljava/nio/channels/AsynchronousByteChannel;)V", 0 },
	{ "write", (intptr_t) M_java_nio_channels_Channels$3_write_int, VTABLE_java_nio_channels_Channels$3_write_int, "(I)V", 33 },
	{ "write", (intptr_t) M_java_nio_channels_Channels$3_write_Array1_byte_int_int, VTABLE_java_nio_channels_Channels$3_write_Array1_byte_int_int, "([BII)V", 33 },
	{ "close", (intptr_t) M_java_nio_channels_Channels$3_close, VTABLE_java_nio_channels_Channels$3_close, "()V", 1 },
};

Class class_java_nio_channels_Channels$3{
		.nativeName = (intptr_t) "java/nio/channels/Channels$3",
		.parentClass = (intptr_t) &class_java_io_OutputStream,
		.size = sizeof(java_nio_channels_Channels$3),
		.classVtable = (intptr_t) vtable_java_nio_channels_Channels$3,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_Channels$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_Channels$3,
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
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_nio_channels_Channels$3 = registerClass(&class_java_nio_channels_Channels$3);

}

