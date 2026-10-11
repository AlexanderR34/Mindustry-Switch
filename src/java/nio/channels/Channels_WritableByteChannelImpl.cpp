#include "java/nio/channels/Channels_WritableByteChannelImpl.h"
#include "java/nio/channels/WritableByteChannel.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/ClosedChannelException.h"
#include "java/nio/channels/Channels.h"
#include "java/nio/channels/Channels_WritableByteChannelImpl.h"
#include "java/lang/Throwable.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"
#include "java/io/OutputStream.h"

extern "C" {

jint SF_java_nio_channels_Channels$WritableByteChannelImpl_TRANSFER_SIZE;

void mark_java_nio_channels_Channels$WritableByteChannelImpl(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_channels_spi_AbstractInterruptibleChannel(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_channels_Channels$WritableByteChannelImpl *) object;
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
	if (self->F_writeLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_writeLock)->clazz)->markFunction)((jobject) self->F_writeLock, mark, depth + 1);
}

void clinit_java_nio_channels_Channels$WritableByteChannelImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_channels_spi_AbstractInterruptibleChannel(ctx);
	SF_java_nio_channels_Channels$WritableByteChannelImpl_TRANSFER_SIZE = jint(8192);
}

void init_java_nio_channels_Channels$WritableByteChannelImpl_java_io_OutputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$WritableByteChannelImpl:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels$WritableByteChannelImpl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	init_java_nio_channels_spi_AbstractInterruptibleChannel(ctx, (frame[0].o));
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK(sp[0].o))->F_writeLock = (jref) sp[1].o;
	LINE_NUMBER(260);
	((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_out = (jref) (frame[1].o);
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$WritableByteChannelImpl:write", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_nio_channels_Channels$WritableByteChannelImpl_isOpen_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_isOpen_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(265);
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(268);
	frame[3].i = (jint(0));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_writeLock;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(271);
	if ((frame[3].i) >= (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[2].i) - (frame[3].i)), (8192));
	frame[5].i = temp0;
	LINE_NUMBER(273);
	sp[0].o = (jobject)((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_buf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[5].i)) goto label_20;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[5].i));
	((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(280);
	((func_java_nio_channels_Channels$WritableByteChannelImpl_begin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_begin])(ctx, (frame[0].o));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_buf;
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[5].i));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].i) <= 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 2;
	((func_java_nio_channels_Channels$WritableByteChannelImpl_end_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_end_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(284);
	goto label_26;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(283);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].i) <= 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 2;
	((func_java_nio_channels_Channels$WritableByteChannelImpl_end_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_end_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(284);
	throwException(ctx, (frame[6].o));	}
label_26:;
	{
	LINE_NUMBER(271);
	frame[3].i = ((frame[3].i) + (frame[5].i));
	{ popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_17:;
	{
	LINE_NUMBER(287);
	jint temp0 = frame[3].i;
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	LINE_NUMBER(288);
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$WritableByteChannelImpl:implCloseChannel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((java_nio_channels_Channels$WritableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_out;
	((func_java_io_OutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_Channels$WritableByteChannelImpl[] {
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
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_close,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_isOpen_R_boolean,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_begin,
	(void *) M_java_nio_channels_spi_AbstractInterruptibleChannel_end_boolean,
	(void *) M_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int,
	(void *) M_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel,
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
	{ "isOpen", "()Z" },
	{ "begin", "()V" },
	{ "end", "(Z)V" },
	{ "write", "(Ljava/nio/ByteBuffer;)I" },
	{ "implCloseChannel", "()V" },
};

static jclass interfaces[] { &class_java_nio_channels_WritableByteChannel, };

static FieldMetadata fields[] {
	{ "out", &class_java_io_OutputStream, offsetof(java_nio_channels_Channels$WritableByteChannelImpl, F_out), "Ljava/io/OutputStream;", 18 },
	{ "TRANSFER_SIZE", &class_int, (intptr_t) &SF_java_nio_channels_Channels$WritableByteChannelImpl_TRANSFER_SIZE, "I", 26 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_Channels$WritableByteChannelImpl, F_buf), "[B", 2 },
	{ "writeLock", &class_java_lang_Object, offsetof(java_nio_channels_Channels$WritableByteChannelImpl, F_writeLock), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_Channels$WritableByteChannelImpl_java_io_OutputStream, 0, "(Ljava/io/OutputStream;)V", 0 },
	{ "write", (intptr_t) M_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int, VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 1 },
	{ "implCloseChannel", (intptr_t) M_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel, VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel, "()V", 4 },
};

Class class_java_nio_channels_Channels$WritableByteChannelImpl{
		.nativeName = (intptr_t) "java/nio/channels/Channels$WritableByteChannelImpl",
		.parentClass = (intptr_t) &class_java_nio_channels_spi_AbstractInterruptibleChannel,
		.size = sizeof(java_nio_channels_Channels$WritableByteChannelImpl),
		.classVtable = (intptr_t) vtable_java_nio_channels_Channels$WritableByteChannelImpl,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_Channels$WritableByteChannelImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_Channels$WritableByteChannelImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_nio_channels_Channels,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_Channels$WritableByteChannelImpl = registerClass(&class_java_nio_channels_Channels$WritableByteChannelImpl);

}

