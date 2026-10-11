#include "java/nio/channels/Channels_ReadableByteChannelImpl.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channels_ReadableByteChannelImpl.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/ClosedChannelException.h"
#include "java/nio/channels/Channels.h"
#include "java/lang/Throwable.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

extern "C" {

jint SF_java_nio_channels_Channels$ReadableByteChannelImpl_TRANSFER_SIZE;

void mark_java_nio_channels_Channels$ReadableByteChannelImpl(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_Channels$ReadableByteChannelImpl *) object;
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
	if (self->F_buf)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buf)->clazz)->markFunction)((jobject) self->F_buf, mark, depth + 1);
	if (self->F_readLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_readLock)->clazz)->markFunction)((jobject) self->F_readLock, mark, depth + 1);
}

void clinit_java_nio_channels_Channels$ReadableByteChannelImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_channels_spi_AbstractInterruptibleChannel(ctx);
	SF_java_nio_channels_Channels$ReadableByteChannelImpl_TRANSFER_SIZE = jint(8192);
}

void init_java_nio_channels_Channels$ReadableByteChannelImpl_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$ReadableByteChannelImpl:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels$ReadableByteChannelImpl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(303);
	init_java_nio_channels_spi_AbstractInterruptibleChannel(ctx, (frame[0].o));
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK(sp[0].o))->F_readLock = (jref) sp[1].o;
	LINE_NUMBER(304);
	((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[1].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$ReadableByteChannelImpl:read", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_java_nio_channels_Channels$ReadableByteChannelImpl_isOpen_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_isOpen_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(309);
	clinit_java_nio_channels_ClosedChannelException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ClosedChannelException);
	init_java_nio_channels_ClosedChannelException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(312);
	frame[3].i = (jint(0));
	LINE_NUMBER(313);
	frame[4].i = (jint(0));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_readLock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(315);
	if ((frame[3].i) >= (frame[2].i)) goto label_18;
	}
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[2].i) - (frame[3].i)), (8192));
	frame[6].i = temp0;
	LINE_NUMBER(317);
	sp[0].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_buf;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[6].i)) goto label_21;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[6].i));
	((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK(sp[0].o))->F_buf = (jref) sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(321);
	if ((frame[3].i) <= 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_in;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, sp[0].o);
	if (temp0 > 0) goto label_0;
	}
	LINE_NUMBER(322);
	goto label_18;
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(326);
	((func_java_nio_channels_Channels$ReadableByteChannelImpl_begin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_begin])(ctx, (frame[0].o));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_in;
	sp[1].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_buf;
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[6].i));
	frame[4].i = temp0;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].i) <= 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 2;
	((func_java_nio_channels_Channels$ReadableByteChannelImpl_end_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_end_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(330);
	goto label_28;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(329);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].i) <= 0) goto label_29;
	}
	INST_ICONST(1);
	goto label_30;
label_29:;
	INST_ICONST(0);
label_30:;
	{
	sp -= 2;
	((func_java_nio_channels_Channels$ReadableByteChannelImpl_end_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_end_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(330);
	throwException(ctx, (frame[7].o));	}
label_28:;
	{
	LINE_NUMBER(332);
	if ((frame[4].i) >= 0) goto label_32;
	}
	LINE_NUMBER(333);
	goto label_18;
label_32:;
	{
	LINE_NUMBER(336);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	LINE_NUMBER(337);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_buf;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o, (jint(0)), (frame[4].i));
	LINE_NUMBER(338);
	{ popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_18:;
	{
	LINE_NUMBER(340);
	if ((frame[4].i) >= 0) goto label_36;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_36;
	INST_ICONST(-1);
	goto label_37;
label_36:;
	INST_ILOAD(3);
label_37:;
	INST_ALOAD(5);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	LINE_NUMBER(341);
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void M_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels$ReadableByteChannelImpl:implCloseChannel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((java_nio_channels_Channels$ReadableByteChannelImpl *) NULL_CHECK((frame[0].o)))->F_in;
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_Channels$ReadableByteChannelImpl[] {
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
	(void *) M_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int,
	(void *) M_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel,
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
	{ "read", "(Ljava/nio/ByteBuffer;)I" },
	{ "implCloseChannel", "()V" },
};

static jclass interfaces[] { &class_java_nio_channels_ReadableByteChannel, };

static FieldMetadata fields[] {
	{ "in", &class_java_io_InputStream, offsetof(java_nio_channels_Channels$ReadableByteChannelImpl, F_in), "Ljava/io/InputStream;", 18 },
	{ "TRANSFER_SIZE", &class_int, (intptr_t) &SF_java_nio_channels_Channels$ReadableByteChannelImpl_TRANSFER_SIZE, "I", 26 },
	{ "buf", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_Channels$ReadableByteChannelImpl, F_buf), "[B", 2 },
	{ "readLock", &class_java_lang_Object, offsetof(java_nio_channels_Channels$ReadableByteChannelImpl, F_readLock), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_Channels$ReadableByteChannelImpl_java_io_InputStream, 0, "(Ljava/io/InputStream;)V", 0 },
	{ "read", (intptr_t) M_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int, VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 1 },
	{ "implCloseChannel", (intptr_t) M_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel, VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel, "()V", 4 },
};

Class class_java_nio_channels_Channels$ReadableByteChannelImpl{
		.nativeName = (intptr_t) "java/nio/channels/Channels$ReadableByteChannelImpl",
		.parentClass = (intptr_t) &class_java_nio_channels_spi_AbstractInterruptibleChannel,
		.size = sizeof(java_nio_channels_Channels$ReadableByteChannelImpl),
		.classVtable = (intptr_t) vtable_java_nio_channels_Channels$ReadableByteChannelImpl,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_Channels$ReadableByteChannelImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_Channels$ReadableByteChannelImpl,
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
static bool registered_java_nio_channels_Channels$ReadableByteChannelImpl = registerClass(&class_java_nio_channels_Channels$ReadableByteChannelImpl);

}

