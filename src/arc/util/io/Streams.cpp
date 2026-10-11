#include "arc/util/io/Streams.h"
#include "java/lang/Math.h"
#include "arc/util/io/Streams_OptimizedByteArrayOutputStream.h"
#include "arc/util/Buffers.h"
#include "java/security/NoSuchAlgorithmException.h"
#include "arc/func/Floatc.h"
#include "java/io/OutputStream.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/io/InputStreamReader.h"
#include "java/security/MessageDigest.h"
#include "arc/util/io/Streams.h"
#include "java/io/Closeable.h"
#include "java/io/StringWriter.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/io/ByteArrayOutputStream.h"

extern "C" {

jint SF_arc_util_io_Streams_defaultBufferSize;
jobject SF_arc_util_io_Streams_emptyBytes;

void mark_arc_util_io_Streams(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_io_Streams_emptyBytes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_io_Streams_emptyBytes)->clazz)->markFunction)((jobject) SF_arc_util_io_Streams_emptyBytes, mark, depth + 1);
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
	auto self = (arc_util_io_Streams *) object;
}

void init_arc_util_io_Streams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (8192));
	SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_Array1_byte(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_Array1_byte(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_0:;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[3].i = temp0;
	if (temp0 == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(38);
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, (frame[1].o), (frame[2].o), (jint(0)), (frame[3].i));
	goto label_0;
	}
label_2:;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_copyProgress_java_io_InputStream_java_io_OutputStream_long_int_arc_func_Floatc(jcontext ctx, jobject param0, jobject param1, jlong param2, jint param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copyProgress", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].l = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(50);
	frame[7].l = (jlong(0));
	}
label_2:;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[6].o));
	frame[9].i = temp0;
	if (temp0 == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(53);
	frame[7].l = ((frame[7].l) + (jlong((frame[9].i))));
	LINE_NUMBER(54);
	((func_arc_func_Floatc_get_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc, INDEX_arc_func_Floatc_get_float, (frame[5].o)))(ctx, (frame[5].o), ((jfloat((frame[7].l))) / (jfloat((frame[2].l)))));
	LINE_NUMBER(55);
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, (frame[1].o), (frame[6].o), (jint(0)), (frame[9].i));
	goto label_2;
	}
label_4:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (8192));
	jint temp0 = (jint)SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	jint temp0 = (jint)SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(84);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[0].o), (frame[2].o));
	frame[5].i = temp0;
	if (temp0 == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(85);
	SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(ctx, (frame[2].o), (jint(0)), (frame[1].o), (frame[5].i));
	LINE_NUMBER(86);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), ((frame[3].i) + (frame[4].i)));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Streams_copyBytes_java_io_InputStream_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copyBytes", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_io_Streams_copyBytes_java_io_InputStream_int_R_Array1_byte(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Streams_copyBytes_java_io_InputStream_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copyBytes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(103);
	clinit_arc_util_io_Streams$OptimizedByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Streams$OptimizedByteArrayOutputStream);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[1].i));
	init_arc_util_io_Streams$OptimizedByteArrayOutputStream_int(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(104);
	SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Streams_copyString_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copyString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_io_Streams_copyString_java_io_InputStream_int_java_lang_String_R_java_lang_String(ctx, sp[0].o, temp0, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Streams_copyString_java_io_InputStream_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copyString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_arc_util_io_Streams_copyString_java_io_InputStream_int_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Streams_copyString_java_io_InputStream_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:copyString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(127);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[1].o = frame[0].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"UTF-8"_j));
	goto label_2;
label_1:;
	INST_ALOAD(2);
label_2:;
	{
	sp -= 4;
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[0].o, sp[2].o, sp[3].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(128);
	clinit_java_io_StringWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_StringWriter);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[1].i));
	init_java_io_StringWriter_int(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = (jobject) createArray(ctx, &class_char, (8192));
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_java_io_InputStreamReader_read_Array1_char_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_InputStreamReader_read_Array1_char_R_int])(ctx, (frame[3].o), (frame[5].o));
	frame[6].i = temp0;
	if (temp0 == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(132);
	((func_java_io_StringWriter_write_Array1_char_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_StringWriter_write_Array1_char_int_int])(ctx, (frame[4].o), (frame[5].o), (jint(0)), (frame[6].i));
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_java_io_StringWriter_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_StringWriter_toString_R_java_lang_String])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_Streams_close_java_io_Closeable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(139);
	if ((frame[0].o) == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(141);
	((func_java_io_Closeable_close) resolveInterfaceMethod(ctx, &class_java_io_Closeable, INDEX_java_io_Closeable_close, (frame[0].o)))(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(143);
	goto label_5;
label_2:;
	LINE_NUMBER(142);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_io_Streams_sha256_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:sha256", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_security_NoSuchAlgorithmException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest(ctx, (((jobject) createStringLiteral(ctx, u8"SHA-256"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(151);
	((func_java_security_MessageDigest_update_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_security_MessageDigest_update_Array1_byte])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_java_security_MessageDigest_digest_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_security_MessageDigest_digest_R_Array1_byte])(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(153);
	frame[1].o = sp[0].o;
	LINE_NUMBER(154);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_arc_util_io_Streams(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_io_Streams_defaultBufferSize = jint(8192);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/Streams:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_Streams(ctx);
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(0)));
	clinit_arc_util_io_Streams(ctx);
	SF_arc_util_io_Streams_emptyBytes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_Streams[] {
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
	&class_arc_util_io_Streams$OptimizedByteArrayOutputStream,
};

static FieldMetadata fields[] {
	{ "defaultBufferSize", &class_int, (intptr_t) &SF_arc_util_io_Streams_defaultBufferSize, "I", 25 },
	{ "emptyBytes", getArrayClass(&class_byte, 1), (intptr_t) &SF_arc_util_io_Streams_emptyBytes, "[B", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_Streams, 0, "()V", 1 },
	{ "copy", (intptr_t) SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_int, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;I)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_io_Streams_copy_java_io_InputStream_java_io_OutputStream_Array1_byte, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;[B)V", 9 },
	{ "copyProgress", (intptr_t) SM_arc_util_io_Streams_copyProgress_java_io_InputStream_java_io_OutputStream_long_int_arc_func_Floatc, 0, "(Ljava/io/InputStream;Ljava/io/OutputStream;JILarc/func/Floatc;)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer, 0, "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_int, 0, "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;I)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_io_Streams_copy_java_io_InputStream_java_nio_ByteBuffer_Array1_byte_R_int, 0, "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;[B)I", 9 },
	{ "copyBytes", (intptr_t) SM_arc_util_io_Streams_copyBytes_java_io_InputStream_R_Array1_byte, 0, "(Ljava/io/InputStream;)[B", 9 },
	{ "copyBytes", (intptr_t) SM_arc_util_io_Streams_copyBytes_java_io_InputStream_int_R_Array1_byte, 0, "(Ljava/io/InputStream;I)[B", 9 },
	{ "copyString", (intptr_t) SM_arc_util_io_Streams_copyString_java_io_InputStream_R_java_lang_String, 0, "(Ljava/io/InputStream;)Ljava/lang/String;", 9 },
	{ "copyString", (intptr_t) SM_arc_util_io_Streams_copyString_java_io_InputStream_int_R_java_lang_String, 0, "(Ljava/io/InputStream;I)Ljava/lang/String;", 9 },
	{ "copyString", (intptr_t) SM_arc_util_io_Streams_copyString_java_io_InputStream_int_java_lang_String_R_java_lang_String, 0, "(Ljava/io/InputStream;ILjava/lang/String;)Ljava/lang/String;", 9 },
	{ "close", (intptr_t) SM_arc_util_io_Streams_close_java_io_Closeable, 0, "(Ljava/io/Closeable;)V", 9 },
	{ "sha256", (intptr_t) SM_arc_util_io_Streams_sha256_Array1_byte_R_Array1_byte, 0, "([B)[B", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_util_io_Streams, 0, "()V", 8 },
};

Class class_arc_util_io_Streams{
		.nativeName = (intptr_t) "arc/util/io/Streams",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_io_Streams),
		.classVtable = (intptr_t) vtable_arc_util_io_Streams,
		.staticInitializer = (intptr_t) clinit_arc_util_io_Streams,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_Streams,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_Streams = registerClass(&class_arc_util_io_Streams);

}
