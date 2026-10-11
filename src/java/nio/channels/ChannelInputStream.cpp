#include "java/nio/channels/ChannelInputStream.h"
#include "java/lang/Math.h"
#include "java/nio/channels/ChannelInputStream.h"
#include "java/lang/Long.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/channels/IllegalBlockingModeException.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/nio/channels/SeekableByteChannel.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_nio_channels_ChannelInputStream(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_ChannelInputStream *) object;
	if (self->F_ch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ch)->clazz)->markFunction)((jobject) self->F_ch, mark, depth + 1);
	if (self->F_bb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bb)->clazz)->markFunction)((jobject) self->F_bb, mark, depth + 1);
	if (self->F_bs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bs)->clazz)->markFunction)((jobject) self->F_bs, mark, depth + 1);
	if (self->F_b1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b1)->clazz)->markFunction)((jobject) self->F_b1, mark, depth + 1);
}

void clinit_java_nio_channels_ChannelInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

jint SM_java_nio_channels_ChannelInputStream_read_java_nio_channels_ReadableByteChannel_java_nio_ByteBuffer_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:read", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_ChannelInputStream(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(19);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_channels_SelectableChannel)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(20);
	frame[3].o = (checkCast(ctx, &class_java_nio_channels_SelectableChannel, (frame[0].o)));
	LINE_NUMBER(21);
	sp[0].o = (jobject)((func_java_nio_channels_SelectableChannel_blockingLock_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_blockingLock_R_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(22);
	jint temp0 = (jint)((func_java_nio_channels_SelectableChannel_isBlocking_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_isBlocking_R_boolean])(ctx, (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(23);
	if ((frame[5].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(24);
	clinit_java_nio_channels_IllegalBlockingModeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_IllegalBlockingModeException);
	init_java_nio_channels_IllegalBlockingModeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(26);
	if ((frame[5].i) == (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_java_nio_channels_SelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel])(ctx, (frame[3].o), (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_java_nio_channels_ReadableByteChannel_read_java_nio_ByteBuffer_R_int) resolveInterfaceMethod(ctx, &class_java_nio_channels_ReadableByteChannel, INDEX_java_nio_channels_ReadableByteChannel_read_java_nio_ByteBuffer_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(31);
	if ((frame[5].i) == (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_nio_channels_SelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_configureBlocking_boolean_R_java_nio_channels_SelectableChannel])(ctx, (frame[3].o), (frame[5].i));
	}
label_16:;
	{
	LINE_NUMBER(35);
	jint temp0 = frame[6].i;
	monitorExit(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(37);
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_7:;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_nio_channels_ReadableByteChannel_read_java_nio_ByteBuffer_R_int) resolveInterfaceMethod(ctx, &class_java_nio_channels_ReadableByteChannel, INDEX_java_nio_channels_ReadableByteChannel_read_java_nio_ByteBuffer_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void init_java_nio_channels_ChannelInputStream_java_nio_channels_ReadableByteChannel(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_ChannelInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (jobject(nullptr));
	LINE_NUMBER(15);
	((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_bs = (jref) (jobject(nullptr));
	LINE_NUMBER(16);
	((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_b1 = (jref) (jobject(nullptr));
	LINE_NUMBER(44);
	((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch = (jref) (frame[1].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_ChannelInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:read", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_b1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((java_nio_channels_ChannelInputStream *) NULL_CHECK(sp[0].o))->F_b1 = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_b1;
	jint temp0 = (jint)((func_java_nio_channels_ChannelInputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_ChannelInputStream_read_Array1_byte_R_int])(ctx, sp[0].o, sp[1].o);
	frame[1].i = temp0;
	LINE_NUMBER(53);
	if ((frame[1].i) != (jint(1))) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_b1;
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

jint M_java_nio_channels_ChannelInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(58);
	if ((frame[3].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(59);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_bs;
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_bb;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer(ctx, sp[0].o);
	sp++;
label_4:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = frame[4].o;
	jint temp0 = (frame[2].i) + (frame[3].i);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(64);
	((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[4].o);
	LINE_NUMBER(65);
	((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_bs = (jref) (frame[1].o);
	LINE_NUMBER(66);
	jint temp3 = (jint)((func_java_nio_channels_ChannelInputStream_read_java_nio_ByteBuffer_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_channels_ChannelInputStream_read_java_nio_ByteBuffer_R_int])(ctx, (frame[0].o), (frame[4].o));
	popStackFrame(ctx, self);
	return temp3;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_ChannelInputStream_read_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch;
	jint temp0 = (jint)SM_java_nio_channels_ChannelInputStream_read_java_nio_channels_ReadableByteChannel_java_nio_ByteBuffer_boolean_R_int(ctx, sp[0].o, (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_nio_channels_ChannelInputStream_available_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:available", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch;
	if ((isInstance(ctx, sp[0].o, &class_java_nio_channels_SeekableByteChannel)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch;
	frame[1].o = (checkCast(ctx, &class_java_nio_channels_SeekableByteChannel, sp[0].o));
	LINE_NUMBER(77);
	jlong temp0 = jlong(0);
	jlong temp1 = (jlong)((func_java_nio_channels_SeekableByteChannel_size_R_long) resolveInterfaceMethod(ctx, &class_java_nio_channels_SeekableByteChannel, INDEX_java_nio_channels_SeekableByteChannel_size_R_long, (frame[1].o)))(ctx, (frame[1].o));
	jlong temp2 = (jlong)((func_java_nio_channels_SeekableByteChannel_position_R_long) resolveInterfaceMethod(ctx, &class_java_nio_channels_SeekableByteChannel, INDEX_java_nio_channels_SeekableByteChannel_position_R_long, (frame[1].o)))(ctx, (frame[1].o));
	jlong temp3 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, (temp1 - temp2));
	frame[2].l = temp3;
	LINE_NUMBER(78);
	if ((longCompare((frame[2].l), (jlong(2147483647ll)))) <= 0) goto label_5;
	}
	(sp++)->i = jint(2147483647);
	goto label_6;
label_5:;
	INST_LLOAD(2);
	INST_L2I();
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_nio_channels_ChannelInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:skip", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch;
	if ((isInstance(ctx, sp[0].o, &class_java_nio_channels_SeekableByteChannel)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(86);
	jlong temp0 = (jlong)M_java_io_InputStream_skip_long_R_long(ctx, (frame[0].o), (frame[1].l));
	popStackFrame(ctx, self);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch;
	frame[3].o = (checkCast(ctx, &class_java_nio_channels_SeekableByteChannel, sp[0].o));
	LINE_NUMBER(89);
	jlong temp0 = (jlong)((func_java_nio_channels_SeekableByteChannel_position_R_long) resolveInterfaceMethod(ctx, &class_java_nio_channels_SeekableByteChannel, INDEX_java_nio_channels_SeekableByteChannel_position_R_long, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].l = temp0;
	LINE_NUMBER(91);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(92);
	frame[6].l = ((frame[4].l) + (frame[1].l));
	LINE_NUMBER(93);
	jlong temp0 = (jlong)((func_java_nio_channels_SeekableByteChannel_size_R_long) resolveInterfaceMethod(ctx, &class_java_nio_channels_SeekableByteChannel, INDEX_java_nio_channels_SeekableByteChannel_size_R_long, (frame[3].o)))(ctx, (frame[3].o));
	frame[8].l = temp0;
	LINE_NUMBER(94);
	if ((longCompare((frame[6].l), (jlong(0)))) < 0) goto label_9;
	}
	{
	if ((longCompare((frame[6].l), (frame[8].l))) <= 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(95);
	frame[6].l = (frame[8].l);
	}
label_10:;
	LINE_NUMBER(97);
	goto label_11;
label_5:;
	{
	LINE_NUMBER(98);
	jlong temp0 = (jlong)SM_java_lang_Long_max_long_long_R_long(ctx, ((frame[4].l) + (frame[1].l)), (jlong(0)));
	frame[6].l = temp0;
	}
label_11:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_java_nio_channels_SeekableByteChannel_position_long_R_java_nio_channels_SeekableByteChannel) resolveInterfaceMethod(ctx, &class_java_nio_channels_SeekableByteChannel, INDEX_java_nio_channels_SeekableByteChannel_position_long_R_java_nio_channels_SeekableByteChannel, (frame[3].o)))(ctx, (frame[3].o), (frame[6].l));
	LINE_NUMBER(102);
	popStackFrame(ctx, self);
	return ((frame[6].l) - (frame[4].l));
	}

	popStackFrame(ctx);
}

void M_java_nio_channels_ChannelInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/ChannelInputStream:close", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_nio_channels_ChannelInputStream *) NULL_CHECK((frame[0].o)))->F_ch;
	((func_java_nio_channels_Channel_close) resolveInterfaceMethod(ctx, &class_java_nio_channels_Channel, INDEX_java_nio_channels_Channel_close, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_ChannelInputStream[] {
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
	(void *) M_java_nio_channels_ChannelInputStream_close,
	(void *) M_java_nio_channels_ChannelInputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_java_nio_channels_ChannelInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_nio_channels_ChannelInputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_nio_channels_ChannelInputStream_skip_long_R_long,
	(void *) M_java_nio_channels_ChannelInputStream_read_java_nio_ByteBuffer_R_int,
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
	{ "read", "(Ljava/nio/ByteBuffer;)I" },
};

static FieldMetadata fields[] {
	{ "ch", &class_java_nio_channels_ReadableByteChannel, offsetof(java_nio_channels_ChannelInputStream, F_ch), "Ljava/nio/channels/ReadableByteChannel;", 20 },
	{ "bb", &class_java_nio_ByteBuffer, offsetof(java_nio_channels_ChannelInputStream, F_bb), "Ljava/nio/ByteBuffer;", 2 },
	{ "bs", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_ChannelInputStream, F_bs), "[B", 2 },
	{ "b1", getArrayClass(&class_byte, 1), offsetof(java_nio_channels_ChannelInputStream, F_b1), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "read", (intptr_t) SM_java_nio_channels_ChannelInputStream_read_java_nio_channels_ReadableByteChannel_java_nio_ByteBuffer_boolean_R_int, 0, "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/ByteBuffer;Z)I", 9 },
	{ "<init>", (intptr_t) init_java_nio_channels_ChannelInputStream_java_nio_channels_ReadableByteChannel, 0, "(Ljava/nio/channels/ReadableByteChannel;)V", 1 },
	{ "read", (intptr_t) M_java_nio_channels_ChannelInputStream_read_R_int, VTABLE_java_nio_channels_ChannelInputStream_read_R_int, "()I", 33 },
	{ "read", (intptr_t) M_java_nio_channels_ChannelInputStream_read_Array1_byte_int_int_R_int, VTABLE_java_nio_channels_ChannelInputStream_read_Array1_byte_int_int_R_int, "([BII)I", 33 },
	{ "read", (intptr_t) M_java_nio_channels_ChannelInputStream_read_java_nio_ByteBuffer_R_int, VTABLE_java_nio_channels_ChannelInputStream_read_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 4 },
	{ "available", (intptr_t) M_java_nio_channels_ChannelInputStream_available_R_int, VTABLE_java_nio_channels_ChannelInputStream_available_R_int, "()I", 1 },
	{ "skip", (intptr_t) M_java_nio_channels_ChannelInputStream_skip_long_R_long, VTABLE_java_nio_channels_ChannelInputStream_skip_long_R_long, "(J)J", 33 },
	{ "close", (intptr_t) M_java_nio_channels_ChannelInputStream_close, VTABLE_java_nio_channels_ChannelInputStream_close, "()V", 1 },
};

Class class_java_nio_channels_ChannelInputStream{
		.nativeName = (intptr_t) "java/nio/channels/ChannelInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_nio_channels_ChannelInputStream),
		.classVtable = (intptr_t) vtable_java_nio_channels_ChannelInputStream,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_ChannelInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_ChannelInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_ChannelInputStream = registerClass(&class_java_nio_channels_ChannelInputStream);

}
