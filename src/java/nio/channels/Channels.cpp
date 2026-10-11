#include "java/nio/channels/Channels.h"
#include "java/lang/Error.h"
#include "java/io/FileOutputStream.h"
#include "java/nio/charset/Charset.h"
#include "java/io/FileInputStream.h"
#include "java/io/Writer.h"
#include "java/nio/channels/ChannelInputStream.h"
#include "java/nio/charset/CharsetDecoder.h"
#include "java/nio/channels/Channels.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/channels/IllegalBlockingModeException.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "java/nio/charset/CharsetEncoder.h"
#include "java/lang/String.h"
#include "java/nio/channels/Channels_ReadableByteChannelImpl.h"
#include "java/nio/Buffer.h"
#include "java/nio/channels/SelectableChannel.h"
#include "java/nio/channels/Channels_WritableByteChannelImpl.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/nio/channels/FileChannel.h"
#include "java/nio/channels/WritableByteChannel.h"
#include "java/nio/channels/AsynchronousByteChannel.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channels_1.h"
#include "java/nio/channels/Channels_2.h"
#include "java/nio/channels/Channels_3.h"
#include "java/lang/RuntimeException.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_nio_channels_Channels(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_channels_Channels *) object;
}

void clinit_java_nio_channels_Channels(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_channels_Channels(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"no instances"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_java_nio_channels_Channels_writeFullyImpl_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:writeFullyImpl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_0:;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_nio_channels_WritableByteChannel_write_java_nio_ByteBuffer_R_int) resolveInterfaceMethod(ctx, &class_java_nio_channels_WritableByteChannel, INDEX_java_nio_channels_WritableByteChannel_write_java_nio_ByteBuffer_R_int, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(28);
	if ((frame[2].i) <= 0) goto label_4;
	}
	LINE_NUMBER(29);
	goto label_0;
label_4:;
	{
	LINE_NUMBER(32);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"no bytes written"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_nio_channels_Channels_writeFully_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:writeFully", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(40);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_channels_SelectableChannel)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(41);
	frame[2].o = (checkCast(ctx, &class_java_nio_channels_SelectableChannel, (frame[0].o)));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_java_nio_channels_SelectableChannel_blockingLock_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_blockingLock_R_java_lang_Object])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_java_nio_channels_SelectableChannel_isBlocking_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_channels_SelectableChannel_isBlocking_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(44);
	clinit_java_nio_channels_IllegalBlockingModeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_IllegalBlockingModeException);
	init_java_nio_channels_IllegalBlockingModeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(47);
	SM_java_nio_channels_Channels_writeFullyImpl_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(48);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_13:;
	LINE_NUMBER(49);
	goto label_14;
label_7:;
	{
	LINE_NUMBER(50);
	SM_java_nio_channels_Channels_writeFullyImpl_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer(ctx, (frame[0].o), (frame[1].o));
	}
label_14:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newInputStream_java_nio_channels_ReadableByteChannel_R_java_io_InputStream(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newInputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ch"_j))));
	LINE_NUMBER(57);
	clinit_java_nio_channels_ChannelInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_ChannelInputStream);
	init_java_nio_channels_ChannelInputStream_java_nio_channels_ReadableByteChannel(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newOutputStream_java_nio_channels_WritableByteChannel_R_java_io_OutputStream(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newOutputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ch"_j))));
	LINE_NUMBER(62);
	clinit_java_nio_channels_Channels$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_Channels$1);
	init_java_nio_channels_Channels$1_java_nio_channels_WritableByteChannel(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newInputStream_java_nio_channels_AsynchronousByteChannel_R_java_io_InputStream(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newInputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ch"_j))));
	LINE_NUMBER(99);
	clinit_java_nio_channels_Channels$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_Channels$2);
	init_java_nio_channels_Channels$2_java_nio_channels_AsynchronousByteChannel(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newOutputStream_java_nio_channels_AsynchronousByteChannel_R_java_io_OutputStream(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newOutputStream", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ch"_j))));
	LINE_NUMBER(157);
	clinit_java_nio_channels_Channels$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_Channels$3);
	init_java_nio_channels_Channels$3_java_nio_channels_AsynchronousByteChannel(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newChannel_java_io_InputStream_R_java_nio_channels_ReadableByteChannel(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newChannel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"in"_j))));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_java_io_FileInputStream))) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_io_FileInputStream, (frame[0].o))))->vtable)[VTABLE_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel])(ctx, (checkCast(ctx, &class_java_io_FileInputStream, (frame[0].o))));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_java_nio_channels_Channels$ReadableByteChannelImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_Channels$ReadableByteChannelImpl);
	init_java_nio_channels_Channels$ReadableByteChannelImpl_java_io_InputStream(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_3:;
	INST_CHECKCAST(&class_java_nio_channels_ReadableByteChannel);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newChannel_java_io_OutputStream_R_java_nio_channels_WritableByteChannel(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newChannel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"out"_j))));
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o != (((jobject) &class_java_io_FileOutputStream))) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_io_FileOutputStream, (frame[0].o))))->vtable)[VTABLE_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel])(ctx, (checkCast(ctx, &class_java_io_FileOutputStream, (frame[0].o))));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_java_nio_channels_Channels$WritableByteChannelImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_channels_Channels$WritableByteChannelImpl);
	init_java_nio_channels_Channels$WritableByteChannelImpl_java_io_OutputStream(ctx, sp[0].o, (frame[0].o));
	sp += 1;
	}
label_3:;
	INST_CHECKCAST(&class_java_nio_channels_WritableByteChannel);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_int_R_java_io_Reader(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newReader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ch"_j))));
	LINE_NUMBER(223);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_lang_String_R_java_io_Reader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newReader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"csName"_j))));
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_int_R_java_io_Reader(ctx, sp[0].o, sp[1].o, (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_Charset_R_java_io_Reader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newReader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"charset"_j))));
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_charset_Charset_newDecoder_R_java_nio_charset_CharsetDecoder])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_int_R_java_io_Reader(ctx, sp[0].o, sp[1].o, (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_nio_charset_CharsetEncoder_int_R_java_io_Writer(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newWriter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ch"_j))));
	LINE_NUMBER(239);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_lang_String_R_java_io_Writer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newWriter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"csName"_j))));
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_charset_Charset_forName_java_lang_String_R_java_nio_charset_Charset(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_nio_charset_CharsetEncoder_int_R_java_io_Writer(ctx, sp[0].o, sp[1].o, (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_nio_charset_Charset_R_java_io_Writer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:newWriter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"charset"_j))));
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_charset_Charset_newEncoder_R_java_nio_charset_CharsetEncoder])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_nio_charset_CharsetEncoder_int_R_java_io_Writer(ctx, sp[0].o, sp[1].o, (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_nio_channels_Channels_access$000_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/channels/Channels:access$000", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_channels_Channels(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(19);
	SM_java_nio_channels_Channels_writeFully_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_channels_Channels[] {
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
};

static jclass innerClasses[] {
	&class_java_nio_channels_Channels$ReadableByteChannelImpl,
	&class_java_nio_channels_Channels$WritableByteChannelImpl,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_channels_Channels, 0, "()V", 2 },
	{ "writeFullyImpl", (intptr_t) SM_java_nio_channels_Channels_writeFullyImpl_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer, 0, "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/ByteBuffer;)V", 10 },
	{ "writeFully", (intptr_t) SM_java_nio_channels_Channels_writeFully_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer, 0, "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/ByteBuffer;)V", 10 },
	{ "newInputStream", (intptr_t) SM_java_nio_channels_Channels_newInputStream_java_nio_channels_ReadableByteChannel_R_java_io_InputStream, 0, "(Ljava/nio/channels/ReadableByteChannel;)Ljava/io/InputStream;", 9 },
	{ "newOutputStream", (intptr_t) SM_java_nio_channels_Channels_newOutputStream_java_nio_channels_WritableByteChannel_R_java_io_OutputStream, 0, "(Ljava/nio/channels/WritableByteChannel;)Ljava/io/OutputStream;", 9 },
	{ "newInputStream", (intptr_t) SM_java_nio_channels_Channels_newInputStream_java_nio_channels_AsynchronousByteChannel_R_java_io_InputStream, 0, "(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/InputStream;", 9 },
	{ "newOutputStream", (intptr_t) SM_java_nio_channels_Channels_newOutputStream_java_nio_channels_AsynchronousByteChannel_R_java_io_OutputStream, 0, "(Ljava/nio/channels/AsynchronousByteChannel;)Ljava/io/OutputStream;", 9 },
	{ "newChannel", (intptr_t) SM_java_nio_channels_Channels_newChannel_java_io_InputStream_R_java_nio_channels_ReadableByteChannel, 0, "(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;", 9 },
	{ "newChannel", (intptr_t) SM_java_nio_channels_Channels_newChannel_java_io_OutputStream_R_java_nio_channels_WritableByteChannel, 0, "(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;", 9 },
	{ "newReader", (intptr_t) SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_CharsetDecoder_int_R_java_io_Reader, 0, "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;I)Ljava/io/Reader;", 9 },
	{ "newReader", (intptr_t) SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_lang_String_R_java_io_Reader, 0, "(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;", 9 },
	{ "newReader", (intptr_t) SM_java_nio_channels_Channels_newReader_java_nio_channels_ReadableByteChannel_java_nio_charset_Charset_R_java_io_Reader, 0, "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Reader;", 9 },
	{ "newWriter", (intptr_t) SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_nio_charset_CharsetEncoder_int_R_java_io_Writer, 0, "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Ljava/io/Writer;", 9 },
	{ "newWriter", (intptr_t) SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_lang_String_R_java_io_Writer, 0, "(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;", 9 },
	{ "newWriter", (intptr_t) SM_java_nio_channels_Channels_newWriter_java_nio_channels_WritableByteChannel_java_nio_charset_Charset_R_java_io_Writer, 0, "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/Charset;)Ljava/io/Writer;", 9 },
	{ "access$000", (intptr_t) SM_java_nio_channels_Channels_access$000_java_nio_channels_WritableByteChannel_java_nio_ByteBuffer, 0, "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/ByteBuffer;)V", 4104 },
};

Class class_java_nio_channels_Channels{
		.nativeName = (intptr_t) "java/nio/channels/Channels",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_channels_Channels),
		.classVtable = (intptr_t) vtable_java_nio_channels_Channels,
		.staticInitializer = (intptr_t) clinit_java_nio_channels_Channels,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_channels_Channels,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_channels_Channels = registerClass(&class_java_nio_channels_Channels);

}
