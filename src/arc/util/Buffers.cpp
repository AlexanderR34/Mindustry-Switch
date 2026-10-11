#include "arc/util/Buffers.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "java/nio/DoubleBuffer.h"
#include "java/nio/ByteOrder.h"
#include "arc/util/Buffers.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/nio/ShortBuffer.h"
#include "arc/struct/Seq.h"
#include "java/nio/LongBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_util_Buffers_unsafeBuffers;
jint SF_arc_util_Buffers_allocatedUnsafe;

void mark_arc_util_Buffers(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Buffers_unsafeBuffers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Buffers_unsafeBuffers)->clazz)->markFunction)((jobject) SF_arc_util_Buffers_unsafeBuffers, mark, depth + 1);
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
	auto self = (arc_util_Buffers *) object;
}

void init_arc_util_Buffers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_Array1_float_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(27);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[1].o), ((frame[2].i) << (jint(2))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(29);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_FloatBuffer)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, (frame[1].o), (frame[2].i));
	}
label_3:;
	{
	LINE_NUMBER(31);
	SM_arc_util_Buffers_copyJni_Array1_float_java_nio_Buffer_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_nio_Buffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), (frame[3].i));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_arc_util_Buffers_copyJni_Array1_byte_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (frame[3].i));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_Array1_short_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(1))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_arc_util_Buffers_copyJni_Array1_short_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(1))));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_Array1_float_int_int_java_nio_Buffer(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[3].o));
	SM_arc_util_Buffers_copyJni_Array1_float_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((frame[2].i) << (jint(2))));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_Array1_int_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(2))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_arc_util_Buffers_copyJni_Array1_int_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(2))));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_Array1_float_int_java_nio_Buffer_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[2].o), ((frame[3].i) << (jint(2))));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jint temp2 = frame[1].i;
	sp[1].o = frame[2].o;
	jint temp3 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[2].o));
	SM_arc_util_Buffers_copyJni_Array1_float_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, ((frame[3].i) << (jint(2))));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_copy_java_nio_Buffer_java_nio_Buffer_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:copy", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)SM_arc_util_Buffers_elementsToBytes_java_nio_Buffer_int_R_int(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(ctx, (frame[1].o), (frame[3].i));
	sp[0].o = (jobject)((func_java_nio_Buffer_limit_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_Buffer_limit_int_R_java_nio_Buffer])(ctx, sp[0].o, (temp1 + temp2));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[0].o));
	sp[1].o = frame[1].o;
	jint temp4 = (jint)SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(ctx, (frame[1].o));
	SM_arc_util_Buffers_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int(ctx, sp[0].o, temp3, sp[1].o, temp4, (frame[3].i));
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:positionInBytes", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)SM_arc_util_Buffers_elementShift_java_nio_Buffer_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << temp1);
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:bytesToElements", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(129);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_arc_util_Buffers_elementShift_java_nio_Buffer_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(temp0) >> temp1));
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Buffers_elementsToBytes_java_nio_Buffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:elementsToBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(133);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_arc_util_Buffers_elementShift_java_nio_Buffer_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 << temp1);
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Buffers_elementShift_java_nio_Buffer_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:elementShift", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ByteBuffer)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(139);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_ShortBuffer)) != 0) goto label_3;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_CharBuffer)) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(141);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_IntBuffer)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (jint(2));
	}
label_5:;
	{
	LINE_NUMBER(143);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_LongBuffer)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(3));
	}
label_7:;
	{
	LINE_NUMBER(145);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_FloatBuffer)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(2));
	}
label_9:;
	{
	LINE_NUMBER(147);
	if ((isInstance(ctx, (frame[0].o), &class_java_nio_DoubleBuffer)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jint(3));
	}
label_11:;
	{
	LINE_NUMBER(150);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Can't copy to a "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" instance"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Buffers_newFloatBuffer_int_R_java_nio_FloatBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:newFloatBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(4))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Buffers_newShortBuffer_int_R_java_nio_ShortBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:newShortBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(161);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Buffers_newByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:newByteBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(167);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:newIntBuffer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(4))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(173);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:disposeUnsafeByteBuffer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(179);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(180);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(181);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buffer not allocated with newUnsafeByteBuffer or already disposed"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(182);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_10:;
	{
	LINE_NUMBER(183);
	clinit_arc_util_Buffers(ctx);
	SF_arc_util_Buffers_allocatedUnsafe = ((clinit_arc_util_Buffers(ctx), (jint)SF_arc_util_Buffers_allocatedUnsafe) - (frame[1].i));
	LINE_NUMBER(184);
	SM_arc_util_Buffers_freeMemory_java_nio_ByteBuffer(ctx, (frame[0].o));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Buffers_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:isUnsafeByteBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(188);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(189);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	monitorExit(ctx, (frame[1].o));
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
	LINE_NUMBER(190);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:newUnsafeByteBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)SM_arc_util_Buffers_newDisposableByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[0].i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(199);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	clinit_arc_util_Buffers(ctx);
	SF_arc_util_Buffers_allocatedUnsafe = ((clinit_arc_util_Buffers(ctx), (jint)SF_arc_util_Buffers_allocatedUnsafe) + (frame[0].i));
	LINE_NUMBER(201);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(202);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(203);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Buffers_getUnsafeBufferAddress_java_nio_Buffer_R_long(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:getUnsafeBufferAddress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(213);
	jlong temp0 = (jlong)SM_arc_util_Buffers_getBufferAddress_java_nio_Buffer_R_long(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_Buffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_Buffer_position_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + (jlong(temp1)));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Buffers_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:newUnsafeByteBuffer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(223);
	clinit_arc_util_Buffers(ctx);
	jint temp0 = (jint)SF_arc_util_Buffers_allocatedUnsafe;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	clinit_arc_util_Buffers(ctx);
	SF_arc_util_Buffers_allocatedUnsafe = (temp0 + temp1);
	LINE_NUMBER(224);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(225);
	clinit_arc_util_Buffers(ctx);
	sp[0].o = (jobject)SF_arc_util_Buffers_unsafeBuffers;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(226);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint SM_arc_util_Buffers_getAllocatedBytesUnsafe_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:getAllocatedBytesUnsafe", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (clinit_arc_util_Buffers(ctx), (jint)SF_arc_util_Buffers_allocatedUnsafe);
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Buffers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Buffers:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Buffers(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_arc_util_Buffers(ctx);
	SF_arc_util_Buffers_unsafeBuffers = sp[0].o;
	LINE_NUMBER(13);
	clinit_arc_util_Buffers(ctx);
	SF_arc_util_Buffers_allocatedUnsafe = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Buffers[] {
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

static FieldMetadata fields[] {
	{ "unsafeBuffers", &class_arc_struct_Seq, (intptr_t) &SF_arc_util_Buffers_unsafeBuffers, "Larc/struct/Seq;", 24 },
	{ "allocatedUnsafe", &class_int, (intptr_t) &SF_arc_util_Buffers_allocatedUnsafe, "I", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Buffers, 0, "()V", 1 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_Array1_float_java_nio_Buffer_int_int, 0, "([FLjava/nio/Buffer;II)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_Array1_byte_int_java_nio_Buffer_int, 0, "([BILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_Array1_short_int_java_nio_Buffer_int, 0, "([SILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_Array1_float_int_int_java_nio_Buffer, 0, "([FIILjava/nio/Buffer;)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_Array1_int_int_java_nio_Buffer_int, 0, "([IILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_Array1_float_int_java_nio_Buffer_int, 0, "([FILjava/nio/Buffer;I)V", 9 },
	{ "copy", (intptr_t) SM_arc_util_Buffers_copy_java_nio_Buffer_java_nio_Buffer_int, 0, "(Ljava/nio/Buffer;Ljava/nio/Buffer;I)V", 9 },
	{ "positionInBytes", (intptr_t) SM_arc_util_Buffers_positionInBytes_java_nio_Buffer_R_int, 0, "(Ljava/nio/Buffer;)I", 10 },
	{ "bytesToElements", (intptr_t) SM_arc_util_Buffers_bytesToElements_java_nio_Buffer_int_R_int, 0, "(Ljava/nio/Buffer;I)I", 10 },
	{ "elementsToBytes", (intptr_t) SM_arc_util_Buffers_elementsToBytes_java_nio_Buffer_int_R_int, 0, "(Ljava/nio/Buffer;I)I", 10 },
	{ "elementShift", (intptr_t) SM_arc_util_Buffers_elementShift_java_nio_Buffer_R_int, 0, "(Ljava/nio/Buffer;)I", 10 },
	{ "newFloatBuffer", (intptr_t) SM_arc_util_Buffers_newFloatBuffer_int_R_java_nio_FloatBuffer, 0, "(I)Ljava/nio/FloatBuffer;", 9 },
	{ "newShortBuffer", (intptr_t) SM_arc_util_Buffers_newShortBuffer_int_R_java_nio_ShortBuffer, 0, "(I)Ljava/nio/ShortBuffer;", 9 },
	{ "newByteBuffer", (intptr_t) SM_arc_util_Buffers_newByteBuffer_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 9 },
	{ "newIntBuffer", (intptr_t) SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer, 0, "(I)Ljava/nio/IntBuffer;", 9 },
	{ "disposeUnsafeByteBuffer", (intptr_t) SM_arc_util_Buffers_disposeUnsafeByteBuffer_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 9 },
	{ "isUnsafeByteBuffer", (intptr_t) SM_arc_util_Buffers_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean, 0, "(Ljava/nio/ByteBuffer;)Z", 9 },
	{ "newUnsafeByteBuffer", (intptr_t) SM_arc_util_Buffers_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 9 },
	{ "getUnsafeBufferAddress", (intptr_t) SM_arc_util_Buffers_getUnsafeBufferAddress_java_nio_Buffer_R_long, 0, "(Ljava/nio/Buffer;)J", 9 },
	{ "newUnsafeByteBuffer", (intptr_t) SM_arc_util_Buffers_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", 9 },
	{ "getAllocatedBytesUnsafe", (intptr_t) SM_arc_util_Buffers_getAllocatedBytesUnsafe_R_int, 0, "()I", 9 },
	{ "freeMemory", (intptr_t) SM_arc_util_Buffers_freeMemory_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 266 },
	{ "newDisposableByteBuffer", (intptr_t) SM_arc_util_Buffers_newDisposableByteBuffer_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 266 },
	{ "getBufferAddress", (intptr_t) SM_arc_util_Buffers_getBufferAddress_java_nio_Buffer_R_long, 0, "(Ljava/nio/Buffer;)J", 266 },
	{ "clear", (intptr_t) SM_arc_util_Buffers_clear_java_nio_ByteBuffer_int, 0, "(Ljava/nio/ByteBuffer;I)V", 266 },
	{ "copyJni", (intptr_t) SM_arc_util_Buffers_copyJni_Array1_float_java_nio_Buffer_int_int, 0, "([FLjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_arc_util_Buffers_copyJni_Array1_byte_int_java_nio_Buffer_int_int, 0, "([BILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_arc_util_Buffers_copyJni_Array1_short_int_java_nio_Buffer_int_int, 0, "([SILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_arc_util_Buffers_copyJni_Array1_int_int_java_nio_Buffer_int_int, 0, "([IILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_arc_util_Buffers_copyJni_Array1_float_int_java_nio_Buffer_int_int, 0, "([FILjava/nio/Buffer;II)V", 266 },
	{ "copyJni", (intptr_t) SM_arc_util_Buffers_copyJni_java_nio_Buffer_int_java_nio_Buffer_int_int, 0, "(Ljava/nio/Buffer;ILjava/nio/Buffer;II)V", 265 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Buffers, 0, "()V", 8 },
};

Class class_arc_util_Buffers{
		.nativeName = (intptr_t) "arc/util/Buffers",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Buffers),
		.classVtable = (intptr_t) vtable_arc_util_Buffers,
		.staticInitializer = (intptr_t) clinit_arc_util_Buffers,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Buffers,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Buffers = registerClass(&class_arc_util_Buffers);

}
